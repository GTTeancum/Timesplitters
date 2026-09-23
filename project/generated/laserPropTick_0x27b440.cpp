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

// Function: laserPropTick
// Address: 0x27b440 - 0x27b694
void laserPropTick_0x27b440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("laserPropTick_0x27b440");
#endif

    switch (ctx->pc) {
        case 0x27b47cu: goto label_27b47c;
        case 0x27b4a8u: goto label_27b4a8;
        case 0x27b4c4u: goto label_27b4c4;
        case 0x27b4dcu: goto label_27b4dc;
        case 0x27b500u: goto label_27b500;
        case 0x27b558u: goto label_27b558;
        case 0x27b670u: goto label_27b670;
        default: break;
    }

    ctx->pc = 0x27b440u;

    // 0x27b440: 0xc780b190  lwc1        $f0, -0x4E70($gp)
    ctx->pc = 0x27b440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b444: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x27b444u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x27b448: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x27b448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x27b44c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27b44cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27b450: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x27b450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27b454: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x27b454u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x27b458: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x27b458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x27b45c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x27b45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x27b460: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27b460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b464: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27b464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27b468: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x27b468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x27b46c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27b46cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b470: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x27b470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x27b474: 0xc0b9142  jal         func_2E4508
    ctx->pc = 0x27B474u;
    SET_GPR_U32(ctx, 31, 0x27B47Cu);
    ctx->pc = 0x27B478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B474u;
    // 0x27b478: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4508u, 0x27B474u, 0x27B47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B47Cu;
label_27b47c:
    // 0x27b47c: 0x8e2a0020  lw          $t2, 0x20($s1)
    ctx->pc = 0x27b47cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x27b480: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27b480u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b484: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x27b484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x27b488: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x27b488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x27b48c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27b48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27b490: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x27b490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27b494: 0x1880003f  blez        $a0, . + 4 + (0x3F << 2)
    ctx->pc = 0x27B494u;
    {
        const bool branch_taken_0x27b494 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x27B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B494u;
        // 0x27b498: 0x62a023  subu        $s4, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b494) {
            ctx->pc = 0x27B594u;
            goto label_27b594;
        }
    }
    ctx->pc = 0x27B49Cu;
    // 0x27b49c: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x27b49cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
    // 0x27b4a0: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x27b4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x27b4a4: 0x0  nop
    ctx->pc = 0x27b4a4u;
    // NOP
label_27b4a8:
    // 0x27b4a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27b4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b4ac: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x27b4acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27b4b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27b4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b4b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27b4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b4b8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x27b4b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27b4bc: 0xc09d194  jal         func_274650
    ctx->pc = 0x27B4BCu;
    SET_GPR_U32(ctx, 31, 0x27B4C4u);
    ctx->pc = 0x27B4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B4BCu;
    // 0x27b4c0: 0x749021  addu        $s2, $v1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274650u, 0x27B4BCu, 0x27B4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B4C4u;
label_27b4c4:
    // 0x27b4c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27b4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b4c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27b4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b4cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27b4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b4d0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x27b4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27b4d4: 0xc09d11a  jal         func_274468
    ctx->pc = 0x27B4D4u;
    SET_GPR_U32(ctx, 31, 0x27B4DCu);
    ctx->pc = 0x27B4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B4D4u;
    // 0x27b4d8: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274468u, 0x27B4D4u, 0x27B4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B4DCu;
label_27b4dc:
    // 0x27b4dc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x27b4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b4e0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x27b4e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b4e4: 0x8e460038  lw          $a2, 0x38($s2)
    ctx->pc = 0x27b4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x27b4e8: 0x18600015  blez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x27B4E8u;
    {
        const bool branch_taken_0x27b4e8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x27B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B4E8u;
        // 0x27b4ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b4e8) {
            ctx->pc = 0x27B540u;
            goto label_27b540;
        }
    }
    ctx->pc = 0x27B4F0u;
    // 0x27b4f0: 0x8e2a0020  lw          $t2, 0x20($s1)
    ctx->pc = 0x27b4f0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x27b4f4: 0x26090001  addiu       $t1, $s0, 0x1
    ctx->pc = 0x27b4f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27b4f8: 0x134600  sll         $t0, $s3, 24
    ctx->pc = 0x27b4f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), 24));
    // 0x27b4fc: 0x0  nop
    ctx->pc = 0x27b4fcu;
    // NOP
label_27b500:
    // 0x27b500: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x27b500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27b504: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x27b504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x27b508: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x27b508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x27b50c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x27b50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x27b510: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x27b510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27b514: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x27b514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x27b518: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27b518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27b51c: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x27b51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x27b520: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x27b520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x27b524: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x27b524u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x27b528: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x27b528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b52c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x27b52cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27b530: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x27B530u;
    {
        const bool branch_taken_0x27b530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B530u;
        // 0x27b534: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b530) {
            ctx->pc = 0x27B500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27b500;
        }
    }
    ctx->pc = 0x27B538u;
    // 0x27b538: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27B538u;
    {
        const bool branch_taken_0x27b538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B538u;
        // 0x27b53c: 0x82420006  lb          $v0, 0x6($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b538) {
            ctx->pc = 0x27B54Cu;
            goto label_27b54c;
        }
    }
    ctx->pc = 0x27B540u;
label_27b540:
    // 0x27b540: 0x8e2a0020  lw          $t2, 0x20($s1)
    ctx->pc = 0x27b540u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x27b544: 0x26090001  addiu       $t1, $s0, 0x1
    ctx->pc = 0x27b544u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27b548: 0x82420006  lb          $v0, 0x6($s2)
    ctx->pc = 0x27b548u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
label_27b54c:
    // 0x27b54c: 0x5840000a  blezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27B54Cu;
    {
        const bool branch_taken_0x27b54c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x27b54c) {
            ctx->pc = 0x27B550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B54Cu;
            // 0x27b550: 0x8d430000  lw          $v1, 0x0($t2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B578u;
            goto label_27b578;
        }
    }
    ctx->pc = 0x27B554u;
    // 0x27b554: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27b554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27b558:
    // 0x27b558: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x27b558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x27b55c: 0x0  nop
    ctx->pc = 0x27b55cu;
    // NOP
    // 0x27b560: 0x0  nop
    ctx->pc = 0x27b560u;
    // NOP
    // 0x27b564: 0x0  nop
    ctx->pc = 0x27b564u;
    // NOP
    // 0x27b568: 0x0  nop
    ctx->pc = 0x27b568u;
    // NOP
    // 0x27b56c: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27B56Cu;
    {
        const bool branch_taken_0x27b56c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b56c) {
            ctx->pc = 0x27B558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27b558;
        }
    }
    ctx->pc = 0x27B574u;
    // 0x27b574: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x27b574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_27b578:
    // 0x27b578: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x27b578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b57c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27b580: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x27b580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27b584: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x27B584u;
    {
        const bool branch_taken_0x27b584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B584u;
        // 0x27b588: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b584) {
            ctx->pc = 0x27B4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27b4a8;
        }
    }
    ctx->pc = 0x27B58Cu;
    // 0x27b58c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27B58Cu;
    {
        const bool branch_taken_0x27b58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b58c) {
            ctx->pc = 0x27B598u;
            goto label_27b598;
        }
    }
    ctx->pc = 0x27B594u;
label_27b594:
    // 0x27b594: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x27b594u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_27b598:
    // 0x27b598: 0xc7809da8  lwc1        $f0, -0x6258($gp)
    ctx->pc = 0x27b598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b59c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27b59cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27b5a0: 0xc781879c  lwc1        $f1, -0x7864($gp)
    ctx->pc = 0x27b5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b5a4: 0xc78387a0  lwc1        $f3, -0x7860($gp)
    ctx->pc = 0x27b5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27b5a8: 0x26a55c60  addiu       $a1, $s5, 0x5C60
    ctx->pc = 0x27b5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 23648));
    // 0x27b5ac: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x27b5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x27b5b0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x27b5b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x27b5b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27b5b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27b5b8: 0x3c014307  lui         $at, 0x4307
    ctx->pc = 0x27b5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17159 << 16));
    // 0x27b5bc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27b5bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27b5c0: 0xc78587a4  lwc1        $f5, -0x785C($gp)
    ctx->pc = 0x27b5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27b5c4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27b5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27b5c8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x27b5c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x27b5cc: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x27b5ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x27b5d0: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x27b5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
    // 0x27b5d4: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x27b5d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x27b5d8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x27b5d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x27b5dc: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x27b5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x27b5e0: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x27b5e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x27b5e4: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x27b5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x27b5e8: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x27b5e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x27b5ec: 0x0  nop
    ctx->pc = 0x27b5ecu;
    // NOP
    // 0x27b5f0: 0x0  nop
    ctx->pc = 0x27b5f0u;
    // NOP
    // 0x27b5f4: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x27b5f4u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
    // 0x27b5f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27b5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27b5fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27b5fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27b600: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x27b600u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x27b604: 0x8d440004  lw          $a0, 0x4($t2)
    ctx->pc = 0x27b604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x27b608: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x27b608u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x27b60c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x27b60cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x27b610: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x27b610u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x27b614: 0x0  nop
    ctx->pc = 0x27b614u;
    // NOP
    // 0x27b618: 0x0  nop
    ctx->pc = 0x27b618u;
    // NOP
    // 0x27b61c: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x27b61cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x27b620: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x27b620u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x27b624: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27b624u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x27b628: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x27b628u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27b62c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x27b62cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x27b630: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x27b630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x27b634: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x27b634u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x27b638: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27b638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27b63c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x27b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x27b640: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x27b640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b644: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27b644u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x27b648: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x27b648u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x27b64c: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x27b64cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x27b650: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x27b650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x27b654: 0xe6210048  swc1        $f1, 0x48($s1)
    ctx->pc = 0x27b654u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x27b658: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27b658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27b65c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x27b65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x27b660: 0xc46d0000  lwc1        $f13, 0x0($v1)
    ctx->pc = 0x27b660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27b664: 0x46086b42  mul.s       $f13, $f13, $f8
    ctx->pc = 0x27b664u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[8]);
    // 0x27b668: 0xc0ad3c8  jal         func_2B4F20
    ctx->pc = 0x27B668u;
    SET_GPR_U32(ctx, 31, 0x27B670u);
    ctx->pc = 0x27B66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B668u;
    // 0x27b66c: 0x46096b40  add.s       $f13, $f13, $f9 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[9]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4F20u, 0x27B668u, 0x27B670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B670u;
label_27b670:
    // 0x27b670: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x27b670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27b674: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x27b674u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27b678: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x27b678u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27b67c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x27b67cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27b680: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27b680u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27b684: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x27b684u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27b688: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27b688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b68c: 0x3e00008  jr          $ra
    ctx->pc = 0x27B68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B68Cu;
        // 0x27b690: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B694u;
}

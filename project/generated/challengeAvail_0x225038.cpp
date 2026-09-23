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

// Function: challengeAvail
// Address: 0x225038 - 0x225134
void challengeAvail_0x225038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("challengeAvail_0x225038");
#endif

    switch (ctx->pc) {
        case 0x225098u: goto label_225098;
        case 0x2250d0u: goto label_2250d0;
        case 0x2250d8u: goto label_2250d8;
        default: break;
    }

    ctx->pc = 0x225038u;

    // 0x225038: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x225038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22503c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22503cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x225040: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x225044: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x225044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x225048: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x225048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22504c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22504cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x225050: 0x202001a  div         $zero, $s0, $v0
    ctx->pc = 0x225050u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x225054: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x225054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x225058: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x225058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22505c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22505cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x225060: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x225060u;
    {
        const bool branch_taken_0x225060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225060) {
            ctx->pc = 0x225064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225060u;
            // 0x225064: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x225068u;
            goto label_225068;
        }
    }
    ctx->pc = 0x225068u;
label_225068:
    // 0x225068: 0x2010  mfhi        $a0
    ctx->pc = 0x225068u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x22506c: 0x8812  mflo        $s1
    ctx->pc = 0x22506cu;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x225070: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x225070u;
    {
        const bool branch_taken_0x225070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x225074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225070u;
        // 0x225074: 0x24830041  addiu       $v1, $a0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225070) {
            ctx->pc = 0x2250B0u;
            goto label_2250b0;
        }
    }
    ctx->pc = 0x225078u;
    // 0x225078: 0x28620041  slti        $v0, $v1, 0x41
    ctx->pc = 0x225078u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x22507c: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x22507Cu;
    {
        const bool branch_taken_0x22507c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22507Cu;
        // 0x225080: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22507c) {
            ctx->pc = 0x225118u;
            goto label_225118;
        }
    }
    ctx->pc = 0x225084u;
    // 0x225084: 0x28620044  slti        $v0, $v1, 0x44
    ctx->pc = 0x225084u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)68) ? 1 : 0);
    // 0x225088: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x225088u;
    {
        const bool branch_taken_0x225088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225088) {
            ctx->pc = 0x22508Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225088u;
            // 0x22508c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225118u;
            goto label_225118;
        }
    }
    ctx->pc = 0x225090u;
    // 0x225090: 0xc087fec  jal         func_21FFB0
    ctx->pc = 0x225090u;
    SET_GPR_U32(ctx, 31, 0x225098u);
    ctx->pc = 0x21FFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB0u, 0x225090u, 0x225098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225098u;
label_225098:
    // 0x225098: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x225098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x22509c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x22509cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2250a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2250a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2250a4: 0x8c42057c  lw          $v0, 0x57C($v0)
    ctx->pc = 0x2250a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1404)));
    // 0x2250a8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2250A8u;
    {
        const bool branch_taken_0x2250a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2250ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2250A8u;
        // 0x2250ac: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2250a8) {
            ctx->pc = 0x225118u;
            goto label_225118;
        }
    }
    ctx->pc = 0x2250B0u;
label_2250b0:
    // 0x2250b0: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x2250b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2250b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2250B4u;
    {
        const bool branch_taken_0x2250b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2250B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2250B4u;
        // 0x2250b8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2250b4) {
            ctx->pc = 0x2250C4u;
            goto label_2250c4;
        }
    }
    ctx->pc = 0x2250BCu;
    // 0x2250bc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2250BCu;
    {
        const bool branch_taken_0x2250bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2250C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2250BCu;
        // 0x2250c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2250bc) {
            ctx->pc = 0x225118u;
            goto label_225118;
        }
    }
    ctx->pc = 0x2250C4u;
label_2250c4:
    // 0x2250c4: 0x1a200011  blez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2250C4u;
    {
        const bool branch_taken_0x2250c4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2250C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2250C4u;
        // 0x2250c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2250c4) {
            ctx->pc = 0x22510Cu;
            goto label_22510c;
        }
    }
    ctx->pc = 0x2250CCu;
    // 0x2250cc: 0x2633fffe  addiu       $s3, $s1, -0x2
    ctx->pc = 0x2250ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
label_2250d0:
    // 0x2250d0: 0xc087fec  jal         func_21FFB0
    ctx->pc = 0x2250D0u;
    SET_GPR_U32(ctx, 31, 0x2250D8u);
    ctx->pc = 0x21FFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB0u, 0x2250D0u, 0x2250D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2250D8u;
label_2250d8:
    // 0x2250d8: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2250d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2250dc: 0x26460001  addiu       $a2, $s2, 0x1
    ctx->pc = 0x2250dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2250e0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2250e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2250e4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2250e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2250e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2250e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2250ec: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2250ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2250f0: 0x211282a  slt         $a1, $s0, $s1
    ctx->pc = 0x2250f0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2250f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2250f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2250f8: 0x8c44057c  lw          $a0, 0x57C($v0)
    ctx->pc = 0x2250f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1404)));
    // 0x2250fc: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2250FCu;
    {
        const bool branch_taken_0x2250fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x225100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2250FCu;
        // 0x225100: 0xc4900b  movn        $s2, $a2, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2250fc) {
            ctx->pc = 0x2250D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2250d0;
        }
    }
    ctx->pc = 0x225104u;
    // 0x225104: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x225104u;
    {
        const bool branch_taken_0x225104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225104u;
        // 0x225108: 0x253102a  slt         $v0, $s2, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x225104) {
            ctx->pc = 0x225114u;
            goto label_225114;
        }
    }
    ctx->pc = 0x22510Cu;
label_22510c:
    // 0x22510c: 0x2633fffe  addiu       $s3, $s1, -0x2
    ctx->pc = 0x22510cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x225110: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x225110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_225114:
    // 0x225114: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x225114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_225118:
    // 0x225118: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x225118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22511c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22511cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225120: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x225120u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225124: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x225124u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225128: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225128u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22512c: 0x3e00008  jr          $ra
    ctx->pc = 0x22512Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22512Cu;
        // 0x225130: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22512Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225134u;
}

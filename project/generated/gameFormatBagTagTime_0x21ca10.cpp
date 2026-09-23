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

// Function: gameFormatBagTagTime
// Address: 0x21ca10 - 0x21caac
void gameFormatBagTagTime_0x21ca10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gameFormatBagTagTime_0x21ca10");
#endif

    switch (ctx->pc) {
        case 0x21caa0u: goto label_21caa0;
        default: break;
    }

    ctx->pc = 0x21ca10u;

    // 0x21ca10: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x21ca10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x21ca14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21ca14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21ca18: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x21ca18u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21ca1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21ca1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21ca20: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21CA20u;
    {
        const bool branch_taken_0x21ca20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ca20) {
            ctx->pc = 0x21CA24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CA20u;
            // 0x21ca24: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CA28u;
            goto label_21ca28;
        }
    }
    ctx->pc = 0x21CA28u;
label_21ca28:
    // 0x21ca28: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x21ca28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21ca2c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x21ca2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x21ca30: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x21ca30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x21ca34: 0x24050063  addiu       $a1, $zero, 0x63
    ctx->pc = 0x21ca34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x21ca38: 0x3012  mflo        $a2
    ctx->pc = 0x21ca38u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x21ca3c: 0x4010  mfhi        $t0
    ctx->pc = 0x21ca3cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x21ca40: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x21ca40u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21ca44: 0x3012  mflo        $a2
    ctx->pc = 0x21ca44u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x21ca48: 0x1810  mfhi        $v1
    ctx->pc = 0x21ca48u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x21ca4c: 0x102001a  div         $zero, $t0, $v0
    ctx->pc = 0x21ca4cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21ca50: 0x28c20064  slti        $v0, $a2, 0x64
    ctx->pc = 0x21ca50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x21ca54: 0x3812  mflo        $a3
    ctx->pc = 0x21ca54u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x21ca58: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21CA58u;
    {
        const bool branch_taken_0x21ca58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA58u;
        // 0x21ca5c: 0xa2300a  movz        $a2, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ca58) {
            ctx->pc = 0x21CA80u;
            goto label_21ca80;
        }
    }
    ctx->pc = 0x21CA60u;
    // 0x21ca60: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x21ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x21ca64: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x21ca64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x21ca68: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x21ca68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x21ca6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21ca70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21ca74: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21ca74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21ca78: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x21CA78u;
    {
        const bool branch_taken_0x21ca78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA78u;
        // 0x21ca7c: 0x8c8206e0  lw          $v0, 0x6E0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ca78) {
            ctx->pc = 0x21CAA0u;
            goto label_21caa0;
        }
    }
    ctx->pc = 0x21CA80u;
label_21ca80:
    // 0x21ca80: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21ca80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21ca84: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x21ca84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x21ca88: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x21ca88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ca8c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21CA8Cu;
    {
        const bool branch_taken_0x21ca8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ca8c) {
            ctx->pc = 0x21CA90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CA8Cu;
            // 0x21ca90: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CA94u;
            goto label_21ca94;
        }
    }
    ctx->pc = 0x21CA94u;
label_21ca94:
    // 0x21ca94: 0x24840790  addiu       $a0, $a0, 0x790
    ctx->pc = 0x21ca94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1936));
    // 0x21ca98: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x21CA98u;
    SET_GPR_U32(ctx, 31, 0x21CAA0u);
    ctx->pc = 0x21CA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CA98u;
    // 0x21ca9c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x21CA98u, 0x21CAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CAA0u;
label_21caa0:
    // 0x21caa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21caa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21caa4: 0x3e00008  jr          $ra
    ctx->pc = 0x21CAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CAA4u;
        // 0x21caa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CAACu;
}

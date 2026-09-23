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

// Function: signonMakeFileId
// Address: 0x220270 - 0x2202bc
void signonMakeFileId_0x220270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("signonMakeFileId_0x220270");
#endif

    switch (ctx->pc) {
        case 0x22029cu: goto label_22029c;
        default: break;
    }

    ctx->pc = 0x220270u;

    // 0x220270: 0x8f83b45c  lw          $v1, -0x4BA4($gp)
    ctx->pc = 0x220270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947932)));
    // 0x220274: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x220274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x220278: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x220278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22027c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x22027cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x220280: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220284: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x220284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x220288: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x220288u;
    {
        const bool branch_taken_0x220288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x220288) {
            ctx->pc = 0x22028Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220288u;
            // 0x22028c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x220290u;
            goto label_220290;
        }
    }
    ctx->pc = 0x220290u;
label_220290:
    // 0x220290: 0x8010  mfhi        $s0
    ctx->pc = 0x220290u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x220294: 0xc0acf14  jal         func_2B3C50
    ctx->pc = 0x220294u;
    SET_GPR_U32(ctx, 31, 0x22029Cu);
    ctx->pc = 0x220298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220294u;
    // 0x220298: 0x108680  sll         $s0, $s0, 26 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3C50u, 0x220294u, 0x22029Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22029Cu;
label_22029c:
    // 0x22029c: 0x3c0303ff  lui         $v1, 0x3FF
    ctx->pc = 0x22029cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1023 << 16));
    // 0x2202a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2202a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2202a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2202a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2202a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2202a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2202ac: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x2202acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x2202b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2202b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2202b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2202B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2202B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202B4u;
        // 0x2202b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2202B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2202BCu;
}

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

// Function: debugsignon
// Address: 0x2209d8 - 0x220a2c
void debugsignon_0x2209d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("debugsignon_0x2209d8");
#endif

    switch (ctx->pc) {
        case 0x220a08u: goto label_220a08;
        case 0x220a10u: goto label_220a10;
        default: break;
    }

    ctx->pc = 0x2209d8u;

    // 0x2209d8: 0x8f84b45c  lw          $a0, -0x4BA4($gp)
    ctx->pc = 0x2209d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947932)));
    // 0x2209dc: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2209dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2209e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2209e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2209e4: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x2209e4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2209e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2209e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2209ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2209ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2209f0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2209F0u;
    {
        const bool branch_taken_0x2209f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2209f0) {
            ctx->pc = 0x2209F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2209F0u;
            // 0x2209f4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2209F8u;
            goto label_2209f8;
        }
    }
    ctx->pc = 0x2209F8u;
label_2209f8:
    // 0x2209f8: 0x1810  mfhi        $v1
    ctx->pc = 0x2209f8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2209fc: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2209FCu;
    {
        const bool branch_taken_0x2209fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2209FCu;
        // 0x220a00: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2209fc) {
            ctx->pc = 0x220A20u;
            goto label_220a20;
        }
    }
    ctx->pc = 0x220A04u;
    // 0x220a04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x220a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220a08:
    // 0x220a08: 0xc088224  jal         func_220890
    ctx->pc = 0x220A08u;
    SET_GPR_U32(ctx, 31, 0x220A10u);
    ctx->pc = 0x220890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220890u, 0x220A08u, 0x220A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220A10u;
label_220a10:
    // 0x220a10: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x220a10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x220a14: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x220A14u;
    {
        const bool branch_taken_0x220a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A14u;
        // 0x220a18: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a14) {
            ctx->pc = 0x220A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220a08;
        }
    }
    ctx->pc = 0x220A1Cu;
    // 0x220a1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x220a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_220a20:
    // 0x220a20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220a20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220a24: 0x3e00008  jr          $ra
    ctx->pc = 0x220A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A24u;
        // 0x220a28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220A2Cu;
}

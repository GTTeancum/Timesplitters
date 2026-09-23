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

// Function: sjeGsSetHalfOffset
// Address: 0x200300 - 0x20032c
void sjeGsSetHalfOffset_0x200300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sjeGsSetHalfOffset_0x200300");
#endif

    ctx->pc = 0x200300u;

    // 0x200300: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x200300u;
    {
        const bool branch_taken_0x200300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x200304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200300u;
        // 0x200304: 0x3c020031  lui         $v0, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200300) {
            ctx->pc = 0x200310u;
            goto label_200310;
        }
    }
    ctx->pc = 0x200308u;
    // 0x200308: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x200308u;
    {
        const bool branch_taken_0x200308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200308u;
        // 0x20030c: 0x244435d0  addiu       $a0, $v0, 0x35D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200308) {
            ctx->pc = 0x200318u;
            goto label_200318;
        }
    }
    ctx->pc = 0x200310u;
label_200310:
    // 0x200310: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x200310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x200314: 0x244434e0  addiu       $a0, $v0, 0x34E0
    ctx->pc = 0x200314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13536));
label_200318:
    // 0x200318: 0x53c00  sll         $a3, $a1, 16
    ctx->pc = 0x200318u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x20031c: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x20031cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x200320: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x200320u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x200324: 0x80b3a2c  j           func_2CE8B0
    ctx->pc = 0x200324u;
    ctx->pc = 0x200328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200324u;
    // 0x200328: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8B0u;
    sceGsSetHalfOffset_0x2ce8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x20032Cu;
}

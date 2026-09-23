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

// Function: signonFileDelete
// Address: 0x220738 - 0x220790
void signonFileDelete_0x220738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("signonFileDelete_0x220738");
#endif

    switch (ctx->pc) {
        case 0x220774u: goto label_220774;
        default: break;
    }

    ctx->pc = 0x220738u;

    // 0x220738: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x220738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22073c: 0x28a2000f  slti        $v0, $a1, 0xF
    ctx->pc = 0x22073cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x220740: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220744: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x220744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x220748: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x220748u;
    {
        const bool branch_taken_0x220748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220748u;
        // 0x22074c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220748) {
            ctx->pc = 0x220774u;
            goto label_220774;
        }
    }
    ctx->pc = 0x220750u;
    // 0x220750: 0x24020b78  addiu       $v0, $zero, 0xB78
    ctx->pc = 0x220750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
    // 0x220754: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x220754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x220758: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x220758u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22075c: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x22075cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x220760: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x220760u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x220764: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x220764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x220768: 0x3012  mflo        $a2
    ctx->pc = 0x220768u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x22076c: 0xc0b9516  jal         func_2E5458
    ctx->pc = 0x22076Cu;
    SET_GPR_U32(ctx, 31, 0x220774u);
    ctx->pc = 0x220770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22076Cu;
    // 0x220770: 0x24850b78  addiu       $a1, $a0, 0xB78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5458u, 0x22076Cu, 0x220774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220774u;
label_220774:
    // 0x220774: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x220774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x220778: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x220778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22077c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x22077cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x220780: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220784: 0xa0402c08  sb          $zero, 0x2C08($v0)
    ctx->pc = 0x220784u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11272), (uint8_t)GPR_U32(ctx, 0));
    // 0x220788: 0x3e00008  jr          $ra
    ctx->pc = 0x220788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220788u;
        // 0x22078c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220790u;
}

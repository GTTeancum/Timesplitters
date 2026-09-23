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

// Function: loadSkeleton
// Address: 0x215cb8 - 0x215d30
void loadSkeleton_0x215cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("loadSkeleton_0x215cb8");
#endif

    switch (ctx->pc) {
        case 0x215cf4u: goto label_215cf4;
        case 0x215d04u: goto label_215d04;
        default: break;
    }

    ctx->pc = 0x215cb8u;

    // 0x215cb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x215cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x215cbc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x215cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x215cc0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x215cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x215cc4: 0x2442ab20  addiu       $v0, $v0, -0x54E0
    ctx->pc = 0x215cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945568));
    // 0x215cc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215ccc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x215cccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215cd0: 0x24100014  addiu       $s0, $zero, 0x14
    ctx->pc = 0x215cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x215cd4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x215cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x215cd8: 0x2508018  mult        $s0, $s2, $s0
    ctx->pc = 0x215cd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x215cdc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x215cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ce0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x215ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x215ce4: 0x24040480  addiu       $a0, $zero, 0x480
    ctx->pc = 0x215ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    // 0x215ce8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x215ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x215cec: 0xc08070e  jal         func_201C38
    ctx->pc = 0x215CECu;
    SET_GPR_U32(ctx, 31, 0x215CF4u);
    ctx->pc = 0x215CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215CECu;
    // 0x215cf0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x215CECu, 0x215CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215CF4u;
label_215cf4:
    // 0x215cf4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x215cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x215cf8: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x215cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x215cfc: 0xc08070e  jal         func_201C38
    ctx->pc = 0x215CFCu;
    SET_GPR_U32(ctx, 31, 0x215D04u);
    ctx->pc = 0x215D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215CFCu;
    // 0x215d00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x215CFCu, 0x215D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215D04u;
label_215d04:
    // 0x215d04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x215d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215d08: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x215d08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x215d0c: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x215d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x215d10: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x215d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x215d14: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x215d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x215d18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x215d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215d1c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x215d1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215d20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x215d20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215d24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215d24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215d28: 0x3e00008  jr          $ra
    ctx->pc = 0x215D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D28u;
        // 0x215d2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215D30u;
}

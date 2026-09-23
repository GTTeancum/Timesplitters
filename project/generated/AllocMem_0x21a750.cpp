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

// Function: AllocMem
// Address: 0x21a750 - 0x21a79c
void AllocMem_0x21a750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocMem_0x21a750");
#endif

    switch (ctx->pc) {
        case 0x21a78cu: goto label_21a78c;
        default: break;
    }

    ctx->pc = 0x21a750u;

    // 0x21a750: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21a750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21a754: 0x8f85b6c4  lw          $a1, -0x493C($gp)
    ctx->pc = 0x21a754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948548)));
    // 0x21a758: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x21a758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x21a75c: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x21a75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x21a760: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x21a760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x21a764: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x21a764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x21a768: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x21a768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x21a76c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21a76cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21a770: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x21a770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x21a774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21a774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21a778: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x21a778u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x21a77c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A77Cu;
    {
        const bool branch_taken_0x21a77c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A77Cu;
        // 0x21a780: 0xaf84b6c4  sw          $a0, -0x493C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948548), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a77c) {
            ctx->pc = 0x21A78Cu;
            goto label_21a78c;
        }
    }
    ctx->pc = 0x21A784u;
    // 0x21a784: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x21A784u;
    SET_GPR_U32(ctx, 31, 0x21A78Cu);
    ctx->pc = 0x21A788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A784u;
    // 0x21a788: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x21A784u, 0x21A78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A78Cu;
label_21a78c:
    // 0x21a78c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21a78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a790: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x21a790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a794: 0x3e00008  jr          $ra
    ctx->pc = 0x21A794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A794u;
        // 0x21a798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A79Cu;
}

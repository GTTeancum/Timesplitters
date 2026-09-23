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

// Function: getNextChannel
// Address: 0x205540 - 0x205594
void getNextChannel_0x205540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getNextChannel_0x205540");
#endif

    ctx->pc = 0x205540u;

    // 0x205540: 0x8f829b18  lw          $v0, -0x64E8($gp)
    ctx->pc = 0x205540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941464)));
    // 0x205544: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x205544u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x205548: 0x8f839b1c  lw          $v1, -0x64E4($gp)
    ctx->pc = 0x205548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941468)));
    // 0x20554c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x20554cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x205550: 0x8f829b1c  lw          $v0, -0x64E4($gp)
    ctx->pc = 0x205550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941468)));
    // 0x205554: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x205554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x205558: 0x28430018  slti        $v1, $v0, 0x18
    ctx->pc = 0x205558u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x20555c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x20555Cu;
    {
        const bool branch_taken_0x20555c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x205560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20555Cu;
        // 0x205560: 0xaf829b1c  sw          $v0, -0x64E4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20555c) {
            ctx->pc = 0x20558Cu;
            goto label_20558c;
        }
    }
    ctx->pc = 0x205564u;
    // 0x205564: 0x8f839b18  lw          $v1, -0x64E8($gp)
    ctx->pc = 0x205564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941464)));
    // 0x205568: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x205568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20556c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x20556cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x205570: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205570u;
    {
        const bool branch_taken_0x205570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205570u;
        // 0x205574: 0xaf839b18  sw          $v1, -0x64E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205570) {
            ctx->pc = 0x205580u;
            goto label_205580;
        }
    }
    ctx->pc = 0x205578u;
    // 0x205578: 0xaf809b18  sw          $zero, -0x64E8($gp)
    ctx->pc = 0x205578u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941464), GPR_U32(ctx, 0));
    // 0x20557c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x20557cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205580:
    // 0x205580: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x205580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x205584: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x205584u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x205588: 0xaf829b1c  sw          $v0, -0x64E4($gp)
    ctx->pc = 0x205588u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941468), GPR_U32(ctx, 2));
label_20558c:
    // 0x20558c: 0x3e00008  jr          $ra
    ctx->pc = 0x20558Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20558Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205594u;
}

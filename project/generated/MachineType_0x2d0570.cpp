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

// Function: MachineType
// Address: 0x2d0570 - 0x2d0580
void MachineType_0x2d0570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MachineType_0x2d0570");
#endif

    switch (ctx->pc) {
        case 0x2d0578u: goto label_2d0578;
        default: break;
    }

    ctx->pc = 0x2d0570u;

    // 0x2d0570: 0x2403007e  addiu       $v1, $zero, 0x7E
    ctx->pc = 0x2d0570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x2d0574: 0xc  syscall     0
    ctx->pc = 0x2d0574u;
    ctx->pc = 0x2D0578u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2d0578:
    // 0x2d0578: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0580u;
}

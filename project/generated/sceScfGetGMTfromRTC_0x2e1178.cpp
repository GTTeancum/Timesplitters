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

// Function: sceScfGetGMTfromRTC
// Address: 0x2e1178 - 0x2e11bc
void sceScfGetGMTfromRTC_0x2e1178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceScfGetGMTfromRTC_0x2e1178");
#endif

    switch (ctx->pc) {
        case 0x2e11a4u: goto label_2e11a4;
        default: break;
    }

    ctx->pc = 0x2e1178u;

    // 0x2e1178: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e1178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e117c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e117cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e1180: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e1180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1184: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1184u;
    {
        const bool branch_taken_0x2e1184 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1184u;
        // 0x2e1188: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1184) {
            ctx->pc = 0x2E11A4u;
            goto label_2e11a4;
        }
    }
    ctx->pc = 0x2E118Cu;
    // 0x2e118c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2e118cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2e1190: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2e1190u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x2e1194: 0x2484b708  addiu       $a0, $a0, -0x48F8
    ctx->pc = 0x2e1194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948616));
    // 0x2e1198: 0x24c6b730  addiu       $a2, $a2, -0x48D0
    ctx->pc = 0x2e1198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948656));
    // 0x2e119c: 0xc0b91aa  jal         func_2E46A8
    ctx->pc = 0x2E119Cu;
    SET_GPR_U32(ctx, 31, 0x2E11A4u);
    ctx->pc = 0x2E11A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E119Cu;
    // 0x2e11a0: 0x240501be  addiu       $a1, $zero, 0x1BE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 446));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E46A8u, 0x2E119Cu, 0x2E11A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E11A4u;
label_2e11a4:
    // 0x2e11a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e11a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e11a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e11a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e11ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e11acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e11b0: 0x2405fde4  addiu       $a1, $zero, -0x21C
    ctx->pc = 0x2e11b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966756));
    // 0x2e11b4: 0x80b842a  j           func_2E10A8
    ctx->pc = 0x2E11B4u;
    ctx->pc = 0x2E11B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E11B4u;
    // 0x2e11b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E10A8u;
    AdjustTime_0x2e10a8(rdram, ctx, runtime); return;
    ctx->pc = 0x2E11BCu;
}

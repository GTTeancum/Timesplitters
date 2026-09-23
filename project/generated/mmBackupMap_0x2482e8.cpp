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

// Function: mmBackupMap
// Address: 0x2482e8 - 0x24836c
void mmBackupMap_0x2482e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmBackupMap_0x2482e8");
#endif

    switch (ctx->pc) {
        case 0x2482fcu: goto label_2482fc;
        case 0x248348u: goto label_248348;
        default: break;
    }

    ctx->pc = 0x2482e8u;

    // 0x2482e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2482e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2482ec: 0x8f84a0d0  lw          $a0, -0x5F30($gp)
    ctx->pc = 0x2482ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x2482f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2482f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2482f4: 0xc091f1e  jal         func_247C78
    ctx->pc = 0x2482F4u;
    SET_GPR_U32(ctx, 31, 0x2482FCu);
    ctx->pc = 0x2482F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2482F4u;
    // 0x2482f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247C78u, 0x2482F4u, 0x2482FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2482FCu;
label_2482fc:
    // 0x2482fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2482fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248300: 0x28621ffd  slti        $v0, $v1, 0x1FFD
    ctx->pc = 0x248300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8189) ? 1 : 0);
    // 0x248304: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x248304u;
    {
        const bool branch_taken_0x248304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248304u;
        // 0x248308: 0x8f84a0d8  lw          $a0, -0x5F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248304) {
            ctx->pc = 0x248324u;
            goto label_248324;
        }
    }
    ctx->pc = 0x24830Cu;
    // 0x24830c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x24830cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x248310: 0x3463feff  ori         $v1, $v1, 0xFEFF
    ctx->pc = 0x248310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65279);
    // 0x248314: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x248314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248318: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x248318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24831c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x24831Cu;
    {
        const bool branch_taken_0x24831c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24831Cu;
        // 0x248320: 0xaf84a0d8  sw          $a0, -0x5F28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24831c) {
            ctx->pc = 0x248360u;
            goto label_248360;
        }
    }
    ctx->pc = 0x248324u;
label_248324:
    // 0x248324: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x248324u;
    {
        const bool branch_taken_0x248324 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x248328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248324u;
        // 0x248328: 0x8f82a0d8  lw          $v0, -0x5F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248324) {
            ctx->pc = 0x248338u;
            goto label_248338;
        }
    }
    ctx->pc = 0x24832Cu;
    // 0x24832c: 0x34421100  ori         $v0, $v0, 0x1100
    ctx->pc = 0x24832cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4352);
    // 0x248330: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x248330u;
    {
        const bool branch_taken_0x248330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248330u;
        // 0x248334: 0xaf82a0d8  sw          $v0, -0x5F28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248330) {
            ctx->pc = 0x24835Cu;
            goto label_24835c;
        }
    }
    ctx->pc = 0x248338u;
label_248338:
    // 0x248338: 0x8f84a0d0  lw          $a0, -0x5F30($gp)
    ctx->pc = 0x248338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x24833c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24833cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248340: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x248340u;
    SET_GPR_U32(ctx, 31, 0x248348u);
    ctx->pc = 0x248344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248340u;
    // 0x248344: 0x24061ffc  addiu       $a2, $zero, 0x1FFC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x248340u, 0x248348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248348u;
label_248348:
    // 0x248348: 0x8f83a0d8  lw          $v1, -0x5F28($gp)
    ctx->pc = 0x248348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24834c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x24834cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x248350: 0x3442feff  ori         $v0, $v0, 0xFEFF
    ctx->pc = 0x248350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65279);
    // 0x248354: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x248354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x248358: 0xaf83a0d8  sw          $v1, -0x5F28($gp)
    ctx->pc = 0x248358u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 3));
label_24835c:
    // 0x24835c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24835cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248360:
    // 0x248360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248364: 0x3e00008  jr          $ra
    ctx->pc = 0x248364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248364u;
        // 0x248368: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24836Cu;
}

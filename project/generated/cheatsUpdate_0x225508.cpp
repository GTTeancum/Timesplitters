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

// Function: cheatsUpdate
// Address: 0x225508 - 0x2255a8
void cheatsUpdate_0x225508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cheatsUpdate_0x225508");
#endif

    switch (ctx->pc) {
        case 0x225540u: goto label_225540;
        case 0x225554u: goto label_225554;
        default: break;
    }

    ctx->pc = 0x225508u;

    // 0x225508: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x225508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22550c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x22550cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x225510: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x225510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x225514: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x225514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x225518: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x225518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22551c: 0x24423868  addiu       $v0, $v0, 0x3868
    ctx->pc = 0x22551cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14440));
    // 0x225520: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x225520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x225524: 0x2473df88  addiu       $s3, $v1, -0x2078
    ctx->pc = 0x225524u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958984));
    // 0x225528: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22552c: 0x24510008  addiu       $s1, $v0, 0x8
    ctx->pc = 0x22552cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x225530: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x225530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x225534: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x225534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225538: 0xaf809f4c  sw          $zero, -0x60B4($gp)
    ctx->pc = 0x225538u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942540), GPR_U32(ctx, 0));
    // 0x22553c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x22553cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225540:
    // 0x225540: 0x82620003  lb          $v0, 0x3($s3)
    ctx->pc = 0x225540u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x225544: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x225544u;
    {
        const bool branch_taken_0x225544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225544u;
        // 0x225548: 0x8f829f4c  lw          $v0, -0x60B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225544) {
            ctx->pc = 0x22555Cu;
            goto label_22555c;
        }
    }
    ctx->pc = 0x22554Cu;
    // 0x22554c: 0xc08944e  jal         func_225138
    ctx->pc = 0x22554Cu;
    SET_GPR_U32(ctx, 31, 0x225554u);
    ctx->pc = 0x225550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22554Cu;
    // 0x225550: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225138u, 0x22554Cu, 0x225554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225554u;
label_225554:
    // 0x225554: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x225554u;
    {
        const bool branch_taken_0x225554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225554u;
        // 0x225558: 0x8f829f4c  lw          $v0, -0x60B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225554) {
            ctx->pc = 0x225568u;
            goto label_225568;
        }
    }
    ctx->pc = 0x22555Cu;
label_22555c:
    // 0x22555c: 0x2121804  sllv        $v1, $s2, $s0
    ctx->pc = 0x22555cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 16) & 0x1F));
    // 0x225560: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x225560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x225564: 0xaf829f4c  sw          $v0, -0x60B4($gp)
    ctx->pc = 0x225564u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942540), GPR_U32(ctx, 2));
label_225568:
    // 0x225568: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x225568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22556c: 0x2a02000f  slti        $v0, $s0, 0xF
    ctx->pc = 0x22556cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x225570: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x225570u;
    {
        const bool branch_taken_0x225570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225570u;
        // 0x225574: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225570) {
            ctx->pc = 0x225540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225540;
        }
    }
    ctx->pc = 0x225578u;
    // 0x225578: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x225578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x22557c: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x22557cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x225580: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x225580u;
    {
        const bool branch_taken_0x225580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x225584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225580u;
        // 0x225584: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225580) {
            ctx->pc = 0x225590u;
            goto label_225590;
        }
    }
    ctx->pc = 0x225588u;
    // 0x225588: 0x24022007  addiu       $v0, $zero, 0x2007
    ctx->pc = 0x225588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8199));
    // 0x22558c: 0xaf829f54  sw          $v0, -0x60AC($gp)
    ctx->pc = 0x22558cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942548), GPR_U32(ctx, 2));
label_225590:
    // 0x225590: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x225590u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225594: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x225594u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225598: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x225598u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22559c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22559cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2255a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2255A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2255A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2255A0u;
        // 0x2255a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2255A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2255A8u;
}

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

// Function: setStatsUpdatePage
// Address: 0x240000 - 0x2400b4
void setStatsUpdatePage_0x240000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setStatsUpdatePage_0x240000");
#endif

    switch (ctx->pc) {
        case 0x240028u: goto label_240028;
        case 0x240044u: goto label_240044;
        case 0x240070u: goto label_240070;
        case 0x240098u: goto label_240098;
        default: break;
    }

    ctx->pc = 0x240000u;

    // 0x240000: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x240000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x240004: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x240004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x240008: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x240008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24000c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24000cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x240010: 0x2452e1c8  addiu       $s2, $v0, -0x1E38
    ctx->pc = 0x240010u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959560));
    // 0x240014: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x240014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x240018: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x240018u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x24001c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24001cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x240020: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x240020u;
    {
        const bool branch_taken_0x240020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240020u;
        // 0x240024: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240020) {
            ctx->pc = 0x24002Cu;
            goto label_24002c;
        }
    }
    ctx->pc = 0x240028u;
label_240028:
    // 0x240028: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x240028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_24002c:
    // 0x24002c: 0x8f83b730  lw          $v1, -0x48D0($gp)
    ctx->pc = 0x24002cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x240030: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x240030u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x240034: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x240034u;
    {
        const bool branch_taken_0x240034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240034) {
            ctx->pc = 0x240058u;
            goto label_240058;
        }
    }
    ctx->pc = 0x24003Cu;
    // 0x24003c: 0xc08828c  jal         func_220A30
    ctx->pc = 0x24003Cu;
    SET_GPR_U32(ctx, 31, 0x240044u);
    ctx->pc = 0x240040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24003Cu;
    // 0x240040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x24003Cu, 0x240044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240044u;
label_240044:
    // 0x240044: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x240044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x240048: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x240048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x24004c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24004cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240050: 0x1071fff5  beq         $v1, $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x240050u;
    {
        const bool branch_taken_0x240050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x240054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240050u;
        // 0x240054: 0x8f83b730  lw          $v1, -0x48D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240050) {
            ctx->pc = 0x240028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240028;
        }
    }
    ctx->pc = 0x240058u;
label_240058:
    // 0x240058: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x240058u;
    {
        const bool branch_taken_0x240058 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x24005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240058u;
        // 0x24005c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240058) {
            ctx->pc = 0x240068u;
            goto label_240068;
        }
    }
    ctx->pc = 0x240060u;
    // 0x240060: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x240060u;
    {
        const bool branch_taken_0x240060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240060u;
        // 0x240064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240060) {
            ctx->pc = 0x24009Cu;
            goto label_24009c;
        }
    }
    ctx->pc = 0x240068u;
label_240068:
    // 0x240068: 0xc08c2b8  jal         func_230AE0
    ctx->pc = 0x240068u;
    SET_GPR_U32(ctx, 31, 0x240070u);
    ctx->pc = 0x24006Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240068u;
    // 0x24006c: 0xaf90b748  sw          $s0, -0x48B8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948680), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230AE0u, 0x240068u, 0x240070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240070u;
label_240070:
    // 0x240070: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x240070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x240074: 0x2406fffc  addiu       $a2, $zero, -0x4
    ctx->pc = 0x240074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x240078: 0x246311f8  addiu       $v1, $v1, 0x11F8
    ctx->pc = 0x240078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4600));
    // 0x24007c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x24007cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x240080: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x240080u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC11FCu));
    // 0x240084: 0x24a564f0  addiu       $a1, $a1, 0x64F0
    ctx->pc = 0x240084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25840));
    // 0x240088: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x240088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24008c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x24008cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x240090: 0xc08b3ac  jal         func_22CEB0
    ctx->pc = 0x240090u;
    SET_GPR_U32(ctx, 31, 0x240098u);
    ctx->pc = 0x240094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240090u;
    // 0x240094: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB0u, 0x240090u, 0x240098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240098u;
label_240098:
    // 0x240098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x240098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24009c:
    // 0x24009c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24009cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2400a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2400a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2400a4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2400a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2400a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2400a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2400ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2400ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2400B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2400ACu;
        // 0x2400b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2400ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2400B4u;
}

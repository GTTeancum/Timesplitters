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

// Function: enemyPreload
// Address: 0x2ba048 - 0x2ba140
void enemyPreload_0x2ba048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyPreload_0x2ba048");
#endif

    switch (ctx->pc) {
        case 0x2ba088u: goto label_2ba088;
        case 0x2ba098u: goto label_2ba098;
        case 0x2ba0a4u: goto label_2ba0a4;
        case 0x2ba0e0u: goto label_2ba0e0;
        case 0x2ba0f4u: goto label_2ba0f4;
        case 0x2ba110u: goto label_2ba110;
        default: break;
    }

    ctx->pc = 0x2ba048u;

    // 0x2ba048: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ba048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ba04c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2ba04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2ba050: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2ba050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2ba054: 0x2463c4a8  addiu       $v1, $v1, -0x3B58
    ctx->pc = 0x2ba054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952104));
    // 0x2ba058: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2ba058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2ba05c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2ba05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2ba060: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2ba060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2ba064: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ba064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ba068: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2ba068u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x2ba06c: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x2ba06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x2ba070: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2ba070u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ba074: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BA074u;
    {
        const bool branch_taken_0x2ba074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA074u;
        // 0x2ba078: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba074) {
            ctx->pc = 0x2BA0B8u;
            goto label_2ba0b8;
        }
    }
    ctx->pc = 0x2BA07Cu;
    // 0x2ba07c: 0x27b10004  addiu       $s1, $sp, 0x4
    ctx->pc = 0x2ba07cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2ba080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ba080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba084: 0x0  nop
    ctx->pc = 0x2ba084u;
    // NOP
label_2ba088:
    // 0x2ba088: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ba088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba08c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ba08cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba090: 0xc089d92  jal         func_227648
    ctx->pc = 0x2BA090u;
    SET_GPR_U32(ctx, 31, 0x2BA098u);
    ctx->pc = 0x2BA094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA090u;
    // 0x2ba094: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227648u, 0x2BA090u, 0x2BA098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA098u;
label_2ba098:
    // 0x2ba098: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2ba098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2ba09c: 0xc0a21fa  jal         func_2887E8
    ctx->pc = 0x2BA09Cu;
    SET_GPR_U32(ctx, 31, 0x2BA0A4u);
    ctx->pc = 0x2BA0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA09Cu;
    // 0x2ba0a0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2887E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2887E8u, 0x2BA09Cu, 0x2BA0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA0A4u;
label_2ba0a4:
    // 0x2ba0a4: 0x2a02000b  slti        $v0, $s0, 0xB
    ctx->pc = 0x2ba0a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2ba0a8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2BA0A8u;
    {
        const bool branch_taken_0x2ba0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0A8u;
        // 0x2ba0ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba0a8) {
            ctx->pc = 0x2BA088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ba088;
        }
    }
    ctx->pc = 0x2BA0B0u;
    // 0x2ba0b0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2BA0B0u;
    {
        const bool branch_taken_0x2ba0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0B0u;
        // 0x2ba0b4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba0b0) {
            ctx->pc = 0x2BA128u;
            goto label_2ba128;
        }
    }
    ctx->pc = 0x2BA0B8u;
label_2ba0b8:
    // 0x2ba0b8: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x2ba0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x2ba0bc: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2BA0BCu;
    {
        const bool branch_taken_0x2ba0bc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2BA0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0BCu;
        // 0x2ba0c0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba0bc) {
            ctx->pc = 0x2BA128u;
            goto label_2ba128;
        }
    }
    ctx->pc = 0x2BA0C4u;
    // 0x2ba0c4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2ba0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2ba0c8: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2BA0C8u;
    {
        const bool branch_taken_0x2ba0c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2BA0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0C8u;
        // 0x2ba0cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba0c8) {
            ctx->pc = 0x2BA128u;
            goto label_2ba128;
        }
    }
    ctx->pc = 0x2BA0D0u;
    // 0x2ba0d0: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x2ba0d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba0d4: 0x24130019  addiu       $s3, $zero, 0x19
    ctx->pc = 0x2ba0d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2ba0d8: 0x26320015  addiu       $s2, $s1, 0x15
    ctx->pc = 0x2ba0d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 21));
    // 0x2ba0dc: 0x8f829f70  lw          $v0, -0x6090($gp)
    ctx->pc = 0x2ba0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
label_2ba0e0:
    // 0x2ba0e0: 0x14530006  bne         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BA0E0u;
    {
        const bool branch_taken_0x2ba0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2BA0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0E0u;
        // 0x2ba0e4: 0x8f829f74  lw          $v0, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba0e0) {
            ctx->pc = 0x2BA0FCu;
            goto label_2ba0fc;
        }
    }
    ctx->pc = 0x2BA0E8u;
    // 0x2ba0e8: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x2ba0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x2ba0ec: 0xc0a21fa  jal         func_2887E8
    ctx->pc = 0x2BA0ECu;
    SET_GPR_U32(ctx, 31, 0x2BA0F4u);
    ctx->pc = 0x2BA0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA0ECu;
    // 0x2ba0f0: 0x2405004f  addiu       $a1, $zero, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2887E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2887E8u, 0x2BA0ECu, 0x2BA0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA0F4u;
label_2ba0f4:
    // 0x2ba0f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BA0F4u;
    {
        const bool branch_taken_0x2ba0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0F4u;
        // 0x2ba0f8: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba0f4) {
            ctx->pc = 0x2BA114u;
            goto label_2ba114;
        }
    }
    ctx->pc = 0x2BA0FCu;
label_2ba0fc:
    // 0x2ba0fc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2ba0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ba100: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2ba100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2ba104: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2ba104u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ba108: 0xc0a21fa  jal         func_2887E8
    ctx->pc = 0x2BA108u;
    SET_GPR_U32(ctx, 31, 0x2BA110u);
    ctx->pc = 0x2BA10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA108u;
    // 0x2ba10c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2887E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2887E8u, 0x2BA108u, 0x2BA110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA110u;
label_2ba110:
    // 0x2ba110: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2ba110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2ba114:
    // 0x2ba114: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ba114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ba118: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2ba118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ba11c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2BA11Cu;
    {
        const bool branch_taken_0x2ba11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA11Cu;
        // 0x2ba120: 0x8f829f70  lw          $v0, -0x6090($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba11c) {
            ctx->pc = 0x2BA0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ba0e0;
        }
    }
    ctx->pc = 0x2BA124u;
    // 0x2ba124: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2ba124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2ba128:
    // 0x2ba128: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2ba128u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ba12c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2ba12cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ba130: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2ba130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ba134: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ba134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba138: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA138u;
        // 0x2ba13c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA140u;
}

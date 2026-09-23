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

// Function: memFree
// Address: 0x201dd0 - 0x201e4c
void memFree_0x201dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("memFree_0x201dd0");
#endif

    switch (ctx->pc) {
        case 0x201e0cu: goto label_201e0c;
        case 0x201e20u: goto label_201e20;
        default: break;
    }

    ctx->pc = 0x201dd0u;

    // 0x201dd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201dd4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x201dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201dd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201ddc: 0x3c024143  lui         $v0, 0x4143
    ctx->pc = 0x201ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16707 << 16));
    // 0x201de0: 0x34424f4c  ori         $v0, $v0, 0x4F4C
    ctx->pc = 0x201de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20300);
    // 0x201de4: 0x8ca3fff0  lw          $v1, -0x10($a1)
    ctx->pc = 0x201de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x201de8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x201DE8u;
    {
        const bool branch_taken_0x201de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x201DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DE8u;
        // 0x201dec: 0x24a4fff0  addiu       $a0, $a1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201de8) {
            ctx->pc = 0x201E04u;
            goto label_201e04;
        }
    }
    ctx->pc = 0x201DF0u;
    // 0x201df0: 0x3c024d45  lui         $v0, 0x4D45
    ctx->pc = 0x201df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19781 << 16));
    // 0x201df4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x201df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x201df8: 0x34424d4c  ori         $v0, $v0, 0x4D4C
    ctx->pc = 0x201df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19788);
    // 0x201dfc: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x201DFCu;
    {
        const bool branch_taken_0x201dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x201dfc) {
            ctx->pc = 0x201E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201DFCu;
            // 0x201e00: 0x8c87000c  lw          $a3, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201E0Cu;
            goto label_201e0c;
        }
    }
    ctx->pc = 0x201E04u;
label_201e04:
    // 0x201e04: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x201E04u;
    SET_GPR_U32(ctx, 31, 0x201E0Cu);
    ctx->pc = 0x201E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201E04u;
    // 0x201e08: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x201E04u, 0x201E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201E0Cu;
label_201e0c:
    // 0x201e0c: 0x8f829a74  lw          $v0, -0x658C($gp)
    ctx->pc = 0x201e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941300)));
    // 0x201e10: 0x50e20003  beql        $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x201E10u;
    {
        const bool branch_taken_0x201e10 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x201e10) {
            ctx->pc = 0x201E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201E10u;
            // 0x201e14: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201E20u;
            goto label_201e20;
        }
    }
    ctx->pc = 0x201E18u;
    // 0x201e18: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x201E18u;
    SET_GPR_U32(ctx, 31, 0x201E20u);
    ctx->pc = 0x201E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201E18u;
    // 0x201e1c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x201E18u, 0x201E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201E20u;
label_201e20:
    // 0x201e20: 0x8f839a70  lw          $v1, -0x6590($gp)
    ctx->pc = 0x201e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941296)));
    // 0x201e24: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x201e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x201e28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201e2c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x201e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x201e30: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x201e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x201e34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x201e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x201e38: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x201e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x201e3c: 0xaf869a74  sw          $a2, -0x658C($gp)
    ctx->pc = 0x201e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941300), GPR_U32(ctx, 6));
    // 0x201e40: 0xaf839a70  sw          $v1, -0x6590($gp)
    ctx->pc = 0x201e40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941296), GPR_U32(ctx, 3));
    // 0x201e44: 0x8080698  j           func_201A60
    ctx->pc = 0x201E44u;
    ctx->pc = 0x201E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201E44u;
    // 0x201e48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201A60u;
    memMark_0x201a60(rdram, ctx, runtime); return;
    ctx->pc = 0x201E4Cu;
}

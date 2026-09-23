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

// Function: zbtestDoTest
// Address: 0x2a7108 - 0x2a7184
void zbtestDoTest_0x2a7108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zbtestDoTest_0x2a7108");
#endif

    switch (ctx->pc) {
        case 0x2a7138u: goto label_2a7138;
        default: break;
    }

    ctx->pc = 0x2a7108u;

    // 0x2a7108: 0x8f88b984  lw          $t0, -0x467C($gp)
    ctx->pc = 0x2a7108u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949252)));
    // 0x2a710c: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x2a710cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x2a7110: 0x2463a0a0  addiu       $v1, $v1, -0x5F60
    ctx->pc = 0x2a7110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942880));
    // 0x2a7114: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2a7114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2a7118: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a7118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a711c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a711cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7120: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2a7120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2a7124: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x2a7124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a7128: 0x18e00014  blez        $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A7128u;
    {
        const bool branch_taken_0x2a7128 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2A712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7128u;
        // 0x2a712c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7128) {
            ctx->pc = 0x2A717Cu;
            goto label_2a717c;
        }
    }
    ctx->pc = 0x2A7130u;
    // 0x2a7130: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x2a7130u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x2a7134: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2a7134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2a7138:
    // 0x2a7138: 0x2525a590  addiu       $a1, $t1, -0x5A70
    ctx->pc = 0x2a7138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4294944144));
    // 0x2a713c: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x2a713cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a7140: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2a7140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2a7144: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2a7144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a7148: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a7148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a714c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2a714cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a7150: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2a7150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a7154: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A7154u;
    {
        const bool branch_taken_0x2a7154 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A7158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7154u;
        // 0x2a7158: 0x8f82b314  lw          $v0, -0x4CEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7154) {
            ctx->pc = 0x2A716Cu;
            goto label_2a716c;
        }
    }
    ctx->pc = 0x2A715Cu;
    // 0x2a715c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2a715cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2a7160: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a7160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7164: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a7164u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7168: 0xa4a40012  sh          $a0, 0x12($a1)
    ctx->pc = 0x2a7168u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 4));
label_2a716c:
    // 0x2a716c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2a716cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2a7170: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x2a7170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2a7174: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2A7174u;
    {
        const bool branch_taken_0x2a7174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7174u;
        // 0x2a7178: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7174) {
            ctx->pc = 0x2A7138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7138;
        }
    }
    ctx->pc = 0x2A717Cu;
label_2a717c:
    // 0x2a717c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A717Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A717Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7184u;
}

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

// Function: pageOut
// Address: 0x230148 - 0x2301c0
void pageOut_0x230148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pageOut_0x230148");
#endif

    switch (ctx->pc) {
        case 0x230158u: goto label_230158;
        case 0x230160u: goto label_230160;
        case 0x230198u: goto label_230198;
        default: break;
    }

    ctx->pc = 0x230148u;

    // 0x230148: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x230148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23014c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23014cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230150: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x230150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x230154: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x230154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230158:
    // 0x230158: 0xc08e124  jal         func_238490
    ctx->pc = 0x230158u;
    SET_GPR_U32(ctx, 31, 0x230160u);
    ctx->pc = 0x23015Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230158u;
    // 0x23015c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238490u, 0x230158u, 0x230160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230160u;
label_230160:
    // 0x230160: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x230160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x230164: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x230164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x230168: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x230168u;
    {
        const bool branch_taken_0x230168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230168u;
        // 0x23016c: 0x8f82b73c  lw          $v0, -0x48C4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948668)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230168) {
            ctx->pc = 0x230158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230158;
        }
    }
    ctx->pc = 0x230170u;
    // 0x230170: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x230170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x230174: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x230174u;
    {
        const bool branch_taken_0x230174 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x230178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230174u;
        // 0x230178: 0xaf83b73c  sw          $v1, -0x48C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948668), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230174) {
            ctx->pc = 0x2301A0u;
            goto label_2301a0;
        }
    }
    ctx->pc = 0x23017Cu;
    // 0x23017c: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x23017cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x230180: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x230180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x230184: 0x24421308  addiu       $v0, $v0, 0x1308
    ctx->pc = 0x230184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4872));
    // 0x230188: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x230188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23018c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23018cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x230190: 0xc08b3ac  jal         func_22CEB0
    ctx->pc = 0x230190u;
    SET_GPR_U32(ctx, 31, 0x230198u);
    ctx->pc = 0x230194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230190u;
    // 0x230194: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB0u, 0x230190u, 0x230198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230198u;
label_230198:
    // 0x230198: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x230198u;
    {
        const bool branch_taken_0x230198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230198u;
        // 0x23019c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230198) {
            ctx->pc = 0x2301ACu;
            goto label_2301ac;
        }
    }
    ctx->pc = 0x2301A0u;
label_2301a0:
    // 0x2301a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2301a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2301a4: 0xaf82b73c  sw          $v0, -0x48C4($gp)
    ctx->pc = 0x2301a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948668), GPR_U32(ctx, 2));
    // 0x2301a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2301a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2301ac:
    // 0x2301ac: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x2301acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x2301b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2301b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2301b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2301b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2301b8: 0x8081546  j           func_205518
    ctx->pc = 0x2301B8u;
    ctx->pc = 0x2301BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2301B8u;
    // 0x2301bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    soundStart_0x205518(rdram, ctx, runtime); return;
    ctx->pc = 0x2301C0u;
}

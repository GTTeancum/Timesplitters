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

// Function: Inflate
// Address: 0x21c130 - 0x21c1b0
void Inflate_0x21c130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Inflate_0x21c130");
#endif

    switch (ctx->pc) {
        case 0x21c148u: goto label_21c148;
        case 0x21c150u: goto label_21c150;
        case 0x21c160u: goto label_21c160;
        case 0x21c178u: goto label_21c178;
        case 0x21c1a0u: goto label_21c1a0;
        default: break;
    }

    ctx->pc = 0x21c130u;

    // 0x21c130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21c130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21c134: 0xaf80b6d8  sw          $zero, -0x4928($gp)
    ctx->pc = 0x21c134u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948568), GPR_U32(ctx, 0));
    // 0x21c138: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21c138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21c13c: 0xaf80b6e8  sw          $zero, -0x4918($gp)
    ctx->pc = 0x21c13cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948584), GPR_U32(ctx, 0));
    // 0x21c140: 0xaf80b6e4  sw          $zero, -0x491C($gp)
    ctx->pc = 0x21c140u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948580), GPR_U32(ctx, 0));
    // 0x21c144: 0x0  nop
    ctx->pc = 0x21c144u;
    // NOP
label_21c148:
    // 0x21c148: 0xc086f4e  jal         func_21BD38
    ctx->pc = 0x21C148u;
    SET_GPR_U32(ctx, 31, 0x21C150u);
    ctx->pc = 0x21C14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C148u;
    // 0x21c14c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BD38u, 0x21C148u, 0x21C150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C150u;
label_21c150:
    // 0x21c150: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C150u;
    {
        const bool branch_taken_0x21c150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C150u;
        // 0x21c154: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c150) {
            ctx->pc = 0x21C160u;
            goto label_21c160;
        }
    }
    ctx->pc = 0x21C158u;
    // 0x21c158: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x21C158u;
    SET_GPR_U32(ctx, 31, 0x21C160u);
    ctx->pc = 0x21C15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C158u;
    // 0x21c15c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x21C158u, 0x21C160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C160u;
label_21c160:
    // 0x21c160: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21C160u;
    {
        const bool branch_taken_0x21c160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C160u;
        // 0x21c164: 0x8f84b6e8  lw          $a0, -0x4918($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c160) {
            ctx->pc = 0x21C148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c148;
        }
    }
    ctx->pc = 0x21C168u;
    // 0x21c168: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x21c168u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x21c16c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21C16Cu;
    {
        const bool branch_taken_0x21c16c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C16Cu;
        // 0x21c170: 0x8f83b6cc  lw          $v1, -0x4934($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c16c) {
            ctx->pc = 0x21C198u;
            goto label_21c198;
        }
    }
    ctx->pc = 0x21C174u;
    // 0x21c174: 0x0  nop
    ctx->pc = 0x21c174u;
    // NOP
label_21c178:
    // 0x21c178: 0x2482fff8  addiu       $v0, $a0, -0x8
    ctx->pc = 0x21c178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x21c17c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x21c17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x21c180: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21c180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c184: 0xaf82b6e8  sw          $v0, -0x4918($gp)
    ctx->pc = 0x21c184u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948584), GPR_U32(ctx, 2));
    // 0x21c188: 0xaf83b6cc  sw          $v1, -0x4934($gp)
    ctx->pc = 0x21c188u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 3));
    // 0x21c18c: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x21c18cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x21c190: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21C190u;
    {
        const bool branch_taken_0x21c190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c190) {
            ctx->pc = 0x21C178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c178;
        }
    }
    ctx->pc = 0x21C198u;
label_21c198:
    // 0x21c198: 0xc086fa2  jal         func_21BE88
    ctx->pc = 0x21C198u;
    SET_GPR_U32(ctx, 31, 0x21C1A0u);
    ctx->pc = 0x21BE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BE88u, 0x21C198u, 0x21C1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C1A0u;
label_21c1a0:
    // 0x21c1a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21c1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c1a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21c1a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x21C1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C1A8u;
        // 0x21c1ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C1B0u;
}

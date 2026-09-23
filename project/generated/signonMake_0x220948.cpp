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

// Function: signonMake
// Address: 0x220948 - 0x2209d8
void signonMake_0x220948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("signonMake_0x220948");
#endif

    switch (ctx->pc) {
        case 0x220964u: goto label_220964;
        case 0x220980u: goto label_220980;
        case 0x220988u: goto label_220988;
        case 0x2209a8u: goto label_2209a8;
        default: break;
    }

    ctx->pc = 0x220948u;

    // 0x220948: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x220948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22094c: 0x3c040006  lui         $a0, 0x6
    ctx->pc = 0x22094cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)6 << 16));
    // 0x220950: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220954: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x220954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x220958: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x220958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22095c: 0xc08070e  jal         func_201C38
    ctx->pc = 0x22095Cu;
    SET_GPR_U32(ctx, 31, 0x220964u);
    ctx->pc = 0x220960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22095Cu;
    // 0x220960: 0x34847380  ori         $a0, $a0, 0x7380 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)29568);
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x22095Cu, 0x220964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220964u;
label_220964:
    // 0x220964: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x220964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220968: 0x3c060006  lui         $a2, 0x6
    ctx->pc = 0x220968u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)6 << 16));
    // 0x22096c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22096cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220970: 0xaf829dd8  sw          $v0, -0x6228($gp)
    ctx->pc = 0x220970u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942168), GPR_U32(ctx, 2));
    // 0x220974: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x220974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220978: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x220978u;
    SET_GPR_U32(ctx, 31, 0x220980u);
    ctx->pc = 0x22097Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220978u;
    // 0x22097c: 0x34c67380  ori         $a2, $a2, 0x7380 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)29568);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x220978u, 0x220980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220980u;
label_220980:
    // 0x220980: 0xc0881ec  jal         func_2207B0
    ctx->pc = 0x220980u;
    SET_GPR_U32(ctx, 31, 0x220988u);
    ctx->pc = 0x220984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220980u;
    // 0x220984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2207B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2207B0u, 0x220980u, 0x220988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220988u;
label_220988:
    // 0x220988: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x220988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22098c: 0x2a020090  slti        $v0, $s0, 0x90
    ctx->pc = 0x22098cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)144) ? 1 : 0);
    // 0x220990: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x220990u;
    {
        const bool branch_taken_0x220990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220990u;
        // 0x220994: 0x3c0201fc  lui         $v0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220990) {
            ctx->pc = 0x220980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220980;
        }
    }
    ctx->pc = 0x220998u;
    // 0x220998: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x220998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22099c: 0x2442c158  addiu       $v0, $v0, -0x3EA8
    ctx->pc = 0x22099cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951256));
    // 0x2209a0: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x2209a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2209a4: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x2209a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_2209a8:
    // 0x2209a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2209a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2209ac: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2209acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2209b0: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2209b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2209b4: 0x0  nop
    ctx->pc = 0x2209b4u;
    // NOP
    // 0x2209b8: 0x0  nop
    ctx->pc = 0x2209b8u;
    // NOP
    // 0x2209bc: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2209BCu;
    {
        const bool branch_taken_0x2209bc = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2209bc) {
            ctx->pc = 0x2209A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2209a8;
        }
    }
    ctx->pc = 0x2209C4u;
    // 0x2209c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2209c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2209c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2209c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2209cc: 0xaf80b714  sw          $zero, -0x48EC($gp)
    ctx->pc = 0x2209ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948628), GPR_U32(ctx, 0));
    // 0x2209d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2209D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2209D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2209D0u;
        // 0x2209d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2209D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2209D8u;
}

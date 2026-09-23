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

// Function: memdbReset
// Address: 0x201ef8 - 0x201f4c
void memdbReset_0x201ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("memdbReset_0x201ef8");
#endif

    switch (ctx->pc) {
        case 0x201f34u: goto label_201f34;
        default: break;
    }

    ctx->pc = 0x201ef8u;

    // 0x201ef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x201efc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201f00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x201f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201f04: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x201f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x201f08: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x201f08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x201f0c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x201F0Cu;
    {
        const bool branch_taken_0x201f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F0Cu;
        // 0x201f10: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f0c) {
            ctx->pc = 0x201F38u;
            goto label_201f38;
        }
    }
    ctx->pc = 0x201F14u;
    // 0x201f14: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x201f14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x201f18: 0x3a030002  xori        $v1, $s0, 0x2
    ctx->pc = 0x201f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)2);
    // 0x201f1c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x201f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x201f20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x201f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201f24: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x201f24u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x201f28: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x201f28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x201f2c: 0xc08070e  jal         func_201C38
    ctx->pc = 0x201F2Cu;
    SET_GPR_U32(ctx, 31, 0x201F34u);
    ctx->pc = 0x201F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201F2Cu;
    // 0x201f30: 0xaf829a88  sw          $v0, -0x6578($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941320), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x201F2Cu, 0x201F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201F34u;
label_201f34:
    // 0x201f34: 0xaf829a8c  sw          $v0, -0x6574($gp)
    ctx->pc = 0x201f34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941324), GPR_U32(ctx, 2));
label_201f38:
    // 0x201f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201f3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x201f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201f40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201f40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201f44: 0x80807a6  j           func_201E98
    ctx->pc = 0x201F44u;
    ctx->pc = 0x201F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201F44u;
    // 0x201f48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201E98u;
    memdbRestart_0x201e98(rdram, ctx, runtime); return;
    ctx->pc = 0x201F4Cu;
}

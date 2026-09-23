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

// Function: enemyAIVillageHandler1
// Address: 0x2cc180 - 0x2cc210
void enemyAIVillageHandler1_0x2cc180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyAIVillageHandler1_0x2cc180");
#endif

    switch (ctx->pc) {
        case 0x2cc1a8u: goto label_2cc1a8;
        case 0x2cc1e0u: goto label_2cc1e0;
        case 0x2cc1e8u: goto label_2cc1e8;
        case 0x2cc1f4u: goto label_2cc1f4;
        case 0x2cc1fcu: goto label_2cc1fc;
        default: break;
    }

    ctx->pc = 0x2cc180u;

    // 0x2cc180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cc180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cc184: 0x8f829f78  lw          $v0, -0x6088($gp)
    ctx->pc = 0x2cc184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942584)));
    // 0x2cc188: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2CC188u;
    {
        const bool branch_taken_0x2cc188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC188u;
        // 0x2cc18c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc188) {
            ctx->pc = 0x2CC204u;
            goto label_2cc204;
        }
    }
    ctx->pc = 0x2CC190u;
    // 0x2cc190: 0x8f899f74  lw          $t1, -0x608C($gp)
    ctx->pc = 0x2cc190u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2cc194: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cc194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc198: 0x1920000c  blez        $t1, . + 4 + (0xC << 2)
    ctx->pc = 0x2CC198u;
    {
        const bool branch_taken_0x2cc198 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x2CC19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC198u;
        // 0x2cc19c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc198) {
            ctx->pc = 0x2CC1CCu;
            goto label_2cc1cc;
        }
    }
    ctx->pc = 0x2CC1A0u;
    // 0x2cc1a0: 0x8f88b238  lw          $t0, -0x4DC8($gp)
    ctx->pc = 0x2cc1a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2cc1a4: 0x0  nop
    ctx->pc = 0x2cc1a4u;
    // NOP
label_2cc1a8:
    // 0x2cc1a8: 0x24031210  addiu       $v1, $zero, 0x1210
    ctx->pc = 0x2cc1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x2cc1ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cc1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc1b0: 0xc31018  mult        $v0, $a2, $v1
    ctx->pc = 0x2cc1b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2cc1b4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2cc1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2cc1b8: 0xc9202a  slt         $a0, $a2, $t1
    ctx->pc = 0x2cc1b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2cc1bc: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x2cc1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2cc1c0: 0x8c6201e4  lw          $v0, 0x1E4($v1)
    ctx->pc = 0x2cc1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 484)));
    // 0x2cc1c4: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2CC1C4u;
    {
        const bool branch_taken_0x2cc1c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC1C4u;
        // 0x2cc1c8: 0xa2380b  movn        $a3, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc1c4) {
            ctx->pc = 0x2CC1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cc1a8;
        }
    }
    ctx->pc = 0x2CC1CCu;
label_2cc1cc:
    // 0x2cc1cc: 0x10e0000e  beqz        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x2CC1CCu;
    {
        const bool branch_taken_0x2cc1cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC1CCu;
        // 0x2cc1d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc1cc) {
            ctx->pc = 0x2CC208u;
            goto label_2cc208;
        }
    }
    ctx->pc = 0x2CC1D4u;
    // 0x2cc1d4: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x2cc1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2cc1d8: 0xc095e10  jal         func_257840
    ctx->pc = 0x2CC1D8u;
    SET_GPR_U32(ctx, 31, 0x2CC1E0u);
    ctx->pc = 0x2CC1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC1D8u;
    // 0x2cc1dc: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257840u, 0x2CC1D8u, 0x2CC1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC1E0u;
label_2cc1e0:
    // 0x2cc1e0: 0xc09b060  jal         func_26C180
    ctx->pc = 0x2CC1E0u;
    SET_GPR_U32(ctx, 31, 0x2CC1E8u);
    ctx->pc = 0x2CC1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC1E0u;
    // 0x2cc1e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C180u, 0x2CC1E0u, 0x2CC1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC1E8u;
label_2cc1e8:
    // 0x2cc1e8: 0x2404052c  addiu       $a0, $zero, 0x52C
    ctx->pc = 0x2cc1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1324));
    // 0x2cc1ec: 0xc09925e  jal         func_264978
    ctx->pc = 0x2CC1ECu;
    SET_GPR_U32(ctx, 31, 0x2CC1F4u);
    ctx->pc = 0x2CC1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC1ECu;
    // 0x2cc1f0: 0x24050467  addiu       $a1, $zero, 0x467 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x2CC1ECu, 0x2CC1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC1F4u;
label_2cc1f4:
    // 0x2cc1f4: 0xc099392  jal         func_264E48
    ctx->pc = 0x2CC1F4u;
    SET_GPR_U32(ctx, 31, 0x2CC1FCu);
    ctx->pc = 0x2CC1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC1F4u;
    // 0x2cc1f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E48u, 0x2CC1F4u, 0x2CC1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC1FCu;
label_2cc1fc:
    // 0x2cc1fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cc1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc200: 0xaf829f78  sw          $v0, -0x6088($gp)
    ctx->pc = 0x2cc200u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942584), GPR_U32(ctx, 2));
label_2cc204:
    // 0x2cc204: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cc208:
    // 0x2cc208: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC208u;
        // 0x2cc20c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC210u;
}

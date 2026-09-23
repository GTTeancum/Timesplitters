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

// Function: _hi0bits
// Address: 0x2ec1d8 - 0x2ec25c
void _hi0bits_0x2ec1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_hi0bits_0x2ec1d8");
#endif

    ctx->pc = 0x2ec1d8u;

    // 0x2ec1d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2ec1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2ec1dc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2ec1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ec1e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC1E0u;
    {
        const bool branch_taken_0x2ec1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC1E0u;
        // 0x2ec1e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec1e0) {
            ctx->pc = 0x2EC1F0u;
            goto label_2ec1f0;
        }
    }
    ctx->pc = 0x2EC1E8u;
    // 0x2ec1e8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2ec1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ec1ec: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2ec1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_2ec1f0:
    // 0x2ec1f0: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x2ec1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x2ec1f4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2ec1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ec1f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC1F8u;
    {
        const bool branch_taken_0x2ec1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec1f8) {
            ctx->pc = 0x2EC208u;
            goto label_2ec208;
        }
    }
    ctx->pc = 0x2EC200u;
    // 0x2ec200: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2ec200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2ec204: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2ec204u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_2ec208:
    // 0x2ec208: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x2ec208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x2ec20c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2ec20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ec210: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC210u;
    {
        const bool branch_taken_0x2ec210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec210) {
            ctx->pc = 0x2EC220u;
            goto label_2ec220;
        }
    }
    ctx->pc = 0x2EC218u;
    // 0x2ec218: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2ec218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2ec21c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2ec21cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2ec220:
    // 0x2ec220: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x2ec220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x2ec224: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2ec224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ec228: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC228u;
    {
        const bool branch_taken_0x2ec228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec228) {
            ctx->pc = 0x2EC238u;
            goto label_2ec238;
        }
    }
    ctx->pc = 0x2EC230u;
    // 0x2ec230: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x2ec230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2ec234: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2ec234u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2ec238:
    // 0x2ec238: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC238u;
    {
        const bool branch_taken_0x2ec238 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2EC23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC238u;
        // 0x2ec23c: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec238) {
            ctx->pc = 0x2EC250u;
            goto label_2ec250;
        }
    }
    ctx->pc = 0x2EC240u;
    // 0x2ec240: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ec240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ec244: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2ec244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ec248: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EC248u;
    {
        const bool branch_taken_0x2ec248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC248u;
        // 0x2ec24c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec248) {
            ctx->pc = 0x2EC254u;
            goto label_2ec254;
        }
    }
    ctx->pc = 0x2EC250u;
label_2ec250:
    // 0x2ec250: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2ec250u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ec254:
    // 0x2ec254: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC25Cu;
}

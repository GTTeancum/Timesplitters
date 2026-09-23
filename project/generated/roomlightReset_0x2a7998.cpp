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

// Function: roomlightReset
// Address: 0x2a7998 - 0x2a7a34
void roomlightReset_0x2a7998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("roomlightReset_0x2a7998");
#endif

    switch (ctx->pc) {
        case 0x2a79d0u: goto label_2a79d0;
        case 0x2a79e8u: goto label_2a79e8;
        case 0x2a7a20u: goto label_2a7a20;
        default: break;
    }

    ctx->pc = 0x2a7998u;

    // 0x2a7998: 0x8f84a264  lw          $a0, -0x5D9C($gp)
    ctx->pc = 0x2a7998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x2a799c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x2a799cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2a79a0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2a79a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2a79a4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a79a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a79a8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2a79a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a79ac: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x2a79acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x2a79b0: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2a79b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a79b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a79b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a79b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a79b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a79bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a79bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a79c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a79c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a79c4: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x2a79c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2a79c8: 0xc08070e  jal         func_201C38
    ctx->pc = 0x2A79C8u;
    SET_GPR_U32(ctx, 31, 0x2A79D0u);
    ctx->pc = 0x2A79CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A79C8u;
    // 0x2a79cc: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x2A79C8u, 0x2A79D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A79D0u;
label_2a79d0:
    // 0x2a79d0: 0x8f88a264  lw          $t0, -0x5D9C($gp)
    ctx->pc = 0x2a79d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x2a79d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a79d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a79d8: 0x1900000d  blez        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A79D8u;
    {
        const bool branch_taken_0x2a79d8 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x2A79DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A79D8u;
        // 0x2a79dc: 0xaf82b32c  sw          $v0, -0x4CD4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a79d8) {
            ctx->pc = 0x2A7A10u;
            goto label_2a7a10;
        }
    }
    ctx->pc = 0x2A79E0u;
    // 0x2a79e0: 0x8f87a270  lw          $a3, -0x5D90($gp)
    ctx->pc = 0x2a79e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943344)));
    // 0x2a79e4: 0x0  nop
    ctx->pc = 0x2a79e4u;
    // NOP
label_2a79e8:
    // 0x2a79e8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2a79e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2a79ec: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2a79ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2a79f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2a79f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2a79f4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2a79f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a79f8: 0xc8282a  slt         $a1, $a2, $t0
    ctx->pc = 0x2a79f8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2a79fc: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2a79fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2a7a00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a7a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7a04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a7a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a7a08: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2A7A08u;
    {
        const bool branch_taken_0x2a7a08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7A08u;
        // 0x2a7a0c: 0x2048021  addu        $s0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7a08) {
            ctx->pc = 0x2A79E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a79e8;
        }
    }
    ctx->pc = 0x2A7A10u;
label_2a7a10:
    // 0x2a7a10: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2a7a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2a7a14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a7a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7a18: 0xc08070e  jal         func_201C38
    ctx->pc = 0x2A7A18u;
    SET_GPR_U32(ctx, 31, 0x2A7A20u);
    ctx->pc = 0x2A7A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7A18u;
    // 0x2a7a1c: 0x2042018  mult        $a0, $s0, $a0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x2A7A18u, 0x2A7A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7A20u;
label_2a7a20:
    // 0x2a7a20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a7a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7a24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a7a24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7a28: 0xaf82b330  sw          $v0, -0x4CD0($gp)
    ctx->pc = 0x2a7a28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947632), GPR_U32(ctx, 2));
    // 0x2a7a2c: 0x80a9e10  j           func_2A7840
    ctx->pc = 0x2A7A2Cu;
    ctx->pc = 0x2A7A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7A2Cu;
    // 0x2a7a30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7840u;
    roomlightRestart_0x2a7840(rdram, ctx, runtime); return;
    ctx->pc = 0x2A7A34u;
}

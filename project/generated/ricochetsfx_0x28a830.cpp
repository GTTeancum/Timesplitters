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

// Function: ricochetsfx
// Address: 0x28a830 - 0x28a8e8
void ricochetsfx_0x28a830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ricochetsfx_0x28a830");
#endif

    switch (ctx->pc) {
        case 0x28a878u: goto label_28a878;
        case 0x28a89cu: goto label_28a89c;
        default: break;
    }

    ctx->pc = 0x28a830u;

    // 0x28a830: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28a830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28a834: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x28a834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x28a838: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28a838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28a83c: 0x24426108  addiu       $v0, $v0, 0x6108
    ctx->pc = 0x28a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24840));
    // 0x28a840: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28a840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a844: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x28a844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x28a848: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28a848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28a84c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x28a84cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x28a850: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x28a850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x28a854: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28a854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28a858: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28a858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28a85c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28a85cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a860: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x28a860u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28a864: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28a864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28a868: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28A868u;
    {
        const bool branch_taken_0x28a868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A868u;
        // 0x28a86c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a868) {
            ctx->pc = 0x28A894u;
            goto label_28a894;
        }
    }
    ctx->pc = 0x28A870u;
    // 0x28a870: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x28a870u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a874: 0x0  nop
    ctx->pc = 0x28a874u;
    // NOP
label_28a878:
    // 0x28a878: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x28a878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x28a87c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28a87cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28a880: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28a880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28a884: 0x0  nop
    ctx->pc = 0x28a884u;
    // NOP
    // 0x28a888: 0x0  nop
    ctx->pc = 0x28a888u;
    // NOP
    // 0x28a88c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28A88Cu;
    {
        const bool branch_taken_0x28a88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a88c) {
            ctx->pc = 0x28A878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28a878;
        }
    }
    ctx->pc = 0x28A894u;
label_28a894:
    // 0x28a894: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x28A894u;
    SET_GPR_U32(ctx, 31, 0x28A89Cu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x28A894u, 0x28A89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A89Cu;
label_28a89c:
    // 0x28a89c: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x28a89cu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x28a8a0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x28a8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28a8a4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x28a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x28a8a8: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28A8A8u;
    {
        const bool branch_taken_0x28a8a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a8a8) {
            ctx->pc = 0x28A8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A8A8u;
            // 0x28a8ac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A8B0u;
            goto label_28a8b0;
        }
    }
    ctx->pc = 0x28A8B0u;
label_28a8b0:
    // 0x28a8b0: 0x52300a  movz        $a2, $v0, $s2
    ctx->pc = 0x28a8b0u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x28a8b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28a8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a8b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28a8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28a8bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28a8bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a8c0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x28a8c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28a8c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28a8c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a8c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28a8c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a8cc: 0x1810  mfhi        $v1
    ctx->pc = 0x28a8ccu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x28a8d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28a8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28a8d4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x28a8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x28a8d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28a8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28a8dc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28a8dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a8e0: 0x8081602  j           func_205808
    ctx->pc = 0x28A8E0u;
    ctx->pc = 0x28A8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A8E0u;
    // 0x28a8e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205808u;
    soundDelayStartEx_0x205808(rdram, ctx, runtime); return;
    ctx->pc = 0x28A8E8u;
}

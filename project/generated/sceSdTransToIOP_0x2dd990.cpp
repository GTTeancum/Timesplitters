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

// Function: sceSdTransToIOP
// Address: 0x2dd990 - 0x2dda00
void sceSdTransToIOP_0x2dd990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSdTransToIOP_0x2dd990");
#endif

    switch (ctx->pc) {
        case 0x2dd9c8u: goto label_2dd9c8;
        case 0x2dd9d8u: goto label_2dd9d8;
        case 0x2dd9e0u: goto label_2dd9e0;
        default: break;
    }

    ctx->pc = 0x2dd990u;

    // 0x2dd990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dd990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dd994: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x2dd994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x2dd998: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2dd998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2dd99c: 0x24622b00  addiu       $v0, $v1, 0x2B00
    ctx->pc = 0x2dd99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 11008));
    // 0x2dd9a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dd9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dd9a4: 0xac642b00  sw          $a0, 0x2B00($v1)
    ctx->pc = 0x2dd9a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1FF2B00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FF2B00u, _value); } while (0);
    // 0x2dd9a8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2dd9a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd9ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dd9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dd9b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dd9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd9b4: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x2dd9b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x1FF2B04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FF2B04u, _value); } while (0);
    // 0x2dd9b8: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x2dd9b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1FF2B08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FF2B08u, _value); } while (0);
    // 0x2dd9bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2dd9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd9c0: 0xc0b4138  jal         func_2D04E0
    ctx->pc = 0x2DD9C0u;
    SET_GPR_U32(ctx, 31, 0x2DD9C8u);
    ctx->pc = 0x2DD9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD9C0u;
    // 0x2dd9c4: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D04E0u, 0x2DD9C0u, 0x2DD9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD9C8u;
label_2dd9c8:
    // 0x2dd9c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2dd9c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd9cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dd9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd9d0: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DD9D0u;
    {
        const bool branch_taken_0x2dd9d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DD9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD9D0u;
        // 0x2dd9d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd9d0) {
            ctx->pc = 0x2DD9E8u;
            goto label_2dd9e8;
        }
    }
    ctx->pc = 0x2DD9D8u;
label_2dd9d8:
    // 0x2dd9d8: 0xc0b4130  jal         func_2D04C0
    ctx->pc = 0x2DD9D8u;
    SET_GPR_U32(ctx, 31, 0x2DD9E0u);
    ctx->pc = 0x2DD9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD9D8u;
    // 0x2dd9dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D04C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D04C0u, 0x2DD9D8u, 0x2DD9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD9E0u;
label_2dd9e0:
    // 0x2dd9e0: 0x441fffd  bgez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x2DD9E0u;
    {
        const bool branch_taken_0x2dd9e0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2DD9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD9E0u;
        // 0x2dd9e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd9e0) {
            ctx->pc = 0x2DD9D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dd9d8;
        }
    }
    ctx->pc = 0x2DD9E8u;
label_2dd9e8:
    // 0x2dd9e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dd9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dd9ec: 0x11100b  movn        $v0, $zero, $s1
    ctx->pc = 0x2dd9ecu;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2dd9f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dd9f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd9f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2dd9f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD9F8u;
        // 0x2dd9fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDA00u;
}

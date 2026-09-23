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

// Function: _read_r
// Address: 0x2ecec0 - 0x2ecf20
void _read_r_0x2ecec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_read_r_0x2ecec0");
#endif

    switch (ctx->pc) {
        case 0x2eceecu: goto label_2eceec;
        default: break;
    }

    ctx->pc = 0x2ecec0u;

    // 0x2ecec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ecec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ecec4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ecec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ecec8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ecec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ececc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ececcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2eced0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2eced0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eced4: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x2eced4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    // 0x2eced8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2eced8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecedc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ecedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ecee0: 0xae2001f8  sw          $zero, 0x1F8($s1)
    ctx->pc = 0x2ecee0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3B01F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B01F8u, _value); } while (0);
    // 0x2ecee4: 0xc0b41a8  jal         func_2D06A0
    ctx->pc = 0x2ECEE4u;
    SET_GPR_U32(ctx, 31, 0x2ECEECu);
    ctx->pc = 0x2ECEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECEE4u;
    // 0x2ecee8: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D06A0u, 0x2ECEE4u, 0x2ECEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECEECu;
label_2eceec:
    // 0x2eceec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2eceecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecef0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ecef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ecef4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ECEF4u;
    {
        const bool branch_taken_0x2ecef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ECEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECEF4u;
        // 0x2ecef8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecef4) {
            ctx->pc = 0x2ECF0Cu;
            goto label_2ecf0c;
        }
    }
    ctx->pc = 0x2ECEFCu;
    // 0x2ecefc: 0x8e2201f8  lw          $v0, 0x1F8($s1)
    ctx->pc = 0x2ecefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
    // 0x2ecf00: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2ECF00u;
    {
        const bool branch_taken_0x2ecf00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecf00) {
            ctx->pc = 0x2ECF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECF00u;
            // 0x2ecf04: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECF0Cu;
            goto label_2ecf0c;
        }
    }
    ctx->pc = 0x2ECF08u;
    // 0x2ecf08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ecf08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ecf0c:
    // 0x2ecf0c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2ecf0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecf10: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ecf10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ecf14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ecf14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ecf18: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF18u;
        // 0x2ecf1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECF20u;
}

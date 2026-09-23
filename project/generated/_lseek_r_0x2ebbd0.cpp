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

// Function: _lseek_r
// Address: 0x2ebbd0 - 0x2ebc30
void _lseek_r_0x2ebbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_lseek_r_0x2ebbd0");
#endif

    switch (ctx->pc) {
        case 0x2ebbfcu: goto label_2ebbfc;
        default: break;
    }

    ctx->pc = 0x2ebbd0u;

    // 0x2ebbd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ebbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ebbd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ebbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ebbd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ebbd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebbdc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ebbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ebbe0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ebbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebbe4: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x2ebbe4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    // 0x2ebbe8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2ebbe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebbec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ebbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ebbf0: 0xae2001f8  sw          $zero, 0x1F8($s1)
    ctx->pc = 0x2ebbf0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3B01F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B01F8u, _value); } while (0);
    // 0x2ebbf4: 0xc0b41d4  jal         func_2D0750
    ctx->pc = 0x2EBBF4u;
    SET_GPR_U32(ctx, 31, 0x2EBBFCu);
    ctx->pc = 0x2EBBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBBF4u;
    // 0x2ebbf8: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0750u, 0x2EBBF4u, 0x2EBBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBBFCu;
label_2ebbfc:
    // 0x2ebbfc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ebbfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebc00: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ebc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ebc04: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EBC04u;
    {
        const bool branch_taken_0x2ebc04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EBC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC04u;
        // 0x2ebc08: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebc04) {
            ctx->pc = 0x2EBC1Cu;
            goto label_2ebc1c;
        }
    }
    ctx->pc = 0x2EBC0Cu;
    // 0x2ebc0c: 0x8e2201f8  lw          $v0, 0x1F8($s1)
    ctx->pc = 0x2ebc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
    // 0x2ebc10: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EBC10u;
    {
        const bool branch_taken_0x2ebc10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebc10) {
            ctx->pc = 0x2EBC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBC10u;
            // 0x2ebc14: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBC1Cu;
            goto label_2ebc1c;
        }
    }
    ctx->pc = 0x2EBC18u;
    // 0x2ebc18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ebc18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ebc1c:
    // 0x2ebc1c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2ebc1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebc20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ebc20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebc24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ebc24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebc28: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC28u;
        // 0x2ebc2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBC30u;
}

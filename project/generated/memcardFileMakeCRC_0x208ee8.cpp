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

// Function: memcardFileMakeCRC
// Address: 0x208ee8 - 0x208f2c
void memcardFileMakeCRC_0x208ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("memcardFileMakeCRC_0x208ee8");
#endif

    switch (ctx->pc) {
        case 0x208f10u: goto label_208f10;
        default: break;
    }

    ctx->pc = 0x208ee8u;

    // 0x208ee8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x208ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x208eec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x208eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x208ef0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x208ef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ef4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x208ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x208ef8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x208ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x208efc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x208efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208f00: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x208f00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x208f04: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x208f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x208f08: 0xc0acf40  jal         func_2B3D00
    ctx->pc = 0x208F08u;
    SET_GPR_U32(ctx, 31, 0x208F10u);
    ctx->pc = 0x208F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208F08u;
    // 0x208f0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3D00u, 0x208F08u, 0x208F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208F10u;
label_208f10:
    // 0x208f10: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x208f10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x208f14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x208f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x208f18: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x208f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x208f1c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x208f1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208f20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x208f20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208f24: 0x3e00008  jr          $ra
    ctx->pc = 0x208F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F24u;
        // 0x208f28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208F2Cu;
}

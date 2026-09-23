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

// Function: mcardFileRead
// Address: 0x208da0 - 0x208e04
void mcardFileRead_0x208da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcardFileRead_0x208da0");
#endif

    switch (ctx->pc) {
        case 0x208dd4u: goto label_208dd4;
        default: break;
    }

    ctx->pc = 0x208da0u;

    // 0x208da0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x208da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x208da4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x208da4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208da8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x208da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x208dac: 0x3c0401fb  lui         $a0, 0x1FB
    ctx->pc = 0x208dacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)507 << 16));
    // 0x208db0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x208db0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208db4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x208db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x208db8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x208db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x208dbc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x208dbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208dc0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x208dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208dc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x208dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x208dc8: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x208dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x208dcc: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x208DCCu;
    SET_GPR_U32(ctx, 31, 0x208DD4u);
    ctx->pc = 0x208DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208DCCu;
    // 0x208dd0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x208DCCu, 0x208DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208DD4u;
label_208dd4:
    // 0x208dd4: 0xaf929c18  sw          $s2, -0x63E8($gp)
    ctx->pc = 0x208dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941720), GPR_U32(ctx, 18));
    // 0x208dd8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x208dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x208ddc: 0xaf909c1c  sw          $s0, -0x63E4($gp)
    ctx->pc = 0x208ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941724), GPR_U32(ctx, 16));
    // 0x208de0: 0xaf91b680  sw          $s1, -0x4980($gp)
    ctx->pc = 0x208de0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948480), GPR_U32(ctx, 17));
    // 0x208de4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x208de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x208de8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x208de8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x208dec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x208decu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208df0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x208df0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208df4: 0xaf839bec  sw          $v1, -0x6414($gp)
    ctx->pc = 0x208df4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 3));
    // 0x208df8: 0xaf809be8  sw          $zero, -0x6418($gp)
    ctx->pc = 0x208df8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941672), GPR_U32(ctx, 0));
    // 0x208dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x208DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DFCu;
        // 0x208e00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208E04u;
}

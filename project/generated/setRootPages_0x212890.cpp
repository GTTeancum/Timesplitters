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

// Function: setRootPages
// Address: 0x212890 - 0x21292c
void setRootPages_0x212890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setRootPages_0x212890");
#endif

    switch (ctx->pc) {
        case 0x212918u: goto label_212918;
        default: break;
    }

    ctx->pc = 0x212890u;

    // 0x212890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x212890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x212894: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x212894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x212898: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x212898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21289c: 0x3c0301fb  lui         $v1, 0x1FB
    ctx->pc = 0x21289cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)507 << 16));
    // 0x2128a0: 0x828018  mult        $s0, $a0, $v0
    ctx->pc = 0x2128a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2128a4: 0x24633240  addiu       $v1, $v1, 0x3240
    ctx->pc = 0x2128a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12864));
    // 0x2128a8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x2128a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x2128ac: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x2128acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x2128b0: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x2128b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x2128b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2128b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2128b8: 0x2484aaf0  addiu       $a0, $a0, -0x5510
    ctx->pc = 0x2128b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945520));
    // 0x2128bc: 0x24a5aa50  addiu       $a1, $a1, -0x55B0
    ctx->pc = 0x2128bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945360));
    // 0x2128c0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2128c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2128c4: 0x24c6aae0  addiu       $a2, $a2, -0x5520
    ctx->pc = 0x2128c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945504));
    // 0x2128c8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2128c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2128cc: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x2128ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x2128d0: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x2128d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x2128d4: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x2128d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x2128d8: 0xae050020  sw          $a1, 0x20($s0)
    ctx->pc = 0x2128d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 5));
    // 0x2128dc: 0x2442ab00  addiu       $v0, $v0, -0x5500
    ctx->pc = 0x2128dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945536));
    // 0x2128e0: 0xae060024  sw          $a2, 0x24($s0)
    ctx->pc = 0x2128e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 6));
    // 0x2128e4: 0x24e7aad0  addiu       $a3, $a3, -0x5530
    ctx->pc = 0x2128e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945488));
    // 0x2128e8: 0x2508aa40  addiu       $t0, $t0, -0x55C0
    ctx->pc = 0x2128e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294945344));
    // 0x2128ec: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2128ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2128f0: 0x26040034  addiu       $a0, $s0, 0x34
    ctx->pc = 0x2128f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x2128f4: 0xae070028  sw          $a3, 0x28($s0)
    ctx->pc = 0x2128f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 7));
    // 0x2128f8: 0xae08002c  sw          $t0, 0x2C($s0)
    ctx->pc = 0x2128f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 8));
    // 0x2128fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2128fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212900: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x212900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x212904: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x212904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x212908: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x212908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x21290c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x21290cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x212910: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x212910u;
    SET_GPR_U32(ctx, 31, 0x212918u);
    ctx->pc = 0x212914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212910u;
    // 0x212914: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x212910u, 0x212918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212918u;
label_212918:
    // 0x212918: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x212918u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x21291c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21291cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212920: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212924: 0x3e00008  jr          $ra
    ctx->pc = 0x212924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212924u;
        // 0x212928: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21292Cu;
}

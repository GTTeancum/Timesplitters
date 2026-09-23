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

// Function: resetPlayerGun
// Address: 0x291138 - 0x2911e0
void resetPlayerGun_0x291138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("resetPlayerGun_0x291138");
#endif

    switch (ctx->pc) {
        case 0x2911c0u: goto label_2911c0;
        default: break;
    }

    ctx->pc = 0x291138u;

    // 0x291138: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x291138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29113c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x29113cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x291140: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x291140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x291144: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x291144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291148: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x291148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29114c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29114cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291150: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x291150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x291154: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x291154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291158: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x291158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x29115c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x29115cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x291160: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x291160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x291164: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x291164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x291168: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x291168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x29116c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x29116cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x291170: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x291170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x291174: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x291174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
    // 0x291178: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x291178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x29117c: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x29117cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x291180: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x291180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x291184: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x291184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x291188: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x291188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x29118c: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x29118cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x291190: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x291190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x291194: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x291194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x291198: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x291198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x29119c: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x29119cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x2911a0: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x2911a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x2911a4: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2911a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2911a8: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x2911a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x2911ac: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x2911acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x2911b0: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x2911b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x2911b4: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x2911b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x2911b8: 0xc0a441c  jal         func_291070
    ctx->pc = 0x2911B8u;
    SET_GPR_U32(ctx, 31, 0x2911C0u);
    ctx->pc = 0x2911BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2911B8u;
    // 0x2911bc: 0xae03009c  sw          $v1, 0x9C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291070u, 0x2911B8u, 0x2911C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2911C0u;
label_2911c0:
    // 0x2911c0: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x2911c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2911c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2911c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2911c8: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x2911c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    // 0x2911cc: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x2911ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x2911d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2911d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2911d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2911d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2911d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2911D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2911DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2911D8u;
        // 0x2911dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2911D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2911E0u;
}

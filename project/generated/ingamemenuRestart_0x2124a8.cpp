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

// Function: ingamemenuRestart
// Address: 0x2124a8 - 0x21251c
void ingamemenuRestart_0x2124a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ingamemenuRestart_0x2124a8");
#endif

    switch (ctx->pc) {
        case 0x2124bcu: goto label_2124bc;
        case 0x2124d4u: goto label_2124d4;
        case 0x2124ecu: goto label_2124ec;
        case 0x212504u: goto label_212504;
        default: break;
    }

    ctx->pc = 0x2124a8u;

    // 0x2124a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2124a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2124ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2124acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2124b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2124b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2124b4: 0xc08b8d4  jal         func_22E350
    ctx->pc = 0x2124B4u;
    SET_GPR_U32(ctx, 31, 0x2124BCu);
    ctx->pc = 0x2124B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2124B4u;
    // 0x2124b8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E350u, 0x2124B4u, 0x2124BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2124BCu;
label_2124bc:
    // 0x2124bc: 0x3c026464  lui         $v0, 0x6464
    ctx->pc = 0x2124bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25700 << 16));
    // 0x2124c0: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x2124c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2124c4: 0x34426480  ori         $v0, $v0, 0x6480
    ctx->pc = 0x2124c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25728);
    // 0x2124c8: 0xaf83a020  sw          $v1, -0x5FE0($gp)
    ctx->pc = 0x2124c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942752), GPR_U32(ctx, 3));
    // 0x2124cc: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x2124CCu;
    SET_GPR_U32(ctx, 31, 0x2124D4u);
    ctx->pc = 0x2124D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2124CCu;
    // 0x2124d0: 0xaf82a01c  sw          $v0, -0x5FE4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942748), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x2124CCu, 0x2124D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2124D4u;
label_2124d4:
    // 0x2124d4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2124d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2124d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2124d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2124dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2124dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2124e0: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x2124e0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x2124e4: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x2124E4u;
    SET_GPR_U32(ctx, 31, 0x2124ECu);
    ctx->pc = 0x2124E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2124E4u;
    // 0x2124e8: 0xaf83a024  sw          $v1, -0x5FDC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942756), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x2124E4u, 0x2124ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2124ECu;
label_2124ec:
    // 0x2124ec: 0x3c0401fb  lui         $a0, 0x1FB
    ctx->pc = 0x2124ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)507 << 16));
    // 0x2124f0: 0xaf90a028  sw          $s0, -0x5FD8($gp)
    ctx->pc = 0x2124f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942760), GPR_U32(ctx, 16));
    // 0x2124f4: 0x24843240  addiu       $a0, $a0, 0x3240
    ctx->pc = 0x2124f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12864));
    // 0x2124f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2124f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2124fc: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2124FCu;
    SET_GPR_U32(ctx, 31, 0x212504u);
    ctx->pc = 0x212500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2124FCu;
    // 0x212500: 0x24060170  addiu       $a2, $zero, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2124FCu, 0x212504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212504u;
label_212504:
    // 0x212504: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x212504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x212508: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x212508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21250c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21250cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212510: 0xaf83b688  sw          $v1, -0x4978($gp)
    ctx->pc = 0x212510u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948488), GPR_U32(ctx, 3));
    // 0x212514: 0x3e00008  jr          $ra
    ctx->pc = 0x212514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212514u;
        // 0x212518: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21251Cu;
}

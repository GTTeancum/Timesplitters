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

// Function: bgReset
// Address: 0x256750 - 0x2567f4
void bgReset_0x256750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgReset_0x256750");
#endif

    switch (ctx->pc) {
        case 0x2567b8u: goto label_2567b8;
        case 0x2567d8u: goto label_2567d8;
        case 0x2567e0u: goto label_2567e0;
        case 0x2567e8u: goto label_2567e8;
        default: break;
    }

    ctx->pc = 0x256750u;

    // 0x256750: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x256750u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x256754: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x256754u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x256758: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x256758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25675c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x25675cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x256760: 0x24c47340  addiu       $a0, $a2, 0x7340
    ctx->pc = 0x256760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 29504));
    // 0x256764: 0x8f889f70  lw          $t0, -0x6090($gp)
    ctx->pc = 0x256764u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x256768: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x256768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x25676c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x25676cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x35734Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x35734Cu, _value); } while (0);
    // 0x256770: 0x24a27330  addiu       $v0, $a1, 0x7330
    ctx->pc = 0x256770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 29488));
    // 0x256774: 0xaca07330  sw          $zero, 0x7330($a1)
    ctx->pc = 0x256774u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x357330u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x357330u, _value); } while (0);
    // 0x256778: 0xacc37340  sw          $v1, 0x7340($a2)
    ctx->pc = 0x256778u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x357340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x357340u, _value); } while (0);
    // 0x25677c: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x25677cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x256780: 0xaf80a238  sw          $zero, -0x5DC8($gp)
    ctx->pc = 0x256780u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943288), GPR_U32(ctx, 0));
    // 0x256784: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x256784u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x35733Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x35733Cu, _value); } while (0);
    // 0x256788: 0xaf80a234  sw          $zero, -0x5DCC($gp)
    ctx->pc = 0x256788u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943284), GPR_U32(ctx, 0));
    // 0x25678c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x25678cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x357334u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x357334u, _value); } while (0);
    // 0x256790: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x256790u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x357338u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x357338u, _value); } while (0);
    // 0x256794: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x256794u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x357344u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x357344u, _value); } while (0);
    // 0x256798: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x256798u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x357348u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x357348u, _value); } while (0);
    // 0x25679c: 0xaf80a240  sw          $zero, -0x5DC0($gp)
    ctx->pc = 0x25679cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943296), GPR_U32(ctx, 0));
    // 0x2567a0: 0xaf80a244  sw          $zero, -0x5DBC($gp)
    ctx->pc = 0x2567a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943300), GPR_U32(ctx, 0));
    // 0x2567a4: 0xaf80a248  sw          $zero, -0x5DB8($gp)
    ctx->pc = 0x2567a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943304), GPR_U32(ctx, 0));
    // 0x2567a8: 0x15070005  bne         $t0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2567A8u;
    {
        const bool branch_taken_0x2567a8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        ctx->pc = 0x2567ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2567A8u;
        // 0x2567ac: 0xaf80b334  sw          $zero, -0x4CCC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947636), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2567a8) {
            ctx->pc = 0x2567C0u;
            goto label_2567c0;
        }
    }
    ctx->pc = 0x2567B0u;
    // 0x2567b0: 0xc095398  jal         func_254E60
    ctx->pc = 0x2567B0u;
    SET_GPR_U32(ctx, 31, 0x2567B8u);
    ctx->pc = 0x254E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E60u, 0x2567B0u, 0x2567B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2567B8u;
label_2567b8:
    // 0x2567b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2567B8u;
    {
        const bool branch_taken_0x2567b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2567b8) {
            ctx->pc = 0x2567E0u;
            goto label_2567e0;
        }
    }
    ctx->pc = 0x2567C0u;
label_2567c0:
    // 0x2567c0: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2567c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2567c4: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x2567c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x2567c8: 0x24a52640  addiu       $a1, $a1, 0x2640
    ctx->pc = 0x2567c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9792));
    // 0x2567cc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2567ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2567d0: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x2567D0u;
    SET_GPR_U32(ctx, 31, 0x2567D8u);
    ctx->pc = 0x2567D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2567D0u;
    // 0x2567d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x2567D0u, 0x2567D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2567D8u;
label_2567d8:
    // 0x2567d8: 0xc094ee2  jal         func_253B88
    ctx->pc = 0x2567D8u;
    SET_GPR_U32(ctx, 31, 0x2567E0u);
    ctx->pc = 0x2567DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2567D8u;
    // 0x2567dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B88u, 0x2567D8u, 0x2567E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2567E0u;
label_2567e0:
    // 0x2567e0: 0xc09599c  jal         func_256670
    ctx->pc = 0x2567E0u;
    SET_GPR_U32(ctx, 31, 0x2567E8u);
    ctx->pc = 0x256670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256670u, 0x2567E0u, 0x2567E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2567E8u;
label_2567e8:
    // 0x2567e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2567e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2567ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2567ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2567F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2567ECu;
        // 0x2567f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2567ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2567F4u;
}

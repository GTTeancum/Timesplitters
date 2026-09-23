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

// Function: propRestart
// Address: 0x266ec0 - 0x26701c
void propRestart_0x266ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propRestart_0x266ec0");
#endif

    switch (ctx->pc) {
        case 0x266f08u: goto label_266f08;
        case 0x266f1cu: goto label_266f1c;
        case 0x266f30u: goto label_266f30;
        case 0x266f44u: goto label_266f44;
        case 0x266f58u: goto label_266f58;
        case 0x266f6cu: goto label_266f6c;
        case 0x266f88u: goto label_266f88;
        case 0x266f98u: goto label_266f98;
        case 0x266fa8u: goto label_266fa8;
        case 0x266fb8u: goto label_266fb8;
        case 0x266fc8u: goto label_266fc8;
        case 0x266fd8u: goto label_266fd8;
        case 0x266fe8u: goto label_266fe8;
        case 0x266ffcu: goto label_266ffc;
        case 0x26700cu: goto label_26700c;
        default: break;
    }

    ctx->pc = 0x266ec0u;

    // 0x266ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x266ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x266ec4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x266ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x266ec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x266ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x266ecc: 0x2484df30  addiu       $a0, $a0, -0x20D0
    ctx->pc = 0x266eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958896));
    // 0x266ed0: 0xaf80b15c  sw          $zero, -0x4EA4($gp)
    ctx->pc = 0x266ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947164), GPR_U32(ctx, 0));
    // 0x266ed4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x266ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266ed8: 0xaf80b160  sw          $zero, -0x4EA0($gp)
    ctx->pc = 0x266ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947168), GPR_U32(ctx, 0));
    // 0x266edc: 0x24060960  addiu       $a2, $zero, 0x960
    ctx->pc = 0x266edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2400));
    // 0x266ee0: 0xaf80b084  sw          $zero, -0x4F7C($gp)
    ctx->pc = 0x266ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946948), GPR_U32(ctx, 0));
    // 0x266ee4: 0xaf80b08c  sw          $zero, -0x4F74($gp)
    ctx->pc = 0x266ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946956), GPR_U32(ctx, 0));
    // 0x266ee8: 0xaf80b098  sw          $zero, -0x4F68($gp)
    ctx->pc = 0x266ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946968), GPR_U32(ctx, 0));
    // 0x266eec: 0xaf80b0ac  sw          $zero, -0x4F54($gp)
    ctx->pc = 0x266eecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946988), GPR_U32(ctx, 0));
    // 0x266ef0: 0xaf80b0a4  sw          $zero, -0x4F5C($gp)
    ctx->pc = 0x266ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946980), GPR_U32(ctx, 0));
    // 0x266ef4: 0xaf80b8f8  sw          $zero, -0x4708($gp)
    ctx->pc = 0x266ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949112), GPR_U32(ctx, 0));
    // 0x266ef8: 0xaf80b8fc  sw          $zero, -0x4704($gp)
    ctx->pc = 0x266ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949116), GPR_U32(ctx, 0));
    // 0x266efc: 0xaf80b900  sw          $zero, -0x4700($gp)
    ctx->pc = 0x266efcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949120), GPR_U32(ctx, 0));
    // 0x266f00: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x266F00u;
    SET_GPR_U32(ctx, 31, 0x266F08u);
    ctx->pc = 0x266F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266F00u;
    // 0x266f04: 0xaf80b904  sw          $zero, -0x46FC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949124), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x266F00u, 0x266F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266F08u;
label_266f08:
    // 0x266f08: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x266f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x266f0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x266f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266f10: 0x2484e890  addiu       $a0, $a0, -0x1770
    ctx->pc = 0x266f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961296));
    // 0x266f14: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x266F14u;
    SET_GPR_U32(ctx, 31, 0x266F1Cu);
    ctx->pc = 0x266F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266F14u;
    // 0x266f18: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x266F14u, 0x266F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266F1Cu;
label_266f1c:
    // 0x266f1c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x266f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x266f20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x266f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266f24: 0x2484e8e0  addiu       $a0, $a0, -0x1720
    ctx->pc = 0x266f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961376));
    // 0x266f28: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x266F28u;
    SET_GPR_U32(ctx, 31, 0x266F30u);
    ctx->pc = 0x266F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266F28u;
    // 0x266f2c: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x266F28u, 0x266F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266F30u;
label_266f30:
    // 0x266f30: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x266f30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x266f34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x266f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266f38: 0x2484e930  addiu       $a0, $a0, -0x16D0
    ctx->pc = 0x266f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961456));
    // 0x266f3c: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x266F3Cu;
    SET_GPR_U32(ctx, 31, 0x266F44u);
    ctx->pc = 0x266F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266F3Cu;
    // 0x266f40: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x266F3Cu, 0x266F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266F44u;
label_266f44:
    // 0x266f44: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x266f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x266f48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x266f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266f4c: 0x2484e980  addiu       $a0, $a0, -0x1680
    ctx->pc = 0x266f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961536));
    // 0x266f50: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x266F50u;
    SET_GPR_U32(ctx, 31, 0x266F58u);
    ctx->pc = 0x266F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266F50u;
    // 0x266f54: 0x240601e0  addiu       $a2, $zero, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x266F50u, 0x266F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266F58u;
label_266f58:
    // 0x266f58: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x266f58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x266f5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x266f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266f60: 0x2484eb60  addiu       $a0, $a0, -0x14A0
    ctx->pc = 0x266f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962016));
    // 0x266f64: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x266F64u;
    SET_GPR_U32(ctx, 31, 0x266F6Cu);
    ctx->pc = 0x266F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266F64u;
    // 0x266f68: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x266F64u, 0x266F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266F6Cu;
label_266f6c:
    // 0x266f6c: 0x8f83b078  lw          $v1, -0x4F88($gp)
    ctx->pc = 0x266f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946936)));
    // 0x266f70: 0x24060250  addiu       $a2, $zero, 0x250
    ctx->pc = 0x266f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    // 0x266f74: 0x8f84b07c  lw          $a0, -0x4F84($gp)
    ctx->pc = 0x266f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946940)));
    // 0x266f78: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x266f78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x266f7c: 0x3012  mflo        $a2
    ctx->pc = 0x266f7cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x266f80: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x266F80u;
    SET_GPR_U32(ctx, 31, 0x266F88u);
    ctx->pc = 0x266F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266F80u;
    // 0x266f84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x266F80u, 0x266F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266F88u;
label_266f88:
    // 0x266f88: 0x8f84b080  lw          $a0, -0x4F80($gp)
    ctx->pc = 0x266f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946944)));
    // 0x266f8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x266f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266f90: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x266F90u;
    SET_GPR_U32(ctx, 31, 0x266F98u);
    ctx->pc = 0x266F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266F90u;
    // 0x266f94: 0x24060260  addiu       $a2, $zero, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x266F90u, 0x266F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266F98u;
label_266f98:
    // 0x266f98: 0x8f84b088  lw          $a0, -0x4F78($gp)
    ctx->pc = 0x266f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946952)));
    // 0x266f9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x266f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266fa0: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x266FA0u;
    SET_GPR_U32(ctx, 31, 0x266FA8u);
    ctx->pc = 0x266FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266FA0u;
    // 0x266fa4: 0x24060230  addiu       $a2, $zero, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x266FA0u, 0x266FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266FA8u;
label_266fa8:
    // 0x266fa8: 0x8f84b090  lw          $a0, -0x4F70($gp)
    ctx->pc = 0x266fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946960)));
    // 0x266fac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x266facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266fb0: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x266FB0u;
    SET_GPR_U32(ctx, 31, 0x266FB8u);
    ctx->pc = 0x266FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266FB0u;
    // 0x266fb4: 0x24060db0  addiu       $a2, $zero, 0xDB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x266FB0u, 0x266FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266FB8u;
label_266fb8:
    // 0x266fb8: 0x8f84b094  lw          $a0, -0x4F6C($gp)
    ctx->pc = 0x266fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946964)));
    // 0x266fbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x266fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266fc0: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x266FC0u;
    SET_GPR_U32(ctx, 31, 0x266FC8u);
    ctx->pc = 0x266FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266FC0u;
    // 0x266fc4: 0x24060a90  addiu       $a2, $zero, 0xA90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x266FC0u, 0x266FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266FC8u;
label_266fc8:
    // 0x266fc8: 0x8f84b09c  lw          $a0, -0x4F64($gp)
    ctx->pc = 0x266fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946972)));
    // 0x266fcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x266fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266fd0: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x266FD0u;
    SET_GPR_U32(ctx, 31, 0x266FD8u);
    ctx->pc = 0x266FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266FD0u;
    // 0x266fd4: 0x24060690  addiu       $a2, $zero, 0x690 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x266FD0u, 0x266FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266FD8u;
label_266fd8:
    // 0x266fd8: 0x8f84b0a8  lw          $a0, -0x4F58($gp)
    ctx->pc = 0x266fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946984)));
    // 0x266fdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x266fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266fe0: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x266FE0u;
    SET_GPR_U32(ctx, 31, 0x266FE8u);
    ctx->pc = 0x266FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266FE0u;
    // 0x266fe4: 0x24063840  addiu       $a2, $zero, 0x3840 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x266FE0u, 0x266FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266FE8u;
label_266fe8:
    // 0x266fe8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x266fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x266fec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x266fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266ff0: 0x2484dec0  addiu       $a0, $a0, -0x2140
    ctx->pc = 0x266ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958784));
    // 0x266ff4: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x266FF4u;
    SET_GPR_U32(ctx, 31, 0x266FFCu);
    ctx->pc = 0x266FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266FF4u;
    // 0x266ff8: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x266FF4u, 0x266FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266FFCu;
label_266ffc:
    // 0x266ffc: 0x8f84b0a0  lw          $a0, -0x4F60($gp)
    ctx->pc = 0x266ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946976)));
    // 0x267000: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x267000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267004: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x267004u;
    SET_GPR_U32(ctx, 31, 0x26700Cu);
    ctx->pc = 0x267008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267004u;
    // 0x267008: 0x240612c0  addiu       $a2, $zero, 0x12C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x267004u, 0x26700Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26700Cu;
label_26700c:
    // 0x26700c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26700cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267010: 0xaf80a364  sw          $zero, -0x5C9C($gp)
    ctx->pc = 0x267010u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943588), GPR_U32(ctx, 0));
    // 0x267014: 0x8099b58  j           func_266D60
    ctx->pc = 0x267014u;
    ctx->pc = 0x267018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267014u;
    // 0x267018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266D60u;
    propRestartWallMem_0x266d60(rdram, ctx, runtime); return;
    ctx->pc = 0x26701Cu;
}

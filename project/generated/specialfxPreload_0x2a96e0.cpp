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

// Function: specialfxPreload
// Address: 0x2a96e0 - 0x2a9780
void specialfxPreload_0x2a96e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxPreload_0x2a96e0");
#endif

    switch (ctx->pc) {
        case 0x2a96f0u: goto label_2a96f0;
        case 0x2a96f8u: goto label_2a96f8;
        case 0x2a9700u: goto label_2a9700;
        case 0x2a9708u: goto label_2a9708;
        case 0x2a9710u: goto label_2a9710;
        case 0x2a9718u: goto label_2a9718;
        case 0x2a9720u: goto label_2a9720;
        case 0x2a9728u: goto label_2a9728;
        case 0x2a9730u: goto label_2a9730;
        case 0x2a9738u: goto label_2a9738;
        case 0x2a9740u: goto label_2a9740;
        case 0x2a9748u: goto label_2a9748;
        case 0x2a9750u: goto label_2a9750;
        case 0x2a9758u: goto label_2a9758;
        case 0x2a9768u: goto label_2a9768;
        default: break;
    }

    ctx->pc = 0x2a96e0u;

    // 0x2a96e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a96e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a96e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a96e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a96e8: 0xc099c88  jal         func_267220
    ctx->pc = 0x2A96E8u;
    SET_GPR_U32(ctx, 31, 0x2A96F0u);
    ctx->pc = 0x2A96ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A96E8u;
    // 0x2a96ec: 0x24040126  addiu       $a0, $zero, 0x126 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x2A96E8u, 0x2A96F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A96F0u;
label_2a96f0:
    // 0x2a96f0: 0xc099c88  jal         func_267220
    ctx->pc = 0x2A96F0u;
    SET_GPR_U32(ctx, 31, 0x2A96F8u);
    ctx->pc = 0x2A96F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A96F0u;
    // 0x2a96f4: 0x24040127  addiu       $a0, $zero, 0x127 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x2A96F0u, 0x2A96F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A96F8u;
label_2a96f8:
    // 0x2a96f8: 0xc099c88  jal         func_267220
    ctx->pc = 0x2A96F8u;
    SET_GPR_U32(ctx, 31, 0x2A9700u);
    ctx->pc = 0x2A96FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A96F8u;
    // 0x2a96fc: 0x24040128  addiu       $a0, $zero, 0x128 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x2A96F8u, 0x2A9700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9700u;
label_2a9700:
    // 0x2a9700: 0xc099c88  jal         func_267220
    ctx->pc = 0x2A9700u;
    SET_GPR_U32(ctx, 31, 0x2A9708u);
    ctx->pc = 0x2A9704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9700u;
    // 0x2a9704: 0x24040129  addiu       $a0, $zero, 0x129 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 297));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x2A9700u, 0x2A9708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9708u;
label_2a9708:
    // 0x2a9708: 0xc099c88  jal         func_267220
    ctx->pc = 0x2A9708u;
    SET_GPR_U32(ctx, 31, 0x2A9710u);
    ctx->pc = 0x2A970Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9708u;
    // 0x2a970c: 0x2404012a  addiu       $a0, $zero, 0x12A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x2A9708u, 0x2A9710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9710u;
label_2a9710:
    // 0x2a9710: 0xc099c88  jal         func_267220
    ctx->pc = 0x2A9710u;
    SET_GPR_U32(ctx, 31, 0x2A9718u);
    ctx->pc = 0x2A9714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9710u;
    // 0x2a9714: 0x2404012b  addiu       $a0, $zero, 0x12B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x2A9710u, 0x2A9718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9718u;
label_2a9718:
    // 0x2a9718: 0xc099c88  jal         func_267220
    ctx->pc = 0x2A9718u;
    SET_GPR_U32(ctx, 31, 0x2A9720u);
    ctx->pc = 0x2A971Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9718u;
    // 0x2a971c: 0x2404012c  addiu       $a0, $zero, 0x12C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x2A9718u, 0x2A9720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9720u;
label_2a9720:
    // 0x2a9720: 0xc099c88  jal         func_267220
    ctx->pc = 0x2A9720u;
    SET_GPR_U32(ctx, 31, 0x2A9728u);
    ctx->pc = 0x2A9724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9720u;
    // 0x2a9724: 0x2404012d  addiu       $a0, $zero, 0x12D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x2A9720u, 0x2A9728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9728u;
label_2a9728:
    // 0x2a9728: 0xc099c88  jal         func_267220
    ctx->pc = 0x2A9728u;
    SET_GPR_U32(ctx, 31, 0x2A9730u);
    ctx->pc = 0x2A972Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9728u;
    // 0x2a972c: 0x2404012e  addiu       $a0, $zero, 0x12E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x2A9728u, 0x2A9730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9730u;
label_2a9730:
    // 0x2a9730: 0xc099c88  jal         func_267220
    ctx->pc = 0x2A9730u;
    SET_GPR_U32(ctx, 31, 0x2A9738u);
    ctx->pc = 0x2A9734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9730u;
    // 0x2a9734: 0x2404012f  addiu       $a0, $zero, 0x12F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x2A9730u, 0x2A9738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9738u;
label_2a9738:
    // 0x2a9738: 0xc099c88  jal         func_267220
    ctx->pc = 0x2A9738u;
    SET_GPR_U32(ctx, 31, 0x2A9740u);
    ctx->pc = 0x2A973Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9738u;
    // 0x2a973c: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x2A9738u, 0x2A9740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9740u;
label_2a9740:
    // 0x2a9740: 0xc099c88  jal         func_267220
    ctx->pc = 0x2A9740u;
    SET_GPR_U32(ctx, 31, 0x2A9748u);
    ctx->pc = 0x2A9744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9740u;
    // 0x2a9744: 0x24040131  addiu       $a0, $zero, 0x131 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x2A9740u, 0x2A9748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9748u;
label_2a9748:
    // 0x2a9748: 0xc099c88  jal         func_267220
    ctx->pc = 0x2A9748u;
    SET_GPR_U32(ctx, 31, 0x2A9750u);
    ctx->pc = 0x2A974Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9748u;
    // 0x2a974c: 0x24040132  addiu       $a0, $zero, 0x132 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 306));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x2A9748u, 0x2A9750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9750u;
label_2a9750:
    // 0x2a9750: 0xc099c88  jal         func_267220
    ctx->pc = 0x2A9750u;
    SET_GPR_U32(ctx, 31, 0x2A9758u);
    ctx->pc = 0x2A9754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9750u;
    // 0x2a9754: 0x24040133  addiu       $a0, $zero, 0x133 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 307));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x2A9750u, 0x2A9758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9758u;
label_2a9758:
    // 0x2a9758: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2a9758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2a975c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a975cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9760: 0xc0870fa  jal         func_21C3E8
    ctx->pc = 0x2A9760u;
    SET_GPR_U32(ctx, 31, 0x2A9768u);
    ctx->pc = 0x2A9764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9760u;
    // 0x2a9764: 0x24849690  addiu       $a0, $a0, -0x6970 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C3E8u, 0x2A9760u, 0x2A9768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9768u;
label_2a9768:
    // 0x2a9768: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2a9768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2a976c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a976cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9770: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a9770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9774: 0x248496b0  addiu       $a0, $a0, -0x6950
    ctx->pc = 0x2a9774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940336));
    // 0x2a9778: 0x80870fa  j           func_21C3E8
    ctx->pc = 0x2A9778u;
    ctx->pc = 0x2A977Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9778u;
    // 0x2a977c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C3E8u;
    preloadAddTexName_0x21c3e8(rdram, ctx, runtime); return;
    ctx->pc = 0x2A9780u;
}

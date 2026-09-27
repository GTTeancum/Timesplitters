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

// Function: sceVu0CameraMatrix
// Address: 0x2d6498 - 0x2d6548
void sceVu0CameraMatrix_0x2d6498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVu0CameraMatrix_0x2d6498");
#endif

    switch (ctx->pc) {
        case 0x2d64ccu: goto label_2d64cc;
        case 0x2d64e0u: goto label_2d64e0;
        case 0x2d64ecu: goto label_2d64ec;
        case 0x2d64fcu: goto label_2d64fc;
        case 0x2d650cu: goto label_2d650c;
        case 0x2d651cu: goto label_2d651c;
        case 0x2d6528u: goto label_2d6528;
        default: break;
    }

    ctx->pc = 0x2d6498u;

    // 0x2d6498: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2d6498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2d649c: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2d649cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2d64a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2d64a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d64a4: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x2d64a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x2d64a8: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2d64a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2d64ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2d64acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d64b0: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x2d64b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2d64b4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2d64b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d64b8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2d64b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d64bc: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2d64bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2d64c0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2d64c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2d64c4: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x2D64C4u;
    SET_GPR_U32(ctx, 31, 0x2D64CCu);
    ctx->pc = 0x2D64C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D64C4u;
    // 0x2d64c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x2D64C4u, 0x2D64CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D64CCu;
label_2d64cc:
    // 0x2d64cc: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2d64ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d64d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d64d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d64d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d64d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d64d8: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D64D8u;
    SET_GPR_U32(ctx, 31, 0x2D64E0u);
    ctx->pc = 0x2D64DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D64D8u;
    // 0x2d64dc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D64D8u, 0x2D64E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D64E0u;
label_2d64e0:
    // 0x2d64e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d64e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d64e4: 0xc0b57ca  jal         func_2D5F28
    ctx->pc = 0x2D64E4u;
    SET_GPR_U32(ctx, 31, 0x2D64ECu);
    ctx->pc = 0x2D64E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D64E4u;
    // 0x2d64e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5F28u, 0x2D64E4u, 0x2D64ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D64ECu;
label_2d64ec:
    // 0x2d64ec: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2d64ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d64f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d64f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d64f4: 0xc0b57ca  jal         func_2D5F28
    ctx->pc = 0x2D64F4u;
    SET_GPR_U32(ctx, 31, 0x2D64FCu);
    ctx->pc = 0x2D64F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D64F4u;
    // 0x2d64f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5F28u, 0x2D64F4u, 0x2D64FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D64FCu;
label_2d64fc:
    // 0x2d64fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d64fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6500: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2d6500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d6504: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D6504u;
    SET_GPR_U32(ctx, 31, 0x2D650Cu);
    ctx->pc = 0x2D6508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6504u;
    // 0x2d6508: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D6504u, 0x2D650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D650Cu;
label_2d650c:
    // 0x2d650c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2d650cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6510: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d6510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6514: 0xc0b5838  jal         func_2D60E0
    ctx->pc = 0x2D6514u;
    SET_GPR_U32(ctx, 31, 0x2D651Cu);
    ctx->pc = 0x2D6518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6514u;
    // 0x2d6518: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D60E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D60E0u, 0x2D6514u, 0x2D651Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D651Cu;
label_2d651c:
    // 0x2d651c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d651cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6520: 0xc0b57ea  jal         func_2D5FA8
    ctx->pc = 0x2D6520u;
    SET_GPR_U32(ctx, 31, 0x2D6528u);
    ctx->pc = 0x2D6524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6520u;
    // 0x2d6524: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5FA8u, 0x2D6520u, 0x2D6528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6528u;
label_2d6528:
    // 0x2d6528: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2d6528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d652c: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2d652cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d6530: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x2d6530u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d6534: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2d6534u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d6538: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x2d6538u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d653c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2d653cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d6540: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6540u;
        // 0x2d6544: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6548u;
}

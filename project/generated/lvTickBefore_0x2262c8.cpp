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

// Function: lvTickBefore
// Address: 0x2262c8 - 0x22639c
void lvTickBefore_0x2262c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvTickBefore_0x2262c8");
#endif

    switch (ctx->pc) {
        case 0x226334u: goto label_226334;
        case 0x22633cu: goto label_22633c;
        case 0x226344u: goto label_226344;
        case 0x22634cu: goto label_22634c;
        case 0x226354u: goto label_226354;
        case 0x22635cu: goto label_22635c;
        case 0x226364u: goto label_226364;
        case 0x22636cu: goto label_22636c;
        case 0x226374u: goto label_226374;
        case 0x22637cu: goto label_22637c;
        case 0x226384u: goto label_226384;
        default: break;
    }

    ctx->pc = 0x2262c8u;

    // 0x2262c8: 0x8f829f70  lw          $v0, -0x6090($gp)
    ctx->pc = 0x2262c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2262cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2262ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2262d0: 0x2444ff9b  addiu       $a0, $v0, -0x65
    ctx->pc = 0x2262d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967195));
    // 0x2262d4: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x2262d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2262d8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2262D8u;
    {
        const bool branch_taken_0x2262d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2262DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2262D8u;
        // 0x2262dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2262d8) {
            ctx->pc = 0x22632Cu;
            goto label_22632c;
        }
    }
    ctx->pc = 0x2262E0u;
    // 0x2262e0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2262e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2262e4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2262e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2262e8: 0x24420e20  addiu       $v0, $v0, 0xE20
    ctx->pc = 0x2262e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3616));
    // 0x2262ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2262ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2262f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2262f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2262f4: 0x800008  jr          $a0
    ctx->pc = 0x2262F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2262FCu: goto label_2262fc;
            case 0x226308u: goto label_226308;
            case 0x226314u: goto label_226314;
            case 0x226320u: goto label_226320;
            case 0x226390u: goto label_226390;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2262F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2262FCu;
label_2262fc:
    // 0x2262fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2262fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226300: 0x809bd40  j           func_26F500
    ctx->pc = 0x226300u;
    ctx->pc = 0x226304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226300u;
    // 0x226304: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F500u;
    propTickBefore_0x26f500(rdram, ctx, runtime); return;
    ctx->pc = 0x226308u;
label_226308:
    // 0x226308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22630c: 0x809bd40  j           func_26F500
    ctx->pc = 0x22630Cu;
    ctx->pc = 0x226310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22630Cu;
    // 0x226310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F500u;
    propTickBefore_0x26f500(rdram, ctx, runtime); return;
    ctx->pc = 0x226314u;
label_226314:
    // 0x226314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226318: 0x809bd40  j           func_26F500
    ctx->pc = 0x226318u;
    ctx->pc = 0x22631Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226318u;
    // 0x22631c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F500u;
    propTickBefore_0x26f500(rdram, ctx, runtime); return;
    ctx->pc = 0x226320u;
label_226320:
    // 0x226320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226324: 0x809bd40  j           func_26F500
    ctx->pc = 0x226324u;
    ctx->pc = 0x226328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226324u;
    // 0x226328: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F500u;
    propTickBefore_0x26f500(rdram, ctx, runtime); return;
    ctx->pc = 0x22632Cu;
label_22632c:
    // 0x22632c: 0xc0a5984  jal         func_296610
    ctx->pc = 0x22632Cu;
    SET_GPR_U32(ctx, 31, 0x226334u);
    ctx->pc = 0x296610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296610u, 0x22632Cu, 0x226334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226334u;
label_226334:
    // 0x226334: 0xc0aa2d0  jal         func_2A8B40
    ctx->pc = 0x226334u;
    SET_GPR_U32(ctx, 31, 0x22633Cu);
    ctx->pc = 0x2A8B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8B40u, 0x226334u, 0x22633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22633Cu;
label_22633c:
    // 0x22633c: 0xc0aa13c  jal         func_2A84F0
    ctx->pc = 0x22633Cu;
    SET_GPR_U32(ctx, 31, 0x226344u);
    ctx->pc = 0x2A84F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A84F0u, 0x22633Cu, 0x226344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226344u;
label_226344:
    // 0x226344: 0xc095b16  jal         func_256C58
    ctx->pc = 0x226344u;
    SET_GPR_U32(ctx, 31, 0x22634Cu);
    ctx->pc = 0x256C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256C58u, 0x226344u, 0x22634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22634Cu;
label_22634c:
    // 0x22634c: 0xc0aea72  jal         func_2BA9C8
    ctx->pc = 0x22634Cu;
    SET_GPR_U32(ctx, 31, 0x226354u);
    ctx->pc = 0x2BA9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA9C8u, 0x22634Cu, 0x226354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226354u;
label_226354:
    // 0x226354: 0xc09bd40  jal         func_26F500
    ctx->pc = 0x226354u;
    SET_GPR_U32(ctx, 31, 0x22635Cu);
    ctx->pc = 0x26F500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F500u, 0x226354u, 0x22635Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22635Cu;
label_22635c:
    // 0x22635c: 0xc0a2a3a  jal         func_28A8E8
    ctx->pc = 0x22635Cu;
    SET_GPR_U32(ctx, 31, 0x226364u);
    ctx->pc = 0x28A8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A8E8u, 0x22635Cu, 0x226364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226364u;
label_226364:
    // 0x226364: 0xc0a92f6  jal         func_2A4BD8
    ctx->pc = 0x226364u;
    SET_GPR_U32(ctx, 31, 0x22636Cu);
    ctx->pc = 0x2A4BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4BD8u, 0x226364u, 0x22636Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22636Cu;
label_22636c:
    // 0x22636c: 0xc0a5680  jal         func_295A00
    ctx->pc = 0x22636Cu;
    SET_GPR_U32(ctx, 31, 0x226374u);
    ctx->pc = 0x295A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295A00u, 0x22636Cu, 0x226374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226374u;
label_226374:
    // 0x226374: 0xc0ab6d4  jal         func_2ADB50
    ctx->pc = 0x226374u;
    SET_GPR_U32(ctx, 31, 0x22637Cu);
    ctx->pc = 0x2ADB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADB50u, 0x226374u, 0x22637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22637Cu;
label_22637c:
    // 0x22637c: 0xc0a6f16  jal         func_29BC58
    ctx->pc = 0x22637Cu;
    SET_GPR_U32(ctx, 31, 0x226384u);
    ctx->pc = 0x29BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29BC58u, 0x22637Cu, 0x226384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226384u;
label_226384:
    // 0x226384: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226388: 0x80a0216  j           func_280858
    ctx->pc = 0x226388u;
    ctx->pc = 0x22638Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226388u;
    // 0x22638c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280858u;
    playerAutoAimTick_0x280858(rdram, ctx, runtime); return;
    ctx->pc = 0x226390u;
label_226390:
    // 0x226390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226394: 0x3e00008  jr          $ra
    ctx->pc = 0x226394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226394u;
        // 0x226398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22639Cu;
}

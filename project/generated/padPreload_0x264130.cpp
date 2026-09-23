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

// Function: padPreload
// Address: 0x264130 - 0x2641fc
void padPreload_0x264130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("padPreload_0x264130");
#endif

    switch (ctx->pc) {
        case 0x264148u: goto label_264148;
        case 0x264160u: goto label_264160;
        case 0x264170u: goto label_264170;
        case 0x264188u: goto label_264188;
        case 0x264198u: goto label_264198;
        case 0x2641b0u: goto label_2641b0;
        case 0x2641c8u: goto label_2641c8;
        default: break;
    }

    ctx->pc = 0x264130u;

    // 0x264130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x264130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x264134: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x264134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x264138: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x264138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26413c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26413cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264140: 0xc08070e  jal         func_201C38
    ctx->pc = 0x264140u;
    SET_GPR_U32(ctx, 31, 0x264148u);
    ctx->pc = 0x264144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264140u;
    // 0x264144: 0x34840680  ori         $a0, $a0, 0x680 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1664);
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x264140u, 0x264148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264148u;
label_264148:
    // 0x264148: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x264148u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x26414c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26414cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264150: 0xaf82a2ec  sw          $v0, -0x5D14($gp)
    ctx->pc = 0x264150u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943468), GPR_U32(ctx, 2));
    // 0x264154: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x264154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264158: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x264158u;
    SET_GPR_U32(ctx, 31, 0x264160u);
    ctx->pc = 0x26415Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264158u;
    // 0x26415c: 0x34c60680  ori         $a2, $a2, 0x680 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1664);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x264158u, 0x264160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264160u;
label_264160:
    // 0x264160: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x264160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x264164: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x264164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264168: 0xc08070e  jal         func_201C38
    ctx->pc = 0x264168u;
    SET_GPR_U32(ctx, 31, 0x264170u);
    ctx->pc = 0x26416Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264168u;
    // 0x26416c: 0x348457c0  ori         $a0, $a0, 0x57C0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22464);
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x264168u, 0x264170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264170u;
label_264170:
    // 0x264170: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x264170u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x264174: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x264174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264178: 0xaf82a2f0  sw          $v0, -0x5D10($gp)
    ctx->pc = 0x264178u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943472), GPR_U32(ctx, 2));
    // 0x26417c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26417cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264180: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x264180u;
    SET_GPR_U32(ctx, 31, 0x264188u);
    ctx->pc = 0x264184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264180u;
    // 0x264184: 0x34c657c0  ori         $a2, $a2, 0x57C0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)22464);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x264180u, 0x264188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264188u;
label_264188:
    // 0x264188: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x264188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x26418c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26418cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264190: 0xc08070e  jal         func_201C38
    ctx->pc = 0x264190u;
    SET_GPR_U32(ctx, 31, 0x264198u);
    ctx->pc = 0x264194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264190u;
    // 0x264194: 0x34840680  ori         $a0, $a0, 0x680 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1664);
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x264190u, 0x264198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264198u;
label_264198:
    // 0x264198: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x264198u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x26419c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26419cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2641a0: 0xaf82a2f4  sw          $v0, -0x5D0C($gp)
    ctx->pc = 0x2641a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943476), GPR_U32(ctx, 2));
    // 0x2641a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2641a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2641a8: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2641A8u;
    SET_GPR_U32(ctx, 31, 0x2641B0u);
    ctx->pc = 0x2641ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2641A8u;
    // 0x2641ac: 0x34c60680  ori         $a2, $a2, 0x680 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1664);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2641A8u, 0x2641B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2641B0u;
label_2641b0:
    // 0x2641b0: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x2641b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2641b4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2641b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2641b8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2641B8u;
    {
        const bool branch_taken_0x2641b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2641BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2641B8u;
        // 0x2641bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2641b8) {
            ctx->pc = 0x2641DCu;
            goto label_2641dc;
        }
    }
    ctx->pc = 0x2641C0u;
    // 0x2641c0: 0xc099016  jal         func_264058
    ctx->pc = 0x2641C0u;
    SET_GPR_U32(ctx, 31, 0x2641C8u);
    ctx->pc = 0x264058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264058u, 0x2641C0u, 0x2641C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2641C8u;
label_2641c8:
    // 0x2641c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2641c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2641cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2641ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2641d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2641d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2641d4: 0x80870b6  j           func_21C2D8
    ctx->pc = 0x2641D4u;
    ctx->pc = 0x2641D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2641D4u;
    // 0x2641d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C2D8u;
    preloadAddFile_0x21c2d8(rdram, ctx, runtime); return;
    ctx->pc = 0x2641DCu;
label_2641dc:
    // 0x2641dc: 0xaf80a348  sw          $zero, -0x5CB8($gp)
    ctx->pc = 0x2641dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943560), GPR_U32(ctx, 0));
    // 0x2641e0: 0xaf80a34c  sw          $zero, -0x5CB4($gp)
    ctx->pc = 0x2641e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943564), GPR_U32(ctx, 0));
    // 0x2641e4: 0xaf80b8b0  sw          $zero, -0x4750($gp)
    ctx->pc = 0x2641e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949040), GPR_U32(ctx, 0));
    // 0x2641e8: 0xaf80b8b4  sw          $zero, -0x474C($gp)
    ctx->pc = 0x2641e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949044), GPR_U32(ctx, 0));
    // 0x2641ec: 0xaf80b8b8  sw          $zero, -0x4748($gp)
    ctx->pc = 0x2641ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949048), GPR_U32(ctx, 0));
    // 0x2641f0: 0xaf80a354  sw          $zero, -0x5CAC($gp)
    ctx->pc = 0x2641f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943572), GPR_U32(ctx, 0));
    // 0x2641f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2641F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2641F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2641F4u;
        // 0x2641f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2641F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2641FCu;
}

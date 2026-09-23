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

// Function: propDelete
// Address: 0x269340 - 0x2693c8
void propDelete_0x269340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propDelete_0x269340");
#endif

    switch (ctx->pc) {
        case 0x269364u: goto label_269364;
        case 0x26937cu: goto label_26937c;
        case 0x2693a8u: goto label_2693a8;
        default: break;
    }

    ctx->pc = 0x269340u;

    // 0x269340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x269340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x269344: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x269344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x269348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x269348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26934c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26934cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269350: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x269350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x269354: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x269354u;
    {
        const bool branch_taken_0x269354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x269354) {
            ctx->pc = 0x269358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269354u;
            // 0x269358: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26936Cu;
            goto label_26936c;
        }
    }
    ctx->pc = 0x26935Cu;
    // 0x26935c: 0xc098296  jal         func_260A58
    ctx->pc = 0x26935Cu;
    SET_GPR_U32(ctx, 31, 0x269364u);
    ctx->pc = 0x260A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A58u, 0x26935Cu, 0x269364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269364u;
label_269364:
    // 0x269364: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x269364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x269368: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x269368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_26936c:
    // 0x26936c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x26936Cu;
    {
        const bool branch_taken_0x26936c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26936c) {
            ctx->pc = 0x269370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26936Cu;
            // 0x269370: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269380u;
            goto label_269380;
        }
    }
    ctx->pc = 0x269374u;
    // 0x269374: 0xc09bd18  jal         func_26F460
    ctx->pc = 0x269374u;
    SET_GPR_U32(ctx, 31, 0x26937Cu);
    ctx->pc = 0x269378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269374u;
    // 0x269378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F460u, 0x269374u, 0x26937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26937Cu;
label_26937c:
    // 0x26937c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26937cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_269380:
    // 0x269380: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x269380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x269384: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x269384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x269388: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x269388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26938c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x26938cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x269390: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x269390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x269394: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x269394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x269398: 0x14c50003  bne         $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x269398u;
    {
        const bool branch_taken_0x269398 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x26939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269398u;
        // 0x26939c: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269398) {
            ctx->pc = 0x2693A8u;
            goto label_2693a8;
        }
    }
    ctx->pc = 0x2693A0u;
    // 0x2693a0: 0xc09a1b0  jal         func_2686C0
    ctx->pc = 0x2693A0u;
    SET_GPR_U32(ctx, 31, 0x2693A8u);
    ctx->pc = 0x2693A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2693A0u;
    // 0x2693a4: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686C0u, 0x2693A0u, 0x2693A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2693A8u;
label_2693a8:
    // 0x2693a8: 0x8f82b160  lw          $v0, -0x4EA0($gp)
    ctx->pc = 0x2693a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947168)));
    // 0x2693ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2693acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2693b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2693b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2693b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2693b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2693b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2693b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2693bc: 0xaf82b160  sw          $v0, -0x4EA0($gp)
    ctx->pc = 0x2693bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947168), GPR_U32(ctx, 2));
    // 0x2693c0: 0x809a4f2  j           func_2693C8
    ctx->pc = 0x2693C0u;
    ctx->pc = 0x2693C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2693C0u;
    // 0x2693c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2693C8u;
    propRemovePropFromCollisionList_0x2693c8(rdram, ctx, runtime); return;
    ctx->pc = 0x2693C8u;
}

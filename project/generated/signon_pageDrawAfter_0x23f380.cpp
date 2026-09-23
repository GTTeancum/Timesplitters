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

// Function: signon_pageDrawAfter
// Address: 0x23f380 - 0x23f438
void signon_pageDrawAfter_0x23f380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("signon_pageDrawAfter_0x23f380");
#endif

    switch (ctx->pc) {
        case 0x23f398u: goto label_23f398;
        default: break;
    }

    ctx->pc = 0x23f380u;

    // 0x23f380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23f380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23f384: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23f384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f388: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f38c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23f38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f390: 0xc08c32a  jal         func_230CA8
    ctx->pc = 0x23F390u;
    SET_GPR_U32(ctx, 31, 0x23F398u);
    ctx->pc = 0x23F394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F390u;
    // 0x23f394: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230CA8u, 0x23F390u, 0x23F398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F398u;
label_23f398:
    // 0x23f398: 0x8f82b7a8  lw          $v0, -0x4858($gp)
    ctx->pc = 0x23f398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948776)));
    // 0x23f39c: 0x2842ffff  slti        $v0, $v0, -0x1
    ctx->pc = 0x23f39cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x23f3a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F3A0u;
    {
        const bool branch_taken_0x23f3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3A0u;
        // 0x23f3a4: 0x9382b758  lbu         $v0, -0x48A8($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f3a0) {
            ctx->pc = 0x23F3B4u;
            goto label_23f3b4;
        }
    }
    ctx->pc = 0x23F3A8u;
    // 0x23f3a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f3ac: 0x808fca2  j           func_23F288
    ctx->pc = 0x23F3ACu;
    ctx->pc = 0x23F3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F3ACu;
    // 0x23f3b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F288u;
    soZoomGfx_0x23f288(rdram, ctx, runtime); return;
    ctx->pc = 0x23F3B4u;
label_23f3b4:
    // 0x23f3b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23F3B4u;
    {
        const bool branch_taken_0x23f3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3B4u;
        // 0x23f3b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f3b4) {
            ctx->pc = 0x23F3F0u;
            goto label_23f3f0;
        }
    }
    ctx->pc = 0x23F3BCu;
    // 0x23f3bc: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x23f3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x23f3c0: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x23f3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23f3c4: 0x24020104  addiu       $v0, $zero, 0x104
    ctx->pc = 0x23f3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x23f3c8: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x23f3c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23f3cc: 0x24631488  addiu       $v1, $v1, 0x1488
    ctx->pc = 0x23f3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5256));
    // 0x23f3d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23f3d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23f3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f3d8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23F3D8u;
    {
        const bool branch_taken_0x23f3d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3D8u;
        // 0x23f3dc: 0x9382b7a4  lbu         $v0, -0x485C($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f3d8) {
            ctx->pc = 0x23F3F4u;
            goto label_23f3f4;
        }
    }
    ctx->pc = 0x23F3E0u;
    // 0x23f3e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f3e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x23f3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f3e8: 0x808c2c0  j           func_230B00
    ctx->pc = 0x23F3E8u;
    ctx->pc = 0x23F3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F3E8u;
    // 0x23f3ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230B00u;
    splitMessageDraw_0x230b00(rdram, ctx, runtime); return;
    ctx->pc = 0x23F3F0u;
label_23f3f0:
    // 0x23f3f0: 0x9382b7a4  lbu         $v0, -0x485C($gp)
    ctx->pc = 0x23f3f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948772)));
label_23f3f4:
    // 0x23f3f4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23F3F4u;
    {
        const bool branch_taken_0x23f3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3F4u;
        // 0x23f3f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f3f4) {
            ctx->pc = 0x23F42Cu;
            goto label_23f42c;
        }
    }
    ctx->pc = 0x23F3FCu;
    // 0x23f3fc: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x23f3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x23f400: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x23f400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23f404: 0x24020104  addiu       $v0, $zero, 0x104
    ctx->pc = 0x23f404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x23f408: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x23f408u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23f40c: 0x24631488  addiu       $v1, $v1, 0x1488
    ctx->pc = 0x23f40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5256));
    // 0x23f410: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23f410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23f414: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23f414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f418: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23F418u;
    {
        const bool branch_taken_0x23f418 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F418u;
        // 0x23f41c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f418) {
            ctx->pc = 0x23F430u;
            goto label_23f430;
        }
    }
    ctx->pc = 0x23F420u;
    // 0x23f420: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x23f420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f424: 0x808c2c0  j           func_230B00
    ctx->pc = 0x23F424u;
    ctx->pc = 0x23F428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F424u;
    // 0x23f428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230B00u;
    splitMessageDraw_0x230b00(rdram, ctx, runtime); return;
    ctx->pc = 0x23F42Cu;
label_23f42c:
    // 0x23f42c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23f430:
    // 0x23f430: 0x3e00008  jr          $ra
    ctx->pc = 0x23F430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F430u;
        // 0x23f434: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F438u;
}

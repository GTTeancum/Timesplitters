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

// Function: frontfxBgTick
// Address: 0x22b600 - 0x22b6b4
void frontfxBgTick_0x22b600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontfxBgTick_0x22b600");
#endif

    switch (ctx->pc) {
        case 0x22b674u: goto label_22b674;
        case 0x22b684u: goto label_22b684;
        case 0x22b68cu: goto label_22b68c;
        default: break;
    }

    ctx->pc = 0x22b600u;

    // 0x22b600: 0xc7839fc8  lwc1        $f3, -0x6038($gp)
    ctx->pc = 0x22b600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22b604: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22b604u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22b608: 0xc7818148  lwc1        $f1, -0x7EB8($gp)
    ctx->pc = 0x22b608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b60c: 0xc7809fc0  lwc1        $f0, -0x6040($gp)
    ctx->pc = 0x22b60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b610: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x22b610u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x22b614: 0xc782814c  lwc1        $f2, -0x7EB4($gp)
    ctx->pc = 0x22b614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22b618: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22b618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22b61c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x22b61cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x22b620: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x22b620u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x22b624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22b624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22b628: 0x46032036  c.le.s      $f4, $f3
    ctx->pc = 0x22b628u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b62c: 0xe7839fc8  swc1        $f3, -0x6038($gp)
    ctx->pc = 0x22b62cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942664), bits); }
    // 0x22b630: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x22B630u;
    {
        const bool branch_taken_0x22b630 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B630u;
        // 0x22b634: 0xe7809fc0  swc1        $f0, -0x6040($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942656), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b630) {
            ctx->pc = 0x22B640u;
            goto label_22b640;
        }
    }
    ctx->pc = 0x22B638u;
    // 0x22b638: 0x46041801  sub.s       $f0, $f3, $f4
    ctx->pc = 0x22b638u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x22b63c: 0xe7809fc8  swc1        $f0, -0x6038($gp)
    ctx->pc = 0x22b63cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942664), bits); }
label_22b640:
    // 0x22b640: 0xc7819fd0  lwc1        $f1, -0x6030($gp)
    ctx->pc = 0x22b640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b644: 0xc7808150  lwc1        $f0, -0x7EB0($gp)
    ctx->pc = 0x22b644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b648: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22b648u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22b64c: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x22b64cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b650: 0x0  nop
    ctx->pc = 0x22b650u;
    // NOP
    // 0x22b654: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x22B654u;
    {
        const bool branch_taken_0x22b654 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B654u;
        // 0x22b658: 0xe7809fd0  swc1        $f0, -0x6030($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942672), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b654) {
            ctx->pc = 0x22B664u;
            goto label_22b664;
        }
    }
    ctx->pc = 0x22B65Cu;
    // 0x22b65c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x22b65cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x22b660: 0xe7809fd0  swc1        $f0, -0x6030($gp)
    ctx->pc = 0x22b660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942672), bits); }
label_22b664:
    // 0x22b664: 0xc7808154  lwc1        $f0, -0x7EAC($gp)
    ctx->pc = 0x22b664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b668: 0xc78c9fd4  lwc1        $f12, -0x602C($gp)
    ctx->pc = 0x22b668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22b66c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x22B66Cu;
    SET_GPR_U32(ctx, 31, 0x22B674u);
    ctx->pc = 0x22B670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B66Cu;
    // 0x22b670: 0xe7809fc4  swc1        $f0, -0x603C($gp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942660), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x22B66Cu, 0x22B674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B674u;
label_22b674:
    // 0x22b674: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x22b674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x22b678: 0xdc2518c0  ld          $a1, 0x18C0($at)
    ctx->pc = 0x22b678u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A18C0u));
    // 0x22b67c: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x22B67Cu;
    SET_GPR_U32(ctx, 31, 0x22B684u);
    ctx->pc = 0x22B680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B67Cu;
    // 0x22b680: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x22B67Cu, 0x22B684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B684u;
label_22b684:
    // 0x22b684: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x22B684u;
    SET_GPR_U32(ctx, 31, 0x22B68Cu);
    ctx->pc = 0x22B688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B684u;
    // 0x22b688: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x22B684u, 0x22B68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B68Cu;
label_22b68c:
    // 0x22b68c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x22b68cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x22b690: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22b690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22b694: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22b694u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b698: 0x0  nop
    ctx->pc = 0x22b698u;
    // NOP
    // 0x22b69c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x22B69Cu;
    {
        const bool branch_taken_0x22b69c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B69Cu;
        // 0x22b6a0: 0xe7809fd4  swc1        $f0, -0x602C($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942676), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b69c) {
            ctx->pc = 0x22B6A8u;
            goto label_22b6a8;
        }
    }
    ctx->pc = 0x22B6A4u;
    // 0x22b6a4: 0xe7819fd4  swc1        $f1, -0x602C($gp)
    ctx->pc = 0x22b6a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942676), bits); }
label_22b6a8:
    // 0x22b6a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b6a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x22B6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6ACu;
        // 0x22b6b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B6B4u;
}

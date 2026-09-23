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

// Function: ipGfx
// Address: 0x296678 - 0x296834
void ipGfx_0x296678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ipGfx_0x296678");
#endif

    switch (ctx->pc) {
        case 0x2966c0u: goto label_2966c0;
        case 0x2966ecu: goto label_2966ec;
        case 0x296718u: goto label_296718;
        case 0x296768u: goto label_296768;
        case 0x296798u: goto label_296798;
        case 0x2967a0u: goto label_2967a0;
        case 0x2967b0u: goto label_2967b0;
        case 0x2967c0u: goto label_2967c0;
        case 0x2967ccu: goto label_2967cc;
        case 0x2967d8u: goto label_2967d8;
        default: break;
    }

    ctx->pc = 0x296678u;

    // 0x296678: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x296678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29667c: 0x8f85b234  lw          $a1, -0x4DCC($gp)
    ctx->pc = 0x29667cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x296680: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x296680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x296684: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x296684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x296688: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x296688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29668c: 0x24429690  addiu       $v0, $v0, -0x6970
    ctx->pc = 0x29668cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940304));
    // 0x296690: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296694: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x296694u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x296698: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x296698u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x29669c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x29669cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2966a0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2966a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2966a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2966a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2966a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2966a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2966ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2966acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2966b0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2966B0u;
    {
        const bool branch_taken_0x2966b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2966b0) {
            ctx->pc = 0x2966B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2966B0u;
            // 0x2966b4: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2966C8u;
            goto label_2966c8;
        }
    }
    ctx->pc = 0x2966B8u;
    // 0x2966b8: 0xc0a57f0  jal         func_295FC0
    ctx->pc = 0x2966B8u;
    SET_GPR_U32(ctx, 31, 0x2966C0u);
    ctx->pc = 0x295FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295FC0u, 0x2966B8u, 0x2966C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2966C0u;
label_2966c0:
    // 0x2966c0: 0x8f85b234  lw          $a1, -0x4DCC($gp)
    ctx->pc = 0x2966c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2966c4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2966c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2966c8:
    // 0x2966c8: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2966c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2966cc: 0x246396a0  addiu       $v1, $v1, -0x6960
    ctx->pc = 0x2966ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940320));
    // 0x2966d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2966d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2966d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2966d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2966d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2966d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2966dc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2966DCu;
    {
        const bool branch_taken_0x2966dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2966dc) {
            ctx->pc = 0x2966E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2966DCu;
            // 0x2966e0: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2966F4u;
            goto label_2966f4;
        }
    }
    ctx->pc = 0x2966E4u;
    // 0x2966e4: 0xc0a587c  jal         func_2961F0
    ctx->pc = 0x2966E4u;
    SET_GPR_U32(ctx, 31, 0x2966ECu);
    ctx->pc = 0x2961F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2961F0u, 0x2966E4u, 0x2966ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2966ECu;
label_2966ec:
    // 0x2966ec: 0x8f85b234  lw          $a1, -0x4DCC($gp)
    ctx->pc = 0x2966ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2966f0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2966f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2966f4:
    // 0x2966f4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2966f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2966f8: 0x246396b0  addiu       $v1, $v1, -0x6950
    ctx->pc = 0x2966f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940336));
    // 0x2966fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2966fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x296700: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x296700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x296704: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x296704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x296708: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x296708u;
    {
        const bool branch_taken_0x296708 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x296708) {
            ctx->pc = 0x29670Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296708u;
            // 0x29670c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296720u;
            goto label_296720;
        }
    }
    ctx->pc = 0x296710u;
    // 0x296710: 0xc0a582e  jal         func_2960B8
    ctx->pc = 0x296710u;
    SET_GPR_U32(ctx, 31, 0x296718u);
    ctx->pc = 0x296714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296710u;
    // 0x296714: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2960B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2960B8u, 0x296710u, 0x296718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296718u;
label_296718:
    // 0x296718: 0x8f85b234  lw          $a1, -0x4DCC($gp)
    ctx->pc = 0x296718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x29671c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x29671cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_296720:
    // 0x296720: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x296720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x296724: 0x246396c0  addiu       $v1, $v1, -0x6940
    ctx->pc = 0x296724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940352));
    // 0x296728: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x296728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29672c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29672cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x296730: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x296730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x296734: 0x5080002a  beql        $a0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x296734u;
    {
        const bool branch_taken_0x296734 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x296734) {
            ctx->pc = 0x296738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296734u;
            // 0x296738: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2967E0u;
            goto label_2967e0;
        }
    }
    ctx->pc = 0x29673Cu;
    // 0x29673c: 0xc78c9da8  lwc1        $f12, -0x6258($gp)
    ctx->pc = 0x29673cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x296740: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x296740u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x296744: 0xc7948c94  lwc1        $f20, -0x736C($gp)
    ctx->pc = 0x296744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x296748: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x296748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x29674c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x29674cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x296750: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x296750u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x296754: 0x0  nop
    ctx->pc = 0x296754u;
    // NOP
    // 0x296758: 0x0  nop
    ctx->pc = 0x296758u;
    // NOP
    // 0x29675c: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x29675cu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x296760: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x296760u;
    SET_GPR_U32(ctx, 31, 0x296768u);
    ctx->pc = 0x296764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296760u;
    // 0x296764: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x296760u, 0x296768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296768u;
label_296768:
    // 0x296768: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x296768u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x29676c: 0xc78c9da8  lwc1        $f12, -0x6258($gp)
    ctx->pc = 0x29676cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x296770: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x296770u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x296774: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x296774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x296778: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x296778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29677c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x29677cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x296780: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x296780u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x296784: 0x0  nop
    ctx->pc = 0x296784u;
    // NOP
    // 0x296788: 0x0  nop
    ctx->pc = 0x296788u;
    // NOP
    // 0x29678c: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x29678cu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x296790: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x296790u;
    SET_GPR_U32(ctx, 31, 0x296798u);
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x296790u, 0x296798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296798u;
label_296798:
    // 0x296798: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x296798u;
    SET_GPR_U32(ctx, 31, 0x2967A0u);
    ctx->pc = 0x29679Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296798u;
    // 0x29679c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x296798u, 0x2967A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2967A0u;
label_2967a0:
    // 0x2967a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2967a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2967a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2967a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2967a8: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2967A8u;
    SET_GPR_U32(ctx, 31, 0x2967B0u);
    ctx->pc = 0x2967ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2967A8u;
    // 0x2967ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2967A8u, 0x2967B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2967B0u;
label_2967b0:
    // 0x2967b0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2967B0u;
    {
        const bool branch_taken_0x2967b0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2967B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2967B0u;
        // 0x2967b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2967b0) {
            ctx->pc = 0x2967C4u;
            goto label_2967c4;
        }
    }
    ctx->pc = 0x2967B8u;
    // 0x2967b8: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2967B8u;
    SET_GPR_U32(ctx, 31, 0x2967C0u);
    ctx->pc = 0x2967BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2967B8u;
    // 0x2967bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2967B8u, 0x2967C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2967C0u;
label_2967c0:
    // 0x2967c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2967c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2967c4:
    // 0x2967c4: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x2967C4u;
    SET_GPR_U32(ctx, 31, 0x2967CCu);
    ctx->pc = 0x2967C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2967C4u;
    // 0x2967c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2967C4u, 0x2967CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2967CCu;
label_2967cc:
    // 0x2967cc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2967ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2967d0: 0xc0a58b4  jal         func_2962D0
    ctx->pc = 0x2967D0u;
    SET_GPR_U32(ctx, 31, 0x2967D8u);
    ctx->pc = 0x2967D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2967D0u;
    // 0x2967d4: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2962D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2962D0u, 0x2967D0u, 0x2967D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2967D8u;
label_2967d8:
    // 0x2967d8: 0x8f85b234  lw          $a1, -0x4DCC($gp)
    ctx->pc = 0x2967d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2967dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2967dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2967e0:
    // 0x2967e0: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2967e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2967e4: 0x246396d0  addiu       $v1, $v1, -0x6930
    ctx->pc = 0x2967e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940368));
    // 0x2967e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2967e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2967ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2967ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2967f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2967f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2967f4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2967F4u;
    {
        const bool branch_taken_0x2967f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2967F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2967F4u;
        // 0x2967f8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2967f4) {
            ctx->pc = 0x296818u;
            goto label_296818;
        }
    }
    ctx->pc = 0x2967FCu;
    // 0x2967fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2967fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296804: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x296804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x296808: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x296808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29680c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x29680cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x296810: 0x80a5848  j           func_296120
    ctx->pc = 0x296810u;
    ctx->pc = 0x296814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296810u;
    // 0x296814: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296120u;
    ipViewZB_0x296120(rdram, ctx, runtime); return;
    ctx->pc = 0x296818u;
label_296818:
    // 0x296818: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x296818u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29681c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29681cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296820: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x296820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x296824: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x296824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x296828: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x296828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29682c: 0x3e00008  jr          $ra
    ctx->pc = 0x29682Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29682Cu;
        // 0x296830: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29682Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296834u;
}

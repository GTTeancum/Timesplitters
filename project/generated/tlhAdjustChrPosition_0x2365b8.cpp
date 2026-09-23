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

// Function: tlhAdjustChrPosition
// Address: 0x2365b8 - 0x2366ac
void tlhAdjustChrPosition_0x2365b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("tlhAdjustChrPosition_0x2365b8");
#endif

    switch (ctx->pc) {
        case 0x236608u: goto label_236608;
        case 0x236618u: goto label_236618;
        case 0x236620u: goto label_236620;
        case 0x23663cu: goto label_23663c;
        case 0x236650u: goto label_236650;
        case 0x23665cu: goto label_23665c;
        case 0x236664u: goto label_236664;
        case 0x236680u: goto label_236680;
        case 0x236690u: goto label_236690;
        case 0x236698u: goto label_236698;
        default: break;
    }

    ctx->pc = 0x2365b8u;

    // 0x2365b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2365b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2365bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2365bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2365c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2365c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2365c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2365c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2365c8: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x2365c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x2365cc: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x2365ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2365d0: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2365d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2365d4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2365d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2365d8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x2365d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2365dc: 0x2c62003d  sltiu       $v0, $v1, 0x3D
    ctx->pc = 0x2365dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)61) ? 1 : 0);
    // 0x2365e0: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2365E0u;
    {
        const bool branch_taken_0x2365e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2365E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365E0u;
        // 0x2365e4: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2365e0) {
            ctx->pc = 0x23669Cu;
            goto label_23669c;
        }
    }
    ctx->pc = 0x2365E8u;
    // 0x2365e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2365e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2365ec: 0x24421bc0  addiu       $v0, $v0, 0x1BC0
    ctx->pc = 0x2365ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2365f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2365f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2365f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2365f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2365f8: 0x800008  jr          $a0
    ctx->pc = 0x2365F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x236600u: goto label_236600;
            case 0x236648u: goto label_236648;
            case 0x23669Cu: goto label_23669c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2365F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x236600u;
label_236600:
    // 0x236600: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x236600u;
    SET_GPR_U32(ctx, 31, 0x236608u);
    ctx->pc = 0x236604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236600u;
    // 0x236604: 0xc60c0030  lwc1        $f12, 0x30($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x236600u, 0x236608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236608u;
label_236608:
    // 0x236608: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x236608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x23660c: 0xdc251cb8  ld          $a1, 0x1CB8($at)
    ctx->pc = 0x23660cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A1CB8u));
    // 0x236610: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x236610u;
    SET_GPR_U32(ctx, 31, 0x236618u);
    ctx->pc = 0x236614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236610u;
    // 0x236614: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x236610u, 0x236618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236618u;
label_236618:
    // 0x236618: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x236618u;
    SET_GPR_U32(ctx, 31, 0x236620u);
    ctx->pc = 0x23661Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236618u;
    // 0x23661c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x236618u, 0x236620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236620u;
label_236620:
    // 0x236620: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x236620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x236624: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x236624u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x236628: 0xc60c0038  lwc1        $f12, 0x38($s0)
    ctx->pc = 0x236628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23662c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x23662cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x236630: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x236630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x236634: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x236634u;
    SET_GPR_U32(ctx, 31, 0x23663Cu);
    ctx->pc = 0x236638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236634u;
    // 0x236638: 0xe6010034  swc1        $f1, 0x34($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x236634u, 0x23663Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23663Cu;
label_23663c:
    // 0x23663c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x23663cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x236640: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x236640u;
    {
        const bool branch_taken_0x236640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236640u;
        // 0x236644: 0xdc251cc0  ld          $a1, 0x1CC0($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 7360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236640) {
            ctx->pc = 0x236688u;
            goto label_236688;
        }
    }
    ctx->pc = 0x236648u;
label_236648:
    // 0x236648: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x236648u;
    SET_GPR_U32(ctx, 31, 0x236650u);
    ctx->pc = 0x23664Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236648u;
    // 0x23664c: 0xc60c0030  lwc1        $f12, 0x30($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x236648u, 0x236650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236650u;
label_236650:
    // 0x236650: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x236650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236654: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x236654u;
    SET_GPR_U32(ctx, 31, 0x23665Cu);
    ctx->pc = 0x236658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236654u;
    // 0x236658: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x236654u, 0x23665Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23665Cu;
label_23665c:
    // 0x23665c: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x23665Cu;
    SET_GPR_U32(ctx, 31, 0x236664u);
    ctx->pc = 0x236660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23665Cu;
    // 0x236660: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x23665Cu, 0x236664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236664u;
label_236664:
    // 0x236664: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x236664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x236668: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x236668u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23666c: 0xc60c0038  lwc1        $f12, 0x38($s0)
    ctx->pc = 0x23666cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x236670: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x236670u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x236674: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x236674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x236678: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x236678u;
    SET_GPR_U32(ctx, 31, 0x236680u);
    ctx->pc = 0x23667Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236678u;
    // 0x23667c: 0xe6010034  swc1        $f1, 0x34($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x236678u, 0x236680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236680u;
label_236680:
    // 0x236680: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x236680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x236684: 0xdc251cc8  ld          $a1, 0x1CC8($at)
    ctx->pc = 0x236684u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A1CC8u));
label_236688:
    // 0x236688: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x236688u;
    SET_GPR_U32(ctx, 31, 0x236690u);
    ctx->pc = 0x23668Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236688u;
    // 0x23668c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x236688u, 0x236690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236690u;
label_236690:
    // 0x236690: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x236690u;
    SET_GPR_U32(ctx, 31, 0x236698u);
    ctx->pc = 0x236694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236690u;
    // 0x236694: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x236690u, 0x236698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236698u;
label_236698:
    // 0x236698: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x236698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_23669c:
    // 0x23669c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23669cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2366a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2366a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2366a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2366A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2366A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2366A4u;
        // 0x2366a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2366A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2366ACu;
}

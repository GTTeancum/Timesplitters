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

// Function: gsMain
// Address: 0x200f20 - 0x201194
void gsMain_0x200f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gsMain_0x200f20");
#endif

    switch (ctx->pc) {
        case 0x200f50u: goto label_200f50;
        case 0x200f54u: goto label_200f54;
        case 0x200f64u: goto label_200f64;
        case 0x200f7cu: goto label_200f7c;
        case 0x200ff8u: goto label_200ff8;
        case 0x201000u: goto label_201000;
        case 0x201008u: goto label_201008;
        case 0x201010u: goto label_201010;
        case 0x201018u: goto label_201018;
        case 0x201034u: goto label_201034;
        case 0x201044u: goto label_201044;
        case 0x20104cu: goto label_20104c;
        case 0x201064u: goto label_201064;
        case 0x20106cu: goto label_20106c;
        case 0x201074u: goto label_201074;
        case 0x201088u: goto label_201088;
        case 0x201098u: goto label_201098;
        case 0x2010f4u: goto label_2010f4;
        case 0x201110u: goto label_201110;
        case 0x20118cu: goto label_20118c;
        default: break;
    }

    ctx->pc = 0x200f20u;

    // 0x200f20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x200f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x200f24: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x200f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x200f28: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x200f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x200f2c: 0x3c15002f  lui         $s5, 0x2F
    ctx->pc = 0x200f2cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)47 << 16));
    // 0x200f30: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x200f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x200f34: 0x3c140020  lui         $s4, 0x20
    ctx->pc = 0x200f34u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32 << 16));
    // 0x200f38: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x200f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x200f3c: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x200f3cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x200f40: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x200f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x200f44: 0x27929310  addiu       $s2, $gp, -0x6CF0
    ctx->pc = 0x200f44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939408));
    // 0x200f48: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x200f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x200f4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_200f50:
    // 0x200f50: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x200f50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200f54:
    // 0x200f54: 0x8f849334  lw          $a0, -0x6CCC($gp)
    ctx->pc = 0x200f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939444)));
    // 0x200f58: 0xaf91934c  sw          $s1, -0x6CB4($gp)
    ctx->pc = 0x200f58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939468), GPR_U32(ctx, 17));
    // 0x200f5c: 0xc0b4058  jal         func_2D0160
    ctx->pc = 0x200F5Cu;
    SET_GPR_U32(ctx, 31, 0x200F64u);
    ctx->pc = 0x2D0160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0160u, 0x200F5Cu, 0x200F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200F64u;
label_200f64:
    // 0x200f64: 0xc780b614  lwc1        $f0, -0x49EC($gp)
    ctx->pc = 0x200f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294948372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200f68: 0xc781b618  lwc1        $f1, -0x49E8($gp)
    ctx->pc = 0x200f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294948376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200f6c: 0xaf80934c  sw          $zero, -0x6CB4($gp)
    ctx->pc = 0x200f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939468), GPR_U32(ctx, 0));
    // 0x200f70: 0xe7809d18  swc1        $f0, -0x62E8($gp)
    ctx->pc = 0x200f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294941976), bits); }
    // 0x200f74: 0xc0ad9a2  jal         func_2B6688
    ctx->pc = 0x200F74u;
    SET_GPR_U32(ctx, 31, 0x200F7Cu);
    ctx->pc = 0x200F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200F74u;
    // 0x200f78: 0xe7819d1c  swc1        $f1, -0x62E4($gp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294941980), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6688u, 0x200F74u, 0x200F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200F7Cu;
label_200f7c:
    // 0x200f7c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x200f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x200f80: 0x24030083  addiu       $v1, $zero, 0x83
    ctx->pc = 0x200f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x200f84: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x200f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x200f88: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x200f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x200f8c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x200f8cu;
    runtime->Store32(rdram, ctx, 0x10000010u, GPR_U32(ctx, 3));
    // 0x200f90: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x200f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x200f94: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x200f94u;
    runtime->Store32(rdram, ctx, 0x10000000u, GPR_U32(ctx, 0));
    // 0x200f98: 0x26a22c00  addiu       $v0, $s5, 0x2C00
    ctx->pc = 0x200f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 11264));
    // 0x200f9c: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x200f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x200fa0: 0xe780b614  swc1        $f0, -0x49EC($gp)
    ctx->pc = 0x200fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294948372), bits); }
    // 0x200fa4: 0x8f84931c  lw          $a0, -0x6CE4($gp)
    ctx->pc = 0x200fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939420)));
    // 0x200fa8: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x200fa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x200fac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x200facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x200fb0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x200fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x200fb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x200fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x200fb8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x200fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x200fbc: 0x8f83931c  lw          $v1, -0x6CE4($gp)
    ctx->pc = 0x200fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939420)));
    // 0x200fc0: 0x661018  mult        $v0, $v1, $a2
    ctx->pc = 0x200fc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x200fc4: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x200fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x200fc8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x200fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x200fcc: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x200fccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x200fd0: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x200FD0u;
    {
        const bool branch_taken_0x200fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200fd0) {
            ctx->pc = 0x2010ECu;
            goto label_2010ec;
        }
    }
    ctx->pc = 0x200FD8u;
    // 0x200fd8: 0x8f82931c  lw          $v0, -0x6CE4($gp)
    ctx->pc = 0x200fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939420)));
    // 0x200fdc: 0x461818  mult        $v1, $v0, $a2
    ctx->pc = 0x200fdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x200fe0: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x200fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x200fe4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x200fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x200fe8: 0x1471000b  bne         $v1, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x200FE8u;
    {
        const bool branch_taken_0x200fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x200fe8) {
            ctx->pc = 0x201018u;
            goto label_201018;
        }
    }
    ctx->pc = 0x200FF0u;
    // 0x200ff0: 0xc0b4058  jal         func_2D0160
    ctx->pc = 0x200FF0u;
    SET_GPR_U32(ctx, 31, 0x200FF8u);
    ctx->pc = 0x200FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200FF0u;
    // 0x200ff4: 0x8f849340  lw          $a0, -0x6CC0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939456)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0160u, 0x200FF0u, 0x200FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200FF8u;
label_200ff8:
    // 0x200ff8: 0xc0a9c28  jal         func_2A70A0
    ctx->pc = 0x200FF8u;
    SET_GPR_U32(ctx, 31, 0x201000u);
    ctx->pc = 0x2A70A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A70A0u, 0x200FF8u, 0x201000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201000u;
label_201000:
    // 0x201000: 0xc0b4050  jal         func_2D0140
    ctx->pc = 0x201000u;
    SET_GPR_U32(ctx, 31, 0x201008u);
    ctx->pc = 0x201004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201000u;
    // 0x201004: 0x8f849340  lw          $a0, -0x6CC0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939456)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0140u, 0x201000u, 0x201008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201008u;
label_201008:
    // 0x201008: 0xc0a9c42  jal         func_2A7108
    ctx->pc = 0x201008u;
    SET_GPR_U32(ctx, 31, 0x201010u);
    ctx->pc = 0x2A7108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7108u, 0x201008u, 0x201010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201010u;
label_201010:
    // 0x201010: 0xc0a9c0c  jal         func_2A7030
    ctx->pc = 0x201010u;
    SET_GPR_U32(ctx, 31, 0x201018u);
    ctx->pc = 0x2A7030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7030u, 0x201010u, 0x201018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201018u;
label_201018:
    // 0x201018: 0x8f82931c  lw          $v0, -0x6CE4($gp)
    ctx->pc = 0x201018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939420)));
    // 0x20101c: 0x24040c48  addiu       $a0, $zero, 0xC48
    ctx->pc = 0x20101cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3144));
    // 0x201020: 0x26850f10  addiu       $a1, $s4, 0xF10
    ctx->pc = 0x201020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 3856));
    // 0x201024: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x201024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x201028: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x201028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x20102c: 0xc0b4348  jal         func_2D0D20
    ctx->pc = 0x20102Cu;
    SET_GPR_U32(ctx, 31, 0x201034u);
    ctx->pc = 0x201030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20102Cu;
    // 0x201030: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0D20u, 0x20102Cu, 0x201034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201034u;
label_201034:
    // 0x201034: 0x8f849340  lw          $a0, -0x6CC0($gp)
    ctx->pc = 0x201034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939456)));
    // 0x201038: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x201038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20103c: 0xc0b4058  jal         func_2D0160
    ctx->pc = 0x20103Cu;
    SET_GPR_U32(ctx, 31, 0x201044u);
    ctx->pc = 0x201040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20103Cu;
    // 0x201040: 0xaf809370  sw          $zero, -0x6C90($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939504), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0160u, 0x20103Cu, 0x201044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201044u;
label_201044:
    // 0x201044: 0xc0b40e8  jal         func_2D03A0
    ctx->pc = 0x201044u;
    SET_GPR_U32(ctx, 31, 0x20104Cu);
    ctx->pc = 0x201048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201044u;
    // 0x201048: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D03A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D03A0u, 0x201044u, 0x20104Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20104Cu;
label_20104c:
    // 0x20104c: 0x8f82931c  lw          $v0, -0x6CE4($gp)
    ctx->pc = 0x20104cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939420)));
    // 0x201050: 0x8f8493a8  lw          $a0, -0x6C58($gp)
    ctx->pc = 0x201050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939560)));
    // 0x201054: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x201054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x201058: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x201058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x20105c: 0xc0b3d28  jal         func_2CF4A0
    ctx->pc = 0x20105Cu;
    SET_GPR_U32(ctx, 31, 0x201064u);
    ctx->pc = 0x201060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20105Cu;
    // 0x201060: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF4A0u, 0x20105Cu, 0x201064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201064u;
label_201064:
    // 0x201064: 0xc0b4058  jal         func_2D0160
    ctx->pc = 0x201064u;
    SET_GPR_U32(ctx, 31, 0x20106Cu);
    ctx->pc = 0x201068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201064u;
    // 0x201068: 0x8f849338  lw          $a0, -0x6CC8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939448)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0160u, 0x201064u, 0x20106Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20106Cu;
label_20106c:
    // 0x20106c: 0xc0b4050  jal         func_2D0140
    ctx->pc = 0x20106Cu;
    SET_GPR_U32(ctx, 31, 0x201074u);
    ctx->pc = 0x201070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20106Cu;
    // 0x201070: 0x8f849340  lw          $a0, -0x6CC0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939456)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0140u, 0x20106Cu, 0x201074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201074u;
label_201074:
    // 0x201074: 0x8f839370  lw          $v1, -0x6C90($gp)
    ctx->pc = 0x201074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939504)));
    // 0x201078: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x201078u;
    {
        const bool branch_taken_0x201078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x201078) {
            ctx->pc = 0x201090u;
            goto label_201090;
        }
    }
    ctx->pc = 0x201080u;
    // 0x201080: 0xc0b4364  jal         func_2D0D90
    ctx->pc = 0x201080u;
    SET_GPR_U32(ctx, 31, 0x201088u);
    ctx->pc = 0x201084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201080u;
    // 0x201084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0D90u, 0x201080u, 0x201088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201088u;
label_201088:
    // 0x201088: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x201088u;
    {
        const bool branch_taken_0x201088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201088) {
            ctx->pc = 0x2010ECu;
            goto label_2010ec;
        }
    }
    ctx->pc = 0x201090u;
label_201090:
    // 0x201090: 0xc0b4760  jal         func_2D1D80
    ctx->pc = 0x201090u;
    SET_GPR_U32(ctx, 31, 0x201098u);
    ctx->pc = 0x201094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201090u;
    // 0x201094: 0x266438d0  addiu       $a0, $s3, 0x38D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 14544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1D80u, 0x201090u, 0x201098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201098u;
label_201098:
    // 0x201098: 0x8f829364  lw          $v0, -0x6C9C($gp)
    ctx->pc = 0x201098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939492)));
    // 0x20109c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x20109cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x2010a0: 0x34a5f590  ori         $a1, $a1, 0xF590
    ctx->pc = 0x2010a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62864);
    // 0x2010a4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2010a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2010a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2010a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2010ac: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x2010acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x2010b0: 0xaf829364  sw          $v0, -0x6C9C($gp)
    ctx->pc = 0x2010b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939492), GPR_U32(ctx, 2));
    // 0x2010b4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2010b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2010b8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2010b8u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 0));
    // 0x2010bc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2010bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2010c0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2010c0u;
    runtime->Store32(rdram, ctx, 0x10009000u, GPR_U32(ctx, 4));
    // 0x2010c4: 0x34423c10  ori         $v0, $v0, 0x3C10
    ctx->pc = 0x2010c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15376);
    // 0x2010c8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2010c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2010cc: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x2010ccu;
    runtime->Store32(rdram, ctx, 0x10003C10u, GPR_U32(ctx, 17));
    // 0x2010d0: 0x34633000  ori         $v1, $v1, 0x3000
    ctx->pc = 0x2010d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12288);
    // 0x2010d4: 0x3c041200  lui         $a0, 0x1200
    ctx->pc = 0x2010d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4608 << 16));
    // 0x2010d8: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x2010d8u;
    runtime->Store32(rdram, ctx, 0x10003000u, GPR_U32(ctx, 17));
    // 0x2010dc: 0x34841000  ori         $a0, $a0, 0x1000
    ctx->pc = 0x2010dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4096);
    // 0x2010e0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2010e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2010e4: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x2010e4u;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 2));
    // 0x2010e8: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x2010e8u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 17));
label_2010ec:
    // 0x2010ec: 0xc0ad9a2  jal         func_2B6688
    ctx->pc = 0x2010ECu;
    SET_GPR_U32(ctx, 31, 0x2010F4u);
    ctx->pc = 0x2B6688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6688u, 0x2010ECu, 0x2010F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2010F4u;
label_2010f4:
    // 0x2010f4: 0xc782b614  lwc1        $f2, -0x49EC($gp)
    ctx->pc = 0x2010f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294948372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2010f8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2010f8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2010fc: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2010fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x201100: 0x0  nop
    ctx->pc = 0x201100u;
    // NOP
    // 0x201104: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x201104u;
    {
        const bool branch_taken_0x201104 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x201108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201104u;
        // 0x201108: 0xe781b618  swc1        $f1, -0x49E8($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294948376), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x201104) {
            ctx->pc = 0x201130u;
            goto label_201130;
        }
    }
    ctx->pc = 0x20110Cu;
    // 0x20110c: 0x0  nop
    ctx->pc = 0x20110cu;
    // NOP
label_201110:
    // 0x201110: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x201110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x201114: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x201114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201118: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x201118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20111c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x20111cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x201120: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x201120u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x201124: 0xe781b618  swc1        $f1, -0x49E8($gp)
    ctx->pc = 0x201124u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294948376), bits); }
    // 0x201128: 0x4501fff9  bc1t        . + 4 + (-0x7 << 2)
    ctx->pc = 0x201128u;
    {
        const bool branch_taken_0x201128 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x201128) {
            ctx->pc = 0x201110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201110;
        }
    }
    ctx->pc = 0x201130u;
label_201130:
    // 0x201130: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x201130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x201134: 0x24040083  addiu       $a0, $zero, 0x83
    ctx->pc = 0x201134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x201138: 0x34420810  ori         $v0, $v0, 0x810
    ctx->pc = 0x201138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2064);
    // 0x20113c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x20113cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x201140: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x201140u;
    runtime->Store32(rdram, ctx, 0x10000810u, GPR_U32(ctx, 4));
    // 0x201144: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x201144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x201148: 0x3c040011  lui         $a0, 0x11
    ctx->pc = 0x201148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17 << 16));
    // 0x20114c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20114cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x201150: 0x34842492  ori         $a0, $a0, 0x2492
    ctx->pc = 0x201150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9362);
    // 0x201154: 0x8f839350  lw          $v1, -0x6CB0($gp)
    ctx->pc = 0x201154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939472)));
    // 0x201158: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x201158u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20115c: 0x2812  mflo        $a1
    ctx->pc = 0x20115cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x201160: 0x1010  mfhi        $v0
    ctx->pc = 0x201160u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x201164: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x201164u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x201168: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x201168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20116c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x20116cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x201170: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x201170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x201174: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x201174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x201178: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x201178u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x20117c: 0x1060ff74  beqz        $v1, . + 4 + (-0x8C << 2)
    ctx->pc = 0x20117Cu;
    {
        const bool branch_taken_0x20117c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x201180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20117Cu;
        // 0x201180: 0xaf82932c  sw          $v0, -0x6CD4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20117c) {
            ctx->pc = 0x200F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200f50;
        }
    }
    ctx->pc = 0x201184u;
    // 0x201184: 0xc0b4050  jal         func_2D0140
    ctx->pc = 0x201184u;
    SET_GPR_U32(ctx, 31, 0x20118Cu);
    ctx->pc = 0x201188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201184u;
    // 0x201188: 0x8f84933c  lw          $a0, -0x6CC4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939452)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0140u, 0x201184u, 0x20118Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20118Cu;
label_20118c:
    // 0x20118c: 0x1000ff71  b           . + 4 + (-0x8F << 2)
    ctx->pc = 0x20118Cu;
    {
        const bool branch_taken_0x20118c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20118Cu;
        // 0x201190: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20118c) {
            ctx->pc = 0x200F54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200f54;
        }
    }
    ctx->pc = 0x201194u;
}

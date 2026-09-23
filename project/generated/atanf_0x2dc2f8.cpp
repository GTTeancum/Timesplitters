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

// Function: atanf
// Address: 0x2dc2f8 - 0x2dc5a0
void atanf_0x2dc2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("atanf_0x2dc2f8");
#endif

    switch (ctx->pc) {
        case 0x2dc3d8u: goto label_2dc3d8;
        default: break;
    }

    ctx->pc = 0x2dc2f8u;

    // 0x2dc2f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dc2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dc2fc: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x2dc2fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2dc300: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2dc300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2dc304: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2dc304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc308: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dc308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dc30c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dc30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dc310: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x2dc310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x2dc314: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2dc314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2dc318: 0x3c02507f  lui         $v0, 0x507F
    ctx->pc = 0x2dc318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20607 << 16));
    // 0x2dc31c: 0x2238024  and         $s0, $s1, $v1
    ctx->pc = 0x2dc31cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x2dc320: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2dc320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2dc324: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2dc324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2dc328: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DC328u;
    {
        const bool branch_taken_0x2dc328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC328u;
        // 0x2dc32c: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc328) {
            ctx->pc = 0x2DC37Cu;
            goto label_2dc37c;
        }
    }
    ctx->pc = 0x2DC330u;
    // 0x2dc330: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2dc330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2dc334: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DC334u;
    {
        const bool branch_taken_0x2dc334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc334) {
            ctx->pc = 0x2DC348u;
            goto label_2dc348;
        }
    }
    ctx->pc = 0x2DC33Cu;
    // 0x2dc33c: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x2DC33Cu;
    {
        const bool branch_taken_0x2dc33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC33Cu;
        // 0x2dc340: 0x460c6000  add.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc33c) {
            ctx->pc = 0x2DC58Cu;
            goto label_2dc58c;
        }
    }
    ctx->pc = 0x2DC344u;
    // 0x2dc344: 0x0  nop
    ctx->pc = 0x2dc344u;
    // NOP
label_2dc348:
    // 0x2dc348: 0x1a200006  blez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DC348u;
    {
        const bool branch_taken_0x2dc348 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2DC34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC348u;
        // 0x2dc34c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc348) {
            ctx->pc = 0x2DC364u;
            goto label_2dc364;
        }
    }
    ctx->pc = 0x2DC350u;
    // 0x2dc350: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2dc350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2dc354: 0xc441b16c  lwc1        $f1, -0x4E94($v0)
    ctx->pc = 0x2dc354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc358: 0xc460b17c  lwc1        $f0, -0x4E84($v1)
    ctx->pc = 0x2dc358u;
    { uint32_t bits = FAST_READ32(0x3AB17Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dc35c: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x2DC35Cu;
    {
        const bool branch_taken_0x2dc35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC35Cu;
        // 0x2dc360: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc35c) {
            ctx->pc = 0x2DC58Cu;
            goto label_2dc58c;
        }
    }
    ctx->pc = 0x2DC364u;
label_2dc364:
    // 0x2dc364: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2dc364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2dc368: 0xc440b16c  lwc1        $f0, -0x4E94($v0)
    ctx->pc = 0x2dc368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dc36c: 0xc461b17c  lwc1        $f1, -0x4E84($v1)
    ctx->pc = 0x2dc36cu;
    { uint32_t bits = FAST_READ32(0x3AB17Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc370: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2dc370u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2dc374: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x2DC374u;
    {
        const bool branch_taken_0x2dc374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC374u;
        // 0x2dc378: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc374) {
            ctx->pc = 0x2DC58Cu;
            goto label_2dc58c;
        }
    }
    ctx->pc = 0x2DC37Cu;
label_2dc37c:
    // 0x2dc37c: 0x3c023edf  lui         $v0, 0x3EDF
    ctx->pc = 0x2dc37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16095 << 16));
    // 0x2dc380: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2dc380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2dc384: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2dc384u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2dc388: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DC388u;
    {
        const bool branch_taken_0x2dc388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC388u;
        // 0x2dc38c: 0x3c0230ff  lui         $v0, 0x30FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12543 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc388) {
            ctx->pc = 0x2DC3D0u;
            goto label_2dc3d0;
        }
    }
    ctx->pc = 0x2DC390u;
    // 0x2dc390: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2dc390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2dc394: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2dc394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2dc398: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2DC398u;
    {
        const bool branch_taken_0x2dc398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC398u;
        // 0x2dc39c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc398) {
            ctx->pc = 0x2DC4ACu;
            goto label_2dc4ac;
        }
    }
    ctx->pc = 0x2DC3A0u;
    // 0x2dc3a0: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x2dc3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x2dc3a4: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x2dc3a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x2dc3a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dc3a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc3ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dc3acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2dc3b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dc3b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dc3b4: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x2dc3b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2dc3b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dc3b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dc3bc: 0x0  nop
    ctx->pc = 0x2dc3bcu;
    // NOP
    // 0x2dc3c0: 0x4502003b  bc1fl       . + 4 + (0x3B << 2)
    ctx->pc = 0x2DC3C0u;
    {
        const bool branch_taken_0x2dc3c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dc3c0) {
            ctx->pc = 0x2DC3C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC3C0u;
            // 0x2dc3c4: 0x460c6282  mul.s       $f10, $f12, $f12 (Delay Slot)
            ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC4B0u;
            goto label_2dc4b0;
        }
    }
    ctx->pc = 0x2DC3C8u;
    // 0x2dc3c8: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x2DC3C8u;
    {
        const bool branch_taken_0x2dc3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC3C8u;
        // 0x2dc3cc: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc3c8) {
            ctx->pc = 0x2DC58Cu;
            goto label_2dc58c;
        }
    }
    ctx->pc = 0x2DC3D0u;
label_2dc3d0:
    // 0x2dc3d0: 0xc0b7168  jal         func_2DC5A0
    ctx->pc = 0x2DC3D0u;
    SET_GPR_U32(ctx, 31, 0x2DC3D8u);
    ctx->pc = 0x2DC5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC5A0u, 0x2DC3D0u, 0x2DC3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC3D8u;
label_2dc3d8:
    // 0x2dc3d8: 0x3c023f97  lui         $v0, 0x3F97
    ctx->pc = 0x2dc3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16279 << 16));
    // 0x2dc3dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2dc3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2dc3e0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2dc3e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2dc3e4: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2DC3E4u;
    {
        const bool branch_taken_0x2dc3e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC3E4u;
        // 0x2dc3e8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc3e4) {
            ctx->pc = 0x2DC454u;
            goto label_2dc454;
        }
    }
    ctx->pc = 0x2DC3ECu;
    // 0x2dc3ec: 0x3c023f2f  lui         $v0, 0x3F2F
    ctx->pc = 0x2dc3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16175 << 16));
    // 0x2dc3f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2dc3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2dc3f4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2dc3f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2dc3f8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2DC3F8u;
    {
        const bool branch_taken_0x2dc3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC3F8u;
        // 0x2dc3fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc3f8) {
            ctx->pc = 0x2DC430u;
            goto label_2dc430;
        }
    }
    ctx->pc = 0x2DC400u;
    // 0x2dc400: 0x460c6000  add.s       $f0, $f12, $f12
    ctx->pc = 0x2dc400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x2dc404: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dc404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2dc408: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2dc408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dc40c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2dc40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2dc410: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dc410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dc414: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2dc414u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2dc418: 0x46016040  add.s       $f1, $f12, $f1
    ctx->pc = 0x2dc418u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x2dc41c: 0x0  nop
    ctx->pc = 0x2dc41cu;
    // NOP
    // 0x2dc420: 0x0  nop
    ctx->pc = 0x2dc420u;
    // NOP
    // 0x2dc424: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x2dc424u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x2dc428: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2DC428u;
    {
        const bool branch_taken_0x2dc428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC428u;
        // 0x2dc42c: 0x460c6282  mul.s       $f10, $f12, $f12 (Delay Slot)
        ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc428) {
            ctx->pc = 0x2DC4B0u;
            goto label_2dc4b0;
        }
    }
    ctx->pc = 0x2DC430u;
label_2dc430:
    // 0x2dc430: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dc430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2dc434: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dc434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc438: 0x46006040  add.s       $f1, $f12, $f0
    ctx->pc = 0x2dc438u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2dc43c: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x2dc43cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2dc440: 0x0  nop
    ctx->pc = 0x2dc440u;
    // NOP
    // 0x2dc444: 0x0  nop
    ctx->pc = 0x2dc444u;
    // NOP
    // 0x2dc448: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x2dc448u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x2dc44c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2DC44Cu;
    {
        const bool branch_taken_0x2dc44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC44Cu;
        // 0x2dc450: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc44c) {
            ctx->pc = 0x2DC4ACu;
            goto label_2dc4ac;
        }
    }
    ctx->pc = 0x2DC454u;
label_2dc454:
    // 0x2dc454: 0x3c02401b  lui         $v0, 0x401B
    ctx->pc = 0x2dc454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16411 << 16));
    // 0x2dc458: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2dc458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2dc45c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2dc45cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2dc460: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2DC460u;
    {
        const bool branch_taken_0x2dc460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC460u;
        // 0x2dc464: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc460) {
            ctx->pc = 0x2DC498u;
            goto label_2dc498;
        }
    }
    ctx->pc = 0x2DC468u;
    // 0x2dc468: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2dc468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2dc46c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dc46cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc470: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dc470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2dc474: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2dc474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dc478: 0x46006042  mul.s       $f1, $f12, $f0
    ctx->pc = 0x2dc478u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2dc47c: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x2dc47cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2dc480: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2dc480u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2dc484: 0x0  nop
    ctx->pc = 0x2dc484u;
    // NOP
    // 0x2dc488: 0x0  nop
    ctx->pc = 0x2dc488u;
    // NOP
    // 0x2dc48c: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x2dc48cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x2dc490: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2DC490u;
    {
        const bool branch_taken_0x2dc490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC490u;
        // 0x2dc494: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc490) {
            ctx->pc = 0x2DC4ACu;
            goto label_2dc4ac;
        }
    }
    ctx->pc = 0x2DC498u;
label_2dc498:
    // 0x2dc498: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2dc498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2dc49c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dc49cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc4a0: 0x0  nop
    ctx->pc = 0x2dc4a0u;
    // NOP
    // 0x2dc4a4: 0x0  nop
    ctx->pc = 0x2dc4a4u;
    // NOP
    // 0x2dc4a8: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x2dc4a8u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
label_2dc4ac:
    // 0x2dc4ac: 0x460c6282  mul.s       $f10, $f12, $f12
    ctx->pc = 0x2dc4acu;
    ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_2dc4b0:
    // 0x2dc4b0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2dc4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2dc4b4: 0x2462b180  addiu       $v0, $v1, -0x4E80
    ctx->pc = 0x2dc4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947200));
    // 0x2dc4b8: 0xc469b180  lwc1        $f9, -0x4E80($v1)
    ctx->pc = 0x2dc4b8u;
    { uint32_t bits = FAST_READ32(0x3AB180u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2dc4bc: 0xc4430028  lwc1        $f3, 0x28($v0)
    ctx->pc = 0x2dc4bcu;
    { uint32_t bits = FAST_READ32(0x3AB1A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dc4c0: 0x460a5002  mul.s       $f0, $f10, $f10
    ctx->pc = 0x2dc4c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x2dc4c4: 0xc4450020  lwc1        $f5, 0x20($v0)
    ctx->pc = 0x2dc4c4u;
    { uint32_t bits = FAST_READ32(0x3AB1A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2dc4c8: 0xc4440024  lwc1        $f4, 0x24($v0)
    ctx->pc = 0x2dc4c8u;
    { uint32_t bits = FAST_READ32(0x3AB1A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2dc4cc: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x2dc4ccu;
    { uint32_t bits = FAST_READ32(0x3AB19Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc4d0: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x2dc4d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2dc4d4: 0xc4460018  lwc1        $f6, 0x18($v0)
    ctx->pc = 0x2dc4d4u;
    { uint32_t bits = FAST_READ32(0x3AB198u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2dc4d8: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x2dc4d8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2dc4dc: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x2dc4dcu;
    { uint32_t bits = FAST_READ32(0x3AB194u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dc4e0: 0xc4470010  lwc1        $f7, 0x10($v0)
    ctx->pc = 0x2dc4e0u;
    { uint32_t bits = FAST_READ32(0x3AB190u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2dc4e4: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x2dc4e4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x2dc4e8: 0xc4480008  lwc1        $f8, 0x8($v0)
    ctx->pc = 0x2dc4e8u;
    { uint32_t bits = FAST_READ32(0x3AB188u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2dc4ec: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2dc4ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2dc4f0: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x2dc4f0u;
    { uint32_t bits = FAST_READ32(0x3AB18Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dc4f4: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x2dc4f4u;
    { uint32_t bits = FAST_READ32(0x3AB184u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2dc4f8: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x2dc4f8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2dc4fc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2dc4fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2dc500: 0x46053180  add.s       $f6, $f6, $f5
    ctx->pc = 0x2dc500u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x2dc504: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2dc504u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2dc508: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x2dc508u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2dc50c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x2dc50cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2dc510: 0x460639c0  add.s       $f7, $f7, $f6
    ctx->pc = 0x2dc510u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x2dc514: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2dc514u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2dc518: 0x460701c2  mul.s       $f7, $f0, $f7
    ctx->pc = 0x2dc518u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2dc51c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x2dc51cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2dc520: 0x46074200  add.s       $f8, $f8, $f7
    ctx->pc = 0x2dc520u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[7]);
    // 0x2dc524: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x2dc524u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x2dc528: 0x46080202  mul.s       $f8, $f0, $f8
    ctx->pc = 0x2dc528u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x2dc52c: 0x46040042  mul.s       $f1, $f0, $f4
    ctx->pc = 0x2dc52cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2dc530: 0x46084a40  add.s       $f9, $f9, $f8
    ctx->pc = 0x2dc530u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
    // 0x2dc534: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DC534u;
    {
        const bool branch_taken_0x2dc534 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2DC538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC534u;
        // 0x2dc538: 0x46095002  mul.s       $f0, $f10, $f9 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc534) {
            ctx->pc = 0x2DC54Cu;
            goto label_2dc54c;
        }
    }
    ctx->pc = 0x2DC53Cu;
    // 0x2dc53c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dc53cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2dc540: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2dc540u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2dc544: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2DC544u;
    {
        const bool branch_taken_0x2dc544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC544u;
        // 0x2dc548: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc544) {
            ctx->pc = 0x2DC58Cu;
            goto label_2dc58c;
        }
    }
    ctx->pc = 0x2DC54Cu;
label_2dc54c:
    // 0x2dc54c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dc54cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2dc550: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2dc550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2dc554: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2dc554u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2dc558: 0x2442b170  addiu       $v0, $v0, -0x4E90
    ctx->pc = 0x2dc558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947184));
    // 0x2dc55c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2dc55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2dc560: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2dc560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2dc564: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2dc564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2dc568: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2dc568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dc56c: 0x2463b160  addiu       $v1, $v1, -0x4EA0
    ctx->pc = 0x2dc56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947168));
    // 0x2dc570: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2dc570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2dc574: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2dc574u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2dc578: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2dc578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc57c: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x2dc57cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x2dc580: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DC580u;
    {
        const bool branch_taken_0x2dc580 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2DC584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC580u;
        // 0x2dc584: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc580) {
            ctx->pc = 0x2DC58Cu;
            goto label_2dc58c;
        }
    }
    ctx->pc = 0x2DC588u;
    // 0x2dc588: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2dc588u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2dc58c:
    // 0x2dc58c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dc58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc590: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2dc590u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc594: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dc594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc598: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC598u;
        // 0x2dc59c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC5A0u;
}

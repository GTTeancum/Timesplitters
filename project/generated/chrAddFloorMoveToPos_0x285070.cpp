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

// Function: chrAddFloorMoveToPos
// Address: 0x285070 - 0x285344
void chrAddFloorMoveToPos_0x285070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chrAddFloorMoveToPos_0x285070");
#endif

    switch (ctx->pc) {
        case 0x285150u: goto label_285150;
        case 0x28521cu: goto label_28521c;
        case 0x2852a4u: goto label_2852a4;
        case 0x2852b4u: goto label_2852b4;
        default: break;
    }

    ctx->pc = 0x285070u;

    // 0x285070: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x285070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x285074: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x285074u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x285078: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x285078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x28507c: 0x8f83b238  lw          $v1, -0x4DC8($gp)
    ctx->pc = 0x28507cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x285080: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x285080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x285084: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x285084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x285088: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x285088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28508c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x28508cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x285090: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x285090u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x285094: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x285094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x285098: 0x8c6411a0  lw          $a0, 0x11A0($v1)
    ctx->pc = 0x285098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4512)));
    // 0x28509c: 0x108000a3  beqz        $a0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x28509Cu;
    {
        const bool branch_taken_0x28509c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2850A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28509Cu;
        // 0x2850a0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28509c) {
            ctx->pc = 0x28532Cu;
            goto label_28532c;
        }
    }
    ctx->pc = 0x2850A4u;
    // 0x2850a4: 0x8c65119c  lw          $a1, 0x119C($v1)
    ctx->pc = 0x2850a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4508)));
    // 0x2850a8: 0x10a0008e  beqz        $a1, . + 4 + (0x8E << 2)
    ctx->pc = 0x2850A8u;
    {
        const bool branch_taken_0x2850a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2850ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850A8u;
        // 0x2850ac: 0x24020136  addiu       $v0, $zero, 0x136 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2850a8) {
            ctx->pc = 0x2852E4u;
            goto label_2852e4;
        }
    }
    ctx->pc = 0x2850B0u;
    // 0x2850b0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2850b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2850b4: 0x5462008c  bnel        $v1, $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x2850B4u;
    {
        const bool branch_taken_0x2850b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2850b4) {
            ctx->pc = 0x2850B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2850B4u;
            // 0x2850b8: 0xc4830070  lwc1        $f3, 0x70($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2852E8u;
            goto label_2852e8;
        }
    }
    ctx->pc = 0x2850BCu;
    // 0x2850bc: 0x8c8201e0  lw          $v0, 0x1E0($a0)
    ctx->pc = 0x2850bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 480)));
    // 0x2850c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2850c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2850c4: 0x50a30088  beql        $a1, $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x2850C4u;
    {
        const bool branch_taken_0x2850c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2850c4) {
            ctx->pc = 0x2850C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2850C4u;
            // 0x2850c8: 0xc4830070  lwc1        $f3, 0x70($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2852E8u;
            goto label_2852e8;
        }
    }
    ctx->pc = 0x2850CCu;
    // 0x2850cc: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x2850ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2850d0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2850d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2850d4: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2850d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2850d8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2850d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2850dc: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2850dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2850e0: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2850e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2850e4: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x2850e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2850e8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2850e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2850ec: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2850ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2850f0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2850f0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2850f4: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x2850f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2850f8: 0x46021102  mul.s       $f4, $f2, $f2
    ctx->pc = 0x2850f8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2850fc: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x2850fcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x285100: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x285100u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x285104: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x285104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285108: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x285108u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x28510c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x28510cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x285110: 0x46012300  add.s       $f12, $f4, $f1
    ctx->pc = 0x285110u;
    ctx->f[12] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x285114: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x285114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285118: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x285118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x28511c: 0x0  nop
    ctx->pc = 0x28511cu;
    // NOP
    // 0x285120: 0x0  nop
    ctx->pc = 0x285120u;
    // NOP
    // 0x285124: 0x460c0204  c1          0xC0204
    ctx->pc = 0x285124u;
    ctx->f[8] = FPU_SQRT_S(ctx->f[12]);
    // 0x285128: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x285128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28512c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x28512cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x285130: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x285130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285134: 0x46084032  c.eq.s      $f8, $f8
    ctx->pc = 0x285134u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[8], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x285138: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x285138u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x28513c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x28513cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x285140: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x285140u;
    {
        const bool branch_taken_0x285140 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x285144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285140u;
        // 0x285144: 0xe7a30024  swc1        $f3, 0x24($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x285140) {
            ctx->pc = 0x285154u;
            goto label_285154;
        }
    }
    ctx->pc = 0x285148u;
    // 0x285148: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x285148u;
    SET_GPR_U32(ctx, 31, 0x285150u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x285148u, 0x285150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285150u;
label_285150:
    // 0x285150: 0x46000206  mov.s       $f8, $f0
    ctx->pc = 0x285150u;
    ctx->f[8] = FPU_MOV_S(ctx->f[0]);
label_285154:
    // 0x285154: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x285154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285158: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x285158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28515c: 0x0  nop
    ctx->pc = 0x28515cu;
    // NOP
    // 0x285160: 0x0  nop
    ctx->pc = 0x285160u;
    // NOP
    // 0x285164: 0x46080003  div.s       $f0, $f0, $f8
    ctx->pc = 0x285164u;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[8];
    // 0x285168: 0xc60d0000  lwc1        $f13, 0x0($s0)
    ctx->pc = 0x285168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28516c: 0x0  nop
    ctx->pc = 0x28516cu;
    // NOP
    // 0x285170: 0x0  nop
    ctx->pc = 0x285170u;
    // NOP
    // 0x285174: 0x46080843  div.s       $f1, $f1, $f8
    ctx->pc = 0x285174u;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[8];
    // 0x285178: 0xc60b0008  lwc1        $f11, 0x8($s0)
    ctx->pc = 0x285178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x28517c: 0xc7aa0010  lwc1        $f10, 0x10($sp)
    ctx->pc = 0x28517cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x285180: 0xc7a90014  lwc1        $f9, 0x14($sp)
    ctx->pc = 0x285180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x285184: 0x460a6901  sub.s       $f4, $f13, $f10
    ctx->pc = 0x285184u;
    ctx->f[4] = FPU_SUB_S(ctx->f[13], ctx->f[10]);
    // 0x285188: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x285188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28518c: 0x46095941  sub.s       $f5, $f11, $f9
    ctx->pc = 0x28518cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[11], ctx->f[9]);
    // 0x285190: 0xc7af0040  lwc1        $f15, 0x40($sp)
    ctx->pc = 0x285190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x285194: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x285194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x285198: 0x460021c2  mul.s       $f7, $f4, $f0
    ctx->pc = 0x285198u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x28519c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x28519cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2851a0: 0x46012982  mul.s       $f6, $f5, $f1
    ctx->pc = 0x2851a0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2851a4: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x2851a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2851a8: 0xc7ae0044  lwc1        $f14, 0x44($sp)
    ctx->pc = 0x2851a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2851ac: 0x460f18c1  sub.s       $f3, $f3, $f15
    ctx->pc = 0x2851acu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[15]);
    // 0x2851b0: 0x46063d00  add.s       $f20, $f7, $f6
    ctx->pc = 0x2851b0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x2851b4: 0x460e1081  sub.s       $f2, $f2, $f14
    ctx->pc = 0x2851b4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[14]);
    // 0x2851b8: 0x0  nop
    ctx->pc = 0x2851b8u;
    // NOP
    // 0x2851bc: 0x0  nop
    ctx->pc = 0x2851bcu;
    // NOP
    // 0x2851c0: 0x460818c3  div.s       $f3, $f3, $f8
    ctx->pc = 0x2851c0u;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[8];
    // 0x2851c4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2851c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2851c8: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2851c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2851cc: 0x0  nop
    ctx->pc = 0x2851ccu;
    // NOP
    // 0x2851d0: 0x0  nop
    ctx->pc = 0x2851d0u;
    // NOP
    // 0x2851d4: 0x46081083  div.s       $f2, $f2, $f8
    ctx->pc = 0x2851d4u;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[8];
    // 0x2851d8: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2851d8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2851dc: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x2851dcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x2851e0: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x2851e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2851e4: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x2851e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2851e8: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x2851e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2851ec: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x2851ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2851f0: 0xe7a50064  swc1        $f5, 0x64($sp)
    ctx->pc = 0x2851f0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2851f4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2851f4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2851f8: 0x0  nop
    ctx->pc = 0x2851f8u;
    // NOP
    // 0x2851fc: 0x0  nop
    ctx->pc = 0x2851fcu;
    // NOP
    // 0x285200: 0x460c0184  c1          0xC0184
    ctx->pc = 0x285200u;
    ctx->f[6] = FPU_SQRT_S(ctx->f[12]);
    // 0x285204: 0x46063032  c.eq.s      $f6, $f6
    ctx->pc = 0x285204u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[6], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x285208: 0x0  nop
    ctx->pc = 0x285208u;
    // NOP
    // 0x28520c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x28520Cu;
    {
        const bool branch_taken_0x28520c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x285210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28520Cu;
        // 0x285210: 0xe7a20054  swc1        $f2, 0x54($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28520c) {
            ctx->pc = 0x285238u;
            goto label_285238;
        }
    }
    ctx->pc = 0x285214u;
    // 0x285214: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x285214u;
    SET_GPR_U32(ctx, 31, 0x28521Cu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x285214u, 0x28521Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28521Cu;
label_28521c:
    // 0x28521c: 0xc60d0000  lwc1        $f13, 0x0($s0)
    ctx->pc = 0x28521cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x285220: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x285220u;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
    // 0x285224: 0xc60b0008  lwc1        $f11, 0x8($s0)
    ctx->pc = 0x285224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x285228: 0xc7af0040  lwc1        $f15, 0x40($sp)
    ctx->pc = 0x285228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x28522c: 0xc7ae0044  lwc1        $f14, 0x44($sp)
    ctx->pc = 0x28522cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x285230: 0xc7aa0010  lwc1        $f10, 0x10($sp)
    ctx->pc = 0x285230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x285234: 0xc7a90014  lwc1        $f9, 0x14($sp)
    ctx->pc = 0x285234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_285238:
    // 0x285238: 0x460a6901  sub.s       $f4, $f13, $f10
    ctx->pc = 0x285238u;
    ctx->f[4] = FPU_SUB_S(ctx->f[13], ctx->f[10]);
    // 0x28523c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x28523cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285240: 0x46095881  sub.s       $f2, $f11, $f9
    ctx->pc = 0x285240u;
    ctx->f[2] = FPU_SUB_S(ctx->f[11], ctx->f[9]);
    // 0x285244: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x285244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285248: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x285248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28524c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x28524cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x285250: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x285250u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x285254: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x285254u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x285258: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x285258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28525c: 0x0  nop
    ctx->pc = 0x28525cu;
    // NOP
    // 0x285260: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x285260u;
    {
        const bool branch_taken_0x285260 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x285260) {
            ctx->pc = 0x285264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285260u;
            // 0x285264: 0x46003187  neg.s       $f6, $f6 (Delay Slot)
            ctx->f[6] = FPU_NEG_S(ctx->f[6]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x285268u;
            goto label_285268;
        }
    }
    ctx->pc = 0x285268u;
label_285268:
    // 0x285268: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x285268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28526c: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x28526cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x285270: 0x4601a0c2  mul.s       $f3, $f20, $f1
    ctx->pc = 0x285270u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x285274: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x285274u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x285278: 0x4602a002  mul.s       $f0, $f20, $f2
    ctx->pc = 0x285278u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x28527c: 0x46001346  mov.s       $f13, $f2
    ctx->pc = 0x28527cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[2]);
    // 0x285280: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x285280u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x285284: 0x460378c0  add.s       $f3, $f15, $f3
    ctx->pc = 0x285284u;
    ctx->f[3] = FPU_ADD_S(ctx->f[15], ctx->f[3]);
    // 0x285288: 0x46007000  add.s       $f0, $f14, $f0
    ctx->pc = 0x285288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
    // 0x28528c: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x28528cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x285290: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x285290u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x285294: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x285294u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x285298: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x285298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x28529c: 0xc0b5f5a  jal         func_2D7D68
    ctx->pc = 0x28529Cu;
    SET_GPR_U32(ctx, 31, 0x2852A4u);
    ctx->pc = 0x2852A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28529Cu;
    // 0x2852a0: 0xe6030000  swc1        $f3, 0x0($s0) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D68u, 0x28529Cu, 0x2852A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2852A4u;
label_2852a4:
    // 0x2852a4: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x2852a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2852a8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2852a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2852ac: 0xc0b5f5a  jal         func_2D7D68
    ctx->pc = 0x2852ACu;
    SET_GPR_U32(ctx, 31, 0x2852B4u);
    ctx->pc = 0x2852B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2852ACu;
    // 0x2852b0: 0xc7ad0024  lwc1        $f13, 0x24($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D68u, 0x2852ACu, 0x2852B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2852B4u;
label_2852b4:
    // 0x2852b4: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2852b4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2852b8: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2852b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2852bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2852bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2852c0: 0xc78289a8  lwc1        $f2, -0x7658($gp)
    ctx->pc = 0x2852c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2852c4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2852c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2852c8: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x2852c8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2852cc: 0x0  nop
    ctx->pc = 0x2852ccu;
    // NOP
    // 0x2852d0: 0x0  nop
    ctx->pc = 0x2852d0u;
    // NOP
    // 0x2852d4: 0x4602a503  div.s       $f20, $f20, $f2
    ctx->pc = 0x2852d4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[2];
    // 0x2852d8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2852d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2852dc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2852DCu;
    {
        const bool branch_taken_0x2852dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2852E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2852DCu;
        // 0x2852e0: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2852dc) {
            ctx->pc = 0x28532Cu;
            goto label_28532c;
        }
    }
    ctx->pc = 0x2852E4u;
label_2852e4:
    // 0x2852e4: 0xc4830070  lwc1        $f3, 0x70($a0)
    ctx->pc = 0x2852e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2852e8:
    // 0x2852e8: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x2852e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2852ec: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2852ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2852f0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2852f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2852f4: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x2852f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2852f8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2852f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2852fc: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x2852fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x285300: 0xc4810078  lwc1        $f1, 0x78($a0)
    ctx->pc = 0x285300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285304: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x285304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285308: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x285308u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28530c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x28530cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x285310: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x285310u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x285314: 0xc4830080  lwc1        $f3, 0x80($a0)
    ctx->pc = 0x285314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x285318: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x285318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28531c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x28531cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285320: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x285320u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x285324: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x285324u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x285328: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x285328u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_28532c:
    // 0x28532c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x28532cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x285330: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x285330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x285334: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x285334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x285338: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x285338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28533c: 0x3e00008  jr          $ra
    ctx->pc = 0x28533Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28533Cu;
        // 0x285340: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28533Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285344u;
}

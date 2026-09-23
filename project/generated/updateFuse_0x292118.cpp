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

// Function: updateFuse
// Address: 0x292118 - 0x2922ac
void updateFuse_0x292118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("updateFuse_0x292118");
#endif

    switch (ctx->pc) {
        case 0x2921a8u: goto label_2921a8;
        case 0x29222cu: goto label_29222c;
        case 0x29223cu: goto label_29223c;
        case 0x29226cu: goto label_29226c;
        case 0x29227cu: goto label_29227c;
        case 0x292294u: goto label_292294;
        default: break;
    }

    ctx->pc = 0x292118u;

    // 0x292118: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x292118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x29211c: 0xc7818bbc  lwc1        $f1, -0x7444($gp)
    ctx->pc = 0x29211cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292120: 0xffb100a0  sd          $s1, 0xA0($sp)
    ctx->pc = 0x292120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 17));
    // 0x292124: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x292124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x292128: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x292128u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x29212c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x29212cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x292130: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x292130u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x292134: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x292134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x292138: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x292138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x29213c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29213cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292140: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x292140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x292144: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x292144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292148: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x292148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x29214c: 0xc44f0048  lwc1        $f15, 0x48($v0)
    ctx->pc = 0x29214cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x292150: 0xc450004c  lwc1        $f16, 0x4C($v0)
    ctx->pc = 0x292150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x292154: 0xc4510058  lwc1        $f17, 0x58($v0)
    ctx->pc = 0x292154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x292158: 0x46017bc2  mul.s       $f15, $f15, $f1
    ctx->pc = 0x292158u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[1]);
    // 0x29215c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x29215cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x292160: 0x46018402  mul.s       $f16, $f16, $f1
    ctx->pc = 0x292160u;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[1]);
    // 0x292164: 0x46018c42  mul.s       $f17, $f17, $f1
    ctx->pc = 0x292164u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[1]);
    // 0x292168: 0xc44e0038  lwc1        $f14, 0x38($v0)
    ctx->pc = 0x292168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x29216c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29216cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x292170: 0x0  nop
    ctx->pc = 0x292170u;
    // NOP
    // 0x292174: 0x0  nop
    ctx->pc = 0x292174u;
    // NOP
    // 0x292178: 0x46007bc3  div.s       $f15, $f15, $f0
    ctx->pc = 0x292178u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[0];
    // 0x29217c: 0x0  nop
    ctx->pc = 0x29217cu;
    // NOP
    // 0x292180: 0x0  nop
    ctx->pc = 0x292180u;
    // NOP
    // 0x292184: 0x46008403  div.s       $f16, $f16, $f0
    ctx->pc = 0x292184u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[16] = copysignf(INFINITY, ctx->f[16] * 0.0f); } else ctx->f[16] = ctx->f[16] / ctx->f[0];
    // 0x292188: 0xc44d0034  lwc1        $f13, 0x34($v0)
    ctx->pc = 0x292188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29218c: 0x0  nop
    ctx->pc = 0x29218cu;
    // NOP
    // 0x292190: 0x0  nop
    ctx->pc = 0x292190u;
    // NOP
    // 0x292194: 0x46008c43  div.s       $f17, $f17, $f0
    ctx->pc = 0x292194u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[17] = copysignf(INFINITY, ctx->f[17] * 0.0f); } else ctx->f[17] = ctx->f[17] / ctx->f[0];
    // 0x292198: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x292198u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29219c: 0xc44c0030  lwc1        $f12, 0x30($v0)
    ctx->pc = 0x29219cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2921a0: 0xc0ad338  jal         func_2B4CE0
    ctx->pc = 0x2921A0u;
    SET_GPR_U32(ctx, 31, 0x2921A8u);
    ctx->pc = 0x2921A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2921A0u;
    // 0x2921a4: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4CE0u, 0x2921A0u, 0x2921A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2921A8u;
label_2921a8:
    // 0x2921a8: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2921a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2921ac: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x2921acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2921b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2921b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2921b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2921b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2921b8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2921b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2921bc: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x2921bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2921c0: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x2921c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2921c4: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x2921c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2921c8: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x2921c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2921cc: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x2921ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2921d0: 0xe7a50048  swc1        $f5, 0x48($sp)
    ctx->pc = 0x2921d0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2921d4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2921d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2921d8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2921d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2921dc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2921dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2921e0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2921e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2921e4: 0x46140182  mul.s       $f6, $f0, $f20
    ctx->pc = 0x2921e4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2921e8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2921e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2921ec: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2921ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2921f0: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2921f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2921f4: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x2921f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x2921f8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2921f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2921fc: 0x46051981  sub.s       $f6, $f3, $f5
    ctx->pc = 0x2921fcu;
    ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x292200: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x292200u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x292204: 0x461409c2  mul.s       $f7, $f1, $f20
    ctx->pc = 0x292204u;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x292208: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x292208u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x29220c: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x29220cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x292210: 0x46143502  mul.s       $f20, $f6, $f20
    ctx->pc = 0x292210u;
    ctx->f[20] = FPU_MUL_S(ctx->f[6], ctx->f[20]);
    // 0x292214: 0xe7a60068  swc1        $f6, 0x68($sp)
    ctx->pc = 0x292214u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x292218: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x292218u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x29221c: 0x46142940  add.s       $f5, $f5, $f20
    ctx->pc = 0x29221cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[20]);
    // 0x292220: 0xe7a40074  swc1        $f4, 0x74($sp)
    ctx->pc = 0x292220u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x292224: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x292224u;
    SET_GPR_U32(ctx, 31, 0x29222Cu);
    ctx->pc = 0x292228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292224u;
    // 0x292228: 0xe7a50078  swc1        $f5, 0x78($sp) (Delay Slot)
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x292224u, 0x29222Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29222Cu;
label_29222c:
    // 0x29222c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x29222cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x292230: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x292230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292234: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x292234u;
    SET_GPR_U32(ctx, 31, 0x29223Cu);
    ctx->pc = 0x292238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292234u;
    // 0x292238: 0x8c4406ec  lw          $a0, 0x6EC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1772)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x292234u, 0x29223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29223Cu;
label_29223c:
    // 0x29223c: 0x8f849da8  lw          $a0, -0x6258($gp)
    ctx->pc = 0x29223cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
    // 0x292240: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x292240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x292244: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x292244u;
    {
        const bool branch_taken_0x292244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292244) {
            ctx->pc = 0x292248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292244u;
            // 0x292248: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29224Cu;
            goto label_29224c;
        }
    }
    ctx->pc = 0x29224Cu;
label_29224c:
    // 0x29224c: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x29224cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x292250: 0x1810  mfhi        $v1
    ctx->pc = 0x292250u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x292254: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x292254u;
    {
        const bool branch_taken_0x292254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x292258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292254u;
        // 0x292258: 0x27b00080  addiu       $s0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292254) {
            ctx->pc = 0x292294u;
            goto label_292294;
        }
    }
    ctx->pc = 0x29225Cu;
    // 0x29225c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29225cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x292260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292264: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x292264u;
    SET_GPR_U32(ctx, 31, 0x29226Cu);
    ctx->pc = 0x292268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292264u;
    // 0x292268: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x292264u, 0x29226Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29226Cu;
label_29226c:
    // 0x29226c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29226cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292270: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x292270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292274: 0xc0a5c78  jal         func_2971E0
    ctx->pc = 0x292274u;
    SET_GPR_U32(ctx, 31, 0x29227Cu);
    ctx->pc = 0x292278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292274u;
    // 0x292278: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2971E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2971E0u, 0x292274u, 0x29227Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29227Cu;
label_29227c:
    // 0x29227c: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x29227cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x292280: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x292280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292284: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x292284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292288: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x292288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29228c: 0xc0a5b90  jal         func_296E40
    ctx->pc = 0x29228Cu;
    SET_GPR_U32(ctx, 31, 0x292294u);
    ctx->pc = 0x292290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29228Cu;
    // 0x292290: 0xa62804  sllv        $a1, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E40u, 0x29228Cu, 0x292294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292294u;
label_292294:
    // 0x292294: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x292294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x292298: 0xdfb100a0  ld          $s1, 0xA0($sp)
    ctx->pc = 0x292298u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29229c: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x29229cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2922a0: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2922a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2922a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2922A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2922A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2922A4u;
        // 0x2922a8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2922A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2922ACu;
}

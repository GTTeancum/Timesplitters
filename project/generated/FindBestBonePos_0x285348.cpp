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

// Function: FindBestBonePos
// Address: 0x285348 - 0x28576c
void FindBestBonePos_0x285348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FindBestBonePos_0x285348");
#endif

    switch (ctx->pc) {
        case 0x285450u: goto label_285450;
        case 0x285460u: goto label_285460;
        case 0x28546cu: goto label_28546c;
        case 0x285478u: goto label_285478;
        case 0x28548cu: goto label_28548c;
        case 0x2854a0u: goto label_2854a0;
        case 0x2854d8u: goto label_2854d8;
        case 0x285568u: goto label_285568;
        case 0x285584u: goto label_285584;
        case 0x285590u: goto label_285590;
        case 0x28559cu: goto label_28559c;
        case 0x285700u: goto label_285700;
        case 0x28570cu: goto label_28570c;
        case 0x285718u: goto label_285718;
        case 0x285724u: goto label_285724;
        case 0x285730u: goto label_285730;
        case 0x28573cu: goto label_28573c;
        default: break;
    }

    ctx->pc = 0x285348u;

    // 0x285348: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x285348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x28534c: 0xffb60190  sd          $s6, 0x190($sp)
    ctx->pc = 0x28534cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 22));
    // 0x285350: 0xffb50180  sd          $s5, 0x180($sp)
    ctx->pc = 0x285350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 21));
    // 0x285354: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x285354u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285358: 0xffbf01c0  sd          $ra, 0x1C0($sp)
    ctx->pc = 0x285358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 31));
    // 0x28535c: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x28535cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x285360: 0xffbe01b0  sd          $fp, 0x1B0($sp)
    ctx->pc = 0x285360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 30));
    // 0x285364: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x285364u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x285368: 0xffb701a0  sd          $s7, 0x1A0($sp)
    ctx->pc = 0x285368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 23));
    // 0x28536c: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x28536cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    // 0x285370: 0xffb30160  sd          $s3, 0x160($sp)
    ctx->pc = 0x285370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 19));
    // 0x285374: 0xffb20150  sd          $s2, 0x150($sp)
    ctx->pc = 0x285374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 18));
    // 0x285378: 0xffb10140  sd          $s1, 0x140($sp)
    ctx->pc = 0x285378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 17));
    // 0x28537c: 0xffb00130  sd          $s0, 0x130($sp)
    ctx->pc = 0x28537cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 16));
    // 0x285380: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x285380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x285384: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x285384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x285388: 0xafa80110  sw          $t0, 0x110($sp)
    ctx->pc = 0x285388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 8));
    // 0x28538c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x28538cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x285390: 0xafa90114  sw          $t1, 0x114($sp)
    ctx->pc = 0x285390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 9));
    // 0x285394: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x285394u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x285398: 0x65a821  addu        $s5, $v1, $a1
    ctx->pc = 0x285398u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x28539c: 0x82a20002  lb          $v0, 0x2($s5)
    ctx->pc = 0x28539cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x2853a0: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2853A0u;
    {
        const bool branch_taken_0x2853a0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2853a0) {
            ctx->pc = 0x2853A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2853A0u;
            // 0x2853a4: 0xafa00118  sw          $zero, 0x118($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2853B8u;
            goto label_2853b8;
        }
    }
    ctx->pc = 0x2853A8u;
    // 0x2853a8: 0x600013  mtlo        $v1
    ctx->pc = 0x2853a8u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x2853ac: 0x70440000  madd        $zero, $v0, $a0
    ctx->pc = 0x2853acu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x2853b0: 0x2812  mflo        $a1
    ctx->pc = 0x2853b0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2853b4: 0xafa50118  sw          $a1, 0x118($sp)
    ctx->pc = 0x2853b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 5));
label_2853b8:
    // 0x2853b8: 0x82a40003  lb          $a0, 0x3($s5)
    ctx->pc = 0x2853b8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x2853bc: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2853BCu;
    {
        const bool branch_taken_0x2853bc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2853C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2853BCu;
        // 0x2853c0: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2853bc) {
            ctx->pc = 0x2853D8u;
            goto label_2853d8;
        }
    }
    ctx->pc = 0x2853C4u;
    // 0x2853c4: 0x600013  mtlo        $v1
    ctx->pc = 0x2853c4u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x2853c8: 0x70820000  madd        $zero, $a0, $v0
    ctx->pc = 0x2853c8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x2853cc: 0x2812  mflo        $a1
    ctx->pc = 0x2853ccu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2853d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2853D0u;
    {
        const bool branch_taken_0x2853d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2853D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2853D0u;
        // 0x2853d4: 0xafa5011c  sw          $a1, 0x11C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2853d0) {
            ctx->pc = 0x2853DCu;
            goto label_2853dc;
        }
    }
    ctx->pc = 0x2853D8u;
label_2853d8:
    // 0x2853d8: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x2853d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
label_2853dc:
    // 0x2853dc: 0x8eb20008  lw          $s2, 0x8($s5)
    ctx->pc = 0x2853dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2853e0: 0x26a20014  addiu       $v0, $s5, 0x14
    ctx->pc = 0x2853e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    // 0x2853e4: 0x1240009e  beqz        $s2, . + 4 + (0x9E << 2)
    ctx->pc = 0x2853E4u;
    {
        const bool branch_taken_0x2853e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2853E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2853E4u;
        // 0x2853e8: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2853e4) {
            ctx->pc = 0x285660u;
            goto label_285660;
        }
    }
    ctx->pc = 0x2853ECu;
    // 0x2853ec: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2853ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2853f0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2853f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2853f4: 0xc4e60008  lwc1        $f6, 0x8($a3)
    ctx->pc = 0x2853f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2853f8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2853f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2853fc: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x2853fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x285400: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x285400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x285404: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x285404u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x285408: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x285408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28540c: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x28540cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x285410: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x285410u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x285414: 0xc441fa34  lwc1        $f1, -0x5CC($v0)
    ctx->pc = 0x285414u;
    { uint32_t bits = FAST_READ32(0x3AFA34u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285418: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x285418u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x28541c: 0xc460fa38  lwc1        $f0, -0x5C8($v1)
    ctx->pc = 0x28541cu;
    { uint32_t bits = FAST_READ32(0x3AFA38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285420: 0x46003306  mov.s       $f12, $f6
    ctx->pc = 0x285420u;
    ctx->f[12] = FPU_MOV_S(ctx->f[6]);
    // 0x285424: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x285424u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x285428: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x285428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28542c: 0x46001b46  mov.s       $f13, $f3
    ctx->pc = 0x28542cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[3]);
    // 0x285430: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x285430u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x285434: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x285434u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x285438: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x285438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28543c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x28543cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x285440: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x285440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x285444: 0xe7a300f4  swc1        $f3, 0xF4($sp)
    ctx->pc = 0x285444u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x285448: 0xc0b5f5a  jal         func_2D7D68
    ctx->pc = 0x285448u;
    SET_GPR_U32(ctx, 31, 0x285450u);
    ctx->pc = 0x28544Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285448u;
    // 0x28544c: 0xe7a600f8  swc1        $f6, 0xF8($sp) (Delay Slot)
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D68u, 0x285448u, 0x285450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285450u;
label_285450:
    // 0x285450: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x285450u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x285454: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x285454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x285458: 0xc0ad27e  jal         func_2B49F8
    ctx->pc = 0x285458u;
    SET_GPR_U32(ctx, 31, 0x285460u);
    ctx->pc = 0x28545Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285458u;
    // 0x28545c: 0xafa40128  sw          $a0, 0x128($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B49F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B49F8u, 0x285458u, 0x285460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285460u;
label_285460:
    // 0x285460: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x285460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x285464: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x285464u;
    SET_GPR_U32(ctx, 31, 0x28546Cu);
    ctx->pc = 0x285468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285464u;
    // 0x285468: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x285464u, 0x28546Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28546Cu;
label_28546c:
    // 0x28546c: 0xc7ac00f0  lwc1        $f12, 0xF0($sp)
    ctx->pc = 0x28546cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x285470: 0xc0b5f5a  jal         func_2D7D68
    ctx->pc = 0x285470u;
    SET_GPR_U32(ctx, 31, 0x285478u);
    ctx->pc = 0x285474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285470u;
    // 0x285474: 0xc7ad00f4  lwc1        $f13, 0xF4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D68u, 0x285470u, 0x285478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285478u;
label_285478:
    // 0x285478: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x285478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x28547c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x28547cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x285480: 0xafa50124  sw          $a1, 0x124($sp)
    ctx->pc = 0x285480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 5));
    // 0x285484: 0xc0ad2ae  jal         func_2B4AB8
    ctx->pc = 0x285484u;
    SET_GPR_U32(ctx, 31, 0x28548Cu);
    ctx->pc = 0x285488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285484u;
    // 0x285488: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4AB8u, 0x285484u, 0x28548Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28548Cu;
label_28548c:
    // 0x28548c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x28548cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x285490: 0x4400078  bltz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x285490u;
    {
        const bool branch_taken_0x285490 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x285494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285490u;
        // 0x285494: 0x27b700b0  addiu       $s7, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285490) {
            ctx->pc = 0x285674u;
            goto label_285674;
        }
    }
    ctx->pc = 0x285498u;
    // 0x285498: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x285498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x28549c: 0x0  nop
    ctx->pc = 0x28549cu;
    // NOP
label_2854a0:
    // 0x2854a0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2854a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2854a4: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x2854a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2854a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2854a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2854ac: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x2854acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2854b0: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x2854b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2854b4: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2854b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2854b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2854b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2854bc: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x2854bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2854c0: 0xc38821  addu        $s1, $a2, $v1
    ctx->pc = 0x2854c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2854c4: 0x18a0005f  blez        $a1, . + 4 + (0x5F << 2)
    ctx->pc = 0x2854C4u;
    {
        const bool branch_taken_0x2854c4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2854C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854C4u;
        // 0x2854c8: 0x829821  addu        $s3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2854c4) {
            ctx->pc = 0x285644u;
            goto label_285644;
        }
    }
    ctx->pc = 0x2854CCu;
    // 0x2854cc: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x2854ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2854d0: 0x265e0018  addiu       $fp, $s2, 0x18
    ctx->pc = 0x2854d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x2854d4: 0x0  nop
    ctx->pc = 0x2854d4u;
    // NOP
label_2854d8:
    // 0x2854d8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2854d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2854dc: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x2854dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2854e0: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2854e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2854e4: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x2854e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x2854e8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2854e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2854ec: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x2854ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2854f0: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x2854f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2854f4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2854F4u;
    {
        const bool branch_taken_0x2854f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2854f4) {
            ctx->pc = 0x2854F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2854F4u;
            // 0x2854f8: 0x92630000  lbu         $v1, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285508u;
            goto label_285508;
        }
    }
    ctx->pc = 0x2854FCu;
    // 0x2854fc: 0x82a40001  lb          $a0, 0x1($s5)
    ctx->pc = 0x2854fcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x285500: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x285500u;
    {
        const bool branch_taken_0x285500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285500u;
        // 0x285504: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285500) {
            ctx->pc = 0x285558u;
            goto label_285558;
        }
    }
    ctx->pc = 0x285508u;
label_285508:
    // 0x285508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x285508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28550c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x28550Cu;
    {
        const bool branch_taken_0x28550c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x285510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28550Cu;
        // 0x285510: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28550c) {
            ctx->pc = 0x28554Cu;
            goto label_28554c;
        }
    }
    ctx->pc = 0x285514u;
    // 0x285514: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x285514u;
    {
        const bool branch_taken_0x285514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285514u;
        // 0x285518: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285514) {
            ctx->pc = 0x28552Cu;
            goto label_28552c;
        }
    }
    ctx->pc = 0x28551Cu;
    // 0x28551c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28551Cu;
    {
        const bool branch_taken_0x28551c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x285520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28551Cu;
        // 0x285520: 0x8fa50118  lw          $a1, 0x118($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28551c) {
            ctx->pc = 0x28553Cu;
            goto label_28553c;
        }
    }
    ctx->pc = 0x285524u;
    // 0x285524: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x285524u;
    {
        const bool branch_taken_0x285524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285524u;
        // 0x285528: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285524) {
            ctx->pc = 0x285588u;
            goto label_285588;
        }
    }
    ctx->pc = 0x28552Cu;
label_28552c:
    // 0x28552c: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28552Cu;
    {
        const bool branch_taken_0x28552c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28552c) {
            ctx->pc = 0x285530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28552Cu;
            // 0x285530: 0x82a40001  lb          $a0, 0x1($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285570u;
            goto label_285570;
        }
    }
    ctx->pc = 0x285534u;
    // 0x285534: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x285534u;
    {
        const bool branch_taken_0x285534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285534u;
        // 0x285538: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285534) {
            ctx->pc = 0x285588u;
            goto label_285588;
        }
    }
    ctx->pc = 0x28553Cu;
label_28553c:
    // 0x28553c: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x28553cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x285540: 0x80a40001  lb          $a0, 0x1($a1)
    ctx->pc = 0x285540u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x285544: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x285544u;
    {
        const bool branch_taken_0x285544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285544u;
        // 0x285548: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285544) {
            ctx->pc = 0x28555Cu;
            goto label_28555c;
        }
    }
    ctx->pc = 0x28554Cu;
label_28554c:
    // 0x28554c: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x28554cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x285550: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x285550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285554: 0x80440001  lb          $a0, 0x1($v0)
    ctx->pc = 0x285554u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_285558:
    // 0x285558: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x285558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_28555c:
    // 0x28555c: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x28555cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x285560: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x285560u;
    SET_GPR_U32(ctx, 31, 0x285568u);
    ctx->pc = 0x285564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285560u;
    // 0x285564: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x285560u, 0x285568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285568u;
label_285568:
    // 0x285568: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x285568u;
    {
        const bool branch_taken_0x285568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285568u;
        // 0x28556c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285568) {
            ctx->pc = 0x285588u;
            goto label_285588;
        }
    }
    ctx->pc = 0x285570u;
label_285570:
    // 0x285570: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x285570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285574: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x285574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x285578: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x285578u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x28557c: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x28557Cu;
    SET_GPR_U32(ctx, 31, 0x285584u);
    ctx->pc = 0x285580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28557Cu;
    // 0x285580: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x28557Cu, 0x285584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285584u;
label_285584:
    // 0x285584: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x285584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_285588:
    // 0x285588: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x285588u;
    SET_GPR_U32(ctx, 31, 0x285590u);
    ctx->pc = 0x28558Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285588u;
    // 0x28558c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x285588u, 0x285590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285590u;
label_285590:
    // 0x285590: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x285590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x285594: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x285594u;
    SET_GPR_U32(ctx, 31, 0x28559Cu);
    ctx->pc = 0x285598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285594u;
    // 0x285598: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x285594u, 0x28559Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28559Cu;
label_28559c:
    // 0x28559c: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x28559cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2855a0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2855a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2855a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2855a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2855a8: 0x0  nop
    ctx->pc = 0x2855a8u;
    // NOP
    // 0x2855ac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2855ACu;
    {
        const bool branch_taken_0x2855ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2855B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855ACu;
        // 0x2855b0: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2855ac) {
            ctx->pc = 0x2855B8u;
            goto label_2855b8;
        }
    }
    ctx->pc = 0x2855B4u;
    // 0x2855b4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2855b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2855b8:
    // 0x2855b8: 0xc7a20104  lwc1        $f2, 0x104($sp)
    ctx->pc = 0x2855b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2855bc: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2855bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2855c0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2855c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2855c4: 0x0  nop
    ctx->pc = 0x2855c4u;
    // NOP
    // 0x2855c8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2855C8u;
    {
        const bool branch_taken_0x2855c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2855c8) {
            ctx->pc = 0x2855CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2855C8u;
            // 0x2855cc: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2855D0u;
            goto label_2855d0;
        }
    }
    ctx->pc = 0x2855D0u;
label_2855d0:
    // 0x2855d0: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x2855d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2855d4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2855d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2855d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2855d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2855dc: 0x0  nop
    ctx->pc = 0x2855dcu;
    // NOP
    // 0x2855e0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2855E0u;
    {
        const bool branch_taken_0x2855e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2855e0) {
            ctx->pc = 0x2855E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2855E0u;
            // 0x2855e4: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2855E8u;
            goto label_2855e8;
        }
    }
    ctx->pc = 0x2855E8u;
label_2855e8:
    // 0x2855e8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2855e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2855ec: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2855ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2855f0: 0x0  nop
    ctx->pc = 0x2855f0u;
    // NOP
    // 0x2855f4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2855F4u;
    {
        const bool branch_taken_0x2855f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2855f4) {
            ctx->pc = 0x2855F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2855F4u;
            // 0x2855f8: 0xe7a30010  swc1        $f3, 0x10($sp) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2855FCu;
            goto label_2855fc;
        }
    }
    ctx->pc = 0x2855FCu;
label_2855fc:
    // 0x2855fc: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2855fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285600: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x285600u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x285604: 0x0  nop
    ctx->pc = 0x285604u;
    // NOP
    // 0x285608: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x285608u;
    {
        const bool branch_taken_0x285608 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x285608) {
            ctx->pc = 0x28560Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285608u;
            // 0x28560c: 0xe7a20014  swc1        $f2, 0x14($sp) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x285610u;
            goto label_285610;
        }
    }
    ctx->pc = 0x285610u;
label_285610:
    // 0x285610: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x285610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285614: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x285614u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x285618: 0x0  nop
    ctx->pc = 0x285618u;
    // NOP
    // 0x28561c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x28561Cu;
    {
        const bool branch_taken_0x28561c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28561c) {
            ctx->pc = 0x285620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28561Cu;
            // 0x285620: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x285624u;
            goto label_285624;
        }
    }
    ctx->pc = 0x285624u;
label_285624:
    // 0x285624: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x285624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x285628: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x285628u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x28562c: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x28562cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x285630: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x285630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x285634: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x285634u;
    {
        const bool branch_taken_0x285634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285634u;
        // 0x285638: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285634) {
            ctx->pc = 0x2854D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2854d8;
        }
    }
    ctx->pc = 0x28563Cu;
    // 0x28563c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28563Cu;
    {
        const bool branch_taken_0x28563c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28563Cu;
        // 0x285640: 0x3c0902d  daddu       $s2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28563c) {
            ctx->pc = 0x28564Cu;
            goto label_28564c;
        }
    }
    ctx->pc = 0x285644u;
label_285644:
    // 0x285644: 0x265e0018  addiu       $fp, $s2, 0x18
    ctx->pc = 0x285644u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x285648: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x285648u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28564c:
    // 0x28564c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x28564cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x285650: 0x443ff93  bgezl       $v0, . + 4 + (-0x6D << 2)
    ctx->pc = 0x285650u;
    {
        const bool branch_taken_0x285650 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x285650) {
            ctx->pc = 0x285654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285650u;
            // 0x285654: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2854A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2854a0;
        }
    }
    ctx->pc = 0x285658u;
    // 0x285658: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x285658u;
    {
        const bool branch_taken_0x285658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285658u;
        // 0x28565c: 0xc7a60000  lwc1        $f6, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x285658) {
            ctx->pc = 0x285678u;
            goto label_285678;
        }
    }
    ctx->pc = 0x285660u;
label_285660:
    // 0x285660: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x285660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x285664: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x285664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x285668: 0xafa40128  sw          $a0, 0x128($sp)
    ctx->pc = 0x285668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 4));
    // 0x28566c: 0x27b700b0  addiu       $s7, $sp, 0xB0
    ctx->pc = 0x28566cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x285670: 0xafa50124  sw          $a1, 0x124($sp)
    ctx->pc = 0x285670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 5));
label_285674:
    // 0x285674: 0xc7a60000  lwc1        $f6, 0x0($sp)
    ctx->pc = 0x285674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_285678:
    // 0x285678: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x285678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28567c: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x28567cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x285680: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x285680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x285684: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x285684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x285688: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x285688u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x28568c: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x28568cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x285690: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x285690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285694: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x285694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x285698: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x285698u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x28569c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x28569cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2856a0: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x2856a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x2856a4: 0x8fa20114  lw          $v0, 0x114($sp)
    ctx->pc = 0x2856a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x2856a8: 0x8fa50124  lw          $a1, 0x124($sp)
    ctx->pc = 0x2856a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2856ac: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2856acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2856b0: 0x46023180  add.s       $f6, $f6, $f2
    ctx->pc = 0x2856b0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x2856b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2856b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2856b8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2856b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2856bc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2856bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2856c0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2856c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2856c4: 0xe4460000  swc1        $f6, 0x0($v0)
    ctx->pc = 0x2856c4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2856c8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2856c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2856cc: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x2856ccu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x2856d0: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2856d0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2856d4: 0xe4460000  swc1        $f6, 0x0($v0)
    ctx->pc = 0x2856d4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2856d8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2856d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2856dc: 0x8fa20114  lw          $v0, 0x114($sp)
    ctx->pc = 0x2856dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x2856e0: 0xe4470004  swc1        $f7, 0x4($v0)
    ctx->pc = 0x2856e0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2856e4: 0xe4450008  swc1        $f5, 0x8($v0)
    ctx->pc = 0x2856e4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2856e8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2856e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2856ec: 0xe7a400a4  swc1        $f4, 0xA4($sp)
    ctx->pc = 0x2856ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2856f0: 0xe4450008  swc1        $f5, 0x8($v0)
    ctx->pc = 0x2856f0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2856f4: 0xe7a600a0  swc1        $f6, 0xA0($sp)
    ctx->pc = 0x2856f4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2856f8: 0xc0b57ea  jal         func_2D5FA8
    ctx->pc = 0x2856F8u;
    SET_GPR_U32(ctx, 31, 0x285700u);
    ctx->pc = 0x2856FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2856F8u;
    // 0x2856fc: 0xe7a500a8  swc1        $f5, 0xA8($sp) (Delay Slot)
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5FA8u, 0x2856F8u, 0x285700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285700u;
label_285700:
    // 0x285700: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x285700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x285704: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x285704u;
    SET_GPR_U32(ctx, 31, 0x28570Cu);
    ctx->pc = 0x285708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285704u;
    // 0x285708: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x285704u, 0x28570Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28570Cu;
label_28570c:
    // 0x28570c: 0x8fa50114  lw          $a1, 0x114($sp)
    ctx->pc = 0x28570cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x285710: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x285710u;
    SET_GPR_U32(ctx, 31, 0x285718u);
    ctx->pc = 0x285714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285710u;
    // 0x285714: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x285710u, 0x285718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285718u;
label_285718:
    // 0x285718: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x285718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28571c: 0xc0b57ea  jal         func_2D5FA8
    ctx->pc = 0x28571Cu;
    SET_GPR_U32(ctx, 31, 0x285724u);
    ctx->pc = 0x285720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28571Cu;
    // 0x285720: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5FA8u, 0x28571Cu, 0x285724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285724u;
label_285724:
    // 0x285724: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x285724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x285728: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x285728u;
    SET_GPR_U32(ctx, 31, 0x285730u);
    ctx->pc = 0x28572Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285728u;
    // 0x28572c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x285728u, 0x285730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285730u;
label_285730:
    // 0x285730: 0x8fa50114  lw          $a1, 0x114($sp)
    ctx->pc = 0x285730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x285734: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x285734u;
    SET_GPR_U32(ctx, 31, 0x28573Cu);
    ctx->pc = 0x285738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285734u;
    // 0x285738: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x285734u, 0x28573Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28573Cu;
label_28573c:
    // 0x28573c: 0xdfbf01c0  ld          $ra, 0x1C0($sp)
    ctx->pc = 0x28573cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x285740: 0xdfbe01b0  ld          $fp, 0x1B0($sp)
    ctx->pc = 0x285740u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x285744: 0xdfb701a0  ld          $s7, 0x1A0($sp)
    ctx->pc = 0x285744u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x285748: 0xdfb60190  ld          $s6, 0x190($sp)
    ctx->pc = 0x285748u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x28574c: 0xdfb50180  ld          $s5, 0x180($sp)
    ctx->pc = 0x28574cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x285750: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x285750u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x285754: 0xdfb30160  ld          $s3, 0x160($sp)
    ctx->pc = 0x285754u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x285758: 0xdfb20150  ld          $s2, 0x150($sp)
    ctx->pc = 0x285758u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x28575c: 0xdfb10140  ld          $s1, 0x140($sp)
    ctx->pc = 0x28575cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x285760: 0xdfb00130  ld          $s0, 0x130($sp)
    ctx->pc = 0x285760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x285764: 0x3e00008  jr          $ra
    ctx->pc = 0x285764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285764u;
        // 0x285768: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28576Cu;
}

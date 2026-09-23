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

// Function: remotePropNew
// Address: 0x2695c0 - 0x269884
void remotePropNew_0x2695c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("remotePropNew_0x2695c0");
#endif

    switch (ctx->pc) {
        case 0x26963cu: goto label_26963c;
        case 0x269674u: goto label_269674;
        case 0x269710u: goto label_269710;
        case 0x269720u: goto label_269720;
        case 0x26974cu: goto label_26974c;
        case 0x26978cu: goto label_26978c;
        case 0x269798u: goto label_269798;
        case 0x269808u: goto label_269808;
        case 0x26981cu: goto label_26981c;
        default: break;
    }

    ctx->pc = 0x2695c0u;

    // 0x2695c0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2695c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2695c4: 0xe7b70118  swc1        $f23, 0x118($sp)
    ctx->pc = 0x2695c4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2695c8: 0xffbe00e0  sd          $fp, 0xE0($sp)
    ctx->pc = 0x2695c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
    // 0x2695cc: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x2695ccu;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    // 0x2695d0: 0xffb700d0  sd          $s7, 0xD0($sp)
    ctx->pc = 0x2695d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 23));
    // 0x2695d4: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x2695d4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x2695d8: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x2695d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x2695dc: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x2695dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2695e0: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x2695e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x2695e4: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x2695e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2695e8: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x2695e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x2695ec: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2695ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2695f0: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x2695f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x2695f4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2695f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2695f8: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2695f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2695fc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2695fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269600: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x269600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x269604: 0xe7b80120  swc1        $f24, 0x120($sp)
    ctx->pc = 0x269604u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x269608: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x269608u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x26960c: 0x46006e06  mov.s       $f24, $f13
    ctx->pc = 0x26960cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[13]);
    // 0x269610: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x269610u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x269614: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x269614u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x269618: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x269618u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x26961c: 0x46008546  mov.s       $f21, $f16
    ctx->pc = 0x26961cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[16]);
    // 0x269620: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x269620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x269624: 0x46008d06  mov.s       $f20, $f17
    ctx->pc = 0x269624u;
    ctx->f[20] = FPU_MOV_S(ctx->f[17]);
    // 0x269628: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x269628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x26962c: 0xc68e0008  lwc1        $f14, 0x8($s4)
    ctx->pc = 0x26962cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x269630: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x269630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x269634: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x269634u;
    SET_GPR_U32(ctx, 31, 0x26963Cu);
    ctx->pc = 0x269638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269634u;
    // 0x269638: 0xc68d0004  lwc1        $f13, 0x4($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x269634u, 0x26963Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26963Cu;
label_26963c:
    // 0x26963c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26963cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269640: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x269640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x269644: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x269644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x269648: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x269648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26964c: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x26964cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x269650: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x269650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269654: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x269654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x269658: 0xc64c0058  lwc1        $f12, 0x58($s2)
    ctx->pc = 0x269658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26965c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x269660: 0x8e510160  lw          $s1, 0x160($s2)
    ctx->pc = 0x269660u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x269664: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x269664u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x269668: 0xae46008c  sw          $a2, 0x8C($s2)
    ctx->pc = 0x269668u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 6));
    // 0x26966c: 0xc09829e  jal         func_260A78
    ctx->pc = 0x26966Cu;
    SET_GPR_U32(ctx, 31, 0x269674u);
    ctx->pc = 0x269670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26966Cu;
    // 0x269670: 0x62f023  subu        $fp, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x26966Cu, 0x269674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269674u;
label_269674:
    // 0x269674: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x269674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x269678: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x269678u;
    {
        const bool branch_taken_0x269678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269678u;
        // 0x26967c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269678) {
            ctx->pc = 0x269684u;
            goto label_269684;
        }
    }
    ctx->pc = 0x269680u;
    // 0x269680: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x269680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_269684:
    // 0x269684: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x269684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x269688: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x269688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x26968c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26968cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269690: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x269690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x269694: 0xe634003c  swc1        $f20, 0x3C($s1)
    ctx->pc = 0x269694u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x269698: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x269698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26969c: 0xe6360028  swc1        $f22, 0x28($s1)
    ctx->pc = 0x26969cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x2696a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2696a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2696a4: 0xe637002c  swc1        $f23, 0x2C($s1)
    ctx->pc = 0x2696a4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x2696a8: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x2696a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2696ac: 0xe6350014  swc1        $f21, 0x14($s1)
    ctx->pc = 0x2696acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2696b0: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x2696b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x2696b4: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x2696b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    // 0x2696b8: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2696b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x2696bc: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x2696bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x2696c0: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x2696c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x2696c4: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x2696c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x2696c8: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x2696c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x2696cc: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2696ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2696d0: 0x8f83b230  lw          $v1, -0x4DD0($gp)
    ctx->pc = 0x2696d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2696d4: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x2696d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x2696d8: 0xae350000  sw          $s5, 0x0($s1)
    ctx->pc = 0x2696d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 21));
    // 0x2696dc: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x2696dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2696e0: 0xae360008  sw          $s6, 0x8($s1)
    ctx->pc = 0x2696e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 22));
    // 0x2696e4: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x2696e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x2696e8: 0x8c660180  lw          $a2, 0x180($v1)
    ctx->pc = 0x2696e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
    // 0x2696ec: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2696ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2696f0: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x2696f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x2696f4: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x2696f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x2696f8: 0xe638005c  swc1        $f24, 0x5C($s1)
    ctx->pc = 0x2696f8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
    // 0x2696fc: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x2696fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x269700: 0xae260060  sw          $a2, 0x60($s1)
    ctx->pc = 0x269700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 6));
    // 0x269704: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x269704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x269708: 0xc09a542  jal         func_269508
    ctx->pc = 0x269708u;
    SET_GPR_U32(ctx, 31, 0x269710u);
    ctx->pc = 0x26970Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269708u;
    // 0x26970c: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269508u, 0x269708u, 0x269710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269710u;
label_269710:
    // 0x269710: 0xc78c83e4  lwc1        $f12, -0x7C1C($gp)
    ctx->pc = 0x269710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x269714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269718: 0xc09f21c  jal         func_27C870
    ctx->pc = 0x269718u;
    SET_GPR_U32(ctx, 31, 0x269720u);
    ctx->pc = 0x26971Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269718u;
    // 0x26971c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C870u, 0x269718u, 0x269720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269720u;
label_269720:
    // 0x269720: 0xae220078  sw          $v0, 0x78($s1)
    ctx->pc = 0x269720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
    // 0x269724: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x269724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
    // 0x269728: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x269728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
    // 0x26972c: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x26972cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
    // 0x269730: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x269730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
    // 0x269734: 0x83c20007  lb          $v0, 0x7($fp)
    ctx->pc = 0x269734u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 7)));
    // 0x269738: 0x58400040  blezl       $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x269738u;
    {
        const bool branch_taken_0x269738 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x269738) {
            ctx->pc = 0x26973Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269738u;
            // 0x26973c: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26983Cu;
            goto label_26983c;
        }
    }
    ctx->pc = 0x269740u;
    // 0x269740: 0xc79683e8  lwc1        $f22, -0x7C18($gp)
    ctx->pc = 0x269740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x269744: 0xc09a530  jal         func_2694C0
    ctx->pc = 0x269744u;
    SET_GPR_U32(ctx, 31, 0x26974Cu);
    ctx->pc = 0x269748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269744u;
    // 0x269748: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2694C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2694C0u, 0x269744u, 0x26974Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26974Cu;
label_26974c:
    // 0x26974c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x26974cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x269750: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x269750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x269754: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x269754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269758: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x269758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26975c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x26975cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x269760: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x269760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269764: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x269764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x269768: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x269768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26976c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x26976cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x269770: 0xc64c004c  lwc1        $f12, 0x4C($s2)
    ctx->pc = 0x269770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x269774: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x269774u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x269778: 0x0  nop
    ctx->pc = 0x269778u;
    // NOP
    // 0x26977c: 0x0  nop
    ctx->pc = 0x26977cu;
    // NOP
    // 0x269780: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x269780u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x269784: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x269784u;
    SET_GPR_U32(ctx, 31, 0x26978Cu);
    ctx->pc = 0x269788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269784u;
    // 0x269788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x269784u, 0x26978Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26978Cu;
label_26978c:
    // 0x26978c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26978cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269790: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x269790u;
    SET_GPR_U32(ctx, 31, 0x269798u);
    ctx->pc = 0x269794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269790u;
    // 0x269794: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x269790u, 0x269798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269798u;
label_269798:
    // 0x269798: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x269798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26979c: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x26979cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2697a0: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x2697a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2697a4: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x2697a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2697a8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2697a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2697ac: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x2697acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2697b0: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x2697b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2697b4: 0xc6230044  lwc1        $f3, 0x44($s1)
    ctx->pc = 0x2697b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2697b8: 0xc6240048  lwc1        $f4, 0x48($s1)
    ctx->pc = 0x2697b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2697bc: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x2697bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2697c0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2697c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2697c4: 0x46041501  sub.s       $f20, $f2, $f4
    ctx->pc = 0x2697c4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2697c8: 0xc623004c  lwc1        $f3, 0x4C($s1)
    ctx->pc = 0x2697c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2697cc: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2697ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2697d0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2697d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2697d4: 0x4614a082  mul.s       $f2, $f20, $f20
    ctx->pc = 0x2697d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2697d8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2697d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2697dc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2697dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2697e0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2697e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2697e4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2697e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2697e8: 0x0  nop
    ctx->pc = 0x2697e8u;
    // NOP
    // 0x2697ec: 0x0  nop
    ctx->pc = 0x2697ecu;
    // NOP
    // 0x2697f0: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2697f0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2697f4: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2697f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2697f8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2697F8u;
    {
        const bool branch_taken_0x2697f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2697f8) {
            ctx->pc = 0x269808u;
            goto label_269808;
        }
    }
    ctx->pc = 0x269800u;
    // 0x269800: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x269800u;
    SET_GPR_U32(ctx, 31, 0x269808u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x269800u, 0x269808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269808u;
label_269808:
    // 0x269808: 0x0  nop
    ctx->pc = 0x269808u;
    // NOP
    // 0x26980c: 0x0  nop
    ctx->pc = 0x26980cu;
    // NOP
    // 0x269810: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x269810u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
    // 0x269814: 0xc0b5f1a  jal         func_2D7C68
    ctx->pc = 0x269814u;
    SET_GPR_U32(ctx, 31, 0x26981Cu);
    ctx->pc = 0x2D7C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C68u, 0x269814u, 0x26981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26981Cu;
label_26981c:
    // 0x26981c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x26981cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x269820: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x269820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269824: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x269824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x269828: 0x0  nop
    ctx->pc = 0x269828u;
    // NOP
    // 0x26982c: 0x0  nop
    ctx->pc = 0x26982cu;
    // NOP
    // 0x269830: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x269830u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x269834: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x269834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x269838: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x269838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_26983c:
    // 0x26983c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x26983cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269840: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x269840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x269844: 0xdfbe00e0  ld          $fp, 0xE0($sp)
    ctx->pc = 0x269844u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x269848: 0xdfb700d0  ld          $s7, 0xD0($sp)
    ctx->pc = 0x269848u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x26984c: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x26984cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x269850: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x269850u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x269854: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x269854u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x269858: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x269858u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26985c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x26985cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x269860: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x269860u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x269864: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x269864u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x269868: 0xc7b80120  lwc1        $f24, 0x120($sp)
    ctx->pc = 0x269868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x26986c: 0xc7b70118  lwc1        $f23, 0x118($sp)
    ctx->pc = 0x26986cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x269870: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x269870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x269874: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x269874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x269878: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x269878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26987c: 0x3e00008  jr          $ra
    ctx->pc = 0x26987Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26987Cu;
        // 0x269880: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26987Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269884u;
}

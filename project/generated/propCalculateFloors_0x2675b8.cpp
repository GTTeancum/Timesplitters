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

// Function: propCalculateFloors
// Address: 0x2675b8 - 0x2677a4
void propCalculateFloors_0x2675b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propCalculateFloors_0x2675b8");
#endif

    switch (ctx->pc) {
        case 0x267608u: goto label_267608;
        case 0x26763cu: goto label_26763c;
        case 0x267658u: goto label_267658;
        case 0x2676a8u: goto label_2676a8;
        case 0x26771cu: goto label_26771c;
        case 0x26773cu: goto label_26773c;
        default: break;
    }

    ctx->pc = 0x2675b8u;

    // 0x2675b8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2675b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2675bc: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x2675bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x2675c0: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x2675c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x2675c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2675c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2675c8: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x2675c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x2675cc: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x2675ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x2675d0: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x2675d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x2675d4: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x2675d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x2675d8: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x2675d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x2675dc: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x2675dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x2675e0: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x2675e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x2675e4: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2675e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2675e8: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x2675e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x2675ec: 0x8e6201e0  lw          $v0, 0x1E0($s3)
    ctx->pc = 0x2675ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 480)));
    // 0x2675f0: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x2675F0u;
    {
        const bool branch_taken_0x2675f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2675F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2675F0u;
        // 0x2675f4: 0xdfbf0100  ld          $ra, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2675f0) {
            ctx->pc = 0x267778u;
            goto label_267778;
        }
    }
    ctx->pc = 0x2675F8u;
    // 0x2675f8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2675f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2675fc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2675fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x267600: 0xc099b9c  jal         func_266E70
    ctx->pc = 0x267600u;
    SET_GPR_U32(ctx, 31, 0x267608u);
    ctx->pc = 0x267604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267600u;
    // 0x267604: 0x27a60044  addiu       $a2, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266E70u, 0x267600u, 0x267608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267608u;
label_267608:
    // 0x267608: 0xc66f004c  lwc1        $f15, 0x4C($s3)
    ctx->pc = 0x267608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x26760c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26760cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267610: 0xc78083d8  lwc1        $f0, -0x7C28($gp)
    ctx->pc = 0x267610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267614: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x267614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x267618: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x267618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26761c: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x26761cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x267620: 0xc66c0030  lwc1        $f12, 0x30($s3)
    ctx->pc = 0x267620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x267624: 0xc66d0034  lwc1        $f13, 0x34($s3)
    ctx->pc = 0x267624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x267628: 0x0  nop
    ctx->pc = 0x267628u;
    // NOP
    // 0x26762c: 0x0  nop
    ctx->pc = 0x26762cu;
    // NOP
    // 0x267630: 0x46017bc3  div.s       $f15, $f15, $f1
    ctx->pc = 0x267630u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[1];
    // 0x267634: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x267634u;
    SET_GPR_U32(ctx, 31, 0x26763Cu);
    ctx->pc = 0x267638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267634u;
    // 0x267638: 0xc66e0038  lwc1        $f14, 0x38($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x267634u, 0x26763Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26763Cu;
label_26763c:
    // 0x26763c: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x26763cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267640: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x267640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x267644: 0x10a0004b  beqz        $a1, . + 4 + (0x4B << 2)
    ctx->pc = 0x267644u;
    {
        const bool branch_taken_0x267644 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x267648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267644u;
        // 0x267648: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267644) {
            ctx->pc = 0x267774u;
            goto label_267774;
        }
    }
    ctx->pc = 0x26764Cu;
    // 0x26764c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26764cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267650: 0x8e6201e0  lw          $v0, 0x1E0($s3)
    ctx->pc = 0x267650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 480)));
    // 0x267654: 0x0  nop
    ctx->pc = 0x267654u;
    // NOP
label_267658:
    // 0x267658: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x267658u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26765c: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x26765cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x267660: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x267660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x267664: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x267664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x267668: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x267668u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26766c: 0xa6230004  sh          $v1, 0x4($s1)
    ctx->pc = 0x26766cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x267670: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x267670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x267674: 0x94a20006  lhu         $v0, 0x6($a1)
    ctx->pc = 0x267674u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x267678: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x267678u;
    {
        const bool branch_taken_0x267678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267678u;
        // 0x26767c: 0xa6220006  sh          $v0, 0x6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267678) {
            ctx->pc = 0x267754u;
            goto label_267754;
        }
    }
    ctx->pc = 0x267680u;
    // 0x267680: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x267680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x267684: 0x24d70001  addiu       $s7, $a2, 0x1
    ctx->pc = 0x267684u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x267688: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x267688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x26768c: 0x24be0008  addiu       $fp, $a1, 0x8
    ctx->pc = 0x26768cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x267690: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x267690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x267694: 0x2636000c  addiu       $s6, $s1, 0xC
    ctx->pc = 0x267694u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x267698: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x267698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x26769c: 0x24b5000c  addiu       $s5, $a1, 0xC
    ctx->pc = 0x26769cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x2676a0: 0x26340010  addiu       $s4, $s1, 0x10
    ctx->pc = 0x2676a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2676a4: 0x0  nop
    ctx->pc = 0x2676a4u;
    // NOP
label_2676a8:
    // 0x2676a8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2676a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2676ac: 0x2423818  mult        $a3, $s2, $v0
    ctx->pc = 0x2676acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2676b0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2676b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2676b4: 0x3c71821  addu        $v1, $fp, $a3
    ctx->pc = 0x2676b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 7)));
    // 0x2676b8: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x2676b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2676bc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2676bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2676c0: 0x2a72821  addu        $a1, $s5, $a3
    ctx->pc = 0x2676c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x2676c4: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x2676c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2676c8: 0x2c71821  addu        $v1, $s6, $a3
    ctx->pc = 0x2676c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
    // 0x2676cc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2676ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2676d0: 0x473021  addu        $a2, $v0, $a3
    ctx->pc = 0x2676d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2676d4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2676d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2676d8: 0x2871021  addu        $v0, $s4, $a3
    ctx->pc = 0x2676d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x2676dc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2676dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2676e0: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2676e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2676e4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2676e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2676e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2676e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2676ec: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2676ECu;
    {
        const bool branch_taken_0x2676ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2676F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676ECu;
        // 0x2676f0: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2676ec) {
            ctx->pc = 0x267724u;
            goto label_267724;
        }
    }
    ctx->pc = 0x2676F4u;
    // 0x2676f4: 0x24f00008  addiu       $s0, $a3, 0x8
    ctx->pc = 0x2676f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2676f8: 0x8e660020  lw          $a2, 0x20($s3)
    ctx->pc = 0x2676f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2676fc: 0x2302821  addu        $a1, $s1, $s0
    ctx->pc = 0x2676fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x267700: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x267700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x267704: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x267704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267708: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x267708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x26770c: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x26770cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x267710: 0x7fa80060  sq          $t0, 0x60($sp)
    ctx->pc = 0x267710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 8));
    // 0x267714: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x267714u;
    SET_GPR_U32(ctx, 31, 0x26771Cu);
    ctx->pc = 0x267718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267714u;
    // 0x267718: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x267714u, 0x26771Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26771Cu;
label_26771c:
    // 0x26771c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26771Cu;
    {
        const bool branch_taken_0x26771c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26771Cu;
        // 0x267720: 0x7ba80060  lq          $t0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26771c) {
            ctx->pc = 0x267728u;
            goto label_267728;
        }
    }
    ctx->pc = 0x267724u;
label_267724:
    // 0x267724: 0x24f00008  addiu       $s0, $a3, 0x8
    ctx->pc = 0x267724u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_267728:
    // 0x267728: 0x2302821  addu        $a1, $s1, $s0
    ctx->pc = 0x267728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x26772c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26772cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267730: 0x7fa80060  sq          $t0, 0x60($sp)
    ctx->pc = 0x267730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 8));
    // 0x267734: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x267734u;
    SET_GPR_U32(ctx, 31, 0x26773Cu);
    ctx->pc = 0x267738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267734u;
    // 0x267738: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x267734u, 0x26773Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26773Cu;
label_26773c:
    // 0x26773c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x26773cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x267740: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x267740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x267744: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x267744u;
    {
        const bool branch_taken_0x267744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267744u;
        // 0x267748: 0x7ba80060  lq          $t0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267744) {
            ctx->pc = 0x2676A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2676a8;
        }
    }
    ctx->pc = 0x26774Cu;
    // 0x26774c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26774Cu;
    {
        const bool branch_taken_0x26774c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26774Cu;
        // 0x267750: 0x8fa70040  lw          $a3, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26774c) {
            ctx->pc = 0x267758u;
            goto label_267758;
        }
    }
    ctx->pc = 0x267754u;
label_267754:
    // 0x267754: 0x24d70001  addiu       $s7, $a2, 0x1
    ctx->pc = 0x267754u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_267758:
    // 0x267758: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x267758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26775c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x26775cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x267760: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x267760u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267764: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x267764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x267768: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x267768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26776c: 0x54a0ffba  bnel        $a1, $zero, . + 4 + (-0x46 << 2)
    ctx->pc = 0x26776Cu;
    {
        const bool branch_taken_0x26776c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x26776c) {
            ctx->pc = 0x267770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26776Cu;
            // 0x267770: 0x8e6201e0  lw          $v0, 0x1E0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267658;
        }
    }
    ctx->pc = 0x267774u;
label_267774:
    // 0x267774: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x267774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_267778:
    // 0x267778: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x267778u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26777c: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x26777cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x267780: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x267780u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x267784: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x267784u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x267788: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x267788u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26778c: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x26778cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x267790: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x267790u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x267794: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x267794u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x267798: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x267798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26779c: 0x3e00008  jr          $ra
    ctx->pc = 0x26779Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2677A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26779Cu;
        // 0x2677a0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26779Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2677A4u;
}

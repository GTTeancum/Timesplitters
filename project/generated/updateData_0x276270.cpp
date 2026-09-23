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

// Function: updateData
// Address: 0x276270 - 0x2764b0
void updateData_0x276270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("updateData_0x276270");
#endif

    switch (ctx->pc) {
        case 0x27628cu: goto label_27628c;
        case 0x276290u: goto label_276290;
        case 0x2762f8u: goto label_2762f8;
        case 0x276458u: goto label_276458;
        case 0x276480u: goto label_276480;
        default: break;
    }

    ctx->pc = 0x276270u;

    // 0x276270: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x276270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x276274: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x276274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x276278: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x276278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27627c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27627cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276280: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x276280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x276284: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x276284u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x276288: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x276288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_27628c:
    // 0x27628c: 0x8e510160  lw          $s1, 0x160($s2)
    ctx->pc = 0x27628cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
label_276290:
    // 0x276290: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x276290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276294: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x276294u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x276298: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x276298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x27629c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x27629cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2762a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2762a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2762a4: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x2762a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2762a8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2762a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2762ac: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x2762acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x2762b0: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x2762b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2762b4: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x2762b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2762b8: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x2762B8u;
    {
        const bool branch_taken_0x2762b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2762BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2762B8u;
        // 0x2762bc: 0xe6200030  swc1        $f0, 0x30($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2762b8) {
            ctx->pc = 0x276494u;
            goto label_276494;
        }
    }
    ctx->pc = 0x2762C0u;
    // 0x2762c0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2762c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2762c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2762c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2762c8: 0x24428130  addiu       $v0, $v0, -0x7ED0
    ctx->pc = 0x2762c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934832));
    // 0x2762cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2762ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2762d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2762d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2762d4: 0x800008  jr          $a0
    ctx->pc = 0x2762D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2762DCu: goto label_2762dc;
            case 0x276308u: goto label_276308;
            case 0x276314u: goto label_276314;
            case 0x276338u: goto label_276338;
            case 0x2763B0u: goto label_2763b0;
            case 0x2763BCu: goto label_2763bc;
            case 0x27640Cu: goto label_27640c;
            case 0x276494u: goto label_276494;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2762D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2762DCu;
label_2762dc:
    // 0x2762dc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2762dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2762e0: 0x24020139  addiu       $v0, $zero, 0x139
    ctx->pc = 0x2762e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 313));
    // 0x2762e4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2762E4u;
    {
        const bool branch_taken_0x2762e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2762E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2762E4u;
        // 0x2762e8: 0x2602002c  addiu       $v0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2762e4) {
            ctx->pc = 0x276300u;
            goto label_276300;
        }
    }
    ctx->pc = 0x2762ECu;
    // 0x2762ec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2762ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2762f0: 0xc081546  jal         func_205518
    ctx->pc = 0x2762F0u;
    SET_GPR_U32(ctx, 31, 0x2762F8u);
    ctx->pc = 0x2762F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2762F0u;
    // 0x2762f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x2762F0u, 0x2762F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2762F8u;
label_2762f8:
    // 0x2762f8: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x2762f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2762fc: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x2762fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_276300:
    // 0x276300: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x276300u;
    {
        const bool branch_taken_0x276300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276300u;
        // 0x276304: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276300) {
            ctx->pc = 0x27628Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27628c;
        }
    }
    ctx->pc = 0x276308u;
label_276308:
    // 0x276308: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x276308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x27630c: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x27630Cu;
    {
        const bool branch_taken_0x27630c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27630Cu;
        // 0x276310: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27630c) {
            ctx->pc = 0x276290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276290;
        }
    }
    ctx->pc = 0x276314u;
label_276314:
    // 0x276314: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x276314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276318: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x276318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x27631c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x27631cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x276320: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x276320u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x276324: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x276324u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x276328: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x276328u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27632c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27632cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x276330: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
    ctx->pc = 0x276330u;
    {
        const bool branch_taken_0x276330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276330u;
        // 0x276334: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276330) {
            ctx->pc = 0x276290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276290;
        }
    }
    ctx->pc = 0x276338u;
label_276338:
    // 0x276338: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x276338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27633c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x27633cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x276340: 0xe6210028  swc1        $f1, 0x28($s1)
    ctx->pc = 0x276340u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x276344: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x276344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276348: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x276348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x27634c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x27634cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276350: 0xe6210030  swc1        $f1, 0x30($s1)
    ctx->pc = 0x276350u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x276354: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x276354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276358: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x276358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x27635c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x27635cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276360: 0xe6410034  swc1        $f1, 0x34($s2)
    ctx->pc = 0x276360u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x276364: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x276364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276368: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x276368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x27636c: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x27636cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276370: 0xe6210034  swc1        $f1, 0x34($s1)
    ctx->pc = 0x276370u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x276374: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x276374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276378: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x276378u;
    {
        const bool branch_taken_0x276378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276378u;
        // 0x27637c: 0xe6200048  swc1        $f0, 0x48($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276378) {
            ctx->pc = 0x276388u;
            goto label_276388;
        }
    }
    ctx->pc = 0x276380u;
    // 0x276380: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x276380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276384: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x276384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_276388:
    // 0x276388: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x276388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27638c: 0x24a2002c  addiu       $v0, $a1, 0x2C
    ctx->pc = 0x27638cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
    // 0x276390: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x276390u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x276394: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x276394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x276398: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x276398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x27639c: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x27639cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2763a0: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x2763a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x2763a4: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x2763a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2763a8: 0x1000ffb9  b           . + 4 + (-0x47 << 2)
    ctx->pc = 0x2763A8u;
    {
        const bool branch_taken_0x2763a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2763ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2763A8u;
        // 0x2763ac: 0xe6210044  swc1        $f1, 0x44($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2763a8) {
            ctx->pc = 0x276290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276290;
        }
    }
    ctx->pc = 0x2763B0u;
label_2763b0:
    // 0x2763b0: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x2763b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2763b4: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2763B4u;
    {
        const bool branch_taken_0x2763b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2763B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2763B4u;
        // 0x2763b8: 0xe6200040  swc1        $f0, 0x40($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2763b4) {
            ctx->pc = 0x276494u;
            goto label_276494;
        }
    }
    ctx->pc = 0x2763BCu;
label_2763bc:
    // 0x2763bc: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2763bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2763c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2763c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2763c4: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2763c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2763c8: 0xc6210048  lwc1        $f1, 0x48($s1)
    ctx->pc = 0x2763c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2763cc: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2763ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2763d0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2763d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2763d4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2763d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2763d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2763d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2763dc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2763dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2763e0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2763e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2763e4: 0x0  nop
    ctx->pc = 0x2763e4u;
    // NOP
    // 0x2763e8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2763E8u;
    {
        const bool branch_taken_0x2763e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2763e8) {
            ctx->pc = 0x2763ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2763E8u;
            // 0x2763ec: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2763F0u;
            goto label_2763f0;
        }
    }
    ctx->pc = 0x2763F0u;
label_2763f0:
    // 0x2763f0: 0xc7948614  lwc1        $f20, -0x79EC($gp)
    ctx->pc = 0x2763f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2763f4: 0x46140502  mul.s       $f20, $f0, $f20
    ctx->pc = 0x2763f4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2763f8: 0x0  nop
    ctx->pc = 0x2763f8u;
    // NOP
    // 0x2763fc: 0x0  nop
    ctx->pc = 0x2763fcu;
    // NOP
    // 0x276400: 0x4603a503  div.s       $f20, $f20, $f3
    ctx->pc = 0x276400u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[3];
    // 0x276404: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x276404u;
    {
        const bool branch_taken_0x276404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276404) {
            ctx->pc = 0x276450u;
            goto label_276450;
        }
    }
    ctx->pc = 0x27640Cu;
label_27640c:
    // 0x27640c: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x27640cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x276410: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x276410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x276414: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x276414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276418: 0xc6210048  lwc1        $f1, 0x48($s1)
    ctx->pc = 0x276418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27641c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x27641cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x276420: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x276420u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x276424: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x276424u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x276428: 0x0  nop
    ctx->pc = 0x276428u;
    // NOP
    // 0x27642c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x27642Cu;
    {
        const bool branch_taken_0x27642c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27642c) {
            ctx->pc = 0x276430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27642Cu;
            // 0x276430: 0x46020841  sub.s       $f1, $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x276434u;
            goto label_276434;
        }
    }
    ctx->pc = 0x276434u;
label_276434:
    // 0x276434: 0xc7948618  lwc1        $f20, -0x79E8($gp)
    ctx->pc = 0x276434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x276438: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x276438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x27643c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27643cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276440: 0x46140d02  mul.s       $f20, $f1, $f20
    ctx->pc = 0x276440u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x276444: 0x0  nop
    ctx->pc = 0x276444u;
    // NOP
    // 0x276448: 0x0  nop
    ctx->pc = 0x276448u;
    // NOP
    // 0x27644c: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x27644cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
label_276450:
    // 0x276450: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x276450u;
    SET_GPR_U32(ctx, 31, 0x276458u);
    ctx->pc = 0x276454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276450u;
    // 0x276454: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x276450u, 0x276458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276458u;
label_276458:
    // 0x276458: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x276458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27645c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27645cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x276460: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x276460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276464: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x276464u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x276468: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x276468u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27646c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x27646cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x276470: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x276470u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x276474: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x276474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276478: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x276478u;
    SET_GPR_U32(ctx, 31, 0x276480u);
    ctx->pc = 0x27647Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276478u;
    // 0x27647c: 0xe6200020  swc1        $f0, 0x20($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x276478u, 0x276480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276480u;
label_276480:
    // 0x276480: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x276480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276484: 0xc6420038  lwc1        $f2, 0x38($s2)
    ctx->pc = 0x276484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x276488: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x276488u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27648c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x27648cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x276490: 0xe6220024  swc1        $f2, 0x24($s1)
    ctx->pc = 0x276490u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_276494:
    // 0x276494: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x276494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x276498: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x276498u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27649c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27649cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2764a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2764a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2764a4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2764a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2764a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2764A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2764ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2764A8u;
        // 0x2764ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2764A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2764B0u;
}

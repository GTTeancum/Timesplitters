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

// Function: trackTarget
// Address: 0x2c0510 - 0x2c0904
void trackTarget_0x2c0510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("trackTarget_0x2c0510");
#endif

    switch (ctx->pc) {
        case 0x2c0538u: goto label_2c0538;
        case 0x2c056cu: goto label_2c056c;
        case 0x2c0670u: goto label_2c0670;
        case 0x2c0684u: goto label_2c0684;
        case 0x2c072cu: goto label_2c072c;
        case 0x2c075cu: goto label_2c075c;
        case 0x2c0778u: goto label_2c0778;
        case 0x2c0794u: goto label_2c0794;
        case 0x2c079cu: goto label_2c079c;
        case 0x2c07a8u: goto label_2c07a8;
        case 0x2c07c0u: goto label_2c07c0;
        case 0x2c07d0u: goto label_2c07d0;
        case 0x2c07e0u: goto label_2c07e0;
        case 0x2c07ecu: goto label_2c07ec;
        case 0x2c080cu: goto label_2c080c;
        case 0x2c0848u: goto label_2c0848;
        default: break;
    }

    ctx->pc = 0x2c0510u;

    // 0x2c0510: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c0510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c0514: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c0514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c0518: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c0518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c051c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c051cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0520: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2c0520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2c0524: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2c0524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c0528: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c0528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c052c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c052cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c0530: 0xc0b04ca  jal         func_2C1328
    ctx->pc = 0x2C0530u;
    SET_GPR_U32(ctx, 31, 0x2C0538u);
    ctx->pc = 0x2C0534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0530u;
    // 0x2c0534: 0x8e300160  lw          $s0, 0x160($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1328u, 0x2C0530u, 0x2C0538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0538u;
label_2c0538:
    // 0x2c0538: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c0538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c053c: 0x8e0202ac  lw          $v0, 0x2AC($s0)
    ctx->pc = 0x2c053cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
    // 0x2c0540: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0540u;
    {
        const bool branch_taken_0x2c0540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2C0544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0540u;
        // 0x2c0544: 0x8f83b4dc  lw          $v1, -0x4B24($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948060)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0540) {
            ctx->pc = 0x2C055Cu;
            goto label_2c055c;
        }
    }
    ctx->pc = 0x2C0548u;
    // 0x2c0548: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c0548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c054c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C054Cu;
    {
        const bool branch_taken_0x2c054c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c054c) {
            ctx->pc = 0x2C0550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C054Cu;
            // 0x2c0550: 0xae0402ac  sw          $a0, 0x2AC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0560u;
            goto label_2c0560;
        }
    }
    ctx->pc = 0x2C0554u;
    // 0x2c0554: 0xae000698  sw          $zero, 0x698($s0)
    ctx->pc = 0x2c0554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1688), GPR_U32(ctx, 0));
    // 0x2c0558: 0xae000a84  sw          $zero, 0xA84($s0)
    ctx->pc = 0x2c0558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2692), GPR_U32(ctx, 0));
label_2c055c:
    // 0x2c055c: 0xae0402ac  sw          $a0, 0x2AC($s0)
    ctx->pc = 0x2c055cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 4));
label_2c0560:
    // 0x2c0560: 0x261402a8  addiu       $s4, $s0, 0x2A8
    ctx->pc = 0x2c0560u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 680));
    // 0x2c0564: 0xc0afda0  jal         func_2BF680
    ctx->pc = 0x2C0564u;
    SET_GPR_U32(ctx, 31, 0x2C056Cu);
    ctx->pc = 0x2C0568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0564u;
    // 0x2c0568: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF680u, 0x2C0564u, 0x2C056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C056Cu;
label_2c056c:
    // 0x2c056c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c056cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0570: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2c0570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2c0574: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0574u;
    {
        const bool branch_taken_0x2c0574 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C0578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0574u;
        // 0x2c0578: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0574) {
            ctx->pc = 0x2C0588u;
            goto label_2c0588;
        }
    }
    ctx->pc = 0x2C057Cu;
    // 0x2c057c: 0x8e030a9c  lw          $v1, 0xA9C($s0)
    ctx->pc = 0x2c057cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
    // 0x2c0580: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x2C0580u;
    {
        const bool branch_taken_0x2c0580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0580u;
        // 0x2c0584: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0580) {
            ctx->pc = 0x2C08D8u;
            goto label_2c08d8;
        }
    }
    ctx->pc = 0x2C0588u;
label_2c0588:
    // 0x2c0588: 0x1242000a  beq         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C0588u;
    {
        const bool branch_taken_0x2c0588 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0588u;
        // 0x2c058c: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0588) {
            ctx->pc = 0x2C05B4u;
            goto label_2c05b4;
        }
    }
    ctx->pc = 0x2C0590u;
    // 0x2c0590: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x2c0590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c0594: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x2c0594u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c0598: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c0598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c059c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2c059cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c05a0: 0xe6000aec  swc1        $f0, 0xAEC($s0)
    ctx->pc = 0x2c05a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2796), bits); }
    // 0x2c05a4: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2c05a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c05a8: 0xe6010af0  swc1        $f1, 0xAF0($s0)
    ctx->pc = 0x2c05a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2800), bits); }
    // 0x2c05ac: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x2c05acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c05b0: 0xe6000af4  swc1        $f0, 0xAF4($s0)
    ctx->pc = 0x2c05b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2804), bits); }
label_2c05b4:
    // 0x2c05b4: 0x8e020ad4  lw          $v0, 0xAD4($s0)
    ctx->pc = 0x2c05b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2772)));
    // 0x2c05b8: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2C05B8u;
    {
        const bool branch_taken_0x2c05b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C05BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C05B8u;
        // 0x2c05bc: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c05b8) {
            ctx->pc = 0x2C067Cu;
            goto label_2c067c;
        }
    }
    ctx->pc = 0x2C05C0u;
    // 0x2c05c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c05c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c05c4: 0x2445c4a8  addiu       $a1, $v0, -0x3B58
    ctx->pc = 0x2c05c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x2c05c8: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x2c05c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x2c05cc: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C05CCu;
    {
        const bool branch_taken_0x2c05cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C05D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C05CCu;
        // 0x2c05d0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c05cc) {
            ctx->pc = 0x2C062Cu;
            goto label_2c062c;
        }
    }
    ctx->pc = 0x2C05D4u;
    // 0x2c05d4: 0x14820024  bne         $a0, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C05D4u;
    {
        const bool branch_taken_0x2c05d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C05D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C05D4u;
        // 0x2c05d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c05d4) {
            ctx->pc = 0x2C0668u;
            goto label_2c0668;
        }
    }
    ctx->pc = 0x2C05DCu;
    // 0x2c05dc: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2c05dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2c05e0: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2c05e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2c05e4: 0x24631ff8  addiu       $v1, $v1, 0x1FF8
    ctx->pc = 0x2c05e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8184));
    // 0x2c05e8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2c05e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c05ec: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2c05ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c05f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c05f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c05f4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2c05f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2c05f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C05F8u;
    {
        const bool branch_taken_0x2c05f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C05FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C05F8u;
        // 0x2c05fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c05f8) {
            ctx->pc = 0x2C0608u;
            goto label_2c0608;
        }
    }
    ctx->pc = 0x2C0600u;
    // 0x2c0600: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x2C0600u;
    {
        const bool branch_taken_0x2c0600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0600u;
        // 0x2c0604: 0x8e030a9c  lw          $v1, 0xA9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0600) {
            ctx->pc = 0x2C08D8u;
            goto label_2c08d8;
        }
    }
    ctx->pc = 0x2C0608u;
label_2c0608:
    // 0x2c0608: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2c0608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2c060c: 0x8e040ae4  lw          $a0, 0xAE4($s0)
    ctx->pc = 0x2c060cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
    // 0x2c0610: 0x8c432010  lw          $v1, 0x2010($v0)
    ctx->pc = 0x2c0610u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x382010u));
    // 0x2c0614: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0614u;
    {
        const bool branch_taken_0x2c0614 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C0618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0614u;
        // 0x2c0618: 0x8e030a9c  lw          $v1, 0xA9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0614) {
            ctx->pc = 0x2C0624u;
            goto label_2c0624;
        }
    }
    ctx->pc = 0x2C061Cu;
    // 0x2c061c: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x2C061Cu;
    {
        const bool branch_taken_0x2c061c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C061Cu;
        // 0x2c0620: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c061c) {
            ctx->pc = 0x2C08D8u;
            goto label_2c08d8;
        }
    }
    ctx->pc = 0x2C0624u;
label_2c0624:
    // 0x2c0624: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x2C0624u;
    {
        const bool branch_taken_0x2c0624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0624u;
        // 0x2c0628: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0624) {
            ctx->pc = 0x2C08D8u;
            goto label_2c08d8;
        }
    }
    ctx->pc = 0x2C062Cu;
label_2c062c:
    // 0x2c062c: 0x8e0201e4  lw          $v0, 0x1E4($s0)
    ctx->pc = 0x2c062cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x2c0630: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0630u;
    {
        const bool branch_taken_0x2c0630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0630) {
            ctx->pc = 0x2C0634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0630u;
            // 0x2c0634: 0x8e040ae4  lw          $a0, 0xAE4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C064Cu;
            goto label_2c064c;
        }
    }
    ctx->pc = 0x2C0638u;
    // 0x2c0638: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x2c0638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x2c063c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2c063cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2c0640: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C0640u;
    {
        const bool branch_taken_0x2c0640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0640) {
            ctx->pc = 0x2C067Cu;
            goto label_2c067c;
        }
    }
    ctx->pc = 0x2C0648u;
    // 0x2c0648: 0x8e040ae4  lw          $a0, 0xAE4($s0)
    ctx->pc = 0x2c0648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
label_2c064c:
    // 0x2c064c: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2c064cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2c0650: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x2c0650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2c0654: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2c0654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2c0658: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C0658u;
    {
        const bool branch_taken_0x2c0658 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0658u;
        // 0x2c065c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0658) {
            ctx->pc = 0x2C067Cu;
            goto label_2c067c;
        }
    }
    ctx->pc = 0x2C0660u;
    // 0x2c0660: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x2C0660u;
    {
        const bool branch_taken_0x2c0660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0660u;
        // 0x2c0664: 0x8e030a9c  lw          $v1, 0xA9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0660) {
            ctx->pc = 0x2C08D8u;
            goto label_2c08d8;
        }
    }
    ctx->pc = 0x2C0668u;
label_2c0668:
    // 0x2c0668: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C0668u;
    SET_GPR_U32(ctx, 31, 0x2C0670u);
    ctx->pc = 0x2C066Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0668u;
    // 0x2c066c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C0668u, 0x2C0670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0670u;
label_2c0670:
    // 0x2c0670: 0x8e030a9c  lw          $v1, 0xA9C($s0)
    ctx->pc = 0x2c0670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
    // 0x2c0674: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x2C0674u;
    {
        const bool branch_taken_0x2c0674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0674u;
        // 0x2c0678: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0674) {
            ctx->pc = 0x2C08D8u;
            goto label_2c08d8;
        }
    }
    ctx->pc = 0x2C067Cu;
label_2c067c:
    // 0x2c067c: 0xc0b03aa  jal         func_2C0EA8
    ctx->pc = 0x2C067Cu;
    SET_GPR_U32(ctx, 31, 0x2C0684u);
    ctx->pc = 0x2C0680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C067Cu;
    // 0x2c0680: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0EA8u, 0x2C067Cu, 0x2C0684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0684u;
label_2c0684:
    // 0x2c0684: 0x14400098  bnez        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x2C0684u;
    {
        const bool branch_taken_0x2c0684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0684u;
        // 0x2c0688: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0684) {
            ctx->pc = 0x2C08E8u;
            goto label_2c08e8;
        }
    }
    ctx->pc = 0x2C068Cu;
    // 0x2c068c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c068cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c0690: 0x5642006b  bnel        $s2, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x2C0690u;
    {
        const bool branch_taken_0x2c0690 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c0690) {
            ctx->pc = 0x2C0694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0690u;
            // 0x2c0694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0840u;
            goto label_2c0840;
        }
    }
    ctx->pc = 0x2C0698u;
    // 0x2c0698: 0x8e0202a8  lw          $v0, 0x2A8($s0)
    ctx->pc = 0x2c0698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x2c069c: 0x8e1302ac  lw          $s3, 0x2AC($s0)
    ctx->pc = 0x2c069cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
    // 0x2c06a0: 0x14530062  bne         $v0, $s3, . + 4 + (0x62 << 2)
    ctx->pc = 0x2C06A0u;
    {
        const bool branch_taken_0x2c06a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2C06A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C06A0u;
        // 0x2c06a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c06a0) {
            ctx->pc = 0x2C082Cu;
            goto label_2c082c;
        }
    }
    ctx->pc = 0x2C06A8u;
    // 0x2c06a8: 0x1a60005f  blez        $s3, . + 4 + (0x5F << 2)
    ctx->pc = 0x2C06A8u;
    {
        const bool branch_taken_0x2c06a8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2C06ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C06A8u;
        // 0x2c06ac: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c06a8) {
            ctx->pc = 0x2C0828u;
            goto label_2c0828;
        }
    }
    ctx->pc = 0x2C06B0u;
    // 0x2c06b0: 0x8c43c4f0  lw          $v1, -0x3B10($v0)
    ctx->pc = 0x2c06b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952176)));
    // 0x2c06b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c06b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c06b8: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x2c06b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2c06bc: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x2C06BCu;
    {
        const bool branch_taken_0x2c06bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C06C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C06BCu;
        // 0x2c06c0: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c06bc) {
            ctx->pc = 0x2C08E8u;
            goto label_2c08e8;
        }
    }
    ctx->pc = 0x2C06C4u;
    // 0x2c06c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c06c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c06c8: 0x24429d10  addiu       $v0, $v0, -0x62F0
    ctx->pc = 0x2c06c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941968));
    // 0x2c06cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c06ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c06d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c06d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c06d4: 0x800008  jr          $a0
    ctx->pc = 0x2C06D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C06DCu: goto label_2c06dc;
            case 0x2C0704u: goto label_2c0704;
            case 0x2C073Cu: goto label_2c073c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C06D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C06DCu;
label_2c06dc:
    // 0x2c06dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c06dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c06e0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c06e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c06e4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2c06e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c06e8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2c06e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c06ec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2c06ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c06f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c06f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c06f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c06f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c06f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c06f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c06fc: 0x80b20be  j           func_2C82F8
    ctx->pc = 0x2C06FCu;
    ctx->pc = 0x2C0700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C06FCu;
    // 0x2c0700: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    enemySetMoveMode_0x2c82f8(rdram, ctx, runtime); return;
    ctx->pc = 0x2C0704u;
label_2c0704:
    // 0x2c0704: 0x8e0201e4  lw          $v0, 0x1E4($s0)
    ctx->pc = 0x2c0704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x2c0708: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2C0708u;
    {
        const bool branch_taken_0x2c0708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0708) {
            ctx->pc = 0x2C070Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0708u;
            // 0x2c070c: 0x8e030a9c  lw          $v1, 0xA9C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0734u;
            goto label_2c0734;
        }
    }
    ctx->pc = 0x2C0710u;
    // 0x2c0710: 0x8c420160  lw          $v0, 0x160($v0)
    ctx->pc = 0x2c0710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x2c0714: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2c0714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2c0718: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2c0718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2c071c: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C071Cu;
    {
        const bool branch_taken_0x2c071c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c071c) {
            ctx->pc = 0x2C0720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C071Cu;
            // 0x2c0720: 0x8e030a9c  lw          $v1, 0xA9C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0734u;
            goto label_2c0734;
        }
    }
    ctx->pc = 0x2C0724u;
    // 0x2c0724: 0xc0b0502  jal         func_2C1408
    ctx->pc = 0x2C0724u;
    SET_GPR_U32(ctx, 31, 0x2C072Cu);
    ctx->pc = 0x2C0728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0724u;
    // 0x2c0728: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1408u, 0x2C0724u, 0x2C072Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C072Cu;
label_2c072c:
    // 0x2c072c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2C072Cu;
    {
        const bool branch_taken_0x2c072c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C072Cu;
        // 0x2c0730: 0xae0202ac  sw          $v0, 0x2AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c072c) {
            ctx->pc = 0x2C0814u;
            goto label_2c0814;
        }
    }
    ctx->pc = 0x2C0734u;
label_2c0734:
    // 0x2c0734: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2C0734u;
    {
        const bool branch_taken_0x2c0734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0734u;
        // 0x2c0738: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0734) {
            ctx->pc = 0x2C08D8u;
            goto label_2c08d8;
        }
    }
    ctx->pc = 0x2C073Cu;
label_2c073c:
    // 0x2c073c: 0x8e0201e4  lw          $v0, 0x1E4($s0)
    ctx->pc = 0x2c073cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x2c0740: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x2C0740u;
    {
        const bool branch_taken_0x2c0740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0740) {
            ctx->pc = 0x2C0744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0740u;
            // 0x2c0744: 0x8e030a9c  lw          $v1, 0xA9C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0820u;
            goto label_2c0820;
        }
    }
    ctx->pc = 0x2C0748u;
    // 0x2c0748: 0x8e050bcc  lw          $a1, 0xBCC($s0)
    ctx->pc = 0x2c0748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3020)));
    // 0x2c074c: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x2c074cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x2c0750: 0x34842814  ori         $a0, $a0, 0x2814
    ctx->pc = 0x2c0750u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10260);
    // 0x2c0754: 0xc08a0ec  jal         func_2283B0
    ctx->pc = 0x2C0754u;
    SET_GPR_U32(ctx, 31, 0x2C075Cu);
    ctx->pc = 0x2C0758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0754u;
    // 0x2c0758: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2283B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2283B0u, 0x2C0754u, 0x2C075Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C075Cu;
label_2c075c:
    // 0x2c075c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C075Cu;
    {
        const bool branch_taken_0x2c075c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c075c) {
            ctx->pc = 0x2C0794u;
            goto label_2c0794;
        }
    }
    ctx->pc = 0x2C0764u;
    // 0x2c0764: 0x8e050bcc  lw          $a1, 0xBCC($s0)
    ctx->pc = 0x2c0764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3020)));
    // 0x2c0768: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x2c0768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x2c076c: 0x34845028  ori         $a0, $a0, 0x5028
    ctx->pc = 0x2c076cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20520);
    // 0x2c0770: 0xc08a0ec  jal         func_2283B0
    ctx->pc = 0x2C0770u;
    SET_GPR_U32(ctx, 31, 0x2C0778u);
    ctx->pc = 0x2C0774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0770u;
    // 0x2c0774: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2283B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2283B0u, 0x2C0770u, 0x2C0778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0778u;
label_2c0778:
    // 0x2c0778: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0778u;
    {
        const bool branch_taken_0x2c0778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0778) {
            ctx->pc = 0x2C0794u;
            goto label_2c0794;
        }
    }
    ctx->pc = 0x2C0780u;
    // 0x2c0780: 0x8e050bcc  lw          $a1, 0xBCC($s0)
    ctx->pc = 0x2c0780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3020)));
    // 0x2c0784: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x2c0784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x2c0788: 0x34846400  ori         $a0, $a0, 0x6400
    ctx->pc = 0x2c0788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)25600);
    // 0x2c078c: 0xc08a0ec  jal         func_2283B0
    ctx->pc = 0x2C078Cu;
    SET_GPR_U32(ctx, 31, 0x2C0794u);
    ctx->pc = 0x2C0790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C078Cu;
    // 0x2c0790: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2283B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2283B0u, 0x2C078Cu, 0x2C0794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0794u;
label_2c0794:
    // 0x2c0794: 0xc099380  jal         func_264E00
    ctx->pc = 0x2C0794u;
    SET_GPR_U32(ctx, 31, 0x2C079Cu);
    ctx->pc = 0x2C0798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0794u;
    // 0x2c0798: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E00u, 0x2C0794u, 0x2C079Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C079Cu;
label_2c079c:
    // 0x2c079c: 0xae0202ac  sw          $v0, 0x2AC($s0)
    ctx->pc = 0x2c079cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 2));
    // 0x2c07a0: 0xc0afda0  jal         func_2BF680
    ctx->pc = 0x2C07A0u;
    SET_GPR_U32(ctx, 31, 0x2C07A8u);
    ctx->pc = 0x2C07A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C07A0u;
    // 0x2c07a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF680u, 0x2C07A0u, 0x2C07A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C07A8u;
label_2c07a8:
    // 0x2c07a8: 0x443001b  bgezl       $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C07A8u;
    {
        const bool branch_taken_0x2c07a8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2c07a8) {
            ctx->pc = 0x2C07ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C07A8u;
            // 0x2c07ac: 0xae000a84  sw          $zero, 0xA84($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2692), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0818u;
            goto label_2c0818;
        }
    }
    ctx->pc = 0x2C07B0u;
    // 0x2c07b0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2c07b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c07b4: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x2c07b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c07b8: 0x8e050bcc  lw          $a1, 0xBCC($s0)
    ctx->pc = 0x2c07b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3020)));
    // 0x2c07bc: 0x0  nop
    ctx->pc = 0x2c07bcu;
    // NOP
label_2c07c0:
    // 0x2c07c0: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x2c07c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x2c07c4: 0x34840a00  ori         $a0, $a0, 0xA00
    ctx->pc = 0x2c07c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2560);
    // 0x2c07c8: 0xc08a0ec  jal         func_2283B0
    ctx->pc = 0x2C07C8u;
    SET_GPR_U32(ctx, 31, 0x2C07D0u);
    ctx->pc = 0x2C07CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C07C8u;
    // 0x2c07cc: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2283B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2283B0u, 0x2C07C8u, 0x2C07D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C07D0u;
label_2c07d0:
    // 0x2c07d0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C07D0u;
    {
        const bool branch_taken_0x2c07d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c07d0) {
            ctx->pc = 0x2C07D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C07D0u;
            // 0x2c07d4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C07F8u;
            goto label_2c07f8;
        }
    }
    ctx->pc = 0x2C07D8u;
    // 0x2c07d8: 0xc099380  jal         func_264E00
    ctx->pc = 0x2C07D8u;
    SET_GPR_U32(ctx, 31, 0x2C07E0u);
    ctx->pc = 0x2C07DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C07D8u;
    // 0x2c07dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E00u, 0x2C07D8u, 0x2C07E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C07E0u;
label_2c07e0:
    // 0x2c07e0: 0xae0202ac  sw          $v0, 0x2AC($s0)
    ctx->pc = 0x2c07e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 2));
    // 0x2c07e4: 0xc0afda0  jal         func_2BF680
    ctx->pc = 0x2C07E4u;
    SET_GPR_U32(ctx, 31, 0x2C07ECu);
    ctx->pc = 0x2C07E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C07E4u;
    // 0x2c07e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF680u, 0x2C07E4u, 0x2C07ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C07ECu;
label_2c07ec:
    // 0x2c07ec: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x2c07ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2c07f0: 0x242880a  movz        $s1, $s2, $v0
    ctx->pc = 0x2c07f0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 18));
    // 0x2c07f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c07f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2c07f8:
    // 0x2c07f8: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x2c07f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2c07fc: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2C07FCu;
    {
        const bool branch_taken_0x2c07fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c07fc) {
            ctx->pc = 0x2C0800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C07FCu;
            // 0x2c0800: 0x8e050bcc  lw          $a1, 0xBCC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3020)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C07C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c07c0;
        }
    }
    ctx->pc = 0x2C0804u;
    // 0x2c0804: 0xc0afda0  jal         func_2BF680
    ctx->pc = 0x2C0804u;
    SET_GPR_U32(ctx, 31, 0x2C080Cu);
    ctx->pc = 0x2C0808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0804u;
    // 0x2c0808: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF680u, 0x2C0804u, 0x2C080Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C080Cu;
label_2c080c:
    // 0x2c080c: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C080Cu;
    {
        const bool branch_taken_0x2c080c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2c080c) {
            ctx->pc = 0x2C0810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C080Cu;
            // 0x2c0810: 0xae1302ac  sw          $s3, 0x2AC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0814u;
            goto label_2c0814;
        }
    }
    ctx->pc = 0x2C0814u;
label_2c0814:
    // 0x2c0814: 0xae000a84  sw          $zero, 0xA84($s0)
    ctx->pc = 0x2c0814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2692), GPR_U32(ctx, 0));
label_2c0818:
    // 0x2c0818: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2C0818u;
    {
        const bool branch_taken_0x2c0818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0818u;
        // 0x2c081c: 0xae000698  sw          $zero, 0x698($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1688), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0818) {
            ctx->pc = 0x2C08E4u;
            goto label_2c08e4;
        }
    }
    ctx->pc = 0x2C0820u;
label_2c0820:
    // 0x2c0820: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2C0820u;
    {
        const bool branch_taken_0x2c0820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0820u;
        // 0x2c0824: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0820) {
            ctx->pc = 0x2C08D8u;
            goto label_2c08d8;
        }
    }
    ctx->pc = 0x2C0828u;
label_2c0828:
    // 0x2c0828: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c0828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c082c:
    // 0x2c082c: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C082Cu;
    {
        const bool branch_taken_0x2c082c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C0830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C082Cu;
        // 0x2c0830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c082c) {
            ctx->pc = 0x2C0840u;
            goto label_2c0840;
        }
    }
    ctx->pc = 0x2C0834u;
    // 0x2c0834: 0x8e030a9c  lw          $v1, 0xA9C($s0)
    ctx->pc = 0x2c0834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
    // 0x2c0838: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2C0838u;
    {
        const bool branch_taken_0x2c0838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0838u;
        // 0x2c083c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0838) {
            ctx->pc = 0x2C08D8u;
            goto label_2c08d8;
        }
    }
    ctx->pc = 0x2C0840u;
label_2c0840:
    // 0x2c0840: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C0840u;
    SET_GPR_U32(ctx, 31, 0x2C0848u);
    ctx->pc = 0x2C0844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0840u;
    // 0x2c0844: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C0840u, 0x2C0848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0848u;
label_2c0848:
    // 0x2c0848: 0xc6000b28  lwc1        $f0, 0xB28($s0)
    ctx->pc = 0x2c0848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c084c: 0xc6030aec  lwc1        $f3, 0xAEC($s0)
    ctx->pc = 0x2c084cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c0850: 0xe6000b38  swc1        $f0, 0xB38($s0)
    ctx->pc = 0x2c0850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2872), bits); }
    // 0x2c0854: 0xc6040af0  lwc1        $f4, 0xAF0($s0)
    ctx->pc = 0x2c0854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c0858: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2c0858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c085c: 0xc6220034  lwc1        $f2, 0x34($s1)
    ctx->pc = 0x2c085cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c0860: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2c0860u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2c0864: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x2c0864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0868: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2c0868u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2c086c: 0xc6030af4  lwc1        $f3, 0xAF4($s0)
    ctx->pc = 0x2c086cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c0870: 0xc78490b4  lwc1        $f4, -0x6F4C($gp)
    ctx->pc = 0x2c0870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c0874: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2c0874u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2c0878: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c0878u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c087c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c087cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c0880: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c0880u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c0884: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c0884u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c0888: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c0888u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c088c: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x2c088cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0890: 0x0  nop
    ctx->pc = 0x2c0890u;
    // NOP
    // 0x2c0894: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0894u;
    {
        const bool branch_taken_0x2c0894 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0894) {
            ctx->pc = 0x2C0898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0894u;
            // 0x2c0898: 0xc6010b4c  lwc1        $f1, 0xB4C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C08B0u;
            goto label_2c08b0;
        }
    }
    ctx->pc = 0x2C089Cu;
    // 0x2c089c: 0x8e020698  lw          $v0, 0x698($s0)
    ctx->pc = 0x2c089cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
    // 0x2c08a0: 0xae1202a8  sw          $s2, 0x2A8($s0)
    ctx->pc = 0x2c08a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 18));
    // 0x2c08a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c08a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c08a8: 0xae020698  sw          $v0, 0x698($s0)
    ctx->pc = 0x2c08a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1688), GPR_U32(ctx, 2));
    // 0x2c08ac: 0xc6010b4c  lwc1        $f1, 0xB4C($s0)
    ctx->pc = 0x2c08acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c08b0:
    // 0x2c08b0: 0xc78090b8  lwc1        $f0, -0x6F48($gp)
    ctx->pc = 0x2c08b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c08b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c08b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c08b8: 0x0  nop
    ctx->pc = 0x2c08b8u;
    // NOP
    // 0x2c08bc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2C08BCu;
    {
        const bool branch_taken_0x2c08bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C08C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C08BCu;
        // 0x2c08c0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c08bc) {
            ctx->pc = 0x2C08E8u;
            goto label_2c08e8;
        }
    }
    ctx->pc = 0x2C08C4u;
    // 0x2c08c4: 0x8e020a90  lw          $v0, 0xA90($s0)
    ctx->pc = 0x2c08c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
    // 0x2c08c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c08c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c08cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C08CCu;
    {
        const bool branch_taken_0x2c08cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C08D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C08CCu;
        // 0x2c08d0: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c08cc) {
            ctx->pc = 0x2C08E8u;
            goto label_2c08e8;
        }
    }
    ctx->pc = 0x2C08D4u;
    // 0x2c08d4: 0x8e030a9c  lw          $v1, 0xA9C($s0)
    ctx->pc = 0x2c08d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
label_2c08d8:
    // 0x2c08d8: 0xae020a9c  sw          $v0, 0xA9C($s0)
    ctx->pc = 0x2c08d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 2));
    // 0x2c08dc: 0xae030aa0  sw          $v1, 0xAA0($s0)
    ctx->pc = 0x2c08dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2720), GPR_U32(ctx, 3));
    // 0x2c08e0: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2c08e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
label_2c08e4:
    // 0x2c08e4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c08e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2c08e8:
    // 0x2c08e8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2c08e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c08ec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2c08ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c08f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c08f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c08f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c08f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c08f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c08f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c08fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C08FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C08FCu;
        // 0x2c0900: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C08FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0904u;
}

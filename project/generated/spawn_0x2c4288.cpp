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

// Function: spawn
// Address: 0x2c4288 - 0x2c4d6c
void spawn_0x2c4288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("spawn_0x2c4288");
#endif

    switch (ctx->pc) {
        case 0x2c42e0u: goto label_2c42e0;
        case 0x2c42f4u: goto label_2c42f4;
        case 0x2c4308u: goto label_2c4308;
        case 0x2c4338u: goto label_2c4338;
        case 0x2c4370u: goto label_2c4370;
        case 0x2c4430u: goto label_2c4430;
        case 0x2c443cu: goto label_2c443c;
        case 0x2c4468u: goto label_2c4468;
        case 0x2c44a4u: goto label_2c44a4;
        case 0x2c44b4u: goto label_2c44b4;
        case 0x2c44c0u: goto label_2c44c0;
        case 0x2c45c4u: goto label_2c45c4;
        case 0x2c4628u: goto label_2c4628;
        case 0x2c4644u: goto label_2c4644;
        case 0x2c4658u: goto label_2c4658;
        case 0x2c4664u: goto label_2c4664;
        case 0x2c4674u: goto label_2c4674;
        case 0x2c46d0u: goto label_2c46d0;
        case 0x2c4728u: goto label_2c4728;
        case 0x2c4850u: goto label_2c4850;
        case 0x2c4958u: goto label_2c4958;
        case 0x2c49c0u: goto label_2c49c0;
        case 0x2c4a28u: goto label_2c4a28;
        case 0x2c4a88u: goto label_2c4a88;
        case 0x2c4be4u: goto label_2c4be4;
        case 0x2c4c0cu: goto label_2c4c0c;
        case 0x2c4c4cu: goto label_2c4c4c;
        case 0x2c4c5cu: goto label_2c4c5c;
        case 0x2c4cb8u: goto label_2c4cb8;
        case 0x2c4ce0u: goto label_2c4ce0;
        case 0x2c4d00u: goto label_2c4d00;
        case 0x2c4d1cu: goto label_2c4d1c;
        default: break;
    }

    ctx->pc = 0x2c4288u;

    // 0x2c4288: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2c4288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2c428c: 0x8f83b238  lw          $v1, -0x4DC8($gp)
    ctx->pc = 0x2c428cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2c4290: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2c4290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2c4294: 0x3c0286a4  lui         $v0, 0x86A4
    ctx->pc = 0x2c4294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34468 << 16));
    // 0x2c4298: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2c4298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2c429c: 0x3442c2e1  ori         $v0, $v0, 0xC2E1
    ctx->pc = 0x2c429cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49889);
    // 0x2c42a0: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2c42a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2c42a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c42a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c42a8: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x2c42a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x2c42ac: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x2c42acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x2c42b0: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2c42b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2c42b4: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x2c42b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x2c42b8: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x2c42b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x2c42bc: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2c42bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2c42c0: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x2c42c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2c42c4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2c42c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2c42c8: 0x8e500160  lw          $s0, 0x160($s2)
    ctx->pc = 0x2c42c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x2c42cc: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x2c42ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2c42d0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2c42d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c42d4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2c42d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2c42d8: 0xc089de4  jal         func_227790
    ctx->pc = 0x2C42D8u;
    SET_GPR_U32(ctx, 31, 0x2C42E0u);
    ctx->pc = 0x2C42DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C42D8u;
    // 0x2c42dc: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227790u, 0x2C42D8u, 0x2C42E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C42E0u;
label_2c42e0:
    // 0x2c42e0: 0x8e0411a4  lw          $a0, 0x11A4($s0)
    ctx->pc = 0x2c42e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4516)));
    // 0x2c42e4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C42E4u;
    {
        const bool branch_taken_0x2c42e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C42E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C42E4u;
        // 0x2c42e8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c42e4) {
            ctx->pc = 0x2C430Cu;
            goto label_2c430c;
        }
    }
    ctx->pc = 0x2C42ECu;
    // 0x2c42ec: 0xc0ab870  jal         func_2AE1C0
    ctx->pc = 0x2C42ECu;
    SET_GPR_U32(ctx, 31, 0x2C42F4u);
    ctx->pc = 0x2AE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE1C0u, 0x2C42ECu, 0x2C42F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C42F4u;
label_2c42f4:
    // 0x2c42f4: 0x8e0411a8  lw          $a0, 0x11A8($s0)
    ctx->pc = 0x2c42f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4520)));
    // 0x2c42f8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C42F8u;
    {
        const bool branch_taken_0x2c42f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C42FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C42F8u;
        // 0x2c42fc: 0xae0011a4  sw          $zero, 0x11A4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4516), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c42f8) {
            ctx->pc = 0x2C430Cu;
            goto label_2c430c;
        }
    }
    ctx->pc = 0x2C4300u;
    // 0x2c4300: 0xc0aaba2  jal         func_2AAE88
    ctx->pc = 0x2C4300u;
    SET_GPR_U32(ctx, 31, 0x2C4308u);
    ctx->pc = 0x2AAE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAE88u, 0x2C4300u, 0x2C4308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4308u;
label_2c4308:
    // 0x2c4308: 0xae0011a8  sw          $zero, 0x11A8($s0)
    ctx->pc = 0x2c4308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4520), GPR_U32(ctx, 0));
label_2c430c:
    // 0x2c430c: 0x8e130a90  lw          $s3, 0xA90($s0)
    ctx->pc = 0x2c430cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
    // 0x2c4310: 0x32620010  andi        $v0, $s3, 0x10
    ctx->pc = 0x2c4310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
    // 0x2c4314: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2C4314u;
    {
        const bool branch_taken_0x2c4314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4314u;
        // 0x2c4318: 0x3c1e0033  lui         $fp, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4314) {
            ctx->pc = 0x2C4428u;
            goto label_2c4428;
        }
    }
    ctx->pc = 0x2C431Cu;
    // 0x2c431c: 0x8e160104  lw          $s6, 0x104($s0)
    ctx->pc = 0x2c431cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2c4320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4324: 0x8e110aa4  lw          $s1, 0xAA4($s0)
    ctx->pc = 0x2c4324u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2724)));
    // 0x2c4328: 0x8e140ae4  lw          $s4, 0xAE4($s0)
    ctx->pc = 0x2c4328u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
    // 0x2c432c: 0x8e170ad0  lw          $s7, 0xAD0($s0)
    ctx->pc = 0x2c432cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2768)));
    // 0x2c4330: 0xc0a1ff0  jal         func_287FC0
    ctx->pc = 0x2C4330u;
    SET_GPR_U32(ctx, 31, 0x2C4338u);
    ctx->pc = 0x2C4334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4330u;
    // 0x2c4334: 0x8e150aa8  lw          $s5, 0xAA8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2728)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287FC0u, 0x2C4330u, 0x2C4338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4338u;
label_2c4338:
    // 0x2c4338: 0x8e020a90  lw          $v0, 0xA90($s0)
    ctx->pc = 0x2c4338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
    // 0x2c433c: 0x27c4c4a8  addiu       $a0, $fp, -0x3B58
    ctx->pc = 0x2c433cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
    // 0x2c4340: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2c4340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c4344: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2c4344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2c4348: 0xae020a90  sw          $v0, 0xA90($s0)
    ctx->pc = 0x2c4348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2704), GPR_U32(ctx, 2));
    // 0x2c434c: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2c434cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2c4350: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4350u;
    {
        const bool branch_taken_0x2c4350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2C4354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4350u;
        // 0x2c4354: 0x8f82b230  lw          $v0, -0x4DD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4350) {
            ctx->pc = 0x2C4360u;
            goto label_2c4360;
        }
    }
    ctx->pc = 0x2C4358u;
    // 0x2c4358: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4358u;
    {
        const bool branch_taken_0x2c4358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4358u;
        // 0x2c435c: 0xae140ae4  sw          $s4, 0xAE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2788), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4358) {
            ctx->pc = 0x2C4374u;
            goto label_2c4374;
        }
    }
    ctx->pc = 0x2C4360u;
label_2c4360:
    // 0x2c4360: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c4360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4364: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c4364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4368: 0xc0b179a  jal         func_2C5E68
    ctx->pc = 0x2C4368u;
    SET_GPR_U32(ctx, 31, 0x2C4370u);
    ctx->pc = 0x2C436Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4368u;
    // 0x2c436c: 0x8c450180  lw          $a1, 0x180($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5E68u, 0x2C4368u, 0x2C4370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4370u;
label_2c4370:
    // 0x2c4370: 0xae020ae4  sw          $v0, 0xAE4($s0)
    ctx->pc = 0x2c4370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2788), GPR_U32(ctx, 2));
label_2c4374:
    // 0x2c4374: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x2c4374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x2c4378: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x2c4378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x2c437c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C437Cu;
    {
        const bool branch_taken_0x2c437c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C437Cu;
        // 0x2c4380: 0xae160104  sw          $s6, 0x104($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c437c) {
            ctx->pc = 0x2C439Cu;
            goto label_2c439c;
        }
    }
    ctx->pc = 0x2C4384u;
    // 0x2c4384: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x2c4384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
    // 0x2c4388: 0xae000aa4  sw          $zero, 0xAA4($s0)
    ctx->pc = 0x2c4388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2724), GPR_U32(ctx, 0));
    // 0x2c438c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c438cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c4390: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x2c4390u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x2c4394: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4394u;
    {
        const bool branch_taken_0x2c4394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4394u;
        // 0x2c4398: 0xae110a9c  sw          $s1, 0xA9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4394) {
            ctx->pc = 0x2C43A8u;
            goto label_2c43a8;
        }
    }
    ctx->pc = 0x2C439Cu;
label_2c439c:
    // 0x2c439c: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x2c439cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x2c43a0: 0xae110aa4  sw          $s1, 0xAA4($s0)
    ctx->pc = 0x2c43a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2724), GPR_U32(ctx, 17));
    // 0x2c43a4: 0xae020a9c  sw          $v0, 0xA9C($s0)
    ctx->pc = 0x2c43a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 2));
label_2c43a8:
    // 0x2c43a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c43a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c43ac: 0x16e200f3  bne         $s7, $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x2C43ACu;
    {
        const bool branch_taken_0x2c43ac = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C43B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43ACu;
        // 0x2c43b0: 0x3c16003b  lui         $s6, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c43ac) {
            ctx->pc = 0x2C477Cu;
            goto label_2c477c;
        }
    }
    ctx->pc = 0x2C43B4u;
    // 0x2c43b4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2c43b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2c43b8: 0x56220002  bnel        $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C43B8u;
    {
        const bool branch_taken_0x2c43b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c43b8) {
            ctx->pc = 0x2C43BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C43B8u;
            // 0x2c43bc: 0xae150a88  sw          $s5, 0xA88($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2696), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C43C4u;
            goto label_2c43c4;
        }
    }
    ctx->pc = 0x2C43C0u;
    // 0x2c43c0: 0xae150aa8  sw          $s5, 0xAA8($s0)
    ctx->pc = 0x2c43c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 21));
label_2c43c4:
    // 0x2c43c4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2c43c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c43c8: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x2c43c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x2c43cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C43CCu;
    {
        const bool branch_taken_0x2c43cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C43D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43CCu;
        // 0x2c43d0: 0xae030a90  sw          $v1, 0xA90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c43cc) {
            ctx->pc = 0x2C43DCu;
            goto label_2c43dc;
        }
    }
    ctx->pc = 0x2C43D4u;
    // 0x2c43d4: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2c43d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2c43d8: 0xae020a90  sw          $v0, 0xA90($s0)
    ctx->pc = 0x2c43d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2704), GPR_U32(ctx, 2));
label_2c43dc:
    // 0x2c43dc: 0x32620002  andi        $v0, $s3, 0x2
    ctx->pc = 0x2c43dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
    // 0x2c43e0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C43E0u;
    {
        const bool branch_taken_0x2c43e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c43e0) {
            ctx->pc = 0x2C43E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C43E0u;
            // 0x2c43e4: 0x8e020a90  lw          $v0, 0xA90($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4400u;
            goto label_2c4400;
        }
    }
    ctx->pc = 0x2C43E8u;
    // 0x2c43e8: 0x8e030a90  lw          $v1, 0xA90($s0)
    ctx->pc = 0x2c43e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
    // 0x2c43ec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c43ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c43f0: 0x3442feff  ori         $v0, $v0, 0xFEFF
    ctx->pc = 0x2c43f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65279);
    // 0x2c43f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c43f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c43f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C43F8u;
    {
        const bool branch_taken_0x2c43f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C43FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43F8u;
        // 0x2c43fc: 0xae030a90  sw          $v1, 0xA90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c43f8) {
            ctx->pc = 0x2C4408u;
            goto label_2c4408;
        }
    }
    ctx->pc = 0x2C4400u;
label_2c4400:
    // 0x2c4400: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x2c4400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x2c4404: 0xae020a90  sw          $v0, 0xA90($s0)
    ctx->pc = 0x2c4404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2704), GPR_U32(ctx, 2));
label_2c4408:
    // 0x2c4408: 0x32620004  andi        $v0, $s3, 0x4
    ctx->pc = 0x2c4408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
    // 0x2c440c: 0x50400063  beql        $v0, $zero, . + 4 + (0x63 << 2)
    ctx->pc = 0x2C440Cu;
    {
        const bool branch_taken_0x2c440c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c440c) {
            ctx->pc = 0x2C4410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C440Cu;
            // 0x2c4410: 0x32620008  andi        $v0, $s3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C459Cu;
            goto label_2c459c;
        }
    }
    ctx->pc = 0x2C4414u;
    // 0x2c4414: 0x8e020a90  lw          $v0, 0xA90($s0)
    ctx->pc = 0x2c4414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
    // 0x2c4418: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x2c4418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x2c441c: 0xae020a90  sw          $v0, 0xA90($s0)
    ctx->pc = 0x2c441cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2704), GPR_U32(ctx, 2));
    // 0x2c4420: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x2C4420u;
    {
        const bool branch_taken_0x2c4420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4420u;
        // 0x2c4424: 0x32620008  andi        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4420) {
            ctx->pc = 0x2C459Cu;
            goto label_2c459c;
        }
    }
    ctx->pc = 0x2C4428u;
label_2c4428:
    // 0x2c4428: 0xc0a1ff0  jal         func_287FC0
    ctx->pc = 0x2C4428u;
    SET_GPR_U32(ctx, 31, 0x2C4430u);
    ctx->pc = 0x2C442Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4428u;
    // 0x2c442c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287FC0u, 0x2C4428u, 0x2C4430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4430u;
label_2c4430:
    // 0x2c4430: 0x3c0a82d  daddu       $s5, $fp, $zero
    ctx->pc = 0x2c4430u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4434: 0xc0a224a  jal         func_288928
    ctx->pc = 0x2C4434u;
    SET_GPR_U32(ctx, 31, 0x2C443Cu);
    ctx->pc = 0x2C4438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4434u;
    // 0x2c4438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288928u, 0x2C4434u, 0x2C443Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C443Cu;
label_2c443c:
    // 0x2c443c: 0x27c3c4a8  addiu       $v1, $fp, -0x3B58
    ctx->pc = 0x2c443cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
    // 0x2c4440: 0xae000ae4  sw          $zero, 0xAE4($s0)
    ctx->pc = 0x2c4440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2788), GPR_U32(ctx, 0));
    // 0x2c4444: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x2c4444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2c4448: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2c4448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c444c: 0x14620065  bne         $v1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x2C444Cu;
    {
        const bool branch_taken_0x2c444c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C4450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C444Cu;
        // 0x2c4450: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c444c) {
            ctx->pc = 0x2C45E4u;
            goto label_2c45e4;
        }
    }
    ctx->pc = 0x2C4454u;
    // 0x2c4454: 0x8f82b230  lw          $v0, -0x4DD0($gp)
    ctx->pc = 0x2c4454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2c4458: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c4458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c445c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c445cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4460: 0xc0b179a  jal         func_2C5E68
    ctx->pc = 0x2C4460u;
    SET_GPR_U32(ctx, 31, 0x2C4468u);
    ctx->pc = 0x2C4464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4460u;
    // 0x2c4464: 0x8c450180  lw          $a1, 0x180($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5E68u, 0x2C4460u, 0x2C4468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4468u;
label_2c4468:
    // 0x2c4468: 0x8f86b4fc  lw          $a2, -0x4B04($gp)
    ctx->pc = 0x2c4468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948092)));
    // 0x2c446c: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x2c446cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2c4470: 0x8cc3002c  lw          $v1, 0x2C($a2)
    ctx->pc = 0x2c4470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x2c4474: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2c4474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c4478: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c4478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c447c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x2c447cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c4480: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x2C4480u;
    {
        const bool branch_taken_0x2c4480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4480u;
        // 0x2c4484: 0xae020ae4  sw          $v0, 0xAE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2788), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4480) {
            ctx->pc = 0x2C45CCu;
            goto label_2c45cc;
        }
    }
    ctx->pc = 0x2C4488u;
    // 0x2c4488: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x2c4488u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c448c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2c448cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2c4490: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2c4490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c4494: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x2c4494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x2c4498: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x2c4498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c449c: 0xc08a362  jal         func_228D88
    ctx->pc = 0x2C449Cu;
    SET_GPR_U32(ctx, 31, 0x2C44A4u);
    ctx->pc = 0x2C44A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C449Cu;
    // 0x2c44a0: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228D88u, 0x2C449Cu, 0x2C44A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C44A4u;
label_2c44a4:
    // 0x2c44a4: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2C44A4u;
    {
        const bool branch_taken_0x2c44a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c44a4) {
            ctx->pc = 0x2C45BCu;
            goto label_2c45bc;
        }
    }
    ctx->pc = 0x2C44ACu;
    // 0x2c44ac: 0xc099380  jal         func_264E00
    ctx->pc = 0x2C44ACu;
    SET_GPR_U32(ctx, 31, 0x2C44B4u);
    ctx->pc = 0x2C44B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C44ACu;
    // 0x2c44b0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E00u, 0x2C44ACu, 0x2C44B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C44B4u;
label_2c44b4:
    // 0x2c44b4: 0xae0202a8  sw          $v0, 0x2A8($s0)
    ctx->pc = 0x2c44b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 2));
    // 0x2c44b8: 0xc099380  jal         func_264E00
    ctx->pc = 0x2C44B8u;
    SET_GPR_U32(ctx, 31, 0x2C44C0u);
    ctx->pc = 0x2C44BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C44B8u;
    // 0x2c44bc: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E00u, 0x2C44B8u, 0x2C44C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C44C0u;
label_2c44c0:
    // 0x2c44c0: 0xae020a88  sw          $v0, 0xA88($s0)
    ctx->pc = 0x2c44c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2696), GPR_U32(ctx, 2));
    // 0x2c44c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c44c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c44c8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2c44c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2c44cc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C44CCu;
    {
        const bool branch_taken_0x2c44cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C44D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C44CCu;
        // 0x2c44d0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c44cc) {
            ctx->pc = 0x2C44E0u;
            goto label_2c44e0;
        }
    }
    ctx->pc = 0x2C44D4u;
    // 0x2c44d4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2c44d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2c44d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c44d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c44dc: 0xae030104  sw          $v1, 0x104($s0)
    ctx->pc = 0x2c44dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 3));
label_2c44e0:
    // 0x2c44e0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2c44e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2c44e4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x2c44e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x2c44e8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c44e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c44ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C44ECu;
    {
        const bool branch_taken_0x2c44ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C44F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C44ECu;
        // 0x2c44f0: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c44ec) {
            ctx->pc = 0x2C450Cu;
            goto label_2c450c;
        }
    }
    ctx->pc = 0x2C44F4u;
    // 0x2c44f4: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x2c44f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
    // 0x2c44f8: 0xae000aa4  sw          $zero, 0xAA4($s0)
    ctx->pc = 0x2c44f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2724), GPR_U32(ctx, 0));
    // 0x2c44fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c44fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c4500: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c4500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c4504: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4504u;
    {
        const bool branch_taken_0x2c4504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4504u;
        // 0x2c4508: 0xae020a9c  sw          $v0, 0xA9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4504) {
            ctx->pc = 0x2C4518u;
            goto label_2c4518;
        }
    }
    ctx->pc = 0x2C450Cu;
label_2c450c:
    // 0x2c450c: 0xae020a9c  sw          $v0, 0xA9C($s0)
    ctx->pc = 0x2c450cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 2));
    // 0x2c4510: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2c4510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2c4514: 0xae030aa4  sw          $v1, 0xAA4($s0)
    ctx->pc = 0x2c4514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2724), GPR_U32(ctx, 3));
label_2c4518:
    // 0x2c4518: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2c4518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2c451c: 0x10800096  beqz        $a0, . + 4 + (0x96 << 2)
    ctx->pc = 0x2C451Cu;
    {
        const bool branch_taken_0x2c451c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C451Cu;
        // 0x2c4520: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c451c) {
            ctx->pc = 0x2C4778u;
            goto label_2c4778;
        }
    }
    ctx->pc = 0x2C4524u;
    // 0x2c4524: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2c4524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2c4528: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c4528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c452c: 0x14400093  bnez        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x2C452Cu;
    {
        const bool branch_taken_0x2c452c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C452Cu;
        // 0x2c4530: 0x3c16003b  lui         $s6, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c452c) {
            ctx->pc = 0x2C477Cu;
            goto label_2c477c;
        }
    }
    ctx->pc = 0x2C4534u;
    // 0x2c4534: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2c4534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2c4538: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C4538u;
    {
        const bool branch_taken_0x2c4538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4538u;
        // 0x2c453c: 0x30820002  andi        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4538) {
            ctx->pc = 0x2C455Cu;
            goto label_2c455c;
        }
    }
    ctx->pc = 0x2C4540u;
    // 0x2c4540: 0x8e030a90  lw          $v1, 0xA90($s0)
    ctx->pc = 0x2c4540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
    // 0x2c4544: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c4544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c4548: 0x3442ffdf  ori         $v0, $v0, 0xFFDF
    ctx->pc = 0x2c4548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65503);
    // 0x2c454c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c454cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c4550: 0xae030a90  sw          $v1, 0xA90($s0)
    ctx->pc = 0x2c4550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2704), GPR_U32(ctx, 3));
    // 0x2c4554: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2c4554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2c4558: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x2c4558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_2c455c:
    // 0x2c455c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C455Cu;
    {
        const bool branch_taken_0x2c455c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C455Cu;
        // 0x2c4560: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c455c) {
            ctx->pc = 0x2C4580u;
            goto label_2c4580;
        }
    }
    ctx->pc = 0x2C4564u;
    // 0x2c4564: 0x8e030a90  lw          $v1, 0xA90($s0)
    ctx->pc = 0x2c4564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
    // 0x2c4568: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c4568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c456c: 0x3442feff  ori         $v0, $v0, 0xFEFF
    ctx->pc = 0x2c456cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65279);
    // 0x2c4570: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c4570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c4574: 0xae030a90  sw          $v1, 0xA90($s0)
    ctx->pc = 0x2c4574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2704), GPR_U32(ctx, 3));
    // 0x2c4578: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2c4578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2c457c: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x2c457cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_2c4580:
    // 0x2c4580: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4580u;
    {
        const bool branch_taken_0x2c4580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4580u;
        // 0x2c4584: 0x30820008  andi        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4580) {
            ctx->pc = 0x2C459Cu;
            goto label_2c459c;
        }
    }
    ctx->pc = 0x2C4588u;
    // 0x2c4588: 0x8e020a90  lw          $v0, 0xA90($s0)
    ctx->pc = 0x2c4588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
    // 0x2c458c: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x2c458cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x2c4590: 0xae020a90  sw          $v0, 0xA90($s0)
    ctx->pc = 0x2c4590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2704), GPR_U32(ctx, 2));
    // 0x2c4594: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2c4594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2c4598: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x2c4598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_2c459c:
    // 0x2c459c: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x2C459Cu;
    {
        const bool branch_taken_0x2c459c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C45A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C459Cu;
        // 0x2c45a0: 0x3c16003b  lui         $s6, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c459c) {
            ctx->pc = 0x2C4778u;
            goto label_2c4778;
        }
    }
    ctx->pc = 0x2C45A4u;
    // 0x2c45a4: 0x8e020a90  lw          $v0, 0xA90($s0)
    ctx->pc = 0x2c45a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
    // 0x2c45a8: 0x26530030  addiu       $s3, $s2, 0x30
    ctx->pc = 0x2c45a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2c45ac: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x2c45acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c45b0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2c45b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2c45b4: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x2C45B4u;
    {
        const bool branch_taken_0x2c45b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C45B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C45B4u;
        // 0x2c45b8: 0xae020a90  sw          $v0, 0xA90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c45b4) {
            ctx->pc = 0x2C4784u;
            goto label_2c4784;
        }
    }
    ctx->pc = 0x2C45BCu;
label_2c45bc:
    // 0x2c45bc: 0xc0b3126  jal         func_2CC498
    ctx->pc = 0x2C45BCu;
    SET_GPR_U32(ctx, 31, 0x2C45C4u);
    ctx->pc = 0x2C45C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C45BCu;
    // 0x2c45c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC498u, 0x2C45BCu, 0x2C45C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C45C4u;
label_2c45c4:
    // 0x2c45c4: 0x100001dd  b           . + 4 + (0x1DD << 2)
    ctx->pc = 0x2C45C4u;
    {
        const bool branch_taken_0x2c45c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C45C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C45C4u;
        // 0x2c45c8: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c45c4) {
            ctx->pc = 0x2C4D3Cu;
            goto label_2c4d3c;
        }
    }
    ctx->pc = 0x2C45CCu;
label_2c45cc:
    // 0x2c45cc: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x2c45ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x2c45d0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2c45d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c45d4: 0xae020a9c  sw          $v0, 0xA9C($s0)
    ctx->pc = 0x2c45d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 2));
    // 0x2c45d8: 0x3c16003b  lui         $s6, 0x3B
    ctx->pc = 0x2c45d8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
    // 0x2c45dc: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x2C45DCu;
    {
        const bool branch_taken_0x2c45dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C45E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C45DCu;
        // 0x2c45e0: 0xae030aa4  sw          $v1, 0xAA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2724), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c45dc) {
            ctx->pc = 0x2C477Cu;
            goto label_2c477c;
        }
    }
    ctx->pc = 0x2C45E4u;
label_2c45e4:
    // 0x2c45e4: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C45E4u;
    {
        const bool branch_taken_0x2c45e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C45E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C45E4u;
        // 0x2c45e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c45e4) {
            ctx->pc = 0x2C4638u;
            goto label_2c4638;
        }
    }
    ctx->pc = 0x2C45ECu;
    // 0x2c45ec: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2c45ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2c45f0: 0x8c432010  lw          $v1, 0x2010($v0)
    ctx->pc = 0x2c45f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x382010u));
    // 0x2c45f4: 0x16430011  bne         $s2, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C45F4u;
    {
        const bool branch_taken_0x2c45f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C45F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C45F4u;
        // 0x2c45f8: 0x3c16003b  lui         $s6, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c45f4) {
            ctx->pc = 0x2C463Cu;
            goto label_2c463c;
        }
    }
    ctx->pc = 0x2C45FCu;
    // 0x2c45fc: 0x8f82b4fc  lw          $v0, -0x4B04($gp)
    ctx->pc = 0x2c45fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948092)));
    // 0x2c4600: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2c4600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x2c4604: 0x8e030a9c  lw          $v1, 0xA9C($s0)
    ctx->pc = 0x2c4604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
    // 0x2c4608: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2c4608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2c460c: 0x26530030  addiu       $s3, $s2, 0x30
    ctx->pc = 0x2c460cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2c4610: 0xae030aa0  sw          $v1, 0xAA0($s0)
    ctx->pc = 0x2c4610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2720), GPR_U32(ctx, 3));
    // 0x2c4614: 0xae050a9c  sw          $a1, 0xA9C($s0)
    ctx->pc = 0x2c4614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 5));
    // 0x2c4618: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c4618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c461c: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2c461cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
    // 0x2c4620: 0xc099380  jal         func_264E00
    ctx->pc = 0x2C4620u;
    SET_GPR_U32(ctx, 31, 0x2C4628u);
    ctx->pc = 0x2C4624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4620u;
    // 0x2c4624: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E00u, 0x2C4620u, 0x2C4628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4628u;
label_2c4628:
    // 0x2c4628: 0xae0202a8  sw          $v0, 0x2A8($s0)
    ctx->pc = 0x2c4628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 2));
    // 0x2c462c: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x2c462cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c4630: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2C4630u;
    {
        const bool branch_taken_0x2c4630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4630u;
        // 0x2c4634: 0xae000ae4  sw          $zero, 0xAE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2788), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4630) {
            ctx->pc = 0x2C4750u;
            goto label_2c4750;
        }
    }
    ctx->pc = 0x2C4638u;
label_2c4638:
    // 0x2c4638: 0x3c16003b  lui         $s6, 0x3B
    ctx->pc = 0x2c4638u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
label_2c463c:
    // 0x2c463c: 0x26530030  addiu       $s3, $s2, 0x30
    ctx->pc = 0x2c463cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2c4640: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x2c4640u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2c4644:
    // 0x2c4644: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x2c4644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2c4648: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C4648u;
    {
        const bool branch_taken_0x2c4648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4648) {
            ctx->pc = 0x2C466Cu;
            goto label_2c466c;
        }
    }
    ctx->pc = 0x2C4650u;
    // 0x2c4650: 0xc08a0e4  jal         func_228390
    ctx->pc = 0x2C4650u;
    SET_GPR_U32(ctx, 31, 0x2C4658u);
    ctx->pc = 0x2C4654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4650u;
    // 0x2c4654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228390u, 0x2C4650u, 0x2C4658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4658u;
label_2c4658:
    // 0x2c4658: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c4658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c465c: 0xc0b3630  jal         func_2CD8C0
    ctx->pc = 0x2C465Cu;
    SET_GPR_U32(ctx, 31, 0x2C4664u);
    ctx->pc = 0x2C4660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C465Cu;
    // 0x2c4660: 0xae0202a8  sw          $v0, 0x2A8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD8C0u, 0x2C465Cu, 0x2C4664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4664u;
label_2c4664:
    // 0x2c4664: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2C4664u;
    {
        const bool branch_taken_0x2c4664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4664) {
            ctx->pc = 0x2C4668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4664u;
            // 0x2c4668: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4644u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4644;
        }
    }
    ctx->pc = 0x2C466Cu;
label_2c466c:
    // 0x2c466c: 0xc0b3630  jal         func_2CD8C0
    ctx->pc = 0x2C466Cu;
    SET_GPR_U32(ctx, 31, 0x2C4674u);
    ctx->pc = 0x2C4670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C466Cu;
    // 0x2c4670: 0x8e0402a8  lw          $a0, 0x2A8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD8C0u, 0x2C466Cu, 0x2C4674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4674u;
label_2c4674:
    // 0x2c4674: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2c4674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c4678: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2c4678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c467c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C467Cu;
    {
        const bool branch_taken_0x2c467c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C467Cu;
        // 0x2c4680: 0xae000ae4  sw          $zero, 0xAE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2788), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c467c) {
            ctx->pc = 0x2C469Cu;
            goto label_2c469c;
        }
    }
    ctx->pc = 0x2C4684u;
    // 0x2c4684: 0x5c60002e  bgtzl       $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2C4684u;
    {
        const bool branch_taken_0x2c4684 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2c4684) {
            ctx->pc = 0x2C4688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4684u;
            // 0x2c4688: 0x8e030a9c  lw          $v1, 0xA9C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4740u;
            goto label_2c4740;
        }
    }
    ctx->pc = 0x2C468Cu;
    // 0x2c468c: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C468Cu;
    {
        const bool branch_taken_0x2c468c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C468Cu;
        // 0x2c4690: 0x26a3c4a8  addiu       $v1, $s5, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c468c) {
            ctx->pc = 0x2C470Cu;
            goto label_2c470c;
        }
    }
    ctx->pc = 0x2C4694u;
    // 0x2c4694: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2C4694u;
    {
        const bool branch_taken_0x2c4694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4694u;
        // 0x2c4698: 0x8c620050  lw          $v0, 0x50($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4694) {
            ctx->pc = 0x2C4758u;
            goto label_2c4758;
        }
    }
    ctx->pc = 0x2C469Cu;
label_2c469c:
    // 0x2c469c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c469cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c46a0: 0x1462002c  bne         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2C46A0u;
    {
        const bool branch_taken_0x2c46a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C46A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46A0u;
        // 0x2c46a4: 0x26a3c4a8  addiu       $v1, $s5, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c46a0) {
            ctx->pc = 0x2C4754u;
            goto label_2c4754;
        }
    }
    ctx->pc = 0x2C46A8u;
    // 0x2c46a8: 0x8e020a9c  lw          $v0, 0xA9C($s0)
    ctx->pc = 0x2c46a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
    // 0x2c46ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c46acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c46b0: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x2c46b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2c46b4: 0xae000178  sw          $zero, 0x178($s0)
    ctx->pc = 0x2c46b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 0));
    // 0x2c46b8: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x2c46b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
    // 0x2c46bc: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2c46bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
    // 0x2c46c0: 0xae030104  sw          $v1, 0x104($s0)
    ctx->pc = 0x2c46c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 3));
    // 0x2c46c4: 0xae020aa0  sw          $v0, 0xAA0($s0)
    ctx->pc = 0x2c46c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2720), GPR_U32(ctx, 2));
    // 0x2c46c8: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C46C8u;
    SET_GPR_U32(ctx, 31, 0x2C46D0u);
    ctx->pc = 0x2C46CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C46C8u;
    // 0x2c46cc: 0xae040a9c  sw          $a0, 0xA9C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C46C8u, 0x2C46D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C46D0u;
label_2c46d0:
    // 0x2c46d0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C46D0u;
    {
        const bool branch_taken_0x2c46d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C46D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46D0u;
        // 0x2c46d4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c46d0) {
            ctx->pc = 0x2C46E4u;
            goto label_2c46e4;
        }
    }
    ctx->pc = 0x2C46D8u;
    // 0x2c46d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c46d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c46dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C46DCu;
    {
        const bool branch_taken_0x2c46dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C46E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46DCu;
        // 0x2c46e0: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c46dc) {
            ctx->pc = 0x2C46F8u;
            goto label_2c46f8;
        }
    }
    ctx->pc = 0x2C46E4u;
label_2c46e4:
    // 0x2c46e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c46e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c46e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c46e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c46ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c46ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c46f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c46f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c46f4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2c46f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2c46f8:
    // 0x2c46f8: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c46f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c46fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c46fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4700: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c4700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c4704: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2C4704u;
    {
        const bool branch_taken_0x2c4704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4704u;
        // 0x2c4708: 0xe6000b4c  swc1        $f0, 0xB4C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2892), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4704) {
            ctx->pc = 0x2C4750u;
            goto label_2c4750;
        }
    }
    ctx->pc = 0x2C470Cu;
label_2c470c:
    // 0x2c470c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2c470cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c4710: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c4710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4714: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2c4714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2c4718: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c4718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c471c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2c471cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c4720: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C4720u;
    SET_GPR_U32(ctx, 31, 0x2C4728u);
    ctx->pc = 0x2C4724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4720u;
    // 0x2c4724: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C4720u, 0x2C4728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4728u;
label_2c4728:
    // 0x2c4728: 0x8e020a9c  lw          $v0, 0xA9C($s0)
    ctx->pc = 0x2c4728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
    // 0x2c472c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x2c472cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2c4730: 0xe6140b4c  swc1        $f20, 0xB4C($s0)
    ctx->pc = 0x2c4730u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2892), bits); }
    // 0x2c4734: 0xae020aa0  sw          $v0, 0xAA0($s0)
    ctx->pc = 0x2c4734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2720), GPR_U32(ctx, 2));
    // 0x2c4738: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4738u;
    {
        const bool branch_taken_0x2c4738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4738u;
        // 0x2c473c: 0xae030a9c  sw          $v1, 0xA9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4738) {
            ctx->pc = 0x2C4750u;
            goto label_2c4750;
        }
    }
    ctx->pc = 0x2C4740u;
label_2c4740:
    // 0x2c4740: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2c4740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2c4744: 0xae020a9c  sw          $v0, 0xA9C($s0)
    ctx->pc = 0x2c4744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 2));
    // 0x2c4748: 0xae030aa0  sw          $v1, 0xAA0($s0)
    ctx->pc = 0x2c4748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2720), GPR_U32(ctx, 3));
    // 0x2c474c: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2c474cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
label_2c4750:
    // 0x2c4750: 0x26a3c4a8  addiu       $v1, $s5, -0x3B58
    ctx->pc = 0x2c4750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952104));
label_2c4754:
    // 0x2c4754: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2c4754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_2c4758:
    // 0x2c4758: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2c4758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2c475c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C475Cu;
    {
        const bool branch_taken_0x2c475c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C475Cu;
        // 0x2c4760: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c475c) {
            ctx->pc = 0x2C4784u;
            goto label_2c4784;
        }
    }
    ctx->pc = 0x2C4764u;
    // 0x2c4764: 0x8c630044  lw          $v1, 0x44($v1)
    ctx->pc = 0x2c4764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2c4768: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4768u;
    {
        const bool branch_taken_0x2c4768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4768u;
        // 0x2c476c: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4768) {
            ctx->pc = 0x2C4784u;
            goto label_2c4784;
        }
    }
    ctx->pc = 0x2C4770u;
    // 0x2c4770: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4770u;
    {
        const bool branch_taken_0x2c4770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4770u;
        // 0x2c4774: 0xae020a9c  sw          $v0, 0xA9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4770) {
            ctx->pc = 0x2C4784u;
            goto label_2c4784;
        }
    }
    ctx->pc = 0x2C4778u;
label_2c4778:
    // 0x2c4778: 0x3c16003b  lui         $s6, 0x3B
    ctx->pc = 0x2c4778u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
label_2c477c:
    // 0x2c477c: 0x26530030  addiu       $s3, $s2, 0x30
    ctx->pc = 0x2c477cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2c4780: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x2c4780u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2c4784:
    // 0x2c4784: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c4784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c4788: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c4788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c478c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c478cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c4790: 0x8e030aa4  lw          $v1, 0xAA4($s0)
    ctx->pc = 0x2c4790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2724)));
    // 0x2c4794: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x2c4794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x2c4798: 0xae0202ac  sw          $v0, 0x2AC($s0)
    ctx->pc = 0x2c4798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 2));
    // 0x2c479c: 0xae000698  sw          $zero, 0x698($s0)
    ctx->pc = 0x2c479cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1688), GPR_U32(ctx, 0));
    // 0x2c47a0: 0xae000a84  sw          $zero, 0xA84($s0)
    ctx->pc = 0x2c47a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2692), GPR_U32(ctx, 0));
    // 0x2c47a4: 0x10640018  beq         $v1, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C47A4u;
    {
        const bool branch_taken_0x2c47a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2C47A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47A4u;
        // 0x2c47a8: 0xe64d0208  swc1        $f13, 0x208($s2) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 520), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c47a4) {
            ctx->pc = 0x2C4808u;
            goto label_2c4808;
        }
    }
    ctx->pc = 0x2C47ACu;
    // 0x2c47ac: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2c47acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c47b0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C47B0u;
    {
        const bool branch_taken_0x2c47b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C47B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47B0u;
        // 0x2c47b4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c47b0) {
            ctx->pc = 0x2C47D4u;
            goto label_2c47d4;
        }
    }
    ctx->pc = 0x2C47B8u;
    // 0x2c47b8: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2c47b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2c47bc: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2C47BCu;
    {
        const bool branch_taken_0x2c47bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C47C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47BCu;
        // 0x2c47c0: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c47bc) {
            ctx->pc = 0x2C4858u;
            goto label_2c4858;
        }
    }
    ctx->pc = 0x2C47C4u;
    // 0x2c47c4: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C47C4u;
    {
        const bool branch_taken_0x2c47c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C47C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47C4u;
        // 0x2c47c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c47c4) {
            ctx->pc = 0x2C4858u;
            goto label_2c4858;
        }
    }
    ctx->pc = 0x2C47CCu;
    // 0x2c47cc: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2C47CCu;
    {
        const bool branch_taken_0x2c47cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C47D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47CCu;
        // 0x2c47d0: 0xae020a94  sw          $v0, 0xA94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2708), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c47cc) {
            ctx->pc = 0x2C48A0u;
            goto label_2c48a0;
        }
    }
    ctx->pc = 0x2C47D4u;
label_2c47d4:
    // 0x2c47d4: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C47D4u;
    {
        const bool branch_taken_0x2c47d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C47D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47D4u;
        // 0x2c47d8: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c47d4) {
            ctx->pc = 0x2C4858u;
            goto label_2c4858;
        }
    }
    ctx->pc = 0x2C47DCu;
    // 0x2c47dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C47DCu;
    {
        const bool branch_taken_0x2c47dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C47E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47DCu;
        // 0x2c47e0: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c47dc) {
            ctx->pc = 0x2C47F8u;
            goto label_2c47f8;
        }
    }
    ctx->pc = 0x2C47E4u;
    // 0x2c47e4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x2c47e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x2c47e8: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C47E8u;
    {
        const bool branch_taken_0x2c47e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C47ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47E8u;
        // 0x2c47ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c47e8) {
            ctx->pc = 0x2C4858u;
            goto label_2c4858;
        }
    }
    ctx->pc = 0x2C47F0u;
    // 0x2c47f0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2C47F0u;
    {
        const bool branch_taken_0x2c47f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C47F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47F0u;
        // 0x2c47f4: 0xae020a94  sw          $v0, 0xA94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2708), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c47f0) {
            ctx->pc = 0x2C48A0u;
            goto label_2c48a0;
        }
    }
    ctx->pc = 0x2C47F8u;
label_2c47f8:
    // 0x2c47f8: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2C47F8u;
    {
        const bool branch_taken_0x2c47f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C47FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47F8u;
        // 0x2c47fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c47f8) {
            ctx->pc = 0x2C4894u;
            goto label_2c4894;
        }
    }
    ctx->pc = 0x2C4800u;
    // 0x2c4800: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2C4800u;
    {
        const bool branch_taken_0x2c4800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4800u;
        // 0x2c4804: 0xae020a94  sw          $v0, 0xA94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2708), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4800) {
            ctx->pc = 0x2C48A0u;
            goto label_2c48a0;
        }
    }
    ctx->pc = 0x2C4808u;
label_2c4808:
    // 0x2c4808: 0x8f84b4cc  lw          $a0, -0x4B34($gp)
    ctx->pc = 0x2c4808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948044)));
    // 0x2c480c: 0x3c0501ff  lui         $a1, 0x1FF
    ctx->pc = 0x2c480cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)511 << 16));
    // 0x2c4810: 0x8e070a88  lw          $a3, 0xA88($s0)
    ctx->pc = 0x2c4810u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2696)));
    // 0x2c4814: 0x24a5df00  addiu       $a1, $a1, -0x2100
    ctx->pc = 0x2c4814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958848));
    // 0x2c4818: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x2c4818u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2c481c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2c481cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c4820: 0xae020a94  sw          $v0, 0xA94($s0)
    ctx->pc = 0x2c4820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2708), GPR_U32(ctx, 2));
    // 0x2c4824: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x2c4824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2c4828: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x2c4828u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x2c482c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2c482cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c4830: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2c4830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2c4834: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c4834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c4838: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c4838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c483c: 0xaf84b4cc  sw          $a0, -0x4B34($gp)
    ctx->pc = 0x2c483cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948044), GPR_U32(ctx, 4));
    // 0x2c4840: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2c4840u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2c4844: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c4844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4848: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C4848u;
    SET_GPR_U32(ctx, 31, 0x2C4850u);
    ctx->pc = 0x2C484Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4848u;
    // 0x2c484c: 0x24050071  addiu       $a1, $zero, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C4848u, 0x2C4850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4850u;
label_2c4850:
    // 0x2c4850: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2C4850u;
    {
        const bool branch_taken_0x2c4850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4850u;
        // 0x2c4854: 0x8e0202a8  lw          $v0, 0x2A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4850) {
            ctx->pc = 0x2C48A4u;
            goto label_2c48a4;
        }
    }
    ctx->pc = 0x2C4858u;
label_2c4858:
    // 0x2c4858: 0x8f85b4cc  lw          $a1, -0x4B34($gp)
    ctx->pc = 0x2c4858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948044)));
    // 0x2c485c: 0x3c0401ff  lui         $a0, 0x1FF
    ctx->pc = 0x2c485cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)511 << 16));
    // 0x2c4860: 0x8e070a88  lw          $a3, 0xA88($s0)
    ctx->pc = 0x2c4860u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2696)));
    // 0x2c4864: 0x2484df00  addiu       $a0, $a0, -0x2100
    ctx->pc = 0x2c4864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958848));
    // 0x2c4868: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x2c4868u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2c486c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c486cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4870: 0xae020a94  sw          $v0, 0xA94($s0)
    ctx->pc = 0x2c4870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2708), GPR_U32(ctx, 2));
    // 0x2c4874: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x2c4874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2c4878: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x2c4878u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x2c487c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2c487cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c4880: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2c4880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2c4884: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c4884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c4888: 0xaf85b4cc  sw          $a1, -0x4B34($gp)
    ctx->pc = 0x2c4888u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948044), GPR_U32(ctx, 5));
    // 0x2c488c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C488Cu;
    {
        const bool branch_taken_0x2c488c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C488Cu;
        // 0x2c4890: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c488c) {
            ctx->pc = 0x2C48A0u;
            goto label_2c48a0;
        }
    }
    ctx->pc = 0x2C4894u;
label_2c4894:
    // 0x2c4894: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2c4894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c4898: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x2c4898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x2c489c: 0xae020a94  sw          $v0, 0xA94($s0)
    ctx->pc = 0x2c489cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2708), GPR_U32(ctx, 2));
label_2c48a0:
    // 0x2c48a0: 0x8e0202a8  lw          $v0, 0x2A8($s0)
    ctx->pc = 0x2c48a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
label_2c48a4:
    // 0x2c48a4: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x2c48a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2c48a8: 0xc6000b28  lwc1        $f0, 0xB28($s0)
    ctx->pc = 0x2c48a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c48ac: 0x27d1c4a8  addiu       $s1, $fp, -0x3B58
    ctx->pc = 0x2c48acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
    // 0x2c48b0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2c48b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c48b4: 0xc6c1fd70  lwc1        $f1, -0x290($s6)
    ctx->pc = 0x2c48b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294966640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c48b8: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x2c48b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c48bc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2c48bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c48c0: 0xe6010b8c  swc1        $f1, 0xB8C($s0)
    ctx->pc = 0x2c48c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2956), bits); }
    // 0x2c48c4: 0xe6000b38  swc1        $f0, 0xB38($s0)
    ctx->pc = 0x2c48c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2872), bits); }
    // 0x2c48c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c48c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c48cc: 0xc781914c  lwc1        $f1, -0x6EB4($gp)
    ctx->pc = 0x2c48ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c48d0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2c48d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c48d4: 0xae000aa0  sw          $zero, 0xAA0($s0)
    ctx->pc = 0x2c48d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2720), GPR_U32(ctx, 0));
    // 0x2c48d8: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x2c48d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x2c48dc: 0xae000ad0  sw          $zero, 0xAD0($s0)
    ctx->pc = 0x2c48dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2768), GPR_U32(ctx, 0));
    // 0x2c48e0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2c48e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c48e4: 0xae000ad4  sw          $zero, 0xAD4($s0)
    ctx->pc = 0x2c48e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2772), GPR_U32(ctx, 0));
    // 0x2c48e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c48e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c48ec: 0xae000bbc  sw          $zero, 0xBBC($s0)
    ctx->pc = 0x2c48ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3004), GPR_U32(ctx, 0));
    // 0x2c48f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c48f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c48f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c48f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c48f8: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x2c48f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2c48fc: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x2c48fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x2c4900: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2c4900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4904: 0xe6410038  swc1        $f1, 0x38($s2)
    ctx->pc = 0x2c4904u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x2c4908: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2c4908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c490c: 0xe6400054  swc1        $f0, 0x54($s2)
    ctx->pc = 0x2c490cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x2c4910: 0xe640004c  swc1        $f0, 0x4C($s2)
    ctx->pc = 0x2c4910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
    // 0x2c4914: 0xe6400050  swc1        $f0, 0x50($s2)
    ctx->pc = 0x2c4914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
    // 0x2c4918: 0xae000b98  sw          $zero, 0xB98($s0)
    ctx->pc = 0x2c4918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2968), GPR_U32(ctx, 0));
    // 0x2c491c: 0xc640004c  lwc1        $f0, 0x4C($s2)
    ctx->pc = 0x2c491cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4920: 0xe6000b9c  swc1        $f0, 0xB9C($s0)
    ctx->pc = 0x2c4920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2972), bits); }
    // 0x2c4924: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x2c4924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4928: 0xe6010bac  swc1        $f1, 0xBAC($s0)
    ctx->pc = 0x2c4928u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2988), bits); }
    // 0x2c492c: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x2c492cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4930: 0xe6000bb0  swc1        $f0, 0xBB0($s0)
    ctx->pc = 0x2c4930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2992), bits); }
    // 0x2c4934: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x2c4934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4938: 0xe6020b90  swc1        $f2, 0xB90($s0)
    ctx->pc = 0x2c4938u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2960), bits); }
    // 0x2c493c: 0x14640050  bne         $v1, $a0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2C493Cu;
    {
        const bool branch_taken_0x2c493c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C4940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C493Cu;
        // 0x2c4940: 0xe6010bb4  swc1        $f1, 0xBB4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2996), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c493c) {
            ctx->pc = 0x2C4A80u;
            goto label_2c4a80;
        }
    }
    ctx->pc = 0x2C4944u;
    // 0x2c4944: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x2c4944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2c4948: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C4948u;
    {
        const bool branch_taken_0x2c4948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4948u;
        // 0x2c494c: 0x27c2c4a8  addiu       $v0, $fp, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4948) {
            ctx->pc = 0x2C49A8u;
            goto label_2c49a8;
        }
    }
    ctx->pc = 0x2C4950u;
    // 0x2c4950: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C4950u;
    SET_GPR_U32(ctx, 31, 0x2C4958u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C4950u, 0x2C4958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4958u;
label_2c4958:
    // 0x2c4958: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4958u;
    {
        const bool branch_taken_0x2c4958 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4958u;
        // 0x2c495c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4958) {
            ctx->pc = 0x2C496Cu;
            goto label_2c496c;
        }
    }
    ctx->pc = 0x2C4960u;
    // 0x2c4960: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c4960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c4964: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4964u;
    {
        const bool branch_taken_0x2c4964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4964u;
        // 0x2c4968: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4964) {
            ctx->pc = 0x2C4980u;
            goto label_2c4980;
        }
    }
    ctx->pc = 0x2C496Cu;
label_2c496c:
    // 0x2c496c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c496cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c4970: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c4970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c4974: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c4974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c4978: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c4978u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c497c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2c497cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2c4980:
    // 0x2c4980: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c4980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c4984: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c4984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4988: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2c4988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2c498c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c498cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c4990: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c4990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c4994: 0xc7819150  lwc1        $f1, -0x6EB0($gp)
    ctx->pc = 0x2c4994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4998: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c4998u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c499c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c499cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c49a0: 0xe6000b10  swc1        $f0, 0xB10($s0)
    ctx->pc = 0x2c49a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2832), bits); }
    // 0x2c49a4: 0x27c2c4a8  addiu       $v0, $fp, -0x3B58
    ctx->pc = 0x2c49a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
label_2c49a8:
    // 0x2c49a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c49a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c49ac: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x2c49acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2c49b0: 0x14640017  bne         $v1, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C49B0u;
    {
        const bool branch_taken_0x2c49b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C49B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C49B0u;
        // 0x2c49b4: 0x27c2c4a8  addiu       $v0, $fp, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c49b0) {
            ctx->pc = 0x2C4A10u;
            goto label_2c4a10;
        }
    }
    ctx->pc = 0x2C49B8u;
    // 0x2c49b8: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C49B8u;
    SET_GPR_U32(ctx, 31, 0x2C49C0u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C49B8u, 0x2C49C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C49C0u;
label_2c49c0:
    // 0x2c49c0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C49C0u;
    {
        const bool branch_taken_0x2c49c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C49C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C49C0u;
        // 0x2c49c4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c49c0) {
            ctx->pc = 0x2C49D4u;
            goto label_2c49d4;
        }
    }
    ctx->pc = 0x2C49C8u;
    // 0x2c49c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c49c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c49cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C49CCu;
    {
        const bool branch_taken_0x2c49cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C49D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C49CCu;
        // 0x2c49d0: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c49cc) {
            ctx->pc = 0x2C49E8u;
            goto label_2c49e8;
        }
    }
    ctx->pc = 0x2C49D4u;
label_2c49d4:
    // 0x2c49d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c49d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c49d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c49d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c49dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c49dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c49e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c49e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c49e4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2c49e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2c49e8:
    // 0x2c49e8: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c49e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c49ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c49ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c49f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c49f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c49f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c49f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c49f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c49f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c49fc: 0xc7819154  lwc1        $f1, -0x6EAC($gp)
    ctx->pc = 0x2c49fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4a00: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c4a00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c4a04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c4a04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c4a08: 0xe6000b10  swc1        $f0, 0xB10($s0)
    ctx->pc = 0x2c4a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2832), bits); }
    // 0x2c4a0c: 0x27c2c4a8  addiu       $v0, $fp, -0x3B58
    ctx->pc = 0x2c4a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
label_2c4a10:
    // 0x2c4a10: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2c4a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c4a14: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x2c4a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2c4a18: 0x14640015  bne         $v1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C4A18u;
    {
        const bool branch_taken_0x2c4a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2c4a18) {
            ctx->pc = 0x2C4A70u;
            goto label_2c4a70;
        }
    }
    ctx->pc = 0x2C4A20u;
    // 0x2c4a20: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C4A20u;
    SET_GPR_U32(ctx, 31, 0x2C4A28u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C4A20u, 0x2C4A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4A28u;
label_2c4a28:
    // 0x2c4a28: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4A28u;
    {
        const bool branch_taken_0x2c4a28 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C4A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A28u;
        // 0x2c4a2c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4a28) {
            ctx->pc = 0x2C4A3Cu;
            goto label_2c4a3c;
        }
    }
    ctx->pc = 0x2C4A30u;
    // 0x2c4a30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c4a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c4a34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4A34u;
    {
        const bool branch_taken_0x2c4a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A34u;
        // 0x2c4a38: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4a34) {
            ctx->pc = 0x2C4A50u;
            goto label_2c4a50;
        }
    }
    ctx->pc = 0x2C4A3Cu;
label_2c4a3c:
    // 0x2c4a3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c4a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c4a40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c4a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c4a44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c4a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c4a48: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c4a48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c4a4c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2c4a4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2c4a50:
    // 0x2c4a50: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c4a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c4a54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c4a54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4a58: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2c4a58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c4a5c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c4a5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c4a60: 0xc7819158  lwc1        $f1, -0x6EA8($gp)
    ctx->pc = 0x2c4a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4a64: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c4a64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c4a68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c4a68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c4a6c: 0xe6000b10  swc1        $f0, 0xB10($s0)
    ctx->pc = 0x2c4a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2832), bits); }
label_2c4a70:
    // 0x2c4a70: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c4a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c4a74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c4a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4a78: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2C4A78u;
    {
        const bool branch_taken_0x2c4a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A78u;
        // 0x2c4a7c: 0xe6000b14  swc1        $f0, 0xB14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2836), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4a78) {
            ctx->pc = 0x2C4B78u;
            goto label_2c4b78;
        }
    }
    ctx->pc = 0x2C4A80u;
label_2c4a80:
    // 0x2c4a80: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C4A80u;
    SET_GPR_U32(ctx, 31, 0x2C4A88u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C4A80u, 0x2C4A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4A88u;
label_2c4a88:
    // 0x2c4a88: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2c4a88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c4a8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c4a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4a90: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c4a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c4a94: 0x2261821  addu        $v1, $s1, $a2
    ctx->pc = 0x2c4a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2c4a98: 0x90640031  lbu         $a0, 0x31($v1)
    ctx->pc = 0x2c4a98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 49)));
    // 0x2c4a9c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2c4a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c4aa0: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x2c4aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2c4aa4: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x2c4aa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x2c4aa8: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4AA8u;
    {
        const bool branch_taken_0x2c4aa8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2C4AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4AA8u;
        // 0x2c4aac: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4aa8) {
            ctx->pc = 0x2C4ABCu;
            goto label_2c4abc;
        }
    }
    ctx->pc = 0x2C4AB0u;
    // 0x2c4ab0: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x2c4ab0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c4ab4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4AB4u;
    {
        const bool branch_taken_0x2c4ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4AB4u;
        // 0x2c4ab8: 0x468018e0  cvt.s.w     $f3, $f3 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ab4) {
            ctx->pc = 0x2C4AD0u;
            goto label_2c4ad0;
        }
    }
    ctx->pc = 0x2C4ABCu;
label_2c4abc:
    // 0x2c4abc: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2c4abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2c4ac0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c4ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c4ac4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2c4ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c4ac8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2c4ac8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2c4acc: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2c4accu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2c4ad0:
    // 0x2c4ad0: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c4ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c4ad4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c4ad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4ad8: 0x27c3c4a8  addiu       $v1, $fp, -0x3B58
    ctx->pc = 0x2c4ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
    // 0x2c4adc: 0xc462006c  lwc1        $f2, 0x6C($v1)
    ctx->pc = 0x2c4adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c4ae0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c4ae0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c4ae4: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x2c4ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x2c4ae8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2c4ae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2c4aec: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2c4aecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2c4af0: 0xc781915c  lwc1        $f1, -0x6EA4($gp)
    ctx->pc = 0x2c4af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4af4: 0xc7839160  lwc1        $f3, -0x6EA0($gp)
    ctx->pc = 0x2c4af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c4af8: 0x0  nop
    ctx->pc = 0x2c4af8u;
    // NOP
    // 0x2c4afc: 0x0  nop
    ctx->pc = 0x2c4afcu;
    // NOP
    // 0x2c4b00: 0x46051143  div.s       $f5, $f2, $f5
    ctx->pc = 0x2c4b00u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[5] = ctx->f[2] / ctx->f[5];
    // 0x2c4b04: 0xc7849164  lwc1        $f4, -0x6E9C($gp)
    ctx->pc = 0x2c4b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c4b08: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x2c4b08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x2c4b0c: 0xc7829168  lwc1        $f2, -0x6E98($gp)
    ctx->pc = 0x2c4b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c4b10: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x2c4b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2c4b14: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2c4b14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2c4b18: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x2c4b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2c4b1c: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x2c4b1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2c4b20: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2c4b20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c4b24: 0xc782916c  lwc1        $f2, -0x6E94($gp)
    ctx->pc = 0x2c4b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c4b28: 0x460408c0  add.s       $f3, $f1, $f4
    ctx->pc = 0x2c4b28u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2c4b2c: 0xe6000b10  swc1        $f0, 0xB10($s0)
    ctx->pc = 0x2c4b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2832), bits); }
    // 0x2c4b30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c4b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c4b34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c4b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4b38: 0xc7819170  lwc1        $f1, -0x6E90($gp)
    ctx->pc = 0x2c4b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4b3c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2c4b3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2c4b40: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2c4b40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2c4b44: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2c4b44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c4b48: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x2c4b48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c4b4c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2c4b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4b50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c4b50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c4b54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4b58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c4b58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c4b5c: 0x0  nop
    ctx->pc = 0x2c4b5cu;
    // NOP
    // 0x2c4b60: 0x0  nop
    ctx->pc = 0x2c4b60u;
    // NOP
    // 0x2c4b64: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2c4b64u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2c4b68: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2c4b68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2c4b6c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c4b6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c4b70: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2c4b70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4b74: 0xe6000b14  swc1        $f0, 0xB14($s0)
    ctx->pc = 0x2c4b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2836), bits); }
label_2c4b78:
    // 0x2c4b78: 0xc6020b10  lwc1        $f2, 0xB10($s0)
    ctx->pc = 0x2c4b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c4b7c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c4b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4b80: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2c4b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2c4b84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c4b84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4b88: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c4b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4b8c: 0xc6010b94  lwc1        $f1, 0xB94($s0)
    ctx->pc = 0x2c4b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4b90: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2c4b90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4b94: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2c4b94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c4b98: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2c4b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4b9c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2c4b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2c4ba0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c4ba0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4ba4: 0xc7949174  lwc1        $f20, -0x6E8C($gp)
    ctx->pc = 0x2c4ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c4ba8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2c4ba8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4bac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c4bacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c4bb0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2c4bb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4bb4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c4bb4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c4bb8: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2c4bb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c4bbc: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x2c4bbcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c4bc0: 0xe6010b94  swc1        $f1, 0xB94($s0)
    ctx->pc = 0x2c4bc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2964), bits); }
    // 0x2c4bc4: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x2c4bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4bc8: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x2c4bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4bcc: 0xc6420038  lwc1        $f2, 0x38($s2)
    ctx->pc = 0x2c4bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c4bd0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2c4bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c4bd4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2c4bd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c4bd8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2c4bd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c4bdc: 0xc09f430  jal         func_27D0C0
    ctx->pc = 0x2C4BDCu;
    SET_GPR_U32(ctx, 31, 0x2C4BE4u);
    ctx->pc = 0x2C4BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4BDCu;
    // 0x2c4be0: 0xc44d0084  lwc1        $f13, 0x84($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D0C0u, 0x2C4BDCu, 0x2C4BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4BE4u;
label_2c4be4:
    // 0x2c4be4: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x2c4be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2c4be8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2c4be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4bec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2c4becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4bf0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c4bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4bf4: 0xc46d0084  lwc1        $f13, 0x84($v1)
    ctx->pc = 0x2c4bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c4bf8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c4bf8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c4bfc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c4bfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c4c00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c04: 0xc09f430  jal         func_27D0C0
    ctx->pc = 0x2C4C04u;
    SET_GPR_U32(ctx, 31, 0x2C4C0Cu);
    ctx->pc = 0x2C4C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4C04u;
    // 0x2c4c08: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D0C0u, 0x2C4C04u, 0x2C4C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4C0Cu;
label_2c4c0c:
    // 0x2c4c0c: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2c4c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c4c10: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c4c10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c4c14: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2c4c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4c18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c4c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c1c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2c4c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4c20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c4c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c24: 0xe6420070  swc1        $f2, 0x70($s2)
    ctx->pc = 0x2c4c24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x2c4c28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c4c28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c2c: 0xe6410074  swc1        $f1, 0x74($s2)
    ctx->pc = 0x2c4c2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
    // 0x2c4c30: 0xe6400078  swc1        $f0, 0x78($s2)
    ctx->pc = 0x2c4c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
    // 0x2c4c34: 0xe6420030  swc1        $f2, 0x30($s2)
    ctx->pc = 0x2c4c34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x2c4c38: 0xe6410034  swc1        $f1, 0x34($s2)
    ctx->pc = 0x2c4c38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x2c4c3c: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x2c4c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x2c4c40: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2c4c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2c4c44: 0xc09f27c  jal         func_27C9F0
    ctx->pc = 0x2C4C44u;
    SET_GPR_U32(ctx, 31, 0x2C4C4Cu);
    ctx->pc = 0x2C4C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4C44u;
    // 0x2c4c48: 0xc44d0084  lwc1        $f13, 0x84($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C9F0u, 0x2C4C44u, 0x2C4C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4C4Cu;
label_2c4c4c:
    // 0x2c4c4c: 0xe6000b8c  swc1        $f0, 0xB8C($s0)
    ctx->pc = 0x2c4c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2956), bits); }
    // 0x2c4c50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c4c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c54: 0xc0b1fc8  jal         func_2C7F20
    ctx->pc = 0x2C4C54u;
    SET_GPR_U32(ctx, 31, 0x2C4C5Cu);
    ctx->pc = 0x2C4C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4C54u;
    // 0x2c4c58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7F20u, 0x2C4C54u, 0x2C4C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4C5Cu;
label_2c4c5c:
    // 0x2c4c5c: 0x27c3c4a8  addiu       $v1, $fp, -0x3B58
    ctx->pc = 0x2c4c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
    // 0x2c4c60: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2c4c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c4c64: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2c4c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2c4c68: 0x54440018  bnel        $v0, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C4C68u;
    {
        const bool branch_taken_0x2c4c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2c4c68) {
            ctx->pc = 0x2C4C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4C68u;
            // 0x2c4c6c: 0x8e0211ac  lw          $v0, 0x11AC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4CCCu;
            goto label_2c4ccc;
        }
    }
    ctx->pc = 0x2C4C70u;
    // 0x2c4c70: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x2c4c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2c4c74: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2c4c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c4c78: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4C78u;
    {
        const bool branch_taken_0x2c4c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C4C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C78u;
        // 0x2c4c7c: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4c78) {
            ctx->pc = 0x2C4C88u;
            goto label_2c4c88;
        }
    }
    ctx->pc = 0x2C4C80u;
    // 0x2c4c80: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4C80u;
    {
        const bool branch_taken_0x2c4c80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c4c80) {
            ctx->pc = 0x2C4C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4C80u;
            // 0x2c4c84: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4C98u;
            goto label_2c4c98;
        }
    }
    ctx->pc = 0x2C4C88u;
label_2c4c88:
    // 0x2c4c88: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2c4c88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4c8c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2c4c8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4c90: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2C4C90u;
    {
        const bool branch_taken_0x2c4c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C90u;
        // 0x2c4c94: 0x24160002  addiu       $s6, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4c90) {
            ctx->pc = 0x2C4CD0u;
            goto label_2c4cd0;
        }
    }
    ctx->pc = 0x2C4C98u;
label_2c4c98:
    // 0x2c4c98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c4c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c4c9c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2c4c9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c4ca0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C4CA0u;
    {
        const bool branch_taken_0x2c4ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CA0u;
        // 0x2c4ca4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ca0) {
            ctx->pc = 0x2C4CD0u;
            goto label_2c4cd0;
        }
    }
    ctx->pc = 0x2C4CA8u;
    // 0x2c4ca8: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x2c4ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2c4cac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c4cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4cb0: 0xc0ab8ba  jal         func_2AE2E8
    ctx->pc = 0x2C4CB0u;
    SET_GPR_U32(ctx, 31, 0x2C4CB8u);
    ctx->pc = 0x2C4CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4CB0u;
    // 0x2c4cb4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE2E8u, 0x2C4CB0u, 0x2C4CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4CB8u;
label_2c4cb8:
    // 0x2c4cb8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2c4cb8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4cbc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c4cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c4cc0: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x2c4cc0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c4cc4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C4CC4u;
    {
        const bool branch_taken_0x2c4cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CC4u;
        // 0x2c4cc8: 0x62880b  movn        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4cc4) {
            ctx->pc = 0x2C4CD0u;
            goto label_2c4cd0;
        }
    }
    ctx->pc = 0x2C4CCCu;
label_2c4ccc:
    // 0x2c4ccc: 0x2c550001  sltiu       $s5, $v0, 0x1
    ctx->pc = 0x2c4cccu;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2c4cd0:
    // 0x2c4cd0: 0x52a00014  beql        $s5, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C4CD0u;
    {
        const bool branch_taken_0x2c4cd0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4cd0) {
            ctx->pc = 0x2C4CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4CD0u;
            // 0x2c4cd4: 0x8e030a90  lw          $v1, 0xA90($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4D24u;
            goto label_2c4d24;
        }
    }
    ctx->pc = 0x2C4CD8u;
    // 0x2c4cd8: 0xc094ff4  jal         func_253FD0
    ctx->pc = 0x2C4CD8u;
    SET_GPR_U32(ctx, 31, 0x2C4CE0u);
    ctx->pc = 0x2C4CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4CD8u;
    // 0x2c4cdc: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253FD0u, 0x2C4CD8u, 0x2C4CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4CE0u;
label_2c4ce0:
    // 0x2c4ce0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C4CE0u;
    {
        const bool branch_taken_0x2c4ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CE0u;
        // 0x2c4ce4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ce0) {
            ctx->pc = 0x2C4D20u;
            goto label_2c4d20;
        }
    }
    ctx->pc = 0x2C4CE8u;
    // 0x2c4ce8: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C4CE8u;
    {
        const bool branch_taken_0x2c4ce8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C4CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CE8u;
        // 0x2c4cec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ce8) {
            ctx->pc = 0x2C4D08u;
            goto label_2c4d08;
        }
    }
    ctx->pc = 0x2C4CF0u;
    // 0x2c4cf0: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x2c4cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2c4cf4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c4cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4cf8: 0xc0ab900  jal         func_2AE400
    ctx->pc = 0x2C4CF8u;
    SET_GPR_U32(ctx, 31, 0x2C4D00u);
    ctx->pc = 0x2C4CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4CF8u;
    // 0x2c4cfc: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE400u, 0x2C4CF8u, 0x2C4D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4D00u;
label_2c4d00:
    // 0x2c4d00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c4d00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4d04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c4d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c4d08:
    // 0x2c4d08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c4d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4d0c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2c4d0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4d10: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2c4d10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4d14: 0xc0ab6dc  jal         func_2ADB70
    ctx->pc = 0x2C4D14u;
    SET_GPR_U32(ctx, 31, 0x2C4D1Cu);
    ctx->pc = 0x2C4D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4D14u;
    // 0x2c4d18: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADB70u, 0x2C4D14u, 0x2C4D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4D1Cu;
label_2c4d1c:
    // 0x2c4d1c: 0xae0211a4  sw          $v0, 0x11A4($s0)
    ctx->pc = 0x2c4d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4516), GPR_U32(ctx, 2));
label_2c4d20:
    // 0x2c4d20: 0x8e030a90  lw          $v1, 0xA90($s0)
    ctx->pc = 0x2c4d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
label_2c4d24:
    // 0x2c4d24: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c4d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c4d28: 0x3442cfff  ori         $v0, $v0, 0xCFFF
    ctx->pc = 0x2c4d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53247);
    // 0x2c4d2c: 0xae0011ac  sw          $zero, 0x11AC($s0)
    ctx->pc = 0x2c4d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4524), GPR_U32(ctx, 0));
    // 0x2c4d30: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c4d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c4d34: 0xae030a90  sw          $v1, 0xA90($s0)
    ctx->pc = 0x2c4d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2704), GPR_U32(ctx, 3));
    // 0x2c4d38: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x2c4d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2c4d3c:
    // 0x2c4d3c: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x2c4d3cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c4d40: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x2c4d40u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c4d44: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x2c4d44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c4d48: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x2c4d48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c4d4c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2c4d4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c4d50: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x2c4d50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c4d54: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2c4d54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c4d58: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2c4d58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c4d5c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2c4d5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c4d60: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2c4d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c4d64: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D64u;
        // 0x2c4d68: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4D6Cu;
}

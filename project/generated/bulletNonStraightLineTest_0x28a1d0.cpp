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

// Function: bulletNonStraightLineTest
// Address: 0x28a1d0 - 0x28a46c
void bulletNonStraightLineTest_0x28a1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bulletNonStraightLineTest_0x28a1d0");
#endif

    switch (ctx->pc) {
        case 0x28a2ecu: goto label_28a2ec;
        case 0x28a3a0u: goto label_28a3a0;
        case 0x28a3e0u: goto label_28a3e0;
        case 0x28a418u: goto label_28a418;
        default: break;
    }

    ctx->pc = 0x28a1d0u;

    // 0x28a1d0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x28a1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x28a1d4: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x28a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x28a1d8: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x28a1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x28a1dc: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x28a1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x28a1e0: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x28a1e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a1e4: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x28a1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x28a1e8: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x28a1e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a1ec: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x28a1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x28a1f0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x28a1f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a1f4: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x28a1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x28a1f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28a1f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a1fc: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x28a1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x28a200: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x28a200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x28a204: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x28a204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x28a208: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x28a208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x28a20c: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x28a20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x28a210: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x28a210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x28a214: 0x8e0600dc  lw          $a2, 0xDC($s0)
    ctx->pc = 0x28a214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x28a218: 0xc602001c  lwc1        $f2, 0x1C($s0)
    ctx->pc = 0x28a218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28a21c: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x28a21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a220: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x28a220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a224: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x28a224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x28a228: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28a228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28a22c: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x28a22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x28a230: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x28a230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28a234: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x28a234u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x28a238: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A238u;
    {
        const bool branch_taken_0x28a238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28A23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A238u;
        // 0x28a23c: 0xe7a20014  swc1        $f2, 0x14($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a238) {
            ctx->pc = 0x28A24Cu;
            goto label_28a24c;
        }
    }
    ctx->pc = 0x28A240u;
    // 0x28a240: 0xc78089f8  lwc1        $f0, -0x7608($gp)
    ctx->pc = 0x28a240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a244: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x28a244u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x28a248: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x28a248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_28a24c:
    // 0x28a24c: 0x2462fff2  addiu       $v0, $v1, -0xE
    ctx->pc = 0x28a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967282));
    // 0x28a250: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x28a250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28a254: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x28a254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x28a258: 0x24160004  addiu       $s6, $zero, 0x4
    ctx->pc = 0x28a258u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28a25c: 0x8e0300d8  lw          $v1, 0xD8($s0)
    ctx->pc = 0x28a25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x28a260: 0x10600061  beqz        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x28A260u;
    {
        const bool branch_taken_0x28a260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A260u;
        // 0x28a264: 0x2b00b  movn        $s6, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a260) {
            ctx->pc = 0x28A3E8u;
            goto label_28a3e8;
        }
    }
    ctx->pc = 0x28A268u;
    // 0x28a268: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x28a268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x28a26c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28a26cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a270: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x28a270u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a274: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28a274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a278: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28A278u;
    {
        const bool branch_taken_0x28a278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28A27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A278u;
        // 0x28a27c: 0xae0000d8  sw          $zero, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a278) {
            ctx->pc = 0x28A2A8u;
            goto label_28a2a8;
        }
    }
    ctx->pc = 0x28A280u;
    // 0x28a280: 0x8cc20164  lw          $v0, 0x164($a2)
    ctx->pc = 0x28a280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 356)));
    // 0x28a284: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x28a284u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28a288: 0xc4410098  lwc1        $f1, 0x98($v0)
    ctx->pc = 0x28a288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a28c: 0x8c44031c  lw          $a0, 0x31C($v0)
    ctx->pc = 0x28a28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 796)));
    // 0x28a290: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x28a290u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x28a294: 0xc440009c  lwc1        $f0, 0x9C($v0)
    ctx->pc = 0x28a294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a298: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x28a298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x28a29c: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x28a29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a2a0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x28A2A0u;
    {
        const bool branch_taken_0x28a2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A2A0u;
        // 0x28a2a4: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a2a0) {
            ctx->pc = 0x28A330u;
            goto label_28a330;
        }
    }
    ctx->pc = 0x28A2A8u;
label_28a2a8:
    // 0x28a2a8: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x28A2A8u;
    {
        const bool branch_taken_0x28a2a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x28A2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A2A8u;
        // 0x28a2ac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a2a8) {
            ctx->pc = 0x28A2D4u;
            goto label_28a2d4;
        }
    }
    ctx->pc = 0x28A2B0u;
    // 0x28a2b0: 0x8cc20160  lw          $v0, 0x160($a2)
    ctx->pc = 0x28a2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 352)));
    // 0x28a2b4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x28a2b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28a2b8: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x28a2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x28a2bc: 0xc4400af8  lwc1        $f0, 0xAF8($v0)
    ctx->pc = 0x28a2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a2c0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x28a2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x28a2c4: 0xc4410afc  lwc1        $f1, 0xAFC($v0)
    ctx->pc = 0x28a2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a2c8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x28a2c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x28a2cc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x28A2CCu;
    {
        const bool branch_taken_0x28a2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A2CCu;
        // 0x28a2d0: 0xc4400b00  lwc1        $f0, 0xB00($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a2cc) {
            ctx->pc = 0x28A32Cu;
            goto label_28a32c;
        }
    }
    ctx->pc = 0x28A2D4u;
label_28a2d4:
    // 0x28a2d4: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x28A2D4u;
    {
        const bool branch_taken_0x28a2d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28a2d4) {
            ctx->pc = 0x28A2D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A2D4u;
            // 0x28a2d8: 0xc4c00030  lwc1        $f0, 0x30($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A314u;
            goto label_28a314;
        }
    }
    ctx->pc = 0x28A2DCu;
    // 0x28a2dc: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x28a2dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28a2e0: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x28a2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x28a2e4: 0xc09a542  jal         func_269508
    ctx->pc = 0x28A2E4u;
    SET_GPR_U32(ctx, 31, 0x28A2ECu);
    ctx->pc = 0x28A2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A2E4u;
    // 0x28a2e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269508u, 0x28A2E4u, 0x28A2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A2ECu;
label_28a2ec:
    // 0x28a2ec: 0x8e0600dc  lw          $a2, 0xDC($s0)
    ctx->pc = 0x28a2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x28a2f0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x28a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x28a2f4: 0x3442ffdf  ori         $v0, $v0, 0xFFDF
    ctx->pc = 0x28a2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65503);
    // 0x28a2f8: 0x8cc30160  lw          $v1, 0x160($a2)
    ctx->pc = 0x28a2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 352)));
    // 0x28a2fc: 0x8c740060  lw          $s4, 0x60($v1)
    ctx->pc = 0x28a2fcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x28a300: 0x8c640078  lw          $a0, 0x78($v1)
    ctx->pc = 0x28a300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x28a304: 0x8e950010  lw          $s5, 0x10($s4)
    ctx->pc = 0x28a304u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x28a308: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x28a308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x28a30c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28A30Cu;
    {
        const bool branch_taken_0x28a30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A30Cu;
        // 0x28a310: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a30c) {
            ctx->pc = 0x28A330u;
            goto label_28a330;
        }
    }
    ctx->pc = 0x28A314u;
label_28a314:
    // 0x28a314: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x28a314u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28a318: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x28a318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x28a31c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x28a31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x28a320: 0xc4c10034  lwc1        $f1, 0x34($a2)
    ctx->pc = 0x28a320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a324: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x28a324u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x28a328: 0xc4c00038  lwc1        $f0, 0x38($a2)
    ctx->pc = 0x28a328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28a32c:
    // 0x28a32c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x28a32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_28a330:
    // 0x28a330: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x28a330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28a334: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x28a334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x28a338: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x28a338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28a33c: 0x3463ffdf  ori         $v1, $v1, 0xFFDF
    ctx->pc = 0x28a33cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65503);
    // 0x28a340: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x28a340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a344: 0x26120064  addiu       $s2, $s0, 0x64
    ctx->pc = 0x28a344u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x28a348: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x28a348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28a34c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x28a34cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x28a350: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x28a350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a354: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28a354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a358: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x28a358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28a35c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x28a35cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x28a360: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x28a360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x28a364: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28a364u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a368: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x28a368u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x28a36c: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x28a36cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x28a370: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28a370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28a374: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x28a374u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x28a378: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x28a378u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    // 0x28a37c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x28a37cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a380: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x28a380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28a384: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x28a384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x28a388: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x28a388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x28a38c: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x28a38cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a390: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x28a390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
    // 0x28a394: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x28a394u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a398: 0xc09640e  jal         func_259038
    ctx->pc = 0x28A398u;
    SET_GPR_U32(ctx, 31, 0x28A3A0u);
    ctx->pc = 0x28A39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A398u;
    // 0x28a39c: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x28A398u, 0x28A3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A3A0u;
label_28a3a0:
    // 0x28a3a0: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x28A3A0u;
    {
        const bool branch_taken_0x28a3a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A3A0u;
        // 0x28a3a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a3a0) {
            ctx->pc = 0x28A3ACu;
            goto label_28a3ac;
        }
    }
    ctx->pc = 0x28A3A8u;
    // 0x28a3a8: 0xae950010  sw          $s5, 0x10($s4)
    ctx->pc = 0x28a3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 21));
label_28a3ac:
    // 0x28a3ac: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28A3ACu;
    {
        const bool branch_taken_0x28a3ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A3ACu;
        // 0x28a3b0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a3ac) {
            ctx->pc = 0x28A3C4u;
            goto label_28a3c4;
        }
    }
    ctx->pc = 0x28A3B4u;
    // 0x28a3b4: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x28a3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x28a3b8: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x28a3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x28a3bc: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x28A3BCu;
    {
        const bool branch_taken_0x28a3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A3BCu;
        // 0x28a3c0: 0xac640010  sw          $a0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a3bc) {
            ctx->pc = 0x28A43Cu;
            goto label_28a43c;
        }
    }
    ctx->pc = 0x28A3C4u;
label_28a3c4:
    // 0x28a3c4: 0x5260000a  beql        $s3, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x28A3C4u;
    {
        const bool branch_taken_0x28a3c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a3c4) {
            ctx->pc = 0x28A3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A3C4u;
            // 0x28a3c8: 0x8e040064  lw          $a0, 0x64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A3F0u;
            goto label_28a3f0;
        }
    }
    ctx->pc = 0x28A3CCu;
    // 0x28a3cc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x28a3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28a3d0: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x28A3D0u;
    {
        const bool branch_taken_0x28a3d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a3d0) {
            ctx->pc = 0x28A3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A3D0u;
            // 0x28a3d4: 0x8e040064  lw          $a0, 0x64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A3F0u;
            goto label_28a3f0;
        }
    }
    ctx->pc = 0x28A3D8u;
    // 0x28a3d8: 0xc0a3486  jal         func_28D218
    ctx->pc = 0x28A3D8u;
    SET_GPR_U32(ctx, 31, 0x28A3E0u);
    ctx->pc = 0x28A3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A3D8u;
    // 0x28a3dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D218u, 0x28A3D8u, 0x28A3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A3E0u;
label_28a3e0:
    // 0x28a3e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28A3E0u;
    {
        const bool branch_taken_0x28a3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A3E0u;
        // 0x28a3e4: 0x8e040064  lw          $a0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a3e0) {
            ctx->pc = 0x28A3F0u;
            goto label_28a3f0;
        }
    }
    ctx->pc = 0x28A3E8u;
label_28a3e8:
    // 0x28a3e8: 0x26120064  addiu       $s2, $s0, 0x64
    ctx->pc = 0x28a3e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x28a3ec: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x28a3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_28a3f0:
    // 0x28a3f0: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x28a3f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a3f4: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x28a3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28a3f8: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x28a3f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a3fc: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x28a3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x28a400: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x28a400u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a404: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x28a404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
    // 0x28a408: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x28a408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28a40c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28a40cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a410: 0xc09640e  jal         func_259038
    ctx->pc = 0x28A410u;
    SET_GPR_U32(ctx, 31, 0x28A418u);
    ctx->pc = 0x28A414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A410u;
    // 0x28a414: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x28A410u, 0x28A418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A418u;
label_28a418:
    // 0x28a418: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28a418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a41c: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x28a41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x28a420: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x28a420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x28a424: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x28a424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x28a428: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28A428u;
    {
        const bool branch_taken_0x28a428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A428u;
        // 0x28a42c: 0xac440010  sw          $a0, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a428) {
            ctx->pc = 0x28A438u;
            goto label_28a438;
        }
    }
    ctx->pc = 0x28A430u;
    // 0x28a430: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x28a430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x28a434: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x28a434u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_28a438:
    // 0x28a438: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x28a438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28a43c:
    // 0x28a43c: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x28a43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x28a440: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x28a440u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28a444: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x28a444u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28a448: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x28a448u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28a44c: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x28a44cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28a450: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x28a450u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28a454: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x28a454u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28a458: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x28a458u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28a45c: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x28a45cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28a460: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x28a460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28a464: 0x3e00008  jr          $ra
    ctx->pc = 0x28A464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A464u;
        // 0x28a468: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A46Cu;
}

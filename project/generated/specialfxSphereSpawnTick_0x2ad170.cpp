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

// Function: specialfxSphereSpawnTick
// Address: 0x2ad170 - 0x2ad400
void specialfxSphereSpawnTick_0x2ad170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxSphereSpawnTick_0x2ad170");
#endif

    switch (ctx->pc) {
        case 0x2ad1e8u: goto label_2ad1e8;
        case 0x2ad218u: goto label_2ad218;
        case 0x2ad228u: goto label_2ad228;
        case 0x2ad238u: goto label_2ad238;
        case 0x2ad248u: goto label_2ad248;
        case 0x2ad258u: goto label_2ad258;
        case 0x2ad260u: goto label_2ad260;
        case 0x2ad2a4u: goto label_2ad2a4;
        case 0x2ad318u: goto label_2ad318;
        case 0x2ad338u: goto label_2ad338;
        case 0x2ad348u: goto label_2ad348;
        case 0x2ad358u: goto label_2ad358;
        case 0x2ad360u: goto label_2ad360;
        case 0x2ad374u: goto label_2ad374;
        case 0x2ad388u: goto label_2ad388;
        case 0x2ad39cu: goto label_2ad39c;
        case 0x2ad3c4u: goto label_2ad3c4;
        default: break;
    }

    ctx->pc = 0x2ad170u;

    // 0x2ad170: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2ad170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2ad174: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x2ad174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ad178: 0xffb700f0  sd          $s7, 0xF0($sp)
    ctx->pc = 0x2ad178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 23));
    // 0x2ad17c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2ad17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2ad180: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x2ad180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x2ad184: 0x2417005c  addiu       $s7, $zero, 0x5C
    ctx->pc = 0x2ad184u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2ad188: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ad188u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad18c: 0xc7808f24  lwc1        $f0, -0x70DC($gp)
    ctx->pc = 0x2ad18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad190: 0x2972018  mult        $a0, $s4, $s7
    ctx->pc = 0x2ad190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ad194: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x2ad194u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x2ad198: 0x2462c268  addiu       $v0, $v1, -0x3D98
    ctx->pc = 0x2ad198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951528));
    // 0x2ad19c: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x2ad19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x2ad1a0: 0xffb500d0  sd          $s5, 0xD0($sp)
    ctx->pc = 0x2ad1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 21));
    // 0x2ad1a4: 0x46000d42  mul.s       $f21, $f1, $f0
    ctx->pc = 0x2ad1a4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ad1a8: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x2ad1a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2ad1ac: 0x24560030  addiu       $s6, $v0, 0x30
    ctx->pc = 0x2ad1acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2ad1b0: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x2ad1b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2ad1b4: 0x24550038  addiu       $s5, $v0, 0x38
    ctx->pc = 0x2ad1b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x2ad1b8: 0xffbe0100  sd          $fp, 0x100($sp)
    ctx->pc = 0x2ad1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 30));
    // 0x2ad1bc: 0xffb300b0  sd          $s3, 0xB0($sp)
    ctx->pc = 0x2ad1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
    // 0x2ad1c0: 0x96f021  addu        $fp, $a0, $s6
    ctx->pc = 0x2ad1c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x2ad1c4: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x2ad1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x2ad1c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ad1c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad1cc: 0xffb10090  sd          $s1, 0x90($sp)
    ctx->pc = 0x2ad1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
    // 0x2ad1d0: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x2ad1d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ad1d4: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x2ad1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x2ad1d8: 0x958821  addu        $s1, $a0, $s5
    ctx->pc = 0x2ad1d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x2ad1dc: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x2ad1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x2ad1e0: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2ad1e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2ad1e4: 0xc7948f28  lwc1        $f20, -0x70D8($gp)
    ctx->pc = 0x2ad1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ad1e8:
    // 0x2ad1e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ad1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ad1ec: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x2AD1ECu;
    {
        const bool branch_taken_0x2ad1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad1ec) {
            ctx->pc = 0x2AD1F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD1ECu;
            // 0x2ad1f0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD2ACu;
            goto label_2ad2ac;
        }
    }
    ctx->pc = 0x2AD1F4u;
    // 0x2ad1f4: 0xc7cc0000  lwc1        $f12, 0x0($fp)
    ctx->pc = 0x2ad1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ad1f8: 0x46166034  c.lt.s      $f12, $f22
    ctx->pc = 0x2ad1f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ad1fc: 0x0  nop
    ctx->pc = 0x2ad1fcu;
    // NOP
    // 0x2ad200: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD200u;
    {
        const bool branch_taken_0x2ad200 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AD204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD200u;
        // 0x2ad204: 0x8c500160  lw          $s0, 0x160($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad200) {
            ctx->pc = 0x2AD210u;
            goto label_2ad210;
        }
    }
    ctx->pc = 0x2AD208u;
    // 0x2ad208: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2AD208u;
    {
        const bool branch_taken_0x2ad208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD208u;
        // 0x2ad20c: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad208) {
            ctx->pc = 0x2AD27Cu;
            goto label_2ad27c;
        }
    }
    ctx->pc = 0x2AD210u;
label_2ad210:
    // 0x2ad210: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2AD210u;
    SET_GPR_U32(ctx, 31, 0x2AD218u);
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2AD210u, 0x2AD218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD218u;
label_2ad218:
    // 0x2ad218: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2ad218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2ad21c: 0xdc259788  ld          $a1, -0x6878($at)
    ctx->pc = 0x2ad21cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9788u));
    // 0x2ad220: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2AD220u;
    SET_GPR_U32(ctx, 31, 0x2AD228u);
    ctx->pc = 0x2AD224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD220u;
    // 0x2ad224: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2AD220u, 0x2AD228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD228u;
label_2ad228:
    // 0x2ad228: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2ad228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2ad22c: 0xdc259790  ld          $a1, -0x6870($at)
    ctx->pc = 0x2ad22cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9790u));
    // 0x2ad230: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x2AD230u;
    SET_GPR_U32(ctx, 31, 0x2AD238u);
    ctx->pc = 0x2AD234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD230u;
    // 0x2ad234: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x2AD230u, 0x2AD238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD238u;
label_2ad238:
    // 0x2ad238: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2ad238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2ad23c: 0xdc259798  ld          $a1, -0x6868($at)
    ctx->pc = 0x2ad23cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9798u));
    // 0x2ad240: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2AD240u;
    SET_GPR_U32(ctx, 31, 0x2AD248u);
    ctx->pc = 0x2AD244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD240u;
    // 0x2ad244: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2AD240u, 0x2AD248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD248u;
label_2ad248:
    // 0x2ad248: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x2ad248u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2ad24c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2ad24cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2ad250: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2AD250u;
    SET_GPR_U32(ctx, 31, 0x2AD258u);
    ctx->pc = 0x2AD254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD250u;
    // 0x2ad254: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2AD250u, 0x2AD258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD258u;
label_2ad258:
    // 0x2ad258: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x2AD258u;
    SET_GPR_U32(ctx, 31, 0x2AD260u);
    ctx->pc = 0x2AD25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD258u;
    // 0x2ad25c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x2AD258u, 0x2AD260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD260u;
label_2ad260:
    // 0x2ad260: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2ad260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2ad264: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2ad264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2ad268: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ad268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ad26c: 0x24635c60  addiu       $v1, $v1, 0x5C60
    ctx->pc = 0x2ad26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23648));
    // 0x2ad270: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ad270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad274: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2ad274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad278: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x2ad278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_2ad27c:
    // 0x2ad27c: 0x2971818  mult        $v1, $s4, $s7
    ctx->pc = 0x2ad27cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ad280: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x2ad280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x2ad284: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2ad284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad288: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2ad288u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ad28c: 0x0  nop
    ctx->pc = 0x2ad28cu;
    // NOP
    // 0x2ad290: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2AD290u;
    {
        const bool branch_taken_0x2ad290 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AD294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD290u;
        // 0x2ad294: 0x2638021  addu        $s0, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad290) {
            ctx->pc = 0x2AD2A8u;
            goto label_2ad2a8;
        }
    }
    ctx->pc = 0x2AD298u;
    // 0x2ad298: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x2ad298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x2ad29c: 0xc09e0f0  jal         func_2783C0
    ctx->pc = 0x2AD29Cu;
    SET_GPR_U32(ctx, 31, 0x2AD2A4u);
    ctx->pc = 0x2AD2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD29Cu;
    // 0x2ad2a0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2783C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2783C0u, 0x2AD29Cu, 0x2AD2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD2A4u;
label_2ad2a4:
    // 0x2ad2a4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ad2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2ad2a8:
    // 0x2ad2a8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2ad2a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2ad2ac:
    // 0x2ad2ac: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2ad2acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2ad2b0: 0x641ffcd  bgez        $s2, . + 4 + (-0x33 << 2)
    ctx->pc = 0x2AD2B0u;
    {
        const bool branch_taken_0x2ad2b0 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2AD2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD2B0u;
        // 0x2ad2b4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad2b0) {
            ctx->pc = 0x2AD1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ad1e8;
        }
    }
    ctx->pc = 0x2AD2B8u;
    // 0x2ad2b8: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x2ad2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2ad2bc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2ad2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2ad2c0: 0x2839018  mult        $s2, $s4, $v1
    ctx->pc = 0x2ad2c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x2ad2c4: 0x2453c268  addiu       $s3, $v0, -0x3D98
    ctx->pc = 0x2ad2c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951528));
    // 0x2ad2c8: 0x26620048  addiu       $v0, $s3, 0x48
    ctx->pc = 0x2ad2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
    // 0x2ad2cc: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x2ad2ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2ad2d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ad2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ad2d4: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x2AD2D4u;
    {
        const bool branch_taken_0x2ad2d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD2D4u;
        // 0x2ad2d8: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad2d4) {
            ctx->pc = 0x2AD39Cu;
            goto label_2ad39c;
        }
    }
    ctx->pc = 0x2AD2DCu;
    // 0x2ad2dc: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x2ad2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x2ad2e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ad2e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ad2e4: 0xc7818f2c  lwc1        $f1, -0x70D4($gp)
    ctx->pc = 0x2ad2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ad2e8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2ad2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ad2ec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2ad2ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ad2f0: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x2ad2f0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x2ad2f4: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2ad2f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2ad2f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad2f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad2fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ad2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad300: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2ad300u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2ad304: 0x0  nop
    ctx->pc = 0x2ad304u;
    // NOP
    // 0x2ad308: 0x0  nop
    ctx->pc = 0x2ad308u;
    // NOP
    // 0x2ad30c: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x2ad30cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x2ad310: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x2AD310u;
    SET_GPR_U32(ctx, 31, 0x2AD318u);
    ctx->pc = 0x2AD314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD310u;
    // 0x2ad314: 0x46026302  mul.s       $f12, $f12, $f2 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x2AD310u, 0x2AD318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD318u;
label_2ad318:
    // 0x2ad318: 0xc7948f30  lwc1        $f20, -0x70D0($gp)
    ctx->pc = 0x2ad318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ad31c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2ad31cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ad320: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ad320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ad324: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad328: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2ad328u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2ad32c: 0x4614ad02  mul.s       $f20, $f21, $f20
    ctx->pc = 0x2ad32cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x2ad330: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2AD330u;
    SET_GPR_U32(ctx, 31, 0x2AD338u);
    ctx->pc = 0x2AD334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD330u;
    // 0x2ad334: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2AD330u, 0x2AD338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD338u;
label_2ad338:
    // 0x2ad338: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2ad338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2ad33c: 0xdc2597a0  ld          $a1, -0x6860($at)
    ctx->pc = 0x2ad33cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A97A0u));
    // 0x2ad340: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2AD340u;
    SET_GPR_U32(ctx, 31, 0x2AD348u);
    ctx->pc = 0x2AD344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD340u;
    // 0x2ad344: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2AD340u, 0x2AD348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD348u;
label_2ad348:
    // 0x2ad348: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x2ad348u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2ad34c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2ad34cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2ad350: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2AD350u;
    SET_GPR_U32(ctx, 31, 0x2AD358u);
    ctx->pc = 0x2AD354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD350u;
    // 0x2ad354: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2AD350u, 0x2AD358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD358u;
label_2ad358:
    // 0x2ad358: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x2AD358u;
    SET_GPR_U32(ctx, 31, 0x2AD360u);
    ctx->pc = 0x2AD35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD358u;
    // 0x2ad35c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2AD358u, 0x2AD360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD360u;
label_2ad360:
    // 0x2ad360: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ad360u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2ad364: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2ad364u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x2ad368: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2ad368u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2ad36c: 0xc0ad3c8  jal         func_2B4F20
    ctx->pc = 0x2AD36Cu;
    SET_GPR_U32(ctx, 31, 0x2AD374u);
    ctx->pc = 0x2AD370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD36Cu;
    // 0x2ad370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4F20u, 0x2AD36Cu, 0x2AD374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD374u;
label_2ad374:
    // 0x2ad374: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ad374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ad378: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ad378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad37c: 0x248403a0  addiu       $a0, $a0, 0x3A0
    ctx->pc = 0x2ad37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 928));
    // 0x2ad380: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2AD380u;
    SET_GPR_U32(ctx, 31, 0x2AD388u);
    ctx->pc = 0x2AD384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD380u;
    // 0x2ad384: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2AD380u, 0x2AD388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD388u;
label_2ad388:
    // 0x2ad388: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ad388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ad38c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2ad38cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad390: 0x248403a0  addiu       $a0, $a0, 0x3A0
    ctx->pc = 0x2ad390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 928));
    // 0x2ad394: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2AD394u;
    SET_GPR_U32(ctx, 31, 0x2AD39Cu);
    ctx->pc = 0x2AD398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD394u;
    // 0x2ad398: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2AD394u, 0x2AD39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD39Cu;
label_2ad39c:
    // 0x2ad39c: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x2ad39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x2ad3a0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2ad3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2ad3a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ad3a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad3a8: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2ad3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad3ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ad3acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ad3b0: 0x0  nop
    ctx->pc = 0x2ad3b0u;
    // NOP
    // 0x2ad3b4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2AD3B4u;
    {
        const bool branch_taken_0x2ad3b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AD3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD3B4u;
        // 0x2ad3b8: 0xdfbf0110  ld          $ra, 0x110($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad3b4) {
            ctx->pc = 0x2AD3C8u;
            goto label_2ad3c8;
        }
    }
    ctx->pc = 0x2AD3BCu;
    // 0x2ad3bc: 0xc0aabb6  jal         func_2AAED8
    ctx->pc = 0x2AD3BCu;
    SET_GPR_U32(ctx, 31, 0x2AD3C4u);
    ctx->pc = 0x2AD3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD3BCu;
    // 0x2ad3c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAED8u, 0x2AD3BCu, 0x2AD3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD3C4u;
label_2ad3c4:
    // 0x2ad3c4: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x2ad3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_2ad3c8:
    // 0x2ad3c8: 0xdfbe0100  ld          $fp, 0x100($sp)
    ctx->pc = 0x2ad3c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2ad3cc: 0xdfb700f0  ld          $s7, 0xF0($sp)
    ctx->pc = 0x2ad3ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2ad3d0: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x2ad3d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2ad3d4: 0xdfb500d0  ld          $s5, 0xD0($sp)
    ctx->pc = 0x2ad3d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2ad3d8: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x2ad3d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ad3dc: 0xdfb300b0  ld          $s3, 0xB0($sp)
    ctx->pc = 0x2ad3dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ad3e0: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x2ad3e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ad3e4: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x2ad3e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ad3e8: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x2ad3e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ad3ec: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x2ad3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2ad3f0: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x2ad3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ad3f4: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x2ad3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ad3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD3F8u;
        // 0x2ad3fc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD3F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD400u;
}

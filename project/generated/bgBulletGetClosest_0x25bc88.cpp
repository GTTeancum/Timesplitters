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

// Function: bgBulletGetClosest
// Address: 0x25bc88 - 0x25c160
void bgBulletGetClosest_0x25bc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgBulletGetClosest_0x25bc88");
#endif

    switch (ctx->pc) {
        case 0x25bd80u: goto label_25bd80;
        case 0x25bd90u: goto label_25bd90;
        case 0x25be20u: goto label_25be20;
        case 0x25bfb4u: goto label_25bfb4;
        case 0x25c00cu: goto label_25c00c;
        case 0x25c02cu: goto label_25c02c;
        case 0x25c03cu: goto label_25c03c;
        case 0x25c050u: goto label_25c050;
        default: break;
    }

    ctx->pc = 0x25bc88u;

    // 0x25bc88: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x25bc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x25bc8c: 0x8f83a294  lw          $v1, -0x5D6C($gp)
    ctx->pc = 0x25bc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943380)));
    // 0x25bc90: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x25bc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x25bc94: 0x3c02c18f  lui         $v0, 0xC18F
    ctx->pc = 0x25bc94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49551 << 16));
    // 0x25bc98: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x25bc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x25bc9c: 0x34429c19  ori         $v0, $v0, 0x9C19
    ctx->pc = 0x25bc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39961);
    // 0x25bca0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x25bca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x25bca4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x25bca4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bca8: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x25bca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x25bcac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25bcacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bcb0: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x25bcb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x25bcb4: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x25bcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x25bcb8: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x25bcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x25bcbc: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x25bcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x25bcc0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x25bcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x25bcc4: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x25bcc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x25bcc8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x25bcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x25bccc: 0x8c9200f4  lw          $s2, 0xF4($a0)
    ctx->pc = 0x25bcccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x25bcd0: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x25bcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25bcd4: 0x8f87b460  lw          $a3, -0x4BA0($gp)
    ctx->pc = 0x25bcd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x25bcd8: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x25bcd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x25bcdc: 0x8e48000c  lw          $t0, 0xC($s2)
    ctx->pc = 0x25bcdcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x25bce0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x25bce0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x25bce4: 0x8f939da8  lw          $s3, -0x6258($gp)
    ctx->pc = 0x25bce4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
    // 0x25bce8: 0x18e00006  blez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x25BCE8u;
    {
        const bool branch_taken_0x25bce8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x25BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BCE8u;
        // 0x25bcec: 0x4b0c3  sra         $s6, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bce8) {
            ctx->pc = 0x25BD04u;
            goto label_25bd04;
        }
    }
    ctx->pc = 0x25BCF0u;
    // 0x25bcf0: 0x267001a  div         $zero, $s3, $a3
    ctx->pc = 0x25bcf0u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x25bcf4: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25BCF4u;
    {
        const bool branch_taken_0x25bcf4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bcf4) {
            ctx->pc = 0x25BCF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BCF4u;
            // 0x25bcf8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BCFCu;
            goto label_25bcfc;
        }
    }
    ctx->pc = 0x25BCFCu;
label_25bcfc:
    // 0x25bcfc: 0x1012  mflo        $v0
    ctx->pc = 0x25bcfcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x25bd00: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x25bd00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25bd04:
    // 0x25bd04: 0x2502ff37  addiu       $v0, $t0, -0xC9
    ctx->pc = 0x25bd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967095));
    // 0x25bd08: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x25bd08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x25bd0c: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x25BD0Cu;
    {
        const bool branch_taken_0x25bd0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD0Cu;
        // 0x25bd10: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bd0c) {
            ctx->pc = 0x25BE14u;
            goto label_25be14;
        }
    }
    ctx->pc = 0x25BD14u;
    // 0x25bd14: 0x2402071c  addiu       $v0, $zero, 0x71C
    ctx->pc = 0x25bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    // 0x25bd18: 0x3c03fffa  lui         $v1, 0xFFFA
    ctx->pc = 0x25bd18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65530 << 16));
    // 0x25bd1c: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x25bd1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25bd20: 0x34636b04  ori         $v1, $v1, 0x6B04
    ctx->pc = 0x25bd20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)27396);
    // 0x25bd24: 0x8f84b230  lw          $a0, -0x4DD0($gp)
    ctx->pc = 0x25bd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x25bd28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25bd2c: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x25bd2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25bd30: 0x8e2201a4  lw          $v0, 0x1A4($s1)
    ctx->pc = 0x25bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
    // 0x25bd34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25BD34u;
    {
        const bool branch_taken_0x25bd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD34u;
        // 0x25bd38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bd34) {
            ctx->pc = 0x25BD48u;
            goto label_25bd48;
        }
    }
    ctx->pc = 0x25BD3Cu;
    // 0x25bd3c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x25bd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x25bd40: 0x94430124  lhu         $v1, 0x124($v0)
    ctx->pc = 0x25bd40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 292)));
    // 0x25bd44: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x25bd44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_25bd48:
    // 0x25bd48: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x25bd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x25bd4c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25BD4Cu;
    {
        const bool branch_taken_0x25bd4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bd4c) {
            ctx->pc = 0x25BD50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BD4Cu;
            // 0x25bd50: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BD60u;
            goto label_25bd60;
        }
    }
    ctx->pc = 0x25BD54u;
    // 0x25bd54: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x25bd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x25bd58: 0x94430124  lhu         $v1, 0x124($v0)
    ctx->pc = 0x25bd58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 292)));
    // 0x25bd5c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25bd5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_25bd60:
    // 0x25bd60: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25BD60u;
    {
        const bool branch_taken_0x25bd60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD60u;
        // 0x25bd64: 0x26300198  addiu       $s0, $s1, 0x198 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bd60) {
            ctx->pc = 0x25BD70u;
            goto label_25bd70;
        }
    }
    ctx->pc = 0x25BD68u;
    // 0x25bd68: 0x26300258  addiu       $s0, $s1, 0x258
    ctx->pc = 0x25bd68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 600));
    // 0x25bd6c: 0x3800a  movz        $s0, $zero, $v1
    ctx->pc = 0x25bd6cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_25bd70:
    // 0x25bd70: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
    ctx->pc = 0x25BD70u;
    {
        const bool branch_taken_0x25bd70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD70u;
        // 0x25bd74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bd70) {
            ctx->pc = 0x25BE18u;
            goto label_25be18;
        }
    }
    ctx->pc = 0x25BD78u;
    // 0x25bd78: 0xc0a41a8  jal         func_2906A0
    ctx->pc = 0x25BD78u;
    SET_GPR_U32(ctx, 31, 0x25BD80u);
    ctx->pc = 0x25BD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BD78u;
    // 0x25bd7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2906A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2906A0u, 0x25BD78u, 0x25BD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BD80u;
label_25bd80:
    // 0x25bd80: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x25BD80u;
    {
        const bool branch_taken_0x25bd80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD80u;
        // 0x25bd84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bd80) {
            ctx->pc = 0x25BE14u;
            goto label_25be14;
        }
    }
    ctx->pc = 0x25BD88u;
    // 0x25bd88: 0xc0a340e  jal         func_28D038
    ctx->pc = 0x25BD88u;
    SET_GPR_U32(ctx, 31, 0x25BD90u);
    ctx->pc = 0x25BD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BD88u;
    // 0x25bd8c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D038u, 0x25BD88u, 0x25BD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BD90u;
label_25bd90:
    // 0x25bd90: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x25bd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25bd94: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x25bd94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x25bd98: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x25bd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25bd9c: 0x24635e00  addiu       $v1, $v1, 0x5E00
    ctx->pc = 0x25bd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24064));
    // 0x25bda0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x25bda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bda4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x25bda4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bda8: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x25bda8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1FC5E0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FC5E0Cu, _value); } while (0); }
    // 0x25bdac: 0xe4620010  swc1        $f2, 0x10($v1)
    ctx->pc = 0x25bdacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1FC5E10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FC5E10u, _value); } while (0); }
    // 0x25bdb0: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x25bdb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1FC5E14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FC5E14u, _value); } while (0); }
    // 0x25bdb4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x25bdb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x25bdb8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x25bdb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x25bdbc: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x25bdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25bdc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25bdc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25bdc4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x25bdc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x25bdc8: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x25bdc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1FC5E18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FC5E18u, _value); } while (0); }
    // 0x25bdcc: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x25bdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25bdd0: 0xe462001c  swc1        $f2, 0x1C($v1)
    ctx->pc = 0x25bdd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1FC5E1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FC5E1Cu, _value); } while (0); }
    // 0x25bdd4: 0xc6030018  lwc1        $f3, 0x18($s0)
    ctx->pc = 0x25bdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25bdd8: 0xe4630020  swc1        $f3, 0x20($v1)
    ctx->pc = 0x25bdd8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1FC5E20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FC5E20u, _value); } while (0); }
    // 0x25bddc: 0xc62000e4  lwc1        $f0, 0xE4($s1)
    ctx->pc = 0x25bddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bde0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x25bde0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x25bde4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x25bde4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25bde8: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x25bde8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1FC5E18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FC5E18u, _value); } while (0); }
    // 0x25bdec: 0xc62000e8  lwc1        $f0, 0xE8($s1)
    ctx->pc = 0x25bdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bdf0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x25bdf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x25bdf4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x25bdf4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x25bdf8: 0xe462001c  swc1        $f2, 0x1C($v1)
    ctx->pc = 0x25bdf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1FC5E1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FC5E1Cu, _value); } while (0); }
    // 0x25bdfc: 0xc62000ec  lwc1        $f0, 0xEC($s1)
    ctx->pc = 0x25bdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25be00: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x25be00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x25be04: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x25be04u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x25be08: 0xe4630020  swc1        $f3, 0x20($v1)
    ctx->pc = 0x25be08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1FC5E20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FC5E20u, _value); } while (0); }
    // 0x25be0c: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x25BE0Cu;
    {
        const bool branch_taken_0x25be0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE0Cu;
        // 0x25be10: 0xe6a50000  swc1        $f5, 0x0($s5) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25be0c) {
            ctx->pc = 0x25C12Cu;
            goto label_25c12c;
        }
    }
    ctx->pc = 0x25BE14u;
label_25be14:
    // 0x25be14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25be14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25be18:
    // 0x25be18: 0xc0a3440  jal         func_28D100
    ctx->pc = 0x25BE18u;
    SET_GPR_U32(ctx, 31, 0x25BE20u);
    ctx->pc = 0x25BE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BE18u;
    // 0x25be1c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D100u, 0x25BE18u, 0x25BE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BE20u;
label_25be20:
    // 0x25be20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25be20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25be24: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x25BE24u;
    {
        const bool branch_taken_0x25be24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE24u;
        // 0x25be28: 0xc7a20030  lwc1        $f2, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25be24) {
            ctx->pc = 0x25BE68u;
            goto label_25be68;
        }
    }
    ctx->pc = 0x25BE2Cu;
    // 0x25be2c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x25be2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x25be30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25be30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25be34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25be34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25be38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25be38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25be3c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x25be3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25be40: 0x0  nop
    ctx->pc = 0x25be40u;
    // NOP
    // 0x25be44: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x25BE44u;
    {
        const bool branch_taken_0x25be44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25be44) {
            ctx->pc = 0x25BE48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BE44u;
            // 0x25be48: 0xe6a10000  swc1        $f1, 0x0($s5) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BE68u;
            goto label_25be68;
        }
    }
    ctx->pc = 0x25BE4Cu;
    // 0x25be4c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x25be4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x25be50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25be50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25be54: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x25be54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x25be58: 0x0  nop
    ctx->pc = 0x25be58u;
    // NOP
    // 0x25be5c: 0x0  nop
    ctx->pc = 0x25be5cu;
    // NOP
    // 0x25be60: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x25be60u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x25be64: 0xe6a10000  swc1        $f1, 0x0($s5)
    ctx->pc = 0x25be64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_25be68:
    // 0x25be68: 0x32c30003  andi        $v1, $s6, 0x3
    ctx->pc = 0x25be68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)3);
    // 0x25be6c: 0x32620003  andi        $v0, $s3, 0x3
    ctx->pc = 0x25be6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
    // 0x25be70: 0x10620060  beq         $v1, $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x25BE70u;
    {
        const bool branch_taken_0x25be70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25be70) {
            ctx->pc = 0x25BFF4u;
            goto label_25bff4;
        }
    }
    ctx->pc = 0x25BE78u;
    // 0x25be78: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x25be78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x25be7c: 0x8e440224  lw          $a0, 0x224($s2)
    ctx->pc = 0x25be7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
    // 0x25be80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x25be80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x25be84: 0x1082005b  beq         $a0, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x25BE84u;
    {
        const bool branch_taken_0x25be84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x25BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE84u;
        // 0x25be88: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25be84) {
            ctx->pc = 0x25BFF4u;
            goto label_25bff4;
        }
    }
    ctx->pc = 0x25BE8Cu;
    // 0x25be8c: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x25be8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25be90: 0x41602  srl         $v0, $a0, 24
    ctx->pc = 0x25be90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x25be94: 0xc6400228  lwc1        $f0, 0x228($s2)
    ctx->pc = 0x25be94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25be98: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25be98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25be9c: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x25be9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25bea0: 0x46001181  sub.s       $f6, $f2, $f0
    ctx->pc = 0x25bea0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x25bea4: 0xc641022c  lwc1        $f1, 0x22C($s2)
    ctx->pc = 0x25bea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25bea8: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x25bea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25beac: 0xc6400230  lwc1        $f0, 0x230($s2)
    ctx->pc = 0x25beacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25beb0: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x25beb0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x25beb4: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25BEB4u;
    {
        const bool branch_taken_0x25beb4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEB4u;
        // 0x25beb8: 0x46001141  sub.s       $f5, $f2, $f0 (Delay Slot)
        ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25beb4) {
            ctx->pc = 0x25BEC8u;
            goto label_25bec8;
        }
    }
    ctx->pc = 0x25BEBCu;
    // 0x25bebc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25bebcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25bec0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25BEC0u;
    {
        const bool branch_taken_0x25bec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEC0u;
        // 0x25bec4: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bec0) {
            ctx->pc = 0x25BEE0u;
            goto label_25bee0;
        }
    }
    ctx->pc = 0x25BEC8u;
label_25bec8:
    // 0x25bec8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25bec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25becc: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x25beccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x25bed0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25bed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25bed4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25bed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25bed8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25bed8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25bedc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x25bedcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_25bee0:
    // 0x25bee0: 0xc780833c  lwc1        $f0, -0x7CC4($gp)
    ctx->pc = 0x25bee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bee4: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x25bee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x25bee8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25bee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25beec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25beecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25bef0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25BEF0u;
    {
        const bool branch_taken_0x25bef0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEF0u;
        // 0x25bef4: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bef0) {
            ctx->pc = 0x25BF04u;
            goto label_25bf04;
        }
    }
    ctx->pc = 0x25BEF8u;
    // 0x25bef8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25bef8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25befc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25BEFCu;
    {
        const bool branch_taken_0x25befc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEFCu;
        // 0x25bf00: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25befc) {
            ctx->pc = 0x25BF1Cu;
            goto label_25bf1c;
        }
    }
    ctx->pc = 0x25BF04u;
label_25bf04:
    // 0x25bf04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25bf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25bf08: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x25bf08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x25bf0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25bf0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25bf10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25bf10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25bf14: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25bf14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25bf18: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x25bf18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_25bf1c:
    // 0x25bf1c: 0xc7808340  lwc1        $f0, -0x7CC0($gp)
    ctx->pc = 0x25bf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bf20: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x25bf20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x25bf24: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25bf24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25bf28: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25bf28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25bf2c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25BF2Cu;
    {
        const bool branch_taken_0x25bf2c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF2Cu;
        // 0x25bf30: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bf2c) {
            ctx->pc = 0x25BF44u;
            goto label_25bf44;
        }
    }
    ctx->pc = 0x25BF34u;
    // 0x25bf34: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x25bf34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x25bf38: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x25bf38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x25bf3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25BF3Cu;
    {
        const bool branch_taken_0x25bf3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF3Cu;
        // 0x25bf40: 0x46031882  mul.s       $f2, $f3, $f3 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bf3c) {
            ctx->pc = 0x25BF60u;
            goto label_25bf60;
        }
    }
    ctx->pc = 0x25BF44u;
label_25bf44:
    // 0x25bf44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25bf44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25bf48: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x25bf48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x25bf4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25bf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25bf50: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x25bf50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x25bf54: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x25bf54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x25bf58: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x25bf58u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x25bf5c: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x25bf5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_25bf60:
    // 0x25bf60: 0xc7808344  lwc1        $f0, -0x7CBC($gp)
    ctx->pc = 0x25bf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bf64: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x25bf64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x25bf68: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x25bf68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x25bf6c: 0x460528c2  mul.s       $f3, $f5, $f5
    ctx->pc = 0x25bf6cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x25bf70: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x25bf70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x25bf74: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x25bf74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x25bf78: 0x46030b00  add.s       $f12, $f1, $f3
    ctx->pc = 0x25bf78u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x25bf7c: 0xc6400228  lwc1        $f0, 0x228($s2)
    ctx->pc = 0x25bf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bf80: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x25bf80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25bf84: 0x0  nop
    ctx->pc = 0x25bf84u;
    // NOP
    // 0x25bf88: 0x0  nop
    ctx->pc = 0x25bf88u;
    // NOP
    // 0x25bf8c: 0x460c0104  c1          0xC0104
    ctx->pc = 0x25bf8cu;
    ctx->f[4] = FPU_SQRT_S(ctx->f[12]);
    // 0x25bf90: 0xc640022c  lwc1        $f0, 0x22C($s2)
    ctx->pc = 0x25bf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bf94: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x25bf94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25bf98: 0xc6410230  lwc1        $f1, 0x230($s2)
    ctx->pc = 0x25bf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25bf9c: 0x46042032  c.eq.s      $f4, $f4
    ctx->pc = 0x25bf9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25bfa0: 0x0  nop
    ctx->pc = 0x25bfa0u;
    // NOP
    // 0x25bfa4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x25BFA4u;
    {
        const bool branch_taken_0x25bfa4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BFA4u;
        // 0x25bfa8: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bfa4) {
            ctx->pc = 0x25BFB8u;
            goto label_25bfb8;
        }
    }
    ctx->pc = 0x25BFACu;
    // 0x25bfac: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x25BFACu;
    SET_GPR_U32(ctx, 31, 0x25BFB4u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x25BFACu, 0x25BFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BFB4u;
label_25bfb4:
    // 0x25bfb4: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x25bfb4u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
label_25bfb8:
    // 0x25bfb8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x25bfb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x25bfbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25bfbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25bfc0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x25bfc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x25bfc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25bfc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25bfc8: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x25bfc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x25bfcc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25bfccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25bfd0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x25bfd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x25bfd4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x25bfd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25bfd8: 0x0  nop
    ctx->pc = 0x25bfd8u;
    // NOP
    // 0x25bfdc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x25BFDCu;
    {
        const bool branch_taken_0x25bfdc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25BFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BFDCu;
        // 0x25bfe0: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bfdc) {
            ctx->pc = 0x25BFF4u;
            goto label_25bff4;
        }
    }
    ctx->pc = 0x25BFE4u;
    // 0x25bfe4: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x25bfe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x25bfe8: 0x0  nop
    ctx->pc = 0x25bfe8u;
    // NOP
    // 0x25bfec: 0x0  nop
    ctx->pc = 0x25bfecu;
    // NOP
    // 0x25bff0: 0x4600ad43  div.s       $f21, $f21, $f0
    ctx->pc = 0x25bff0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[0];
label_25bff4:
    // 0x25bff4: 0x12e00032  beqz        $s7, . + 4 + (0x32 << 2)
    ctx->pc = 0x25BFF4u;
    {
        const bool branch_taken_0x25bff4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BFF4u;
        // 0x25bff8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bff4) {
            ctx->pc = 0x25C0C0u;
            goto label_25c0c0;
        }
    }
    ctx->pc = 0x25BFFCu;
    // 0x25bffc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x25bffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c000: 0x27a60034  addiu       $a2, $sp, 0x34
    ctx->pc = 0x25c000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x25c004: 0xc0a87a6  jal         func_2A1E98
    ctx->pc = 0x25C004u;
    SET_GPR_U32(ctx, 31, 0x25C00Cu);
    ctx->pc = 0x25C008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C004u;
    // 0x25c008: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1E98u, 0x25C004u, 0x25C00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C00Cu;
label_25c00c:
    // 0x25c00c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x25C00Cu;
    {
        const bool branch_taken_0x25c00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C00Cu;
        // 0x25c010: 0xc7ac0010  lwc1        $f12, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c00c) {
            ctx->pc = 0x25C0B4u;
            goto label_25c0b4;
        }
    }
    ctx->pc = 0x25C014u;
    // 0x25c014: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x25c014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x25c018: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25c018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25c01c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25c01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25c020: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x25c020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x25c024: 0xc0b9142  jal         func_2E4508
    ctx->pc = 0x25C024u;
    SET_GPR_U32(ctx, 31, 0x25C02Cu);
    ctx->pc = 0x25C028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C024u;
    // 0x25c028: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4508u, 0x25C024u, 0x25C02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C02Cu;
label_25c02c:
    // 0x25c02c: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x25c02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25c030: 0x28600  sll         $s0, $v0, 24
    ctx->pc = 0x25c030u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x25c034: 0xc0b9142  jal         func_2E4508
    ctx->pc = 0x25C034u;
    SET_GPR_U32(ctx, 31, 0x25C03Cu);
    ctx->pc = 0x25C038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C034u;
    // 0x25c038: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4508u, 0x25C034u, 0x25C03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C03Cu;
label_25c03c:
    // 0x25c03c: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x25c03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25c040: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25c040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25c044: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x25c044u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x25c048: 0xc0b9142  jal         func_2E4508
    ctx->pc = 0x25C048u;
    SET_GPR_U32(ctx, 31, 0x25C050u);
    ctx->pc = 0x25C04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C048u;
    // 0x25c04c: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4508u, 0x25C048u, 0x25C050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C050u;
label_25c050:
    // 0x25c050: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x25c050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c054: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x25c054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x25c058: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x25c058u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x25c05c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x25c05cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x25c060: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x25c060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x25c064: 0xe6400228  swc1        $f0, 0x228($s2)
    ctx->pc = 0x25c064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 552), bits); }
    // 0x25c068: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x25c068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x25c06c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25c06cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25c070: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x25c070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25c074: 0xae500224  sw          $s0, 0x224($s2)
    ctx->pc = 0x25c074u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 548), GPR_U32(ctx, 16));
    // 0x25c078: 0xe641022c  swc1        $f1, 0x22C($s2)
    ctx->pc = 0x25c078u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 556), bits); }
    // 0x25c07c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x25c07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c080: 0xe6400230  swc1        $f0, 0x230($s2)
    ctx->pc = 0x25c080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 560), bits); }
    // 0x25c084: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x25c084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25c088: 0x46030802  mul.s       $f0, $f1, $f3
    ctx->pc = 0x25c088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x25c08c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x25c08cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c090: 0x0  nop
    ctx->pc = 0x25c090u;
    // NOP
    // 0x25c094: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x25C094u;
    {
        const bool branch_taken_0x25c094 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25C098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C094u;
        // 0x25c098: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c094) {
            ctx->pc = 0x25C0C0u;
            goto label_25c0c0;
        }
    }
    ctx->pc = 0x25C09Cu;
    // 0x25c09c: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x25c09cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x25c0a0: 0x0  nop
    ctx->pc = 0x25c0a0u;
    // NOP
    // 0x25c0a4: 0x0  nop
    ctx->pc = 0x25c0a4u;
    // NOP
    // 0x25c0a8: 0x4600ad43  div.s       $f21, $f21, $f0
    ctx->pc = 0x25c0a8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[0];
    // 0x25c0ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25C0ACu;
    {
        const bool branch_taken_0x25c0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c0ac) {
            ctx->pc = 0x25C0C0u;
            goto label_25c0c0;
        }
    }
    ctx->pc = 0x25C0B4u;
label_25c0b4:
    // 0x25c0b4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x25c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x25c0b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x25c0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x25c0bc: 0xae420224  sw          $v0, 0x224($s2)
    ctx->pc = 0x25c0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 548), GPR_U32(ctx, 2));
label_25c0c0:
    // 0x25c0c0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x25c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x25c0c4: 0x8e430224  lw          $v1, 0x224($s2)
    ctx->pc = 0x25c0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
    // 0x25c0c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x25c0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x25c0cc: 0x50620017  beql        $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x25C0CCu;
    {
        const bool branch_taken_0x25c0cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25c0cc) {
            ctx->pc = 0x25C0D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C0CCu;
            // 0x25c0d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C12Cu;
            goto label_25c12c;
        }
    }
    ctx->pc = 0x25C0D4u;
    // 0x25c0d4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25C0D4u;
    {
        const bool branch_taken_0x25c0d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C0D4u;
        // 0x25c0d8: 0xc7a40010  lwc1        $f4, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c0d4) {
            ctx->pc = 0x25C0F0u;
            goto label_25c0f0;
        }
    }
    ctx->pc = 0x25C0DCu;
    // 0x25c0dc: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x25c0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c0e0: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x25c0e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c0e4: 0x0  nop
    ctx->pc = 0x25c0e4u;
    // NOP
    // 0x25c0e8: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x25C0E8u;
    {
        const bool branch_taken_0x25c0e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25C0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C0E8u;
        // 0x25c0ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c0e8) {
            ctx->pc = 0x25C12Cu;
            goto label_25c12c;
        }
    }
    ctx->pc = 0x25C0F0u;
label_25c0f0:
    // 0x25c0f0: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x25c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x25c0f4: 0xc7a50014  lwc1        $f5, 0x14($sp)
    ctx->pc = 0x25c0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25c0f8: 0x24635e00  addiu       $v1, $v1, 0x5E00
    ctx->pc = 0x25c0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24064));
    // 0x25c0fc: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x25c0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25c100: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x25c100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c104: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x25c104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c108: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x25c108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25c10c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x25c10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25c110: 0xe6b50000  swc1        $f21, 0x0($s5)
    ctx->pc = 0x25c110u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x25c114: 0xe464000c  swc1        $f4, 0xC($v1)
    ctx->pc = 0x25c114u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1FC5E0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FC5E0Cu, _value); } while (0); }
    // 0x25c118: 0xe4650010  swc1        $f5, 0x10($v1)
    ctx->pc = 0x25c118u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1FC5E10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FC5E10u, _value); } while (0); }
    // 0x25c11c: 0xe4630014  swc1        $f3, 0x14($v1)
    ctx->pc = 0x25c11cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1FC5E14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FC5E14u, _value); } while (0); }
    // 0x25c120: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x25c120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1FC5E18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FC5E18u, _value); } while (0); }
    // 0x25c124: 0xe461001c  swc1        $f1, 0x1C($v1)
    ctx->pc = 0x25c124u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1FC5E1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FC5E1Cu, _value); } while (0); }
    // 0x25c128: 0xe4620020  swc1        $f2, 0x20($v1)
    ctx->pc = 0x25c128u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1FC5E20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FC5E20u, _value); } while (0); }
label_25c12c:
    // 0x25c12c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x25c12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25c130: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x25c130u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25c134: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x25c134u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25c138: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x25c138u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25c13c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x25c13cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25c140: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x25c140u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25c144: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x25c144u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25c148: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x25c148u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25c14c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x25c14cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25c150: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x25c150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25c154: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x25c154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25c158: 0x3e00008  jr          $ra
    ctx->pc = 0x25C158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C158u;
        // 0x25c15c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C160u;
}

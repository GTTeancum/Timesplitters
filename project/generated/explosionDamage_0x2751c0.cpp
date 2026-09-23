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

// Function: explosionDamage
// Address: 0x2751c0 - 0x275644
void explosionDamage_0x2751c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("explosionDamage_0x2751c0");
#endif

    switch (ctx->pc) {
        case 0x2752e0u: goto label_2752e0;
        case 0x275358u: goto label_275358;
        case 0x2753c0u: goto label_2753c0;
        case 0x2753f0u: goto label_2753f0;
        case 0x275544u: goto label_275544;
        case 0x27556cu: goto label_27556c;
        case 0x2755d0u: goto label_2755d0;
        default: break;
    }

    ctx->pc = 0x2751c0u;

    // 0x2751c0: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2751c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2751c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2751c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2751c8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2751c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2751cc: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2751ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2751d0: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x2751d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x2751d4: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x2751d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x2751d8: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2751d8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2751dc: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x2751dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x2751e0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2751e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2751e4: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x2751e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x2751e8: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2751e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2751ec: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x2751ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2751f0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2751f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2751f4: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2751f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2751f8: 0x26c6fff8  addiu       $a2, $s6, -0x8
    ctx->pc = 0x2751f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967288));
    // 0x2751fc: 0xe7b70108  swc1        $f23, 0x108($sp)
    ctx->pc = 0x2751fcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x275200: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x275200u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275204: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x275204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x275208: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x275208u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27520c: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x27520cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x275210: 0x2cc4000b  sltiu       $a0, $a2, 0xB
    ctx->pc = 0x275210u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x275214: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x275214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x275218: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x275218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x27521c: 0xe7b90118  swc1        $f25, 0x118($sp)
    ctx->pc = 0x27521cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x275220: 0xe7b80110  swc1        $f24, 0x110($sp)
    ctx->pc = 0x275220u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x275224: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x275224u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x275228: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x275228u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x27522c: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x27522cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x275230: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x275230u;
    {
        const bool branch_taken_0x275230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x275230) {
            ctx->pc = 0x275234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275230u;
            // 0x275234: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x275238u;
            goto label_275238;
        }
    }
    ctx->pc = 0x275238u;
label_275238:
    // 0x275238: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x275238u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x27523c: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27523cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x275240: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x275240u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x275244: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x275244u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x275248: 0x24a20018  addiu       $v0, $a1, 0x18
    ctx->pc = 0x275248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x27524c: 0x8012  mflo        $s0
    ctx->pc = 0x27524cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x275250: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x275250u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x275254: 0x8810  mfhi        $s1
    ctx->pc = 0x275254u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x275258: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x275258u;
    {
        const bool branch_taken_0x275258 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275258u;
        // 0x27525c: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275258) {
            ctx->pc = 0x2752A4u;
            goto label_2752a4;
        }
    }
    ctx->pc = 0x275260u;
    // 0x275260: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x275260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x275264: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x275264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x275268: 0x244280e0  addiu       $v0, $v0, -0x7F20
    ctx->pc = 0x275268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934752));
    // 0x27526c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27526cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x275270: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x275270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x275274: 0x800008  jr          $a0
    ctx->pc = 0x275274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27527Cu: goto label_27527c;
            case 0x275290u: goto label_275290;
            case 0x2752A4u: goto label_2752a4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275274u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27527Cu;
label_27527c:
    // 0x27527c: 0xc79485c4  lwc1        $f20, -0x7A3C($gp)
    ctx->pc = 0x27527cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x275280: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x275280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x275284: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x275284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x275288: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x275288u;
    {
        const bool branch_taken_0x275288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275288u;
        // 0x27528c: 0x4618c642  mul.s       $f25, $f24, $f24 (Delay Slot)
        ctx->f[25] = FPU_MUL_S(ctx->f[24], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275288) {
            ctx->pc = 0x2752B4u;
            goto label_2752b4;
        }
    }
    ctx->pc = 0x275290u;
label_275290:
    // 0x275290: 0xc79485c8  lwc1        $f20, -0x7A38($gp)
    ctx->pc = 0x275290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x275294: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x275294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x275298: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x275298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x27529c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27529Cu;
    {
        const bool branch_taken_0x27529c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2752A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27529Cu;
        // 0x2752a0: 0x4618c642  mul.s       $f25, $f24, $f24 (Delay Slot)
        ctx->f[25] = FPU_MUL_S(ctx->f[24], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27529c) {
            ctx->pc = 0x2752B4u;
            goto label_2752b4;
        }
    }
    ctx->pc = 0x2752A4u;
label_2752a4:
    // 0x2752a4: 0xc79485cc  lwc1        $f20, -0x7A34($gp)
    ctx->pc = 0x2752a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2752a8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2752a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2752ac: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x2752acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x2752b0: 0x4618c642  mul.s       $f25, $f24, $f24
    ctx->pc = 0x2752b0u;
    ctx->f[25] = FPU_MUL_S(ctx->f[24], ctx->f[24]);
label_2752b4:
    // 0x2752b4: 0x28a20012  slti        $v0, $a1, 0x12
    ctx->pc = 0x2752b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x2752b8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2752B8u;
    {
        const bool branch_taken_0x2752b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2752BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2752B8u;
        // 0x2752bc: 0x8f83b460  lw          $v1, -0x4BA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2752b8) {
            ctx->pc = 0x2752E4u;
            goto label_2752e4;
        }
    }
    ctx->pc = 0x2752C0u;
    // 0x2752c0: 0x24620012  addiu       $v0, $v1, 0x12
    ctx->pc = 0x2752c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 18));
    // 0x2752c4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2752c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2752c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2752C8u;
    {
        const bool branch_taken_0x2752c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2752CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2752C8u;
        // 0x2752cc: 0x223102a  slt         $v0, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2752c8) {
            ctx->pc = 0x2752E8u;
            goto label_2752e8;
        }
    }
    ctx->pc = 0x2752D0u;
    // 0x2752d0: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x2752d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x2752d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2752d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2752d8: 0xc0a291c  jal         func_28A470
    ctx->pc = 0x2752D8u;
    SET_GPR_U32(ctx, 31, 0x2752E0u);
    ctx->pc = 0x2752DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2752D8u;
    // 0x2752dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A470u, 0x2752D8u, 0x2752E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2752E0u;
label_2752e0:
    // 0x2752e0: 0x8f83b460  lw          $v1, -0x4BA0($gp)
    ctx->pc = 0x2752e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
label_2752e4:
    // 0x2752e4: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x2752e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2752e8:
    // 0x2752e8: 0x104000c4  beqz        $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x2752E8u;
    {
        const bool branch_taken_0x2752e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2752ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2752E8u;
        // 0x2752ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2752e8) {
            ctx->pc = 0x2755FCu;
            goto label_2755fc;
        }
    }
    ctx->pc = 0x2752F0u;
    // 0x2752f0: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2752F0u;
    {
        const bool branch_taken_0x2752f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2752F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2752F0u;
        // 0x2752f4: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2752f0) {
            ctx->pc = 0x275334u;
            goto label_275334;
        }
    }
    ctx->pc = 0x2752F8u;
    // 0x2752f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2752F8u;
    {
        const bool branch_taken_0x2752f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2752FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2752F8u;
        // 0x2752fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2752f8) {
            ctx->pc = 0x275310u;
            goto label_275310;
        }
    }
    ctx->pc = 0x275300u;
    // 0x275300: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x275300u;
    {
        const bool branch_taken_0x275300 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x275304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275300u;
        // 0x275304: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275300) {
            ctx->pc = 0x275328u;
            goto label_275328;
        }
    }
    ctx->pc = 0x275308u;
    // 0x275308: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x275308u;
    {
        const bool branch_taken_0x275308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275308) {
            ctx->pc = 0x275350u;
            goto label_275350;
        }
    }
    ctx->pc = 0x275310u;
label_275310:
    // 0x275310: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x275310u;
    {
        const bool branch_taken_0x275310 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x275314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275310u;
        // 0x275314: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275310) {
            ctx->pc = 0x275340u;
            goto label_275340;
        }
    }
    ctx->pc = 0x275318u;
    // 0x275318: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x275318u;
    {
        const bool branch_taken_0x275318 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x275318) {
            ctx->pc = 0x27534Cu;
            goto label_27534c;
        }
    }
    ctx->pc = 0x275320u;
    // 0x275320: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x275320u;
    {
        const bool branch_taken_0x275320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275320) {
            ctx->pc = 0x275350u;
            goto label_275350;
        }
    }
    ctx->pc = 0x275328u;
label_275328:
    // 0x275328: 0xc79785d0  lwc1        $f23, -0x7A30($gp)
    ctx->pc = 0x275328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x27532c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27532Cu;
    {
        const bool branch_taken_0x27532c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27532Cu;
        // 0x275330: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27532c) {
            ctx->pc = 0x275350u;
            goto label_275350;
        }
    }
    ctx->pc = 0x275334u;
label_275334:
    // 0x275334: 0xc78085d4  lwc1        $f0, -0x7A2C($gp)
    ctx->pc = 0x275334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275338: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x275338u;
    {
        const bool branch_taken_0x275338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275338u;
        // 0x27533c: 0x4600a5c2  mul.s       $f23, $f20, $f0 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275338) {
            ctx->pc = 0x275350u;
            goto label_275350;
        }
    }
    ctx->pc = 0x275340u;
label_275340:
    // 0x275340: 0xc78085d8  lwc1        $f0, -0x7A28($gp)
    ctx->pc = 0x275340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275344: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x275344u;
    {
        const bool branch_taken_0x275344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275344u;
        // 0x275348: 0x4600a5c2  mul.s       $f23, $f20, $f0 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275344) {
            ctx->pc = 0x275350u;
            goto label_275350;
        }
    }
    ctx->pc = 0x27534Cu;
label_27534c:
    // 0x27534c: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x27534cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_275350:
    // 0x275350: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x275350u;
    SET_GPR_U32(ctx, 31, 0x275358u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x275350u, 0x275358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275358u;
label_275358:
    // 0x275358: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275358u;
    {
        const bool branch_taken_0x275358 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275358u;
        // 0x27535c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275358) {
            ctx->pc = 0x27536Cu;
            goto label_27536c;
        }
    }
    ctx->pc = 0x275360u;
    // 0x275360: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x275360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x275364: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x275364u;
    {
        const bool branch_taken_0x275364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275364u;
        // 0x275368: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275364) {
            ctx->pc = 0x275380u;
            goto label_275380;
        }
    }
    ctx->pc = 0x27536Cu;
label_27536c:
    // 0x27536c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27536cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x275370: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x275370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x275374: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x275374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x275378: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x275378u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27537c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x27537cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_275380:
    // 0x275380: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x275380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x275384: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x275384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275388: 0xc78285dc  lwc1        $f2, -0x7A24($gp)
    ctx->pc = 0x275388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27538c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27538cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x275390: 0xc78185e0  lwc1        $f1, -0x7A20($gp)
    ctx->pc = 0x275390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275394: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x275394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x275398: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x275398u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x27539c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27539cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2753a0: 0x4600bdc2  mul.s       $f23, $f23, $f0
    ctx->pc = 0x2753a0u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x2753a4: 0x4603b836  c.le.s      $f23, $f3
    ctx->pc = 0x2753a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2753a8: 0x0  nop
    ctx->pc = 0x2753a8u;
    // NOP
    // 0x2753ac: 0x45010094  bc1t        . + 4 + (0x94 << 2)
    ctx->pc = 0x2753ACu;
    {
        const bool branch_taken_0x2753ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2753B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753ACu;
        // 0x2753b0: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2753ac) {
            ctx->pc = 0x275600u;
            goto label_275600;
        }
    }
    ctx->pc = 0x2753B4u;
    // 0x2753b4: 0xc79685e4  lwc1        $f22, -0x7A1C($gp)
    ctx->pc = 0x2753b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2753b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2753b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2753bc: 0x0  nop
    ctx->pc = 0x2753bcu;
    // NOP
label_2753c0:
    // 0x2753c0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2753C0u;
    {
        const bool branch_taken_0x2753c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2753C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753C0u;
        // 0x2753c4: 0x3c0201fd  lui         $v0, 0x1FD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)509 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2753c0) {
            ctx->pc = 0x2753D8u;
            goto label_2753d8;
        }
    }
    ctx->pc = 0x2753C8u;
    // 0x2753c8: 0x3c0201fd  lui         $v0, 0x1FD
    ctx->pc = 0x2753c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)509 << 16));
    // 0x2753cc: 0x8f92b8f8  lw          $s2, -0x4708($gp)
    ctx->pc = 0x2753ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949112)));
    // 0x2753d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2753D0u;
    {
        const bool branch_taken_0x2753d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2753D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753D0u;
        // 0x2753d4: 0x24552f60  addiu       $s5, $v0, 0x2F60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 12128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2753d0) {
            ctx->pc = 0x2753E0u;
            goto label_2753e0;
        }
    }
    ctx->pc = 0x2753D8u;
label_2753d8:
    // 0x2753d8: 0x8f92b8fc  lw          $s2, -0x4704($gp)
    ctx->pc = 0x2753d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949116)));
    // 0x2753dc: 0x24553410  addiu       $s5, $v0, 0x3410
    ctx->pc = 0x2753dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 13328));
label_2753e0:
    // 0x2753e0: 0x1a400081  blez        $s2, . + 4 + (0x81 << 2)
    ctx->pc = 0x2753E0u;
    {
        const bool branch_taken_0x2753e0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2753E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753E0u;
        // 0x2753e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2753e0) {
            ctx->pc = 0x2755E8u;
            goto label_2755e8;
        }
    }
    ctx->pc = 0x2753E8u;
    // 0x2753e8: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x2753e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2753ec: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2753ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2753f0:
    // 0x2753f0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2753f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2753f4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2753f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2753f8: 0x12000075  beqz        $s0, . + 4 + (0x75 << 2)
    ctx->pc = 0x2753F8u;
    {
        const bool branch_taken_0x2753f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2753FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753F8u;
        // 0x2753fc: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2753f8) {
            ctx->pc = 0x2755D0u;
            goto label_2755d0;
        }
    }
    ctx->pc = 0x275400u;
    // 0x275400: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x275400u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x275404: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x275404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
    // 0x275408: 0x54430072  bnel        $v0, $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x275408u;
    {
        const bool branch_taken_0x275408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x275408) {
            ctx->pc = 0x27540Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275408u;
            // 0x27540c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2755D4u;
            goto label_2755d4;
        }
    }
    ctx->pc = 0x275410u;
    // 0x275410: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x275410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x275414: 0x4600bd46  mov.s       $f21, $f23
    ctx->pc = 0x275414u;
    ctx->f[21] = FPU_MOV_S(ctx->f[23]);
    // 0x275418: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x275418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27541c: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x27541Cu;
    {
        const bool branch_taken_0x27541c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x275420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27541Cu;
        // 0x275420: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27541c) {
            ctx->pc = 0x27545Cu;
            goto label_27545c;
        }
    }
    ctx->pc = 0x275424u;
    // 0x275424: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x275424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x275428: 0x8c420a9c  lw          $v0, 0xA9C($v0)
    ctx->pc = 0x275428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2716)));
    // 0x27542c: 0x30432010  andi        $v1, $v0, 0x2010
    ctx->pc = 0x27542cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8208);
    // 0x275430: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x275430u;
    {
        const bool branch_taken_0x275430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x275430) {
            ctx->pc = 0x2754A4u;
            goto label_2754a4;
        }
    }
    ctx->pc = 0x275438u;
    // 0x275438: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x275438u;
    {
        const bool branch_taken_0x275438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x275438) {
            ctx->pc = 0x2754A4u;
            goto label_2754a4;
        }
    }
    ctx->pc = 0x275440u;
    // 0x275440: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x275440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275444: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x275444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275448: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x275448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x27544c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27544cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275450: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x275450u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x275454: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x275454u;
    {
        const bool branch_taken_0x275454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275454u;
        // 0x275458: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275454) {
            ctx->pc = 0x2754A4u;
            goto label_2754a4;
        }
    }
    ctx->pc = 0x27545Cu;
label_27545c:
    // 0x27545c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x27545cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x275460: 0x240201a4  addiu       $v0, $zero, 0x1A4
    ctx->pc = 0x275460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
    // 0x275464: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x275464u;
    {
        const bool branch_taken_0x275464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x275468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275464u;
        // 0x275468: 0x240201a7  addiu       $v0, $zero, 0x1A7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 423));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275464) {
            ctx->pc = 0x275474u;
            goto label_275474;
        }
    }
    ctx->pc = 0x27546Cu;
    // 0x27546c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27546Cu;
    {
        const bool branch_taken_0x27546c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27546c) {
            ctx->pc = 0x275470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27546Cu;
            // 0x275470: 0xc6000034  lwc1        $f0, 0x34($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x275488u;
            goto label_275488;
        }
    }
    ctx->pc = 0x275474u;
label_275474:
    // 0x275474: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x275474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275478: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x275478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27547c: 0xc78285e8  lwc1        $f2, -0x7A18($gp)
    ctx->pc = 0x27547cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x275480: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x275480u;
    {
        const bool branch_taken_0x275480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275480u;
        // 0x275484: 0xc6010200  lwc1        $f1, 0x200($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275480) {
            ctx->pc = 0x275498u;
            goto label_275498;
        }
    }
    ctx->pc = 0x275488u;
label_275488:
    // 0x275488: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x275488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27548c: 0xc6010200  lwc1        $f1, 0x200($s0)
    ctx->pc = 0x27548cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275490: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x275490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x275494: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x275494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_275498:
    // 0x275498: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x275498u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27549c: 0x4602ad42  mul.s       $f21, $f21, $f2
    ctx->pc = 0x27549cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x2754a0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2754a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2754a4:
    // 0x2754a4: 0x1080004a  beqz        $a0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2754A4u;
    {
        const bool branch_taken_0x2754a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2754A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754A4u;
        // 0x2754a8: 0xc7a10024  lwc1        $f1, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2754a4) {
            ctx->pc = 0x2755D0u;
            goto label_2755d0;
        }
    }
    ctx->pc = 0x2754ACu;
    // 0x2754ac: 0xc6020030  lwc1        $f2, 0x30($s0)
    ctx->pc = 0x2754acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2754b0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2754b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2754b4: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x2754b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2754b8: 0x46020141  sub.s       $f5, $f0, $f2
    ctx->pc = 0x2754b8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2754bc: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2754bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2754c0: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x2754c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2754c4: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x2754c4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2754c8: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2754c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2754cc: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x2754ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2754d0: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x2754d0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2754d4: 0x46001101  sub.s       $f4, $f2, $f0
    ctx->pc = 0x2754d4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2754d8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2754d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2754dc: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x2754dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2754e0: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x2754e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2754e4: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x2754e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2754e8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2754e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2754ec: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x2754ecu;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2754f0: 0x4619a034  c.lt.s      $f20, $f25
    ctx->pc = 0x2754f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2754f4: 0x0  nop
    ctx->pc = 0x2754f4u;
    // NOP
    // 0x2754f8: 0x45000035  bc1f        . + 4 + (0x35 << 2)
    ctx->pc = 0x2754F8u;
    {
        const bool branch_taken_0x2754f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2754FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754F8u;
        // 0x2754fc: 0xe7a40018  swc1        $f4, 0x18($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2754f8) {
            ctx->pc = 0x2755D0u;
            goto label_2755d0;
        }
    }
    ctx->pc = 0x275500u;
    // 0x275500: 0x46162802  mul.s       $f0, $f5, $f22
    ctx->pc = 0x275500u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[22]);
    // 0x275504: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x275504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x275508: 0x46161842  mul.s       $f1, $f3, $f22
    ctx->pc = 0x275508u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[22]);
    // 0x27550c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x27550cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x275510: 0x46162082  mul.s       $f2, $f4, $f22
    ctx->pc = 0x275510u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[22]);
    // 0x275514: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x275514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x275518: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x275518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x27551c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x27551cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x275520: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x275520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x275524: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x275524u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275528: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x275528u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x27552c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27552cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275530: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x275530u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x275534: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x275534u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275538: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x275538u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27553c: 0xc09640e  jal         func_259038
    ctx->pc = 0x27553Cu;
    SET_GPR_U32(ctx, 31, 0x275544u);
    ctx->pc = 0x275540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27553Cu;
    // 0x275540: 0x240bfffd  addiu       $t3, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x27553Cu, 0x275544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275544u;
label_275544:
    // 0x275544: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x275544u;
    {
        const bool branch_taken_0x275544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275544) {
            ctx->pc = 0x275548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275544u;
            // 0x275548: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2755D4u;
            goto label_2755d4;
        }
    }
    ctx->pc = 0x27554Cu;
    // 0x27554c: 0x0  nop
    ctx->pc = 0x27554cu;
    // NOP
    // 0x275550: 0x0  nop
    ctx->pc = 0x275550u;
    // NOP
    // 0x275554: 0x46140004  c1          0x140004
    ctx->pc = 0x275554u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[20]);
    // 0x275558: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x275558u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27555c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x27555Cu;
    {
        const bool branch_taken_0x27555c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27555c) {
            ctx->pc = 0x27556Cu;
            goto label_27556c;
        }
    }
    ctx->pc = 0x275564u;
    // 0x275564: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x275564u;
    SET_GPR_U32(ctx, 31, 0x27556Cu);
    ctx->pc = 0x275568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275564u;
    // 0x275568: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x275564u, 0x27556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27556Cu;
label_27556c:
    // 0x27556c: 0x0  nop
    ctx->pc = 0x27556cu;
    // NOP
    // 0x275570: 0x0  nop
    ctx->pc = 0x275570u;
    // NOP
    // 0x275574: 0x461800c3  div.s       $f3, $f0, $f24
    ctx->pc = 0x275574u;
    if (ctx->f[24] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[3] = ctx->f[0] / ctx->f[24];
    // 0x275578: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x275578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27557c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27557cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x275580: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x275580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x275584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275588: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x275588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27558c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x27558cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275590: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x275590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275594: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x275594u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x275598: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x275598u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x27559c: 0x8fab0040  lw          $t3, 0x40($sp)
    ctx->pc = 0x27559cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2755a0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2755a0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2755a4: 0x24860030  addiu       $a2, $a0, 0x30
    ctx->pc = 0x2755a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2755a8: 0x46036301  sub.s       $f12, $f12, $f3
    ctx->pc = 0x2755a8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[3]);
    // 0x2755ac: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2755acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2755b0: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x2755b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2755b4: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x2755b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2755b8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2755b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2755bc: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x2755bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2755c0: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x2755c0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x2755c4: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x2755c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2755c8: 0xc09c666  jal         func_271998
    ctx->pc = 0x2755C8u;
    SET_GPR_U32(ctx, 31, 0x2755D0u);
    ctx->pc = 0x2755CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2755C8u;
    // 0x2755cc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271998u, 0x2755C8u, 0x2755D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2755D0u;
label_2755d0:
    // 0x2755d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2755d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2755d4:
    // 0x2755d4: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x2755d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2755d8: 0x1440ff85  bnez        $v0, . + 4 + (-0x7B << 2)
    ctx->pc = 0x2755D8u;
    {
        const bool branch_taken_0x2755d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2755DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2755D8u;
        // 0x2755dc: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2755d8) {
            ctx->pc = 0x2753F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2753f0;
        }
    }
    ctx->pc = 0x2755E0u;
    // 0x2755e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2755E0u;
    {
        const bool branch_taken_0x2755e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2755E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2755E0u;
        // 0x2755e4: 0x280182d  daddu       $v1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2755e0) {
            ctx->pc = 0x2755F0u;
            goto label_2755f0;
        }
    }
    ctx->pc = 0x2755E8u;
label_2755e8:
    // 0x2755e8: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x2755e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2755ec: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x2755ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2755f0:
    // 0x2755f0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2755f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2755f4: 0x1440ff72  bnez        $v0, . + 4 + (-0x8E << 2)
    ctx->pc = 0x2755F4u;
    {
        const bool branch_taken_0x2755f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2755f4) {
            ctx->pc = 0x2753C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2753c0;
        }
    }
    ctx->pc = 0x2755FCu;
label_2755fc:
    // 0x2755fc: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x2755fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_275600:
    // 0x275600: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x275600u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x275604: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x275604u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x275608: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x275608u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x27560c: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x27560cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x275610: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x275610u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x275614: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x275614u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x275618: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x275618u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27561c: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x27561cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x275620: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x275620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x275624: 0xc7b90118  lwc1        $f25, 0x118($sp)
    ctx->pc = 0x275624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x275628: 0xc7b80110  lwc1        $f24, 0x110($sp)
    ctx->pc = 0x275628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x27562c: 0xc7b70108  lwc1        $f23, 0x108($sp)
    ctx->pc = 0x27562cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x275630: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x275630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x275634: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x275634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x275638: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x275638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27563c: 0x3e00008  jr          $ra
    ctx->pc = 0x27563Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27563Cu;
        // 0x275640: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27563Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275644u;
}

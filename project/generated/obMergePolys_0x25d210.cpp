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

// Function: obMergePolys
// Address: 0x25d210 - 0x25dec0
void obMergePolys_0x25d210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obMergePolys_0x25d210");
#endif

    switch (ctx->pc) {
        case 0x25d288u: goto label_25d288;
        case 0x25d2c8u: goto label_25d2c8;
        case 0x25d3f8u: goto label_25d3f8;
        case 0x25d468u: goto label_25d468;
        case 0x25d77cu: goto label_25d77c;
        case 0x25d7fcu: goto label_25d7fc;
        case 0x25d8d0u: goto label_25d8d0;
        case 0x25d9d0u: goto label_25d9d0;
        case 0x25da48u: goto label_25da48;
        case 0x25db14u: goto label_25db14;
        case 0x25dbc0u: goto label_25dbc0;
        case 0x25dc38u: goto label_25dc38;
        case 0x25dd88u: goto label_25dd88;
        default: break;
    }

    ctx->pc = 0x25d210u;

    // 0x25d210: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x25d210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x25d214: 0xffb300e0  sd          $s3, 0xE0($sp)
    ctx->pc = 0x25d214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 19));
    // 0x25d218: 0xffb50100  sd          $s5, 0x100($sp)
    ctx->pc = 0x25d218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 21));
    // 0x25d21c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x25d21cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d220: 0xafa60084  sw          $a2, 0x84($sp)
    ctx->pc = 0x25d220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 6));
    // 0x25d224: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x25d224u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d228: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x25d228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x25d22c: 0xffbe0130  sd          $fp, 0x130($sp)
    ctx->pc = 0x25d22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 30));
    // 0x25d230: 0xffb70120  sd          $s7, 0x120($sp)
    ctx->pc = 0x25d230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 23));
    // 0x25d234: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x25d234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x25d238: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x25d238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x25d23c: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x25d23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x25d240: 0xffb100c0  sd          $s1, 0xC0($sp)
    ctx->pc = 0x25d240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 17));
    // 0x25d244: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x25d244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x25d248: 0xe7b70168  swc1        $f23, 0x168($sp)
    ctx->pc = 0x25d248u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x25d24c: 0xe7b60160  swc1        $f22, 0x160($sp)
    ctx->pc = 0x25d24cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x25d250: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x25d250u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x25d254: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x25d254u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x25d258: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x25d258u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
    // 0x25d25c: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x25d25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x25d260: 0xae60001c  sw          $zero, 0x1C($s3)
    ctx->pc = 0x25d260u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
    // 0x25d264: 0xafa70088  sw          $a3, 0x88($sp)
    ctx->pc = 0x25d264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 7));
    // 0x25d268: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x25d268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x25d26c: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x25d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x25d270: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x25d270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x25d274: 0x18a002fe  blez        $a1, . + 4 + (0x2FE << 2)
    ctx->pc = 0x25D274u;
    {
        const bool branch_taken_0x25d274 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x25D278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D274u;
        // 0x25d278: 0xafa00090  sw          $zero, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d274) {
            ctx->pc = 0x25DE70u;
            goto label_25de70;
        }
    }
    ctx->pc = 0x25D27Cu;
    // 0x25d27c: 0xc7978358  lwc1        $f23, -0x7CA8($gp)
    ctx->pc = 0x25d27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x25d280: 0x241e000c  addiu       $fp, $zero, 0xC
    ctx->pc = 0x25d280u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25d284: 0x2419ffff  addiu       $t9, $zero, -0x1
    ctx->pc = 0x25d284u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_25d288:
    // 0x25d288: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x25d288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x25d28c: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x25d28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x25d290: 0x7e1018  mult        $v0, $v1, $fp
    ctx->pc = 0x25d290u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25d294: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x25d294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x25d298: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25d298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25d29c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x25d29cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25d2a0: 0x108002ea  beqz        $a0, . + 4 + (0x2EA << 2)
    ctx->pc = 0x25D2A0u;
    {
        const bool branch_taken_0x25d2a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D2A0u;
        // 0x25d2a4: 0x8faa0088  lw          $t2, 0x88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d2a0) {
            ctx->pc = 0x25DE4Cu;
            goto label_25de4c;
        }
    }
    ctx->pc = 0x25D2A8u;
    // 0x25d2a8: 0x8d4b001c  lw          $t3, 0x1C($t2)
    ctx->pc = 0x25d2a8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x25d2ac: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x25d2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x25d2b0: 0x19600298  blez        $t3, . + 4 + (0x298 << 2)
    ctx->pc = 0x25D2B0u;
    {
        const bool branch_taken_0x25d2b0 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x25D2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D2B0u;
        // 0x25d2b4: 0xafa00098  sw          $zero, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d2b0) {
            ctx->pc = 0x25DD14u;
            goto label_25dd14;
        }
    }
    ctx->pc = 0x25D2B8u;
    // 0x25d2b8: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x25d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x25d2bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25d2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25d2c0: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x25d2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x25d2c4: 0x0  nop
    ctx->pc = 0x25d2c4u;
    // NOP
label_25d2c8:
    // 0x25d2c8: 0x8faa0094  lw          $t2, 0x94($sp)
    ctx->pc = 0x25d2c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x25d2cc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x25d2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25d2d0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x25d2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x25d2d4: 0x1451018  mult        $v0, $t2, $a1
    ctx->pc = 0x25d2d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25d2d8: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x25d2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x25d2dc: 0x449021  addu        $s2, $v0, $a0
    ctx->pc = 0x25d2dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25d2e0: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x25d2e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25d2e4: 0x10600285  beqz        $v1, . + 4 + (0x285 << 2)
    ctx->pc = 0x25D2E4u;
    {
        const bool branch_taken_0x25d2e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D2E4u;
        // 0x25d2e8: 0x8fa2008c  lw          $v0, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d2e4) {
            ctx->pc = 0x25DCFCu;
            goto label_25dcfc;
        }
    }
    ctx->pc = 0x25D2ECu;
    // 0x25d2ec: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x25d2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x25d2f0: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x25d2f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x25d2f4: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x25d2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x25d2f8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x25d2f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25d2fc: 0x52120280  beql        $s0, $s2, . + 4 + (0x280 << 2)
    ctx->pc = 0x25D2FCu;
    {
        const bool branch_taken_0x25d2fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        if (branch_taken_0x25d2fc) {
            ctx->pc = 0x25D300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D2FCu;
            // 0x25d300: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DD00u;
            goto label_25dd00;
        }
    }
    ctx->pc = 0x25D304u;
    // 0x25d304: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x25d304u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x25d308: 0xc784835c  lwc1        $f4, -0x7CA4($gp)
    ctx->pc = 0x25d308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25d30c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25d30cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25d310: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25d310u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25d314: 0x0  nop
    ctx->pc = 0x25d314u;
    // NOP
    // 0x25d318: 0x0  nop
    ctx->pc = 0x25d318u;
    // NOP
    // 0x25d31c: 0x46170843  div.s       $f1, $f1, $f23
    ctx->pc = 0x25d31cu;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[23];
    // 0x25d320: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x25d320u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25d324: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x25d324u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25d328: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x25d328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25d32c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x25d32cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x25d330: 0x0  nop
    ctx->pc = 0x25d330u;
    // NOP
    // 0x25d334: 0x0  nop
    ctx->pc = 0x25d334u;
    // NOP
    // 0x25d338: 0x46171083  div.s       $f2, $f2, $f23
    ctx->pc = 0x25d338u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[23];
    // 0x25d33c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x25d33cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25d340: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x25d340u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x25d344: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x25d344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x25d348: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x25d348u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x25d34c: 0x0  nop
    ctx->pc = 0x25d34cu;
    // NOP
    // 0x25d350: 0x0  nop
    ctx->pc = 0x25d350u;
    // NOP
    // 0x25d354: 0x461718c3  div.s       $f3, $f3, $f23
    ctx->pc = 0x25d354u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[23];
    // 0x25d358: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x25d358u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x25d35c: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x25d35cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x25d360: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d364: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25d364u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25d368: 0x0  nop
    ctx->pc = 0x25d368u;
    // NOP
    // 0x25d36c: 0x0  nop
    ctx->pc = 0x25d36cu;
    // NOP
    // 0x25d370: 0x46170003  div.s       $f0, $f0, $f23
    ctx->pc = 0x25d370u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[23];
    // 0x25d374: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x25d374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x25d378: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x25d378u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25d37c: 0x86420004  lh          $v0, 0x4($s2)
    ctx->pc = 0x25d37cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x25d380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d384: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25d384u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25d388: 0x0  nop
    ctx->pc = 0x25d388u;
    // NOP
    // 0x25d38c: 0x0  nop
    ctx->pc = 0x25d38cu;
    // NOP
    // 0x25d390: 0x46170003  div.s       $f0, $f0, $f23
    ctx->pc = 0x25d390u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[23];
    // 0x25d394: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x25d394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x25d398: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x25d398u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x25d39c: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x25d39cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x25d3a0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x25d3a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x25d3a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d3a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d3a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25d3a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25d3ac: 0x0  nop
    ctx->pc = 0x25d3acu;
    // NOP
    // 0x25d3b0: 0x0  nop
    ctx->pc = 0x25d3b0u;
    // NOP
    // 0x25d3b4: 0x46170003  div.s       $f0, $f0, $f23
    ctx->pc = 0x25d3b4u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[23];
    // 0x25d3b8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x25d3b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x25d3bc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x25d3bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x25d3c0: 0x46012036  c.le.s      $f4, $f1
    ctx->pc = 0x25d3c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d3c4: 0x0  nop
    ctx->pc = 0x25d3c4u;
    // NOP
    // 0x25d3c8: 0x4500024b  bc1f        . + 4 + (0x24B << 2)
    ctx->pc = 0x25D3C8u;
    {
        const bool branch_taken_0x25d3c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25D3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D3C8u;
        // 0x25d3cc: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d3c8) {
            ctx->pc = 0x25DCF8u;
            goto label_25dcf8;
        }
    }
    ctx->pc = 0x25D3D0u;
    // 0x25d3d0: 0xafb90034  sw          $t9, 0x34($sp)
    ctx->pc = 0x25d3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 25));
    // 0x25d3d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25d3d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d3d8: 0xafb90030  sw          $t9, 0x30($sp)
    ctx->pc = 0x25d3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 25));
    // 0x25d3dc: 0xafb90024  sw          $t9, 0x24($sp)
    ctx->pc = 0x25d3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 25));
    // 0x25d3e0: 0xafb90020  sw          $t9, 0x20($sp)
    ctx->pc = 0x25d3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 25));
    // 0x25d3e4: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x25d3e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25d3e8: 0x10800054  beqz        $a0, . + 4 + (0x54 << 2)
    ctx->pc = 0x25D3E8u;
    {
        const bool branch_taken_0x25d3e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D3E8u;
        // 0x25d3ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d3e8) {
            ctx->pc = 0x25D53Cu;
            goto label_25d53c;
        }
    }
    ctx->pc = 0x25D3F0u;
    // 0x25d3f0: 0x320402d  daddu       $t0, $t9, $zero
    ctx->pc = 0x25d3f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d3f4: 0x0  nop
    ctx->pc = 0x25d3f4u;
    // NOP
label_25d3f8:
    // 0x25d3f8: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x25d3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x25d3fc: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x25d3fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d400: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x25d400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x25d404: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x25d404u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x25d408: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x25d408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x25d40c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25D40Cu;
    {
        const bool branch_taken_0x25d40c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D40Cu;
        // 0x25d410: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d40c) {
            ctx->pc = 0x25D418u;
            goto label_25d418;
        }
    }
    ctx->pc = 0x25D414u;
    // 0x25d414: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x25d414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_25d418:
    // 0x25d418: 0x5020006  bltzl       $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25D418u;
    {
        const bool branch_taken_0x25d418 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x25d418) {
            ctx->pc = 0x25D41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D418u;
            // 0x25d41c: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D434u;
            goto label_25d434;
        }
    }
    ctx->pc = 0x25D420u;
    // 0x25d420: 0x50c30004  beql        $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25D420u;
    {
        const bool branch_taken_0x25d420 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x25d420) {
            ctx->pc = 0x25D424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D420u;
            // 0x25d424: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D434u;
            goto label_25d434;
        }
    }
    ctx->pc = 0x25D428u;
    // 0x25d428: 0x54c2003f  bnel        $a2, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x25D428u;
    {
        const bool branch_taken_0x25d428 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x25d428) {
            ctx->pc = 0x25D42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D428u;
            // 0x25d42c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D528u;
            goto label_25d528;
        }
    }
    ctx->pc = 0x25D430u;
    // 0x25d430: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x25d430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_25d434:
    // 0x25d434: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25d434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d438: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x25d438u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25d43c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x25d43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x25d440: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x25d440u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25d444: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x25d444u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d448: 0x5e1818  mult        $v1, $v0, $fp
    ctx->pc = 0x25d448u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x25d44c: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x25d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x25d450: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x25d450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25d454: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x25d454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25d458: 0x1880002f  blez        $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x25D458u;
    {
        const bool branch_taken_0x25d458 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x25D45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D458u;
        // 0x25d45c: 0xc4430004  lwc1        $f3, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d458) {
            ctx->pc = 0x25D518u;
            goto label_25d518;
        }
    }
    ctx->pc = 0x25D460u;
    // 0x25d460: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x25d460u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x25d464: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x25d464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_25d468:
    // 0x25d468: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x25d468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x25d46c: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x25d46cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x25d470: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x25d470u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x25d474: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x25d474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x25d478: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x25D478u;
    {
        const bool branch_taken_0x25d478 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x25d478) {
            ctx->pc = 0x25D47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D478u;
            // 0x25d47c: 0x2522ffff  addiu       $v0, $t1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D480u;
            goto label_25d480;
        }
    }
    ctx->pc = 0x25D480u;
label_25d480:
    // 0x25d480: 0x5420006  bltzl       $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x25D480u;
    {
        const bool branch_taken_0x25d480 = (GPR_S32(ctx, 10) < 0);
        if (branch_taken_0x25d480) {
            ctx->pc = 0x25D484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D480u;
            // 0x25d484: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D49Cu;
            goto label_25d49c;
        }
    }
    ctx->pc = 0x25D488u;
    // 0x25d488: 0x50a30004  beql        $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25D488u;
    {
        const bool branch_taken_0x25d488 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x25d488) {
            ctx->pc = 0x25D48Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D488u;
            // 0x25d48c: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D49Cu;
            goto label_25d49c;
        }
    }
    ctx->pc = 0x25D490u;
    // 0x25d490: 0x54a2001d  bnel        $a1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x25D490u;
    {
        const bool branch_taken_0x25d490 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x25d490) {
            ctx->pc = 0x25D494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D490u;
            // 0x25d494: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D508u;
            goto label_25d508;
        }
    }
    ctx->pc = 0x25D498u;
    // 0x25d498: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x25d498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_25d49c:
    // 0x25d49c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x25d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x25d4a0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x25d4a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25d4a4: 0x7e1018  mult        $v0, $v1, $fp
    ctx->pc = 0x25d4a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25d4a8: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x25d4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x25d4ac: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25d4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d4b0: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x25d4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25d4b4: 0x46002032  c.eq.s      $f4, $f0
    ctx->pc = 0x25d4b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d4b8: 0x0  nop
    ctx->pc = 0x25d4b8u;
    // NOP
    // 0x25d4bc: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x25D4BCu;
    {
        const bool branch_taken_0x25d4bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25D4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D4BCu;
        // 0x25d4c0: 0xc4610004  lwc1        $f1, 0x4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d4bc) {
            ctx->pc = 0x25D504u;
            goto label_25d504;
        }
    }
    ctx->pc = 0x25D4C4u;
    // 0x25d4c4: 0x46011832  c.eq.s      $f3, $f1
    ctx->pc = 0x25d4c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d4c8: 0x0  nop
    ctx->pc = 0x25d4c8u;
    // NOP
    // 0x25d4cc: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x25D4CCu;
    {
        const bool branch_taken_0x25d4cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25d4cc) {
            ctx->pc = 0x25D4D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D4CCu;
            // 0x25d4d0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D508u;
            goto label_25d508;
        }
    }
    ctx->pc = 0x25D4D4u;
    // 0x25d4d4: 0x46022832  c.eq.s      $f5, $f2
    ctx->pc = 0x25d4d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d4d8: 0x0  nop
    ctx->pc = 0x25d4d8u;
    // NOP
    // 0x25d4dc: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x25D4DCu;
    {
        const bool branch_taken_0x25d4dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25d4dc) {
            ctx->pc = 0x25D4E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D4DCu;
            // 0x25d4e0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D508u;
            goto label_25d508;
        }
    }
    ctx->pc = 0x25D4E4u;
    // 0x25d4e4: 0x5430005  bgezl       $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x25D4E4u;
    {
        const bool branch_taken_0x25d4e4 = (GPR_S32(ctx, 10) >= 0);
        if (branch_taken_0x25d4e4) {
            ctx->pc = 0x25D4E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D4E4u;
            // 0x25d4e8: 0xafa50034  sw          $a1, 0x34($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D4FCu;
            goto label_25d4fc;
        }
    }
    ctx->pc = 0x25D4ECu;
    // 0x25d4ec: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x25d4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
    // 0x25d4f0: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x25d4f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d4f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25D4F4u;
    {
        const bool branch_taken_0x25d4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D4F4u;
        // 0x25d4f8: 0xafa60020  sw          $a2, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d4f4) {
            ctx->pc = 0x25D518u;
            goto label_25d518;
        }
    }
    ctx->pc = 0x25D4FCu;
label_25d4fc:
    // 0x25d4fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25D4FCu;
    {
        const bool branch_taken_0x25d4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D4FCu;
        // 0x25d500: 0xafa60030  sw          $a2, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d4fc) {
            ctx->pc = 0x25D518u;
            goto label_25d518;
        }
    }
    ctx->pc = 0x25D504u;
label_25d504:
    // 0x25d504: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x25d504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_25d508:
    // 0x25d508: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x25d508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d50c: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x25d50cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x25d510: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x25D510u;
    {
        const bool branch_taken_0x25d510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D510u;
        // 0x25d514: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d510) {
            ctx->pc = 0x25D468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25d468;
        }
    }
    ctx->pc = 0x25D518u;
label_25d518:
    // 0x25d518: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25d518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25d51c: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25D51Cu;
    {
        const bool branch_taken_0x25d51c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25D520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D51Cu;
        // 0x25d520: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d51c) {
            ctx->pc = 0x25D540u;
            goto label_25d540;
        }
    }
    ctx->pc = 0x25D524u;
    // 0x25d524: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x25d524u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_25d528:
    // 0x25d528: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x25d528u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x25d52c: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x25D52Cu;
    {
        const bool branch_taken_0x25d52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D52Cu;
        // 0x25d530: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d52c) {
            ctx->pc = 0x25D3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25d3f8;
        }
    }
    ctx->pc = 0x25D534u;
    // 0x25d534: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25D534u;
    {
        const bool branch_taken_0x25d534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d534) {
            ctx->pc = 0x25D540u;
            goto label_25d540;
        }
    }
    ctx->pc = 0x25D53Cu;
label_25d53c:
    // 0x25d53c: 0x320402d  daddu       $t0, $t9, $zero
    ctx->pc = 0x25d53cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_25d540:
    // 0x25d540: 0x50001ed  bltz        $t0, . + 4 + (0x1ED << 2)
    ctx->pc = 0x25D540u;
    {
        const bool branch_taken_0x25d540 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x25D544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D540u;
        // 0x25d544: 0x8fa70030  lw          $a3, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d540) {
            ctx->pc = 0x25DCF8u;
            goto label_25dcf8;
        }
    }
    ctx->pc = 0x25D548u;
    // 0x25d548: 0x4e00022  bltz        $a3, . + 4 + (0x22 << 2)
    ctx->pc = 0x25D548u;
    {
        const bool branch_taken_0x25d548 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x25D54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D548u;
        // 0x25d54c: 0x25040001  addiu       $a0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d548) {
            ctx->pc = 0x25D5D4u;
            goto label_25d5d4;
        }
    }
    ctx->pc = 0x25D550u;
    // 0x25d550: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x25d550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25d554: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25d554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d558: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x25d558u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25d55c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x25d55cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25d560: 0x8fa90024  lw          $t1, 0x24($sp)
    ctx->pc = 0x25d560u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x25d564: 0x82300b  movn        $a2, $a0, $v0
    ctx->pc = 0x25d564u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x25d568: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x25d568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d56c: 0xe61826  xor         $v1, $a3, $a2
    ctx->pc = 0x25d56cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 6));
    // 0x25d570: 0x2526ffff  addiu       $a2, $t1, -0x1
    ctx->pc = 0x25d570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x25d574: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D574u;
    {
        const bool branch_taken_0x25d574 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x25D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D574u;
        // 0x25d578: 0x3280a  movz        $a1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d574) {
            ctx->pc = 0x25D584u;
            goto label_25d584;
        }
    }
    ctx->pc = 0x25D57Cu;
    // 0x25d57c: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x25d57cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25d580: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x25d580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_25d584:
    // 0x25d584: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x25d584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x25d588: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x25d588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d58c: 0x661026  xor         $v0, $v1, $a2
    ctx->pc = 0x25d58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x25d590: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x25D590u;
    {
        const bool branch_taken_0x25d590 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D590u;
        // 0x25d594: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d590) {
            ctx->pc = 0x25D5B8u;
            goto label_25d5b8;
        }
    }
    ctx->pc = 0x25D598u;
    // 0x25d598: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x25D598u;
    {
        const bool branch_taken_0x25d598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d598) {
            ctx->pc = 0x25D59Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D598u;
            // 0x25d59c: 0xafb90034  sw          $t9, 0x34($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 25));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D5C4u;
            goto label_25d5c4;
        }
    }
    ctx->pc = 0x25D5A0u;
    // 0x25d5a0: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x25d5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x25d5a4: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x25d5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x25d5a8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x25d5a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d5ac: 0xafa90034  sw          $t1, 0x34($sp)
    ctx->pc = 0x25d5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 9));
    // 0x25d5b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25D5B0u;
    {
        const bool branch_taken_0x25d5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D5B0u;
        // 0x25d5b4: 0xafa70020  sw          $a3, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d5b0) {
            ctx->pc = 0x25D5D4u;
            goto label_25d5d4;
        }
    }
    ctx->pc = 0x25D5B8u;
label_25d5b8:
    // 0x25d5b8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25D5B8u;
    {
        const bool branch_taken_0x25d5b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d5b8) {
            ctx->pc = 0x25D5D4u;
            goto label_25d5d4;
        }
    }
    ctx->pc = 0x25D5C0u;
    // 0x25d5c0: 0xafb90034  sw          $t9, 0x34($sp)
    ctx->pc = 0x25d5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 25));
label_25d5c4:
    // 0x25d5c4: 0x320402d  daddu       $t0, $t9, $zero
    ctx->pc = 0x25d5c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d5c8: 0xafb90030  sw          $t9, 0x30($sp)
    ctx->pc = 0x25d5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 25));
    // 0x25d5cc: 0xafb90024  sw          $t9, 0x24($sp)
    ctx->pc = 0x25d5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 25));
    // 0x25d5d0: 0xafb90020  sw          $t9, 0x20($sp)
    ctx->pc = 0x25d5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 25));
label_25d5d4:
    // 0x25d5d4: 0x50001c8  bltz        $t0, . + 4 + (0x1C8 << 2)
    ctx->pc = 0x25D5D4u;
    {
        const bool branch_taken_0x25d5d4 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x25D5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D5D4u;
        // 0x25d5d8: 0x8fad0030  lw          $t5, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d5d4) {
            ctx->pc = 0x25DCF8u;
            goto label_25dcf8;
        }
    }
    ctx->pc = 0x25D5DCu;
    // 0x25d5dc: 0x5a001c6  bltz        $t5, . + 4 + (0x1C6 << 2)
    ctx->pc = 0x25D5DCu;
    {
        const bool branch_taken_0x25d5dc = (GPR_S32(ctx, 13) < 0);
        ctx->pc = 0x25D5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D5DCu;
        // 0x25d5e0: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d5dc) {
            ctx->pc = 0x25DCF8u;
            goto label_25dcf8;
        }
    }
    ctx->pc = 0x25D5E4u;
    // 0x25d5e4: 0x25060001  addiu       $a2, $t0, 0x1
    ctx->pc = 0x25d5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x25d5e8: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x25d5e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25d5ec: 0x2507ffff  addiu       $a3, $t0, -0x1
    ctx->pc = 0x25d5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x25d5f0: 0x8e4b0008  lw          $t3, 0x8($s2)
    ctx->pc = 0x25d5f0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x25d5f4: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x25d5f4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d5f8: 0x1281821  addu        $v1, $t1, $t0
    ctx->pc = 0x25d5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x25d5fc: 0x920c0000  lbu         $t4, 0x0($s0)
    ctx->pc = 0x25d5fcu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25d600: 0x16f1021  addu        $v0, $t3, $t7
    ctx->pc = 0x25d600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x25d604: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x25d604u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25d608: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x25d608u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25d60c: 0xcc182a  slt         $v1, $a2, $t4
    ctx->pc = 0x25d60cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x25d610: 0x9e1018  mult        $v0, $a0, $fp
    ctx->pc = 0x25d610u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25d614: 0x555021  addu        $t2, $v0, $s5
    ctx->pc = 0x25d614u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x25d618: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25d618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d61c: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x25d61cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x25d620: 0xbe1818  mult        $v1, $a1, $fp
    ctx->pc = 0x25d620u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x25d624: 0x4e10002  bgez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x25D624u;
    {
        const bool branch_taken_0x25d624 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x25D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D624u;
        // 0x25d628: 0x758821  addu        $s1, $v1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d624) {
            ctx->pc = 0x25D630u;
            goto label_25d630;
        }
    }
    ctx->pc = 0x25D62Cu;
    // 0x25d62c: 0x2587ffff  addiu       $a3, $t4, -0x1
    ctx->pc = 0x25d62cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_25d630:
    // 0x25d630: 0x10ed0002  beq         $a3, $t5, . + 4 + (0x2 << 2)
    ctx->pc = 0x25D630u;
    {
        const bool branch_taken_0x25d630 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 13));
        ctx->pc = 0x25D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D630u;
        // 0x25d634: 0x1221021  addu        $v0, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d630) {
            ctx->pc = 0x25D63Cu;
            goto label_25d63c;
        }
    }
    ctx->pc = 0x25D638u;
    // 0x25d638: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x25d638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_25d63c:
    // 0x25d63c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x25d63cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25d640: 0x7e1018  mult        $v0, $v1, $fp
    ctx->pc = 0x25d640u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25d644: 0x55c021  addu        $t8, $v0, $s5
    ctx->pc = 0x25d644u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x25d648: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x25d648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x25d64c: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x25d64cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25d650: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x25d650u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d654: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25d654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25d658: 0x25c7ffff  addiu       $a3, $t6, -0x1
    ctx->pc = 0x25d658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x25d65c: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x25d65cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x25d660: 0x4e10002  bgez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x25D660u;
    {
        const bool branch_taken_0x25d660 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x25D664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D660u;
        // 0x25d664: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d660) {
            ctx->pc = 0x25D66Cu;
            goto label_25d66c;
        }
    }
    ctx->pc = 0x25D668u;
    // 0x25d668: 0x24a7ffff  addiu       $a3, $a1, -0x1
    ctx->pc = 0x25d668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_25d66c:
    // 0x25d66c: 0x10ef0002  beq         $a3, $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x25D66Cu;
    {
        const bool branch_taken_0x25d66c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 15));
        ctx->pc = 0x25D670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D66Cu;
        // 0x25d670: 0x1621021  addu        $v0, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d66c) {
            ctx->pc = 0x25D678u;
            goto label_25d678;
        }
    }
    ctx->pc = 0x25D674u;
    // 0x25d674: 0x1671021  addu        $v0, $t3, $a3
    ctx->pc = 0x25d674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
label_25d678:
    // 0x25d678: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x25d678u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25d67c: 0x7e1018  mult        $v0, $v1, $fp
    ctx->pc = 0x25d67cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25d680: 0x553021  addu        $a2, $v0, $s5
    ctx->pc = 0x25d680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x25d684: 0x25a20001  addiu       $v0, $t5, 0x1
    ctx->pc = 0x25d684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x25d688: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x25d688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25d68c: 0x4c182a  slt         $v1, $v0, $t4
    ctx->pc = 0x25d68cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x25d690: 0x2487ffff  addiu       $a3, $a0, -0x1
    ctx->pc = 0x25d690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x25d694: 0x4e10002  bgez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x25D694u;
    {
        const bool branch_taken_0x25d694 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x25D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D694u;
        // 0x25d698: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d694) {
            ctx->pc = 0x25D6A0u;
            goto label_25d6a0;
        }
    }
    ctx->pc = 0x25D69Cu;
    // 0x25d69c: 0x2587ffff  addiu       $a3, $t4, -0x1
    ctx->pc = 0x25d69cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_25d6a0:
    // 0x25d6a0: 0x54e80002  bnel        $a3, $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25D6A0u;
    {
        const bool branch_taken_0x25d6a0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x25d6a0) {
            ctx->pc = 0x25D6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D6A0u;
            // 0x25d6a4: 0x1271021  addu        $v0, $t1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D6ACu;
            goto label_25d6ac;
        }
    }
    ctx->pc = 0x25D6A8u;
    // 0x25d6a8: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x25d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_25d6ac:
    // 0x25d6ac: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x25d6acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25d6b0: 0x7e1018  mult        $v0, $v1, $fp
    ctx->pc = 0x25d6b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25d6b4: 0x55b821  addu        $s7, $v0, $s5
    ctx->pc = 0x25d6b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x25d6b8: 0x25e20001  addiu       $v0, $t7, 0x1
    ctx->pc = 0x25d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x25d6bc: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x25d6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x25d6c0: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x25d6c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x25d6c4: 0x2487ffff  addiu       $a3, $a0, -0x1
    ctx->pc = 0x25d6c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x25d6c8: 0x4e10002  bgez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x25D6C8u;
    {
        const bool branch_taken_0x25d6c8 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x25D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D6C8u;
        // 0x25d6cc: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d6c8) {
            ctx->pc = 0x25D6D4u;
            goto label_25d6d4;
        }
    }
    ctx->pc = 0x25D6D0u;
    // 0x25d6d0: 0x24a7ffff  addiu       $a3, $a1, -0x1
    ctx->pc = 0x25d6d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_25d6d4:
    // 0x25d6d4: 0x54ee0002  bnel        $a3, $t6, . + 4 + (0x2 << 2)
    ctx->pc = 0x25D6D4u;
    {
        const bool branch_taken_0x25d6d4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 14));
        if (branch_taken_0x25d6d4) {
            ctx->pc = 0x25D6D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D6D4u;
            // 0x25d6d8: 0x1671021  addu        $v0, $t3, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D6E0u;
            goto label_25d6e0;
        }
    }
    ctx->pc = 0x25D6DCu;
    // 0x25d6dc: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x25d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_25d6e0:
    // 0x25d6e0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x25d6e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25d6e4: 0x7e1018  mult        $v0, $v1, $fp
    ctx->pc = 0x25d6e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25d6e8: 0x55b021  addu        $s6, $v0, $s5
    ctx->pc = 0x25d6e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x25d6ec: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x25d6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d6f0: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x25d6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25d6f4: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x25d6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d6f8: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x25d6f8u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x25d6fc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x25d6fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x25d700: 0xc5430008  lwc1        $f3, 0x8($t2)
    ctx->pc = 0x25d700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25d704: 0x46000946  mov.s       $f5, $f1
    ctx->pc = 0x25d704u;
    ctx->f[5] = FPU_MOV_S(ctx->f[1]);
    // 0x25d708: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x25d708u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x25d70c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x25d70cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x25d710: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x25d710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d714: 0xc5460008  lwc1        $f6, 0x8($t2)
    ctx->pc = 0x25d714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x25d718: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25d718u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25d71c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x25d71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x25d720: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x25d720u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x25d724: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x25d724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d728: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x25d728u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x25d72c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x25d72cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x25d730: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x25d730u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x25d734: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x25d734u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x25d738: 0xc7000000  lwc1        $f0, 0x0($t8)
    ctx->pc = 0x25d738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d73c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x25d73cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x25d740: 0x46011300  add.s       $f12, $f2, $f1
    ctx->pc = 0x25d740u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x25d744: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x25d744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25d748: 0x0  nop
    ctx->pc = 0x25d748u;
    // NOP
    // 0x25d74c: 0x0  nop
    ctx->pc = 0x25d74cu;
    // NOP
    // 0x25d750: 0x460c00c4  c1          0xC00C4
    ctx->pc = 0x25d750u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[12]);
    // 0x25d754: 0xc7010004  lwc1        $f1, 0x4($t8)
    ctx->pc = 0x25d754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d758: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x25d758u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x25d75c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x25d75cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x25d760: 0x46031832  c.eq.s      $f3, $f3
    ctx->pc = 0x25d760u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d764: 0xc7000008  lwc1        $f0, 0x8($t8)
    ctx->pc = 0x25d764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d768: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x25d768u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x25d76c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x25D76Cu;
    {
        const bool branch_taken_0x25d76c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D76Cu;
        // 0x25d770: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d76c) {
            ctx->pc = 0x25D784u;
            goto label_25d784;
        }
    }
    ctx->pc = 0x25D774u;
    // 0x25d774: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x25D774u;
    SET_GPR_U32(ctx, 31, 0x25D77Cu);
    ctx->pc = 0x25D778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D774u;
    // 0x25d778: 0x7fb900a0  sq          $t9, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x25D774u, 0x25D77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D77Cu;
label_25d77c:
    // 0x25d77c: 0x7bb900a0  lq          $t9, 0xA0($sp)
    ctx->pc = 0x25d77cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25d780: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x25d780u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_25d784:
    // 0x25d784: 0xc7a90050  lwc1        $f9, 0x50($sp)
    ctx->pc = 0x25d784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x25d788: 0xc7a80054  lwc1        $f8, 0x54($sp)
    ctx->pc = 0x25d788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x25d78c: 0x46094882  mul.s       $f2, $f9, $f9
    ctx->pc = 0x25d78cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x25d790: 0xc7a70058  lwc1        $f7, 0x58($sp)
    ctx->pc = 0x25d790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x25d794: 0x46084142  mul.s       $f5, $f8, $f8
    ctx->pc = 0x25d794u;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x25d798: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25d798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25d79c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25d79cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25d7a0: 0x46073982  mul.s       $f6, $f7, $f7
    ctx->pc = 0x25d7a0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x25d7a4: 0xc7a40040  lwc1        $f4, 0x40($sp)
    ctx->pc = 0x25d7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25d7a8: 0x0  nop
    ctx->pc = 0x25d7a8u;
    // NOP
    // 0x25d7ac: 0x0  nop
    ctx->pc = 0x25d7acu;
    // NOP
    // 0x25d7b0: 0x4603a043  div.s       $f1, $f20, $f3
    ctx->pc = 0x25d7b0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[1] = ctx->f[20] / ctx->f[3];
    // 0x25d7b4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x25d7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d7b8: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x25d7b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x25d7bc: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x25d7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25d7c0: 0x46061300  add.s       $f12, $f2, $f6
    ctx->pc = 0x25d7c0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x25d7c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25d7c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25d7c8: 0x0  nop
    ctx->pc = 0x25d7c8u;
    // NOP
    // 0x25d7cc: 0x0  nop
    ctx->pc = 0x25d7ccu;
    // NOP
    // 0x25d7d0: 0x460c0144  c1          0xC0144
    ctx->pc = 0x25d7d0u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[12]);
    // 0x25d7d4: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x25d7d4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x25d7d8: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x25d7d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x25d7dc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x25d7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x25d7e0: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x25d7e0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x25d7e4: 0x46052832  c.eq.s      $f5, $f5
    ctx->pc = 0x25d7e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d7e8: 0x0  nop
    ctx->pc = 0x25d7e8u;
    // NOP
    // 0x25d7ec: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x25D7ECu;
    {
        const bool branch_taken_0x25d7ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25D7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D7ECu;
        // 0x25d7f0: 0xe7a30044  swc1        $f3, 0x44($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d7ec) {
            ctx->pc = 0x25D810u;
            goto label_25d810;
        }
    }
    ctx->pc = 0x25D7F4u;
    // 0x25d7f4: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x25D7F4u;
    SET_GPR_U32(ctx, 31, 0x25D7FCu);
    ctx->pc = 0x25D7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D7F4u;
    // 0x25d7f8: 0x7fb900a0  sq          $t9, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x25D7F4u, 0x25D7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D7FCu;
label_25d7fc:
    // 0x25d7fc: 0xc7a90050  lwc1        $f9, 0x50($sp)
    ctx->pc = 0x25d7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x25d800: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x25d800u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x25d804: 0xc7a80054  lwc1        $f8, 0x54($sp)
    ctx->pc = 0x25d804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x25d808: 0xc7a70058  lwc1        $f7, 0x58($sp)
    ctx->pc = 0x25d808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x25d80c: 0x7bb900a0  lq          $t9, 0xA0($sp)
    ctx->pc = 0x25d80cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_25d810:
    // 0x25d810: 0x0  nop
    ctx->pc = 0x25d810u;
    // NOP
    // 0x25d814: 0x0  nop
    ctx->pc = 0x25d814u;
    // NOP
    // 0x25d818: 0x4605a003  div.s       $f0, $f20, $f5
    ctx->pc = 0x25d818u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[5];
    // 0x25d81c: 0xc7aa0040  lwc1        $f10, 0x40($sp)
    ctx->pc = 0x25d81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x25d820: 0xc7ab0044  lwc1        $f11, 0x44($sp)
    ctx->pc = 0x25d820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x25d824: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x25d824u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25d828: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x25d828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25d82c: 0xc7968360  lwc1        $f22, -0x7CA0($gp)
    ctx->pc = 0x25d82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25d830: 0x46003982  mul.s       $f6, $f7, $f0
    ctx->pc = 0x25d830u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x25d834: 0x46004142  mul.s       $f5, $f8, $f0
    ctx->pc = 0x25d834u;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x25d838: 0x460049c2  mul.s       $f7, $f9, $f0
    ctx->pc = 0x25d838u;
    ctx->f[7] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x25d83c: 0x46062082  mul.s       $f2, $f4, $f6
    ctx->pc = 0x25d83cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x25d840: 0xe7a60058  swc1        $f6, 0x58($sp)
    ctx->pc = 0x25d840u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x25d844: 0x46055842  mul.s       $f1, $f11, $f5
    ctx->pc = 0x25d844u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x25d848: 0xe7a50054  swc1        $f5, 0x54($sp)
    ctx->pc = 0x25d848u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x25d84c: 0x46075002  mul.s       $f0, $f10, $f7
    ctx->pc = 0x25d84cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
    // 0x25d850: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25d850u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25d854: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x25d854u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x25d858: 0x46160036  c.le.s      $f0, $f22
    ctx->pc = 0x25d858u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d85c: 0x0  nop
    ctx->pc = 0x25d85cu;
    // NOP
    // 0x25d860: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x25D860u;
    {
        const bool branch_taken_0x25d860 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D860u;
        // 0x25d864: 0xe7a70050  swc1        $f7, 0x50($sp) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d860) {
            ctx->pc = 0x25D86Cu;
            goto label_25d86c;
        }
    }
    ctx->pc = 0x25D868u;
    // 0x25d868: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x25d868u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d86c:
    // 0x25d86c: 0x46072042  mul.s       $f1, $f4, $f7
    ctx->pc = 0x25d86cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x25d870: 0x460650c2  mul.s       $f3, $f10, $f6
    ctx->pc = 0x25d870u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
    // 0x25d874: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x25d874u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x25d878: 0x46065802  mul.s       $f0, $f11, $f6
    ctx->pc = 0x25d878u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x25d87c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x25d87cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x25d880: 0x46055082  mul.s       $f2, $f10, $f5
    ctx->pc = 0x25d880u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
    // 0x25d884: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x25d884u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x25d888: 0x46075942  mul.s       $f5, $f11, $f7
    ctx->pc = 0x25d888u;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[7]);
    // 0x25d88c: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x25d88cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x25d890: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x25d890u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x25d894: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x25d894u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x25d898: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x25d898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x25d89c: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x25d89cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x25d8a0: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x25d8a0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x25d8a4: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x25d8a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x25d8a8: 0x46001b00  add.s       $f12, $f3, $f0
    ctx->pc = 0x25d8a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x25d8ac: 0x0  nop
    ctx->pc = 0x25d8acu;
    // NOP
    // 0x25d8b0: 0x0  nop
    ctx->pc = 0x25d8b0u;
    // NOP
    // 0x25d8b4: 0x460c0004  c1          0xC0004
    ctx->pc = 0x25d8b4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x25d8b8: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x25d8b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d8bc: 0x0  nop
    ctx->pc = 0x25d8bcu;
    // NOP
    // 0x25d8c0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x25D8C0u;
    {
        const bool branch_taken_0x25d8c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25D8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D8C0u;
        // 0x25d8c4: 0xe7a20068  swc1        $f2, 0x68($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d8c0) {
            ctx->pc = 0x25D8D4u;
            goto label_25d8d4;
        }
    }
    ctx->pc = 0x25D8C8u;
    // 0x25d8c8: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x25D8C8u;
    SET_GPR_U32(ctx, 31, 0x25D8D0u);
    ctx->pc = 0x25D8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D8C8u;
    // 0x25d8cc: 0x7fb900a0  sq          $t9, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x25D8C8u, 0x25D8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D8D0u;
label_25d8d0:
    // 0x25d8d0: 0x7bb900a0  lq          $t9, 0xA0($sp)
    ctx->pc = 0x25d8d0u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_25d8d4:
    // 0x25d8d4: 0x0  nop
    ctx->pc = 0x25d8d4u;
    // NOP
    // 0x25d8d8: 0x0  nop
    ctx->pc = 0x25d8d8u;
    // NOP
    // 0x25d8dc: 0x4600a0c3  div.s       $f3, $f20, $f0
    ctx->pc = 0x25d8dcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[3] = ctx->f[20] / ctx->f[0];
    // 0x25d8e0: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x25d8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d8e4: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x25d8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25d8e8: 0xc7a40068  lwc1        $f4, 0x68($sp)
    ctx->pc = 0x25d8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25d8ec: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x25d8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d8f0: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x25d8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25d8f4: 0xc7a60008  lwc1        $f6, 0x8($sp)
    ctx->pc = 0x25d8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x25d8f8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x25d8f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x25d8fc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x25d8fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x25d900: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x25d900u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x25d904: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25d904u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25d908: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x25d908u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x25d90c: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x25d90cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x25d910: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x25d910u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x25d914: 0x46043182  mul.s       $f6, $f6, $f4
    ctx->pc = 0x25d914u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x25d918: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x25d918u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x25d91c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x25d91cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x25d920: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x25d920u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x25d924: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x25d924u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d928: 0x0  nop
    ctx->pc = 0x25d928u;
    // NOP
    // 0x25d92c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x25D92Cu;
    {
        const bool branch_taken_0x25d92c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25D930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D92Cu;
        // 0x25d930: 0xe7a40068  swc1        $f4, 0x68($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d92c) {
            ctx->pc = 0x25D93Cu;
            goto label_25d93c;
        }
    }
    ctx->pc = 0x25D934u;
    // 0x25d934: 0x128000ed  beqz        $s4, . + 4 + (0xED << 2)
    ctx->pc = 0x25D934u;
    {
        const bool branch_taken_0x25d934 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D934u;
        // 0x25d938: 0x8fa30088  lw          $v1, 0x88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d934) {
            ctx->pc = 0x25DCECu;
            goto label_25dcec;
        }
    }
    ctx->pc = 0x25D93Cu;
label_25d93c:
    // 0x25d93c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x25d93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d940: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x25d940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25d944: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x25d944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d948: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x25d948u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x25d94c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x25d94cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x25d950: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x25d950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25d954: 0x46000946  mov.s       $f5, $f1
    ctx->pc = 0x25d954u;
    ctx->f[5] = FPU_MOV_S(ctx->f[1]);
    // 0x25d958: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x25d958u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x25d95c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x25d95cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x25d960: 0xc6e00004  lwc1        $f0, 0x4($s7)
    ctx->pc = 0x25d960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d964: 0xc6260008  lwc1        $f6, 0x8($s1)
    ctx->pc = 0x25d964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x25d968: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25d968u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25d96c: 0xafb40070  sw          $s4, 0x70($sp)
    ctx->pc = 0x25d96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 20));
    // 0x25d970: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x25d970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x25d974: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x25d974u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x25d978: 0xc6e10008  lwc1        $f1, 0x8($s7)
    ctx->pc = 0x25d978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d97c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x25d97cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x25d980: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x25d980u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x25d984: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x25d984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x25d988: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x25d988u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x25d98c: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x25d98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d990: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x25d990u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x25d994: 0x46011300  add.s       $f12, $f2, $f1
    ctx->pc = 0x25d994u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x25d998: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x25d998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25d99c: 0x0  nop
    ctx->pc = 0x25d99cu;
    // NOP
    // 0x25d9a0: 0x0  nop
    ctx->pc = 0x25d9a0u;
    // NOP
    // 0x25d9a4: 0x460c00c4  c1          0xC00C4
    ctx->pc = 0x25d9a4u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[12]);
    // 0x25d9a8: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x25d9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d9ac: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x25d9acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x25d9b0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x25d9b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x25d9b4: 0x46031832  c.eq.s      $f3, $f3
    ctx->pc = 0x25d9b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d9b8: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x25d9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d9bc: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x25d9bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x25d9c0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x25D9C0u;
    {
        const bool branch_taken_0x25d9c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25D9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D9C0u;
        // 0x25d9c4: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d9c0) {
            ctx->pc = 0x25D9D8u;
            goto label_25d9d8;
        }
    }
    ctx->pc = 0x25D9C8u;
    // 0x25d9c8: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x25D9C8u;
    SET_GPR_U32(ctx, 31, 0x25D9D0u);
    ctx->pc = 0x25D9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D9C8u;
    // 0x25d9cc: 0x7fb900a0  sq          $t9, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x25D9C8u, 0x25D9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D9D0u;
label_25d9d0:
    // 0x25d9d0: 0x7bb900a0  lq          $t9, 0xA0($sp)
    ctx->pc = 0x25d9d0u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25d9d4: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x25d9d4u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_25d9d8:
    // 0x25d9d8: 0xc7a90050  lwc1        $f9, 0x50($sp)
    ctx->pc = 0x25d9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x25d9dc: 0x0  nop
    ctx->pc = 0x25d9dcu;
    // NOP
    // 0x25d9e0: 0x0  nop
    ctx->pc = 0x25d9e0u;
    // NOP
    // 0x25d9e4: 0x4603a103  div.s       $f4, $f20, $f3
    ctx->pc = 0x25d9e4u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[4] = ctx->f[20] / ctx->f[3];
    // 0x25d9e8: 0xc7a80054  lwc1        $f8, 0x54($sp)
    ctx->pc = 0x25d9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x25d9ec: 0x46094842  mul.s       $f1, $f9, $f9
    ctx->pc = 0x25d9ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x25d9f0: 0xc7a70058  lwc1        $f7, 0x58($sp)
    ctx->pc = 0x25d9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x25d9f4: 0x46084142  mul.s       $f5, $f8, $f8
    ctx->pc = 0x25d9f4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x25d9f8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x25d9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d9fc: 0x46073982  mul.s       $f6, $f7, $f7
    ctx->pc = 0x25d9fcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x25da00: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x25da00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25da04: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x25da04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25da08: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x25da08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x25da0c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x25da0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x25da10: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x25da10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x25da14: 0x46060b00  add.s       $f12, $f1, $f6
    ctx->pc = 0x25da14u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x25da18: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x25da18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x25da1c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x25da1cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x25da20: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x25da20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x25da24: 0x0  nop
    ctx->pc = 0x25da24u;
    // NOP
    // 0x25da28: 0x0  nop
    ctx->pc = 0x25da28u;
    // NOP
    // 0x25da2c: 0x460c0004  c1          0xC0004
    ctx->pc = 0x25da2cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x25da30: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x25da30u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25da34: 0x0  nop
    ctx->pc = 0x25da34u;
    // NOP
    // 0x25da38: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x25DA38u;
    {
        const bool branch_taken_0x25da38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25DA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA38u;
        // 0x25da3c: 0xe7a30044  swc1        $f3, 0x44($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25da38) {
            ctx->pc = 0x25DA58u;
            goto label_25da58;
        }
    }
    ctx->pc = 0x25DA40u;
    // 0x25da40: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x25DA40u;
    SET_GPR_U32(ctx, 31, 0x25DA48u);
    ctx->pc = 0x25DA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DA40u;
    // 0x25da44: 0x7fb900a0  sq          $t9, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x25DA40u, 0x25DA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DA48u;
label_25da48:
    // 0x25da48: 0xc7a90050  lwc1        $f9, 0x50($sp)
    ctx->pc = 0x25da48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x25da4c: 0xc7a80054  lwc1        $f8, 0x54($sp)
    ctx->pc = 0x25da4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x25da50: 0xc7a70058  lwc1        $f7, 0x58($sp)
    ctx->pc = 0x25da50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x25da54: 0x7bb900a0  lq          $t9, 0xA0($sp)
    ctx->pc = 0x25da54u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_25da58:
    // 0x25da58: 0x0  nop
    ctx->pc = 0x25da58u;
    // NOP
    // 0x25da5c: 0x0  nop
    ctx->pc = 0x25da5cu;
    // NOP
    // 0x25da60: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x25da60u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x25da64: 0xc7aa0040  lwc1        $f10, 0x40($sp)
    ctx->pc = 0x25da64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x25da68: 0xc7ab0044  lwc1        $f11, 0x44($sp)
    ctx->pc = 0x25da68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x25da6c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x25da6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25da70: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x25da70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25da74: 0x46003982  mul.s       $f6, $f7, $f0
    ctx->pc = 0x25da74u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x25da78: 0x46004142  mul.s       $f5, $f8, $f0
    ctx->pc = 0x25da78u;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x25da7c: 0x460049c2  mul.s       $f7, $f9, $f0
    ctx->pc = 0x25da7cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x25da80: 0x46062082  mul.s       $f2, $f4, $f6
    ctx->pc = 0x25da80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x25da84: 0xe7a60058  swc1        $f6, 0x58($sp)
    ctx->pc = 0x25da84u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x25da88: 0x46055842  mul.s       $f1, $f11, $f5
    ctx->pc = 0x25da88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x25da8c: 0xe7a50054  swc1        $f5, 0x54($sp)
    ctx->pc = 0x25da8cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x25da90: 0x46075002  mul.s       $f0, $f10, $f7
    ctx->pc = 0x25da90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
    // 0x25da94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25da94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25da98: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x25da98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x25da9c: 0x46160036  c.le.s      $f0, $f22
    ctx->pc = 0x25da9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25daa0: 0x0  nop
    ctx->pc = 0x25daa0u;
    // NOP
    // 0x25daa4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x25DAA4u;
    {
        const bool branch_taken_0x25daa4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25DAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DAA4u;
        // 0x25daa8: 0xe7a70050  swc1        $f7, 0x50($sp) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25daa4) {
            ctx->pc = 0x25DAB0u;
            goto label_25dab0;
        }
    }
    ctx->pc = 0x25DAACu;
    // 0x25daac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x25daacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25dab0:
    // 0x25dab0: 0x46072042  mul.s       $f1, $f4, $f7
    ctx->pc = 0x25dab0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x25dab4: 0x460650c2  mul.s       $f3, $f10, $f6
    ctx->pc = 0x25dab4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
    // 0x25dab8: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x25dab8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x25dabc: 0x46065802  mul.s       $f0, $f11, $f6
    ctx->pc = 0x25dabcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x25dac0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x25dac0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x25dac4: 0x46055082  mul.s       $f2, $f10, $f5
    ctx->pc = 0x25dac4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
    // 0x25dac8: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x25dac8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x25dacc: 0x46075942  mul.s       $f5, $f11, $f7
    ctx->pc = 0x25daccu;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[7]);
    // 0x25dad0: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x25dad0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x25dad4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x25dad4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x25dad8: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x25dad8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x25dadc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x25dadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x25dae0: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x25dae0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x25dae4: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x25dae4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x25dae8: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x25dae8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x25daec: 0x46001b00  add.s       $f12, $f3, $f0
    ctx->pc = 0x25daecu;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x25daf0: 0x0  nop
    ctx->pc = 0x25daf0u;
    // NOP
    // 0x25daf4: 0x0  nop
    ctx->pc = 0x25daf4u;
    // NOP
    // 0x25daf8: 0x460c0004  c1          0xC0004
    ctx->pc = 0x25daf8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x25dafc: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x25dafcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25db00: 0x0  nop
    ctx->pc = 0x25db00u;
    // NOP
    // 0x25db04: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x25DB04u;
    {
        const bool branch_taken_0x25db04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25DB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB04u;
        // 0x25db08: 0xe7a20068  swc1        $f2, 0x68($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db04) {
            ctx->pc = 0x25DB18u;
            goto label_25db18;
        }
    }
    ctx->pc = 0x25DB0Cu;
    // 0x25db0c: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x25DB0Cu;
    SET_GPR_U32(ctx, 31, 0x25DB14u);
    ctx->pc = 0x25DB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DB0Cu;
    // 0x25db10: 0x7fb900a0  sq          $t9, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x25DB0Cu, 0x25DB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DB14u;
label_25db14:
    // 0x25db14: 0x7bb900a0  lq          $t9, 0xA0($sp)
    ctx->pc = 0x25db14u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_25db18:
    // 0x25db18: 0x0  nop
    ctx->pc = 0x25db18u;
    // NOP
    // 0x25db1c: 0x0  nop
    ctx->pc = 0x25db1cu;
    // NOP
    // 0x25db20: 0x4600a0c3  div.s       $f3, $f20, $f0
    ctx->pc = 0x25db20u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[3] = ctx->f[20] / ctx->f[0];
    // 0x25db24: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x25db24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25db28: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x25db28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25db2c: 0xc7a40068  lwc1        $f4, 0x68($sp)
    ctx->pc = 0x25db2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25db30: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x25db30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25db34: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x25db34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25db38: 0xc7a60008  lwc1        $f6, 0x8($sp)
    ctx->pc = 0x25db38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x25db3c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x25db3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x25db40: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x25db40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x25db44: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x25db44u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x25db48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25db48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25db4c: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x25db4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x25db50: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x25db50u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x25db54: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x25db54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x25db58: 0x46043182  mul.s       $f6, $f6, $f4
    ctx->pc = 0x25db58u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x25db5c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x25db5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x25db60: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x25db60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x25db64: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x25db64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25db68: 0x0  nop
    ctx->pc = 0x25db68u;
    // NOP
    // 0x25db6c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x25DB6Cu;
    {
        const bool branch_taken_0x25db6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25DB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB6Cu;
        // 0x25db70: 0xe7a40068  swc1        $f4, 0x68($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db6c) {
            ctx->pc = 0x25DB7Cu;
            goto label_25db7c;
        }
    }
    ctx->pc = 0x25DB74u;
    // 0x25db74: 0x1280005f  beqz        $s4, . + 4 + (0x5F << 2)
    ctx->pc = 0x25DB74u;
    {
        const bool branch_taken_0x25db74 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB74u;
        // 0x25db78: 0x8fa40088  lw          $a0, 0x88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db74) {
            ctx->pc = 0x25DCF4u;
            goto label_25dcf4;
        }
    }
    ctx->pc = 0x25DB7Cu;
label_25db7c:
    // 0x25db7c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x25db7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25db80: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25db80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25db84: 0x8e690018  lw          $t1, 0x18($s3)
    ctx->pc = 0x25db84u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x25db88: 0x8c670020  lw          $a3, 0x20($v1)
    ctx->pc = 0x25db88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x25db8c: 0x13e1818  mult        $v1, $t1, $fp
    ctx->pc = 0x25db8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x25db90: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x25db90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x25db94: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x25db94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x25db98: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x25db98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25db9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x25db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25dba0: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x25dba0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25dba4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x25dba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x25dba8: 0xafb40074  sw          $s4, 0x74($sp)
    ctx->pc = 0x25dba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 20));
    // 0x25dbac: 0x10c8001c  beq         $a2, $t0, . + 4 + (0x1C << 2)
    ctx->pc = 0x25DBACu;
    {
        const bool branch_taken_0x25dbac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        ctx->pc = 0x25DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DBACu;
        // 0x25dbb0: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dbac) {
            ctx->pc = 0x25DC20u;
            goto label_25dc20;
        }
    }
    ctx->pc = 0x25DBB4u;
    // 0x25dbb4: 0x240b000c  addiu       $t3, $zero, 0xC
    ctx->pc = 0x25dbb4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25dbb8: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x25dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x25dbbc: 0x0  nop
    ctx->pc = 0x25dbbcu;
    // NOP
label_25dbc0:
    // 0x25dbc0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25DBC0u;
    {
        const bool branch_taken_0x25dbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DBC0u;
        // 0x25dbc4: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dbc0) {
            ctx->pc = 0x25DBD0u;
            goto label_25dbd0;
        }
    }
    ctx->pc = 0x25DBC8u;
    // 0x25dbc8: 0x50c2000f  beql        $a2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25DBC8u;
    {
        const bool branch_taken_0x25dbc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x25dbc8) {
            ctx->pc = 0x25DBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DBC8u;
            // 0x25dbcc: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DC08u;
            goto label_25dc08;
        }
    }
    ctx->pc = 0x25DBD0u;
label_25dbd0:
    // 0x25dbd0: 0x12b1018  mult        $v0, $t1, $t3
    ctx->pc = 0x25dbd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25dbd4: 0x472821  addu        $a1, $v0, $a3
    ctx->pc = 0x25dbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x25dbd8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x25dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25dbdc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x25dbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x25dbe0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x25dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x25dbe4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x25dbe4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25dbe8: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x25dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x25dbec: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x25dbecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x25dbf0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x25dbf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x25dbf4: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x25dbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25dbf8: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x25dbf8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25dbfc: 0x8e690018  lw          $t1, 0x18($s3)
    ctx->pc = 0x25dbfcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x25dc00: 0x8c670020  lw          $a3, 0x20($v1)
    ctx->pc = 0x25dc00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x25dc04: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x25dc04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_25dc08:
    // 0x25dc08: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x25dc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x25dc0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25dc0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dc10: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x25dc10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25dc14: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x25dc14u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x25dc18: 0x14c8ffe9  bne         $a2, $t0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x25DC18u;
    {
        const bool branch_taken_0x25dc18 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        ctx->pc = 0x25DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC18u;
        // 0x25dc1c: 0x8fa20074  lw          $v0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc18) {
            ctx->pc = 0x25DBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25dbc0;
        }
    }
    ctx->pc = 0x25DC20u;
label_25dc20:
    // 0x25dc20: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x25dc20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x25dc24: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x25dc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x25dc28: 0x10c4001b  beq         $a2, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x25DC28u;
    {
        const bool branch_taken_0x25dc28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x25DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC28u;
        // 0x25dc2c: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc28) {
            ctx->pc = 0x25DC98u;
            goto label_25dc98;
        }
    }
    ctx->pc = 0x25DC30u;
    // 0x25dc30: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x25dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25dc34: 0x0  nop
    ctx->pc = 0x25dc34u;
    // NOP
label_25dc38:
    // 0x25dc38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25DC38u;
    {
        const bool branch_taken_0x25dc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC38u;
        // 0x25dc3c: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc38) {
            ctx->pc = 0x25DC48u;
            goto label_25dc48;
        }
    }
    ctx->pc = 0x25DC40u;
    // 0x25dc40: 0x50c2000f  beql        $a2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25DC40u;
    {
        const bool branch_taken_0x25dc40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x25dc40) {
            ctx->pc = 0x25DC44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DC40u;
            // 0x25dc44: 0x92420000  lbu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DC80u;
            goto label_25dc80;
        }
    }
    ctx->pc = 0x25DC48u;
label_25dc48:
    // 0x25dc48: 0x1281018  mult        $v0, $t1, $t0
    ctx->pc = 0x25dc48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25dc4c: 0x472821  addu        $a1, $v0, $a3
    ctx->pc = 0x25dc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x25dc50: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x25dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x25dc54: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x25dc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x25dc58: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x25dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x25dc5c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x25dc5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25dc60: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x25dc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x25dc64: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x25dc64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x25dc68: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x25dc68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x25dc6c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x25dc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25dc70: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x25dc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x25dc74: 0x8e690018  lw          $t1, 0x18($s3)
    ctx->pc = 0x25dc74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x25dc78: 0x8c670020  lw          $a3, 0x20($v1)
    ctx->pc = 0x25dc78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x25dc7c: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x25dc7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_25dc80:
    // 0x25dc80: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x25dc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x25dc84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25dc84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dc88: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x25dc88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25dc8c: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x25dc8cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x25dc90: 0x14c4ffe9  bne         $a2, $a0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x25DC90u;
    {
        const bool branch_taken_0x25dc90 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x25DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC90u;
        // 0x25dc94: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc90) {
            ctx->pc = 0x25DC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25dc38;
        }
    }
    ctx->pc = 0x25DC98u;
label_25dc98:
    // 0x25dc98: 0x13e1018  mult        $v0, $t1, $fp
    ctx->pc = 0x25dc98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25dc9c: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x25dc9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x25dca0: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x25dca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x25dca4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25dca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25dca8: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x25dca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x25dcac: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x25dcacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x25dcb0: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x25dcb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x25dcb4: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x25dcb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25dcb8: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x25dcb8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x25dcbc: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x25dcbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x25dcc0: 0xa08a0000  sb          $t2, 0x0($a0)
    ctx->pc = 0x25dcc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x25dcc4: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x25dcc4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x25dcc8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x25dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x25dccc: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x25dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x25dcd0: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x25dcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
    // 0x25dcd4: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x25dcd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x25dcd8: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x25dcd8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x25dcdc: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x25dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x25dce0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25dce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25dce4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25DCE4u;
    {
        const bool branch_taken_0x25dce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCE4u;
        // 0x25dce8: 0xae620018  sw          $v0, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dce4) {
            ctx->pc = 0x25DD20u;
            goto label_25dd20;
        }
    }
    ctx->pc = 0x25DCECu;
label_25dcec:
    // 0x25dcec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25DCECu;
    {
        const bool branch_taken_0x25dcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCECu;
        // 0x25dcf0: 0x8c6b001c  lw          $t3, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dcec) {
            ctx->pc = 0x25DCF8u;
            goto label_25dcf8;
        }
    }
    ctx->pc = 0x25DCF4u;
label_25dcf4:
    // 0x25dcf4: 0x8c8b001c  lw          $t3, 0x1C($a0)
    ctx->pc = 0x25dcf4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_25dcf8:
    // 0x25dcf8: 0x8faa0094  lw          $t2, 0x94($sp)
    ctx->pc = 0x25dcf8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_25dcfc:
    // 0x25dcfc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x25dcfcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_25dd00:
    // 0x25dd00: 0x14b102a  slt         $v0, $t2, $t3
    ctx->pc = 0x25dd00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x25dd04: 0x1440fd70  bnez        $v0, . + 4 + (-0x290 << 2)
    ctx->pc = 0x25DD04u;
    {
        const bool branch_taken_0x25dd04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD04u;
        // 0x25dd08: 0xafaa0094  sw          $t2, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd04) {
            ctx->pc = 0x25D2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25d2c8;
        }
    }
    ctx->pc = 0x25DD0Cu;
    // 0x25dd0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25DD0Cu;
    {
        const bool branch_taken_0x25dd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD0Cu;
        // 0x25dd10: 0x8fa30098  lw          $v1, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd0c) {
            ctx->pc = 0x25DD24u;
            goto label_25dd24;
        }
    }
    ctx->pc = 0x25DD14u;
label_25dd14:
    // 0x25dd14: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x25dd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x25dd18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25dd1c: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x25dd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_25dd20:
    // 0x25dd20: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x25dd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_25dd24:
    // 0x25dd24: 0x1460004d  bnez        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x25DD24u;
    {
        const bool branch_taken_0x25dd24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD24u;
        // 0x25dd28: 0x8fa20084  lw          $v0, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd24) {
            ctx->pc = 0x25DE5Cu;
            goto label_25de5c;
        }
    }
    ctx->pc = 0x25DD2Cu;
    // 0x25dd2c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x25dd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25dd30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25dd30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dd34: 0x8faa0084  lw          $t2, 0x84($sp)
    ctx->pc = 0x25dd34u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x25dd38: 0x8e690018  lw          $t1, 0x18($s3)
    ctx->pc = 0x25dd38u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x25dd3c: 0x8c870020  lw          $a3, 0x20($a0)
    ctx->pc = 0x25dd3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x25dd40: 0x8d480020  lw          $t0, 0x20($t2)
    ctx->pc = 0x25dd40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x25dd44: 0x13e2018  mult        $a0, $t1, $fp
    ctx->pc = 0x25dd44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x25dd48: 0x8faa008c  lw          $t2, 0x8C($sp)
    ctx->pc = 0x25dd48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x25dd4c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x25dd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x25dd50: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x25dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x25dd54: 0x15e5018  mult        $t2, $t2, $fp
    ctx->pc = 0x25dd54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x25dd58: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x25dd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x25dd5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25dd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25dd60: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x25dd60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x25dd64: 0x1482821  addu        $a1, $t2, $t0
    ctx->pc = 0x25dd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x25dd68: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x25dd68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25dd6c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x25DD6Cu;
    {
        const bool branch_taken_0x25dd6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD6Cu;
        // 0x25dd70: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd6c) {
            ctx->pc = 0x25DDE4u;
            goto label_25dde4;
        }
    }
    ctx->pc = 0x25DD74u;
    // 0x25dd74: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x25dd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x25dd78: 0x240c000c  addiu       $t4, $zero, 0xC
    ctx->pc = 0x25dd78u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25dd7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25DD7Cu;
    {
        const bool branch_taken_0x25dd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD7Cu;
        // 0x25dd80: 0x4c5818  mult        $t3, $v0, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd7c) {
            ctx->pc = 0x25DD94u;
            goto label_25dd94;
        }
    }
    ctx->pc = 0x25DD84u;
    // 0x25dd84: 0x0  nop
    ctx->pc = 0x25dd84u;
    // NOP
label_25dd88:
    // 0x25dd88: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x25dd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25dd8c: 0x8e690018  lw          $t1, 0x18($s3)
    ctx->pc = 0x25dd8cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x25dd90: 0x8c670020  lw          $a3, 0x20($v1)
    ctx->pc = 0x25dd90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_25dd94:
    // 0x25dd94: 0x12c1018  mult        $v0, $t1, $t4
    ctx->pc = 0x25dd94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25dd98: 0x472821  addu        $a1, $v0, $a3
    ctx->pc = 0x25dd98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x25dd9c: 0x16a1021  addu        $v0, $t3, $t2
    ctx->pc = 0x25dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x25dda0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x25dda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25dda4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x25dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x25dda8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x25dda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x25ddac: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x25ddacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25ddb0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x25ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x25ddb4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x25ddb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x25ddb8: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x25ddb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x25ddbc: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x25ddbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x25ddc0: 0x8c680020  lw          $t0, 0x20($v1)
    ctx->pc = 0x25ddc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x25ddc4: 0x1681821  addu        $v1, $t3, $t0
    ctx->pc = 0x25ddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x25ddc8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x25ddc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25ddcc: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x25ddccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25ddd0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x25DDD0u;
    {
        const bool branch_taken_0x25ddd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DDD0u;
        // 0x25ddd4: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ddd0) {
            ctx->pc = 0x25DD88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25dd88;
        }
    }
    ctx->pc = 0x25DDD8u;
    // 0x25ddd8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x25ddd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25dddc: 0x8e690018  lw          $t1, 0x18($s3)
    ctx->pc = 0x25dddcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x25dde0: 0x8c870020  lw          $a3, 0x20($a0)
    ctx->pc = 0x25dde0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_25dde4:
    // 0x25dde4: 0x8faa008c  lw          $t2, 0x8C($sp)
    ctx->pc = 0x25dde4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x25dde8: 0x13e1018  mult        $v0, $t1, $fp
    ctx->pc = 0x25dde8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25ddec: 0x15e3018  mult        $a2, $t2, $fp
    ctx->pc = 0x25ddecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x25ddf0: 0x472821  addu        $a1, $v0, $a3
    ctx->pc = 0x25ddf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x25ddf4: 0xc82021  addu        $a0, $a2, $t0
    ctx->pc = 0x25ddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x25ddf8: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x25ddf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x25ddfc: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x25ddfcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x25de00: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x25de00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25de04: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x25de04u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x25de08: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x25de08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x25de0c: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x25de0cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x25de10: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x25de10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25de14: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x25de14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x25de18: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x25de18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x25de1c: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x25de1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x25de20: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x25de20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x25de24: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x25de24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x25de28: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x25de28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x25de2c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x25de2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25de30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25de30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25de34: 0xae620018  sw          $v0, 0x18($s3)
    ctx->pc = 0x25de34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
    // 0x25de38: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x25de38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x25de3c: 0xae65001c  sw          $a1, 0x1C($s3)
    ctx->pc = 0x25de3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 5));
    // 0x25de40: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x25de40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x25de44: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25DE44u;
    {
        const bool branch_taken_0x25de44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE44u;
        // 0x25de48: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de44) {
            ctx->pc = 0x25DE60u;
            goto label_25de60;
        }
    }
    ctx->pc = 0x25DE4Cu;
label_25de4c:
    // 0x25de4c: 0x8faa008c  lw          $t2, 0x8C($sp)
    ctx->pc = 0x25de4cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x25de50: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x25de50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x25de54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25DE54u;
    {
        const bool branch_taken_0x25de54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE54u;
        // 0x25de58: 0xafaa009c  sw          $t2, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de54) {
            ctx->pc = 0x25DE60u;
            goto label_25de60;
        }
    }
    ctx->pc = 0x25DE5Cu;
label_25de5c:
    // 0x25de5c: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x25de5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_25de60:
    // 0x25de60: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x25de60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x25de64: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x25de64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x25de68: 0x1440fd07  bnez        $v0, . + 4 + (-0x2F9 << 2)
    ctx->pc = 0x25DE68u;
    {
        const bool branch_taken_0x25de68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE68u;
        // 0x25de6c: 0xafa3008c  sw          $v1, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de68) {
            ctx->pc = 0x25D288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25d288;
        }
    }
    ctx->pc = 0x25DE70u;
label_25de70:
    // 0x25de70: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x25de70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x25de74: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x25de74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25de78: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x25de78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25de7c: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x25de7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x25de80: 0xdfbe0130  ld          $fp, 0x130($sp)
    ctx->pc = 0x25de80u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x25de84: 0xdfb70120  ld          $s7, 0x120($sp)
    ctx->pc = 0x25de84u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x25de88: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x25de88u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x25de8c: 0xdfb50100  ld          $s5, 0x100($sp)
    ctx->pc = 0x25de8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x25de90: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x25de90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x25de94: 0xdfb300e0  ld          $s3, 0xE0($sp)
    ctx->pc = 0x25de94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x25de98: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x25de98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x25de9c: 0xdfb100c0  ld          $s1, 0xC0($sp)
    ctx->pc = 0x25de9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25dea0: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x25dea0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25dea4: 0xc7b70168  lwc1        $f23, 0x168($sp)
    ctx->pc = 0x25dea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x25dea8: 0xc7b60160  lwc1        $f22, 0x160($sp)
    ctx->pc = 0x25dea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25deac: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x25deacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25deb0: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x25deb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25deb4: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x25deb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x25deb8: 0x3e00008  jr          $ra
    ctx->pc = 0x25DEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DEB8u;
        // 0x25debc: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25DEC0u;
}

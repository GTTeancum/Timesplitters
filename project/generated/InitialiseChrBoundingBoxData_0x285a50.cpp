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

// Function: InitialiseChrBoundingBoxData
// Address: 0x285a50 - 0x2866fc
void InitialiseChrBoundingBoxData_0x285a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitialiseChrBoundingBoxData_0x285a50");
#endif

    switch (ctx->pc) {
        case 0x285bf0u: goto label_285bf0;
        case 0x285ce8u: goto label_285ce8;
        case 0x285d78u: goto label_285d78;
        case 0x285e14u: goto label_285e14;
        case 0x285e30u: goto label_285e30;
        case 0x285ec4u: goto label_285ec4;
        case 0x285f30u: goto label_285f30;
        case 0x285f68u: goto label_285f68;
        case 0x286004u: goto label_286004;
        case 0x286028u: goto label_286028;
        case 0x286048u: goto label_286048;
        case 0x286138u: goto label_286138;
        case 0x2861dcu: goto label_2861dc;
        case 0x286210u: goto label_286210;
        case 0x2863d8u: goto label_2863d8;
        case 0x2864a4u: goto label_2864a4;
        case 0x2864b0u: goto label_2864b0;
        case 0x2864d8u: goto label_2864d8;
        case 0x2865ccu: goto label_2865cc;
        case 0x2865d8u: goto label_2865d8;
        case 0x2865e4u: goto label_2865e4;
        case 0x286648u: goto label_286648;
        case 0x2866a0u: goto label_2866a0;
        default: break;
    }

    ctx->pc = 0x285a50u;

    // 0x285a50: 0x27bdfcc0  addiu       $sp, $sp, -0x340
    ctx->pc = 0x285a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966464));
    // 0x285a54: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x285a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x285a58: 0xffb00290  sd          $s0, 0x290($sp)
    ctx->pc = 0x285a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 16));
    // 0x285a5c: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x285a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x285a60: 0xe7b40330  swc1        $f20, 0x330($sp)
    ctx->pc = 0x285a60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 816), bits); }
    // 0x285a64: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x285a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285a68: 0xafa401d0  sw          $a0, 0x1D0($sp)
    ctx->pc = 0x285a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 4));
    // 0x285a6c: 0xffbf0320  sd          $ra, 0x320($sp)
    ctx->pc = 0x285a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 800), GPR_U64(ctx, 31));
    // 0x285a70: 0xffbe0310  sd          $fp, 0x310($sp)
    ctx->pc = 0x285a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 784), GPR_U64(ctx, 30));
    // 0x285a74: 0xffb70300  sd          $s7, 0x300($sp)
    ctx->pc = 0x285a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 768), GPR_U64(ctx, 23));
    // 0x285a78: 0xffb602f0  sd          $s6, 0x2F0($sp)
    ctx->pc = 0x285a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 752), GPR_U64(ctx, 22));
    // 0x285a7c: 0xffb502e0  sd          $s5, 0x2E0($sp)
    ctx->pc = 0x285a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 21));
    // 0x285a80: 0xffb402d0  sd          $s4, 0x2D0($sp)
    ctx->pc = 0x285a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 20));
    // 0x285a84: 0xffb302c0  sd          $s3, 0x2C0($sp)
    ctx->pc = 0x285a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 19));
    // 0x285a88: 0xffb202b0  sd          $s2, 0x2B0($sp)
    ctx->pc = 0x285a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 18));
    // 0x285a8c: 0xffb102a0  sd          $s1, 0x2A0($sp)
    ctx->pc = 0x285a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 17));
    // 0x285a90: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x285a90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x285a94: 0x8c820bcc  lw          $v0, 0xBCC($a0)
    ctx->pc = 0x285a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3020)));
    // 0x285a98: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x285a98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x285a9c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x285a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x285aa0: 0xafa201d4  sw          $v0, 0x1D4($sp)
    ctx->pc = 0x285aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 2));
    // 0x285aa4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x285aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285aa8: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x285aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
    // 0x285aac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x285aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285ab0: 0x24698850  addiu       $t1, $v1, -0x77B0
    ctx->pc = 0x285ab0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936656));
    // 0x285ab4: 0x69260007  ldl         $a2, 0x7($t1)
    ctx->pc = 0x285ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x285ab8: 0x6d260000  ldr         $a2, 0x0($t1)
    ctx->pc = 0x285ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x285abc: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x285abcu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3A8858u));
    // 0x285ac0: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x285ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x285ac4: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x285ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x285ac8: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x285ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x285acc: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x285accu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x285ad0: 0x24858860  addiu       $a1, $a0, -0x77A0
    ctx->pc = 0x285ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936672));
    // 0x285ad4: 0x68aa0007  ldl         $t2, 0x7($a1)
    ctx->pc = 0x285ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x285ad8: 0x6caa0000  ldr         $t2, 0x0($a1)
    ctx->pc = 0x285ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x285adc: 0x8cac0008  lw          $t4, 0x8($a1)
    ctx->pc = 0x285adcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x285ae0: 0xb3aa0017  sdl         $t2, 0x17($sp)
    ctx->pc = 0x285ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x285ae4: 0xb7aa0010  sdr         $t2, 0x10($sp)
    ctx->pc = 0x285ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x285ae8: 0xafac0018  sw          $t4, 0x18($sp)
    ctx->pc = 0x285ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 12));
    // 0x285aec: 0x8fa601d8  lw          $a2, 0x1D8($sp)
    ctx->pc = 0x285aecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x285af0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x285af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x285af4: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x285af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x285af8: 0x186002c2  blez        $v1, . + 4 + (0x2C2 << 2)
    ctx->pc = 0x285AF8u;
    {
        const bool branch_taken_0x285af8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x285AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AF8u;
        // 0x285afc: 0xafa201dc  sw          $v0, 0x1DC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285af8) {
            ctx->pc = 0x286604u;
            goto label_286604;
        }
    }
    ctx->pc = 0x285B00u;
    // 0x285b00: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x285b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x285b04: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x285b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x285b08: 0xafa30264  sw          $v1, 0x264($sp)
    ctx->pc = 0x285b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 3));
    // 0x285b0c: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x285b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x285b10: 0xafa401f8  sw          $a0, 0x1F8($sp)
    ctx->pc = 0x285b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 4));
    // 0x285b14: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x285b14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x285b18: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x285b18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x285b1c: 0x27aa009c  addiu       $t2, $sp, 0x9C
    ctx->pc = 0x285b1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x285b20: 0x27ac0040  addiu       $t4, $sp, 0x40
    ctx->pc = 0x285b20u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x285b24: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x285b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x285b28: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x285b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x285b2c: 0x27a400d4  addiu       $a0, $sp, 0xD4
    ctx->pc = 0x285b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x285b30: 0xafa70228  sw          $a3, 0x228($sp)
    ctx->pc = 0x285b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 7));
    // 0x285b34: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x285b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x285b38: 0xafa80200  sw          $t0, 0x200($sp)
    ctx->pc = 0x285b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 8));
    // 0x285b3c: 0x27a60064  addiu       $a2, $sp, 0x64
    ctx->pc = 0x285b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x285b40: 0xafa90230  sw          $t1, 0x230($sp)
    ctx->pc = 0x285b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 9));
    // 0x285b44: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x285b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x285b48: 0xafaa0238  sw          $t2, 0x238($sp)
    ctx->pc = 0x285b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 10));
    // 0x285b4c: 0x27a80068  addiu       $t0, $sp, 0x68
    ctx->pc = 0x285b4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x285b50: 0xafac0204  sw          $t4, 0x204($sp)
    ctx->pc = 0x285b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 12));
    // 0x285b54: 0x27a90048  addiu       $t1, $sp, 0x48
    ctx->pc = 0x285b54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x285b58: 0xafa20218  sw          $v0, 0x218($sp)
    ctx->pc = 0x285b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 2));
    // 0x285b5c: 0x27aa0130  addiu       $t2, $sp, 0x130
    ctx->pc = 0x285b5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x285b60: 0xafa30248  sw          $v1, 0x248($sp)
    ctx->pc = 0x285b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 3));
    // 0x285b64: 0x27ac0140  addiu       $t4, $sp, 0x140
    ctx->pc = 0x285b64u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x285b68: 0xafa4024c  sw          $a0, 0x24C($sp)
    ctx->pc = 0x285b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 4));
    // 0x285b6c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x285b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x285b70: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x285b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x285b74: 0x8fa401d0  lw          $a0, 0x1D0($sp)
    ctx->pc = 0x285b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x285b78: 0xafa50260  sw          $a1, 0x260($sp)
    ctx->pc = 0x285b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 5));
    // 0x285b7c: 0x24630bdc  addiu       $v1, $v1, 0xBDC
    ctx->pc = 0x285b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3036));
    // 0x285b80: 0xafa6021c  sw          $a2, 0x21C($sp)
    ctx->pc = 0x285b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 6));
    // 0x285b84: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x285b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x285b88: 0xafa7020c  sw          $a3, 0x20C($sp)
    ctx->pc = 0x285b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 7));
    // 0x285b8c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x285b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x285b90: 0xafa80220  sw          $t0, 0x220($sp)
    ctx->pc = 0x285b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 8));
    // 0x285b94: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x285b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x285b98: 0xafa90210  sw          $t1, 0x210($sp)
    ctx->pc = 0x285b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 9));
    // 0x285b9c: 0x27a800f4  addiu       $t0, $sp, 0xF4
    ctx->pc = 0x285b9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x285ba0: 0xafaa01ec  sw          $t2, 0x1EC($sp)
    ctx->pc = 0x285ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 10));
    // 0x285ba4: 0x27a900f8  addiu       $t1, $sp, 0xF8
    ctx->pc = 0x285ba4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x285ba8: 0xafac01f0  sw          $t4, 0x1F0($sp)
    ctx->pc = 0x285ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 12));
    // 0x285bac: 0x27aa0150  addiu       $t2, $sp, 0x150
    ctx->pc = 0x285bacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x285bb0: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x285bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
    // 0x285bb4: 0x27ac0190  addiu       $t4, $sp, 0x190
    ctx->pc = 0x285bb4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x285bb8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x285bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x285bbc: 0x24840be8  addiu       $a0, $a0, 0xBE8
    ctx->pc = 0x285bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3048));
    // 0x285bc0: 0xafa50250  sw          $a1, 0x250($sp)
    ctx->pc = 0x285bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 5));
    // 0x285bc4: 0xafa60244  sw          $a2, 0x244($sp)
    ctx->pc = 0x285bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 6));
    // 0x285bc8: 0xafa70254  sw          $a3, 0x254($sp)
    ctx->pc = 0x285bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 7));
    // 0x285bcc: 0xafa80258  sw          $t0, 0x258($sp)
    ctx->pc = 0x285bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 8));
    // 0x285bd0: 0xafa9025c  sw          $t1, 0x25C($sp)
    ctx->pc = 0x285bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 9));
    // 0x285bd4: 0xafaa01f4  sw          $t2, 0x1F4($sp)
    ctx->pc = 0x285bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 10));
    // 0x285bd8: 0xafac0208  sw          $t4, 0x208($sp)
    ctx->pc = 0x285bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 12));
    // 0x285bdc: 0xafa201fc  sw          $v0, 0x1FC($sp)
    ctx->pc = 0x285bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 2));
    // 0x285be0: 0xafa30224  sw          $v1, 0x224($sp)
    ctx->pc = 0x285be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 3));
    // 0x285be4: 0xafa4022c  sw          $a0, 0x22C($sp)
    ctx->pc = 0x285be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 4));
    // 0x285be8: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x285be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x285bec: 0x0  nop
    ctx->pc = 0x285becu;
    // NOP
label_285bf0:
    // 0x285bf0: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x285bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x285bf4: 0x400013  mtlo        $v0
    ctx->pc = 0x285bf4u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x285bf8: 0x7203b000  madd        $s6, $s0, $v1
    ctx->pc = 0x285bf8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 22, (int32_t)result); }
    // 0x285bfc: 0x82c20002  lb          $v0, 0x2($s6)
    ctx->pc = 0x285bfcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x285c00: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x285C00u;
    {
        const bool branch_taken_0x285c00 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x285C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C00u;
        // 0x285c04: 0x8fa401dc  lw          $a0, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c00) {
            ctx->pc = 0x285C1Cu;
            goto label_285c1c;
        }
    }
    ctx->pc = 0x285C08u;
    // 0x285c08: 0x800013  mtlo        $a0
    ctx->pc = 0x285c08u;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x285c0c: 0x70430000  madd        $zero, $v0, $v1
    ctx->pc = 0x285c0cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x285c10: 0x2012  mflo        $a0
    ctx->pc = 0x285c10u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x285c14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x285C14u;
    {
        const bool branch_taken_0x285c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C14u;
        // 0x285c18: 0xafa401e0  sw          $a0, 0x1E0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c14) {
            ctx->pc = 0x285C20u;
            goto label_285c20;
        }
    }
    ctx->pc = 0x285C1Cu;
label_285c1c:
    // 0x285c1c: 0xafa001e0  sw          $zero, 0x1E0($sp)
    ctx->pc = 0x285c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 0));
label_285c20:
    // 0x285c20: 0x82c30003  lb          $v1, 0x3($s6)
    ctx->pc = 0x285c20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 3)));
    // 0x285c24: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x285C24u;
    {
        const bool branch_taken_0x285c24 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x285C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C24u;
        // 0x285c28: 0x8fa401dc  lw          $a0, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c24) {
            ctx->pc = 0x285C44u;
            goto label_285c44;
        }
    }
    ctx->pc = 0x285C2Cu;
    // 0x285c2c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x285c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x285c30: 0x800013  mtlo        $a0
    ctx->pc = 0x285c30u;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x285c34: 0x70620000  madd        $zero, $v1, $v0
    ctx->pc = 0x285c34u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x285c38: 0x2012  mflo        $a0
    ctx->pc = 0x285c38u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x285c3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x285C3Cu;
    {
        const bool branch_taken_0x285c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C3Cu;
        // 0x285c40: 0xafa401e4  sw          $a0, 0x1E4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c3c) {
            ctx->pc = 0x285C48u;
            goto label_285c48;
        }
    }
    ctx->pc = 0x285C44u;
label_285c44:
    // 0x285c44: 0xafa001e4  sw          $zero, 0x1E4($sp)
    ctx->pc = 0x285c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 0));
label_285c48:
    // 0x285c48: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x285c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x285c4c: 0x8fa501d0  lw          $a1, 0x1D0($sp)
    ctx->pc = 0x285c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x285c50: 0x82c30000  lb          $v1, 0x0($s6)
    ctx->pc = 0x285c50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x285c54: 0x24420bf4  addiu       $v0, $v0, 0xBF4
    ctx->pc = 0x285c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3060));
    // 0x285c58: 0x8ede0008  lw          $fp, 0x8($s6)
    ctx->pc = 0x285c58u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x285c5c: 0x26c60014  addiu       $a2, $s6, 0x14
    ctx->pc = 0x285c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    // 0x285c60: 0xa29821  addu        $s3, $a1, $v0
    ctx->pc = 0x285c60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x285c64: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x285C64u;
    {
        const bool branch_taken_0x285c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x285C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C64u;
        // 0x285c68: 0xafa601e8  sw          $a2, 0x1E8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c64) {
            ctx->pc = 0x285C98u;
            goto label_285c98;
        }
    }
    ctx->pc = 0x285C6Cu;
    // 0x285c6c: 0x4600051  bltz        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x285C6Cu;
    {
        const bool branch_taken_0x285c6c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x285C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C6Cu;
        // 0x285c70: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c6c) {
            ctx->pc = 0x285DB4u;
            goto label_285db4;
        }
    }
    ctx->pc = 0x285C74u;
    // 0x285c74: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x285C74u;
    {
        const bool branch_taken_0x285c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C74u;
        // 0x285c78: 0x8fa701e4  lw          $a3, 0x1E4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c74) {
            ctx->pc = 0x285DC4u;
            goto label_285dc4;
        }
    }
    ctx->pc = 0x285C7Cu;
    // 0x285c7c: 0x80e30003  lb          $v1, 0x3($a3)
    ctx->pc = 0x285c7cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x285c80: 0x4600029  bltz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x285C80u;
    {
        const bool branch_taken_0x285c80 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x285C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C80u;
        // 0x285c84: 0x8fa401dc  lw          $a0, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c80) {
            ctx->pc = 0x285D28u;
            goto label_285d28;
        }
    }
    ctx->pc = 0x285C88u;
    // 0x285c88: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x285c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x285c8c: 0x800013  mtlo        $a0
    ctx->pc = 0x285c8cu;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x285c90: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x285C90u;
    {
        const bool branch_taken_0x285c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C90u;
        // 0x285c94: 0x70622800  madd        $a1, $v1, $v0 (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c90) {
            ctx->pc = 0x285D2Cu;
            goto label_285d2c;
        }
    }
    ctx->pc = 0x285C98u;
label_285c98:
    // 0x285c98: 0x82c30001  lb          $v1, 0x1($s6)
    ctx->pc = 0x285c98u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
    // 0x285c9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x285c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x285ca0: 0x8fa401e4  lw          $a0, 0x1E4($sp)
    ctx->pc = 0x285ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x285ca4: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x285ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x285ca8: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x285ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x285cac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x285cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285cb0: 0x10a00048  beqz        $a1, . + 4 + (0x48 << 2)
    ctx->pc = 0x285CB0u;
    {
        const bool branch_taken_0x285cb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x285CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CB0u;
        // 0x285cb4: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285cb0) {
            ctx->pc = 0x285DD4u;
            goto label_285dd4;
        }
    }
    ctx->pc = 0x285CB8u;
    // 0x285cb8: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x285cb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x285cbc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x285CBCu;
    {
        const bool branch_taken_0x285cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CBCu;
        // 0x285cc0: 0x26070001  addiu       $a3, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285cbc) {
            ctx->pc = 0x285CE0u;
            goto label_285ce0;
        }
    }
    ctx->pc = 0x285CC4u;
    // 0x285cc4: 0x80a20001  lb          $v0, 0x1($a1)
    ctx->pc = 0x285cc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x285cc8: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x285cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x285ccc: 0xafa60214  sw          $a2, 0x214($sp)
    ctx->pc = 0x285cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 6));
    // 0x285cd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x285cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285cd4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x285CD4u;
    {
        const bool branch_taken_0x285cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CD4u;
        // 0x285cd8: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285cd4) {
            ctx->pc = 0x285DF4u;
            goto label_285df4;
        }
    }
    ctx->pc = 0x285CDCu;
    // 0x285cdc: 0x0  nop
    ctx->pc = 0x285cdcu;
    // NOP
label_285ce0:
    // 0x285ce0: 0xafa70214  sw          $a3, 0x214($sp)
    ctx->pc = 0x285ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 7));
    // 0x285ce4: 0x80830003  lb          $v1, 0x3($a0)
    ctx->pc = 0x285ce4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_285ce8:
    // 0x285ce8: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x285CE8u;
    {
        const bool branch_taken_0x285ce8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x285CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CE8u;
        // 0x285cec: 0x8fa401dc  lw          $a0, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ce8) {
            ctx->pc = 0x285D00u;
            goto label_285d00;
        }
    }
    ctx->pc = 0x285CF0u;
    // 0x285cf0: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x285cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x285cf4: 0x800013  mtlo        $a0
    ctx->pc = 0x285cf4u;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x285cf8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x285CF8u;
    {
        const bool branch_taken_0x285cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CF8u;
        // 0x285cfc: 0x70621800  madd        $v1, $v1, $v0 (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x285cf8) {
            ctx->pc = 0x285D04u;
            goto label_285d04;
        }
    }
    ctx->pc = 0x285D00u;
label_285d00:
    // 0x285d00: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x285d00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285d04:
    // 0x285d04: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x285D04u;
    {
        const bool branch_taken_0x285d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x285D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D04u;
        // 0x285d08: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d04) {
            ctx->pc = 0x285DE4u;
            goto label_285de4;
        }
    }
    ctx->pc = 0x285D0Cu;
    // 0x285d0c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x285d0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x285d10: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x285D10u;
    {
        const bool branch_taken_0x285d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285d10) {
            ctx->pc = 0x285D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285D10u;
            // 0x285d14: 0x80830003  lb          $v1, 0x3($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285ce8;
        }
    }
    ctx->pc = 0x285D18u;
    // 0x285d18: 0x80620001  lb          $v0, 0x1($v1)
    ctx->pc = 0x285d18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x285d1c: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x285d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x285d20: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x285D20u;
    {
        const bool branch_taken_0x285d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D20u;
        // 0x285d24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d20) {
            ctx->pc = 0x285DF4u;
            goto label_285df4;
        }
    }
    ctx->pc = 0x285D28u;
label_285d28:
    // 0x285d28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x285d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285d2c:
    // 0x285d2c: 0x8fa601e0  lw          $a2, 0x1E0($sp)
    ctx->pc = 0x285d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x285d30: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x285d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x285d34: 0x8fa701e4  lw          $a3, 0x1E4($sp)
    ctx->pc = 0x285d34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x285d38: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x285d38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x285d3c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x285d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x285d40: 0x80e40001  lb          $a0, 0x1($a3)
    ctx->pc = 0x285d40u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x285d44: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x285d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x285d48: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x285D48u;
    {
        const bool branch_taken_0x285d48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x285D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D48u;
        // 0x285d4c: 0xafa40034  sw          $a0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d48) {
            ctx->pc = 0x285DECu;
            goto label_285dec;
        }
    }
    ctx->pc = 0x285D50u;
    // 0x285d50: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x285d50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x285d54: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x285D54u;
    {
        const bool branch_taken_0x285d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D54u;
        // 0x285d58: 0x26090001  addiu       $t1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d54) {
            ctx->pc = 0x285D70u;
            goto label_285d70;
        }
    }
    ctx->pc = 0x285D5Cu;
    // 0x285d5c: 0x80a20001  lb          $v0, 0x1($a1)
    ctx->pc = 0x285d5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x285d60: 0x26080001  addiu       $t0, $s0, 0x1
    ctx->pc = 0x285d60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x285d64: 0xafa80214  sw          $t0, 0x214($sp)
    ctx->pc = 0x285d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 8));
    // 0x285d68: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x285D68u;
    {
        const bool branch_taken_0x285d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D68u;
        // 0x285d6c: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d68) {
            ctx->pc = 0x285DF4u;
            goto label_285df4;
        }
    }
    ctx->pc = 0x285D70u;
label_285d70:
    // 0x285d70: 0xafa90214  sw          $t1, 0x214($sp)
    ctx->pc = 0x285d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 9));
    // 0x285d74: 0x80a30003  lb          $v1, 0x3($a1)
    ctx->pc = 0x285d74u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_285d78:
    // 0x285d78: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x285D78u;
    {
        const bool branch_taken_0x285d78 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x285D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D78u;
        // 0x285d7c: 0x8fa501dc  lw          $a1, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d78) {
            ctx->pc = 0x285D90u;
            goto label_285d90;
        }
    }
    ctx->pc = 0x285D80u;
    // 0x285d80: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x285d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x285d84: 0xa00013  mtlo        $a1
    ctx->pc = 0x285d84u;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x285d88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x285D88u;
    {
        const bool branch_taken_0x285d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D88u;
        // 0x285d8c: 0x70621800  madd        $v1, $v1, $v0 (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d88) {
            ctx->pc = 0x285D94u;
            goto label_285d94;
        }
    }
    ctx->pc = 0x285D90u;
label_285d90:
    // 0x285d90: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x285d90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285d94:
    // 0x285d94: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x285D94u;
    {
        const bool branch_taken_0x285d94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x285D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D94u;
        // 0x285d98: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d94) {
            ctx->pc = 0x285DF4u;
            goto label_285df4;
        }
    }
    ctx->pc = 0x285D9Cu;
    // 0x285d9c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x285d9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x285da0: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x285DA0u;
    {
        const bool branch_taken_0x285da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285da0) {
            ctx->pc = 0x285DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285DA0u;
            // 0x285da4: 0x80a30003  lb          $v1, 0x3($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285d78;
        }
    }
    ctx->pc = 0x285DA8u;
    // 0x285da8: 0x80620001  lb          $v0, 0x1($v1)
    ctx->pc = 0x285da8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x285dac: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x285DACu;
    {
        const bool branch_taken_0x285dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DACu;
        // 0x285db0: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285dac) {
            ctx->pc = 0x285DF4u;
            goto label_285df4;
        }
    }
    ctx->pc = 0x285DB4u;
label_285db4:
    // 0x285db4: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x285db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x285db8: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x285db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x285dbc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x285DBCu;
    {
        const bool branch_taken_0x285dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DBCu;
        // 0x285dc0: 0xafa60214  sw          $a2, 0x214($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285dbc) {
            ctx->pc = 0x285DF4u;
            goto label_285df4;
        }
    }
    ctx->pc = 0x285DC4u;
label_285dc4:
    // 0x285dc4: 0x26070001  addiu       $a3, $s0, 0x1
    ctx->pc = 0x285dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x285dc8: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x285dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x285dcc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x285DCCu;
    {
        const bool branch_taken_0x285dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DCCu;
        // 0x285dd0: 0xafa70214  sw          $a3, 0x214($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285dcc) {
            ctx->pc = 0x285DF4u;
            goto label_285df4;
        }
    }
    ctx->pc = 0x285DD4u;
label_285dd4:
    // 0x285dd4: 0x26080001  addiu       $t0, $s0, 0x1
    ctx->pc = 0x285dd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x285dd8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x285dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x285ddc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x285DDCu;
    {
        const bool branch_taken_0x285ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DDCu;
        // 0x285de0: 0xafa80214  sw          $t0, 0x214($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ddc) {
            ctx->pc = 0x285DF4u;
            goto label_285df4;
        }
    }
    ctx->pc = 0x285DE4u;
label_285de4:
    // 0x285de4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x285DE4u;
    {
        const bool branch_taken_0x285de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DE4u;
        // 0x285de8: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285de4) {
            ctx->pc = 0x285DF4u;
            goto label_285df4;
        }
    }
    ctx->pc = 0x285DECu;
label_285dec:
    // 0x285dec: 0x26090001  addiu       $t1, $s0, 0x1
    ctx->pc = 0x285decu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x285df0: 0xafa90214  sw          $t1, 0x214($sp)
    ctx->pc = 0x285df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 9));
label_285df4:
    // 0x285df4: 0x4810009  bgez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x285DF4u;
    {
        const bool branch_taken_0x285df4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x285DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DF4u;
        // 0x285df8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285df4) {
            ctx->pc = 0x285E1Cu;
            goto label_285e1c;
        }
    }
    ctx->pc = 0x285DFCu;
    // 0x285dfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x285dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285e00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x285e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285e04: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x285e04u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x285e08: 0x8fa401d4  lw          $a0, 0x1D4($sp)
    ctx->pc = 0x285e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x285e0c: 0xc0a15dc  jal         func_285770
    ctx->pc = 0x285E0Cu;
    SET_GPR_U32(ctx, 31, 0x285E14u);
    ctx->pc = 0x285E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285E0Cu;
    // 0x285e10: 0x8fa60228  lw          $a2, 0x228($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285770u, 0x285E0Cu, 0x285E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285E14u;
label_285e14:
    // 0x285e14: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x285E14u;
    {
        const bool branch_taken_0x285e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285e14) {
            ctx->pc = 0x285EDCu;
            goto label_285edc;
        }
    }
    ctx->pc = 0x285E1Cu;
label_285e1c:
    // 0x285e1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x285e1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285e20: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x285e20u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x285e24: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x285e24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x285e28: 0x8faa0200  lw          $t2, 0x200($sp)
    ctx->pc = 0x285e28u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x285e2c: 0x0  nop
    ctx->pc = 0x285e2cu;
    // NOP
label_285e30:
    // 0x285e30: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x285e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x285e34: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x285e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x285e38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x285e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285e3c: 0x4600023  bltz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x285E3Cu;
    {
        const bool branch_taken_0x285e3c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x285E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E3Cu;
        // 0x285e40: 0x25110001  addiu       $s1, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e3c) {
            ctx->pc = 0x285ECCu;
            goto label_285ecc;
        }
    }
    ctx->pc = 0x285E44u;
    // 0x285e44: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x285e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x285e48: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x285e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x285e4c: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x285e4cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285e50: 0x540001e  bltz        $t2, . + 4 + (0x1E << 2)
    ctx->pc = 0x285E50u;
    {
        const bool branch_taken_0x285e50 = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x285E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E50u;
        // 0x285e54: 0x8fac01d4  lw          $t4, 0x1D4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e50) {
            ctx->pc = 0x285ECCu;
            goto label_285ecc;
        }
    }
    ctx->pc = 0x285E58u;
    // 0x285e58: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x285e58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x285e5c: 0xa5180  sll         $t2, $t2, 6
    ctx->pc = 0x285e5cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
    // 0x285e60: 0x1124018  mult        $t0, $t0, $s2
    ctx->pc = 0x285e60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x285e64: 0x8d820004  lw          $v0, 0x4($t4)
    ctx->pc = 0x285e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x285e68: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x285e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285e6c: 0x8fac0204  lw          $t4, 0x204($sp)
    ctx->pc = 0x285e6cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x285e70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x285e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285e74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x285e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x285e78: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x285e78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x285e7c: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x285e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285e80: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x285e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x285e84: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x285e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x285e88: 0x484821  addu        $t1, $v0, $t0
    ctx->pc = 0x285e88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x285e8c: 0x8fa60230  lw          $a2, 0x230($sp)
    ctx->pc = 0x285e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x285e90: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x285e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285e94: 0x1884021  addu        $t0, $t4, $t0
    ctx->pc = 0x285e94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x285e98: 0x8fa70238  lw          $a3, 0x238($sp)
    ctx->pc = 0x285e98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x285e9c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x285e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x285ea0: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x285ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285ea4: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x285ea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x285ea8: 0xc5400030  lwc1        $f0, 0x30($t2)
    ctx->pc = 0x285ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285eac: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x285eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x285eb0: 0xc5410034  lwc1        $f1, 0x34($t2)
    ctx->pc = 0x285eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285eb4: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x285eb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x285eb8: 0xc5400038  lwc1        $f0, 0x38($t2)
    ctx->pc = 0x285eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285ebc: 0xc0a14d2  jal         func_285348
    ctx->pc = 0x285EBCu;
    SET_GPR_U32(ctx, 31, 0x285EC4u);
    ctx->pc = 0x285EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285EBCu;
    // 0x285ec0: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x285348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285348u, 0x285EBCu, 0x285EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285EC4u;
label_285ec4:
    // 0x285ec4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x285EC4u;
    {
        const bool branch_taken_0x285ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285EC4u;
        // 0x285ec8: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ec4) {
            ctx->pc = 0x285ED0u;
            goto label_285ed0;
        }
    }
    ctx->pc = 0x285ECCu;
label_285ecc:
    // 0x285ecc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x285eccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285ed0:
    // 0x285ed0: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x285ed0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x285ed4: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x285ED4u;
    {
        const bool branch_taken_0x285ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285ED4u;
        // 0x285ed8: 0x8faa0200  lw          $t2, 0x200($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ed4) {
            ctx->pc = 0x285E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285e30;
        }
    }
    ctx->pc = 0x285EDCu;
label_285edc:
    // 0x285edc: 0x13c001c1  beqz        $fp, . + 4 + (0x1C1 << 2)
    ctx->pc = 0x285EDCu;
    {
        const bool branch_taken_0x285edc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x285EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285EDCu;
        // 0x285ee0: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285edc) {
            ctx->pc = 0x2865E4u;
            goto label_2865e4;
        }
    }
    ctx->pc = 0x285EE4u;
    // 0x285ee4: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x285ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    // 0x285ee8: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x285ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
    // 0x285eec: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x285eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x285ef0: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x285ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x285ef4: 0xc441fa44  lwc1        $f1, -0x5BC($v0)
    ctx->pc = 0x285ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285ef8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x285ef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285efc: 0xc462fa48  lwc1        $f2, -0x5B8($v1)
    ctx->pc = 0x285efcu;
    { uint32_t bits = FAST_READ32(0x3AFA48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x285f00: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x285f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x285f04: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x285f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x285f08: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x285f08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x285f0c: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x285f0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x285f10: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x285f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x285f14: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x285f14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x285f18: 0x4400127  bltz        $v0, . + 4 + (0x127 << 2)
    ctx->pc = 0x285F18u;
    {
        const bool branch_taken_0x285f18 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x285F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F18u;
        // 0x285f1c: 0xe7a200c4  swc1        $f2, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f18) {
            ctx->pc = 0x2863B8u;
            goto label_2863b8;
        }
    }
    ctx->pc = 0x285F20u;
    // 0x285f20: 0x26640008  addiu       $a0, $s3, 0x8
    ctx->pc = 0x285f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x285f24: 0xafa40234  sw          $a0, 0x234($sp)
    ctx->pc = 0x285f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 4));
    // 0x285f28: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x285f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x285f2c: 0x0  nop
    ctx->pc = 0x285f2cu;
    // NOP
label_285f30:
    // 0x285f30: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x285f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x285f34: 0x8fa501e8  lw          $a1, 0x1E8($sp)
    ctx->pc = 0x285f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x285f38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x285f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285f3c: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x285f3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x285f40: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x285f40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x285f44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x285f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x285f48: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x285f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x285f4c: 0x8fc50010  lw          $a1, 0x10($fp)
    ctx->pc = 0x285f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x285f50: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x285f50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x285f54: 0x18a00110  blez        $a1, . + 4 + (0x110 << 2)
    ctx->pc = 0x285F54u;
    {
        const bool branch_taken_0x285f54 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x285F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F54u;
        // 0x285f58: 0xc38821  addu        $s1, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f54) {
            ctx->pc = 0x286398u;
            goto label_286398;
        }
    }
    ctx->pc = 0x285F5Cu;
    // 0x285f5c: 0x27c60018  addiu       $a2, $fp, 0x18
    ctx->pc = 0x285f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 24));
    // 0x285f60: 0xafa6023c  sw          $a2, 0x23C($sp)
    ctx->pc = 0x285f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 6));
    // 0x285f64: 0x0  nop
    ctx->pc = 0x285f64u;
    // NOP
label_285f68:
    // 0x285f68: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x285f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285f6c: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x285f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x285f70: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x285f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285f74: 0xe7a10124  swc1        $f1, 0x124($sp)
    ctx->pc = 0x285f74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x285f78: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x285f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285f7c: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x285f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x285f80: 0x82c20000  lb          $v0, 0x0($s6)
    ctx->pc = 0x285f80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x285f84: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x285F84u;
    {
        const bool branch_taken_0x285f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285f84) {
            ctx->pc = 0x285F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285F84u;
            // 0x285f88: 0x92430000  lbu         $v1, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285F9Cu;
            goto label_285f9c;
        }
    }
    ctx->pc = 0x285F8Cu;
    // 0x285f8c: 0x8fa701d4  lw          $a3, 0x1D4($sp)
    ctx->pc = 0x285f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x285f90: 0x82c40001  lb          $a0, 0x1($s6)
    ctx->pc = 0x285f90u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
    // 0x285f94: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x285F94u;
    {
        const bool branch_taken_0x285f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F94u;
        // 0x285f98: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f94) {
            ctx->pc = 0x285FF4u;
            goto label_285ff4;
        }
    }
    ctx->pc = 0x285F9Cu;
label_285f9c:
    // 0x285f9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x285f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285fa0: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x285FA0u;
    {
        const bool branch_taken_0x285fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x285FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FA0u;
        // 0x285fa4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285fa0) {
            ctx->pc = 0x285FE4u;
            goto label_285fe4;
        }
    }
    ctx->pc = 0x285FA8u;
    // 0x285fa8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x285FA8u;
    {
        const bool branch_taken_0x285fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FA8u;
        // 0x285fac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285fa8) {
            ctx->pc = 0x285FC0u;
            goto label_285fc0;
        }
    }
    ctx->pc = 0x285FB0u;
    // 0x285fb0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x285FB0u;
    {
        const bool branch_taken_0x285fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x285FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FB0u;
        // 0x285fb4: 0x26150001  addiu       $s5, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285fb0) {
            ctx->pc = 0x285FD0u;
            goto label_285fd0;
        }
    }
    ctx->pc = 0x285FB8u;
    // 0x285fb8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x285FB8u;
    {
        const bool branch_taken_0x285fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FB8u;
        // 0x285fbc: 0x92680001  lbu         $t0, 0x1($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285fb8) {
            ctx->pc = 0x286030u;
            goto label_286030;
        }
    }
    ctx->pc = 0x285FC0u;
label_285fc0:
    // 0x285fc0: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x285FC0u;
    {
        const bool branch_taken_0x285fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x285FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FC0u;
        // 0x285fc4: 0x26150001  addiu       $s5, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285fc0) {
            ctx->pc = 0x28600Cu;
            goto label_28600c;
        }
    }
    ctx->pc = 0x285FC8u;
    // 0x285fc8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x285FC8u;
    {
        const bool branch_taken_0x285fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FC8u;
        // 0x285fcc: 0x92680001  lbu         $t0, 0x1($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285fc8) {
            ctx->pc = 0x286030u;
            goto label_286030;
        }
    }
    ctx->pc = 0x285FD0u;
label_285fd0:
    // 0x285fd0: 0x8fa801e0  lw          $t0, 0x1E0($sp)
    ctx->pc = 0x285fd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x285fd4: 0x8fa901d4  lw          $t1, 0x1D4($sp)
    ctx->pc = 0x285fd4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x285fd8: 0x81040001  lb          $a0, 0x1($t0)
    ctx->pc = 0x285fd8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x285fdc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x285FDCu;
    {
        const bool branch_taken_0x285fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FDCu;
        // 0x285fe0: 0x8d220004  lw          $v0, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285fdc) {
            ctx->pc = 0x285FF4u;
            goto label_285ff4;
        }
    }
    ctx->pc = 0x285FE4u;
label_285fe4:
    // 0x285fe4: 0x8faa01e4  lw          $t2, 0x1E4($sp)
    ctx->pc = 0x285fe4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x285fe8: 0x8fac01d4  lw          $t4, 0x1D4($sp)
    ctx->pc = 0x285fe8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x285fec: 0x81440001  lb          $a0, 0x1($t2)
    ctx->pc = 0x285fecu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x285ff0: 0x8d820004  lw          $v0, 0x4($t4)
    ctx->pc = 0x285ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
label_285ff4:
    // 0x285ff4: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x285ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x285ff8: 0x8fa50264  lw          $a1, 0x264($sp)
    ctx->pc = 0x285ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x285ffc: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x285FFCu;
    SET_GPR_U32(ctx, 31, 0x286004u);
    ctx->pc = 0x286000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285FFCu;
    // 0x286000: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x285FFCu, 0x286004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286004u;
label_286004:
    // 0x286004: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x286004u;
    {
        const bool branch_taken_0x286004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286004u;
        // 0x286008: 0x26150001  addiu       $s5, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286004) {
            ctx->pc = 0x28602Cu;
            goto label_28602c;
        }
    }
    ctx->pc = 0x28600Cu;
label_28600c:
    // 0x28600c: 0x8fa301d4  lw          $v1, 0x1D4($sp)
    ctx->pc = 0x28600cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x286010: 0x82c40001  lb          $a0, 0x1($s6)
    ctx->pc = 0x286010u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
    // 0x286014: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x286014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x286018: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x286018u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x28601c: 0x8fa50264  lw          $a1, 0x264($sp)
    ctx->pc = 0x28601cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x286020: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x286020u;
    SET_GPR_U32(ctx, 31, 0x286028u);
    ctx->pc = 0x286024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286020u;
    // 0x286024: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x286020u, 0x286028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286028u;
label_286028:
    // 0x286028: 0x26150001  addiu       $s5, $s0, 0x1
    ctx->pc = 0x286028u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28602c:
    // 0x28602c: 0x92680001  lbu         $t0, 0x1($s3)
    ctx->pc = 0x28602cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_286030:
    // 0x286030: 0x8fa401f8  lw          $a0, 0x1F8($sp)
    ctx->pc = 0x286030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x286034: 0x262b000c  addiu       $t3, $s1, 0xC
    ctx->pc = 0x286034u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x286038: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x286038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x28603c: 0x264a0004  addiu       $t2, $s2, 0x4
    ctx->pc = 0x28603cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x286040: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x286040u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286044: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x286044u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_286048:
    // 0x286048: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x286048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28604c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x28604cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286050: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x286050u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x286054: 0x0  nop
    ctx->pc = 0x286054u;
    // NOP
    // 0x286058: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x286058u;
    {
        const bool branch_taken_0x286058 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x286058) {
            ctx->pc = 0x28605Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286058u;
            // 0x28605c: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28606Cu;
            goto label_28606c;
        }
    }
    ctx->pc = 0x286060u;
    // 0x286060: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x286060u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x286064: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x286064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286068: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x286068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28606c:
    // 0x28606c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x28606cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x286070: 0x0  nop
    ctx->pc = 0x286070u;
    // NOP
    // 0x286074: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x286074u;
    {
        const bool branch_taken_0x286074 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x286074) {
            ctx->pc = 0x286078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286074u;
            // 0x286078: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28607Cu;
            goto label_28607c;
        }
    }
    ctx->pc = 0x28607Cu;
label_28607c:
    // 0x28607c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x28607cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x286080: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x286080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x286084: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x286084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x286088: 0x601ffef  bgez        $s0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x286088u;
    {
        const bool branch_taken_0x286088 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x28608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286088u;
        // 0x28608c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286088) {
            ctx->pc = 0x286048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286048;
        }
    }
    ctx->pc = 0x286090u;
    // 0x286090: 0x82c20000  lb          $v0, 0x0($s6)
    ctx->pc = 0x286090u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x286094: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x286094u;
    {
        const bool branch_taken_0x286094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286094) {
            ctx->pc = 0x286098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286094u;
            // 0x286098: 0x92430000  lbu         $v1, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2860ACu;
            goto label_2860ac;
        }
    }
    ctx->pc = 0x28609Cu;
    // 0x28609c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x28609cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2860a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2860a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2860a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2860A4u;
    {
        const bool branch_taken_0x2860a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2860A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2860A4u;
        // 0x2860a8: 0xafa20118  sw          $v0, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2860a4) {
            ctx->pc = 0x2860C4u;
            goto label_2860c4;
        }
    }
    ctx->pc = 0x2860ACu;
label_2860ac:
    // 0x2860ac: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x2860acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2860b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2860b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2860b4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2860b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2860b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2860b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2860bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2860bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2860c0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2860c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2860c4:
    // 0x2860c4: 0x81600  sll         $v0, $t0, 24
    ctx->pc = 0x2860c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x2860c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2860c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2860cc: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2860ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2860d0: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2860D0u;
    {
        const bool branch_taken_0x2860d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2860D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2860D0u;
        // 0x2860d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2860d0) {
            ctx->pc = 0x28612Cu;
            goto label_28612c;
        }
    }
    ctx->pc = 0x2860D8u;
    // 0x2860d8: 0xc7a30120  lwc1        $f3, 0x120($sp)
    ctx->pc = 0x2860d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2860dc: 0xc7a40124  lwc1        $f4, 0x124($sp)
    ctx->pc = 0x2860dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2860e0: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2860e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2860e4: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x2860e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2860e8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2860e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2860ec: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2860ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2860f0: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2860f0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2860f4: 0xc7a30128  lwc1        $f3, 0x128($sp)
    ctx->pc = 0x2860f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2860f8: 0xc7a40090  lwc1        $f4, 0x90($sp)
    ctx->pc = 0x2860f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2860fc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2860fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x286100: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x286100u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x286104: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x286104u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x286108: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x286108u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x28610c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x28610cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x286110: 0x46010140  add.s       $f5, $f0, $f1
    ctx->pc = 0x286110u;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x286114: 0x46052034  c.lt.s      $f4, $f5
    ctx->pc = 0x286114u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x286118: 0x0  nop
    ctx->pc = 0x286118u;
    // NOP
    // 0x28611c: 0x45030096  bc1tl       . + 4 + (0x96 << 2)
    ctx->pc = 0x28611Cu;
    {
        const bool branch_taken_0x28611c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28611c) {
            ctx->pc = 0x286120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28611Cu;
            // 0x286120: 0xe7a50090  swc1        $f5, 0x90($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x286378u;
            goto label_286378;
        }
    }
    ctx->pc = 0x286124u;
    // 0x286124: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x286124u;
    {
        const bool branch_taken_0x286124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286124u;
        // 0x286128: 0x8fc20010  lw          $v0, 0x10($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286124) {
            ctx->pc = 0x28637Cu;
            goto label_28637c;
        }
    }
    ctx->pc = 0x28612Cu;
label_28612c:
    // 0x28612c: 0x2417000c  addiu       $s7, $zero, 0xC
    ctx->pc = 0x28612cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x286130: 0x8fa50200  lw          $a1, 0x200($sp)
    ctx->pc = 0x286130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x286134: 0x0  nop
    ctx->pc = 0x286134u;
    // NOP
label_286138:
    // 0x286138: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x286138u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x28613c: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x28613cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x286140: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x286140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x286144: 0x4600087  bltz        $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x286144u;
    {
        const bool branch_taken_0x286144 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x286148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286144u;
        // 0x286148: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286144) {
            ctx->pc = 0x286364u;
            goto label_286364;
        }
    }
    ctx->pc = 0x28614Cu;
    // 0x28614c: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x28614cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x286150: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x286150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x286154: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x286154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x286158: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x286158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28615c: 0x4600082  bltz        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x28615Cu;
    {
        const bool branch_taken_0x28615c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x286160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28615Cu;
        // 0x286160: 0x2171818  mult        $v1, $s0, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28615c) {
            ctx->pc = 0x286368u;
            goto label_286368;
        }
    }
    ctx->pc = 0x286164u;
    // 0x286164: 0x8fa80204  lw          $t0, 0x204($sp)
    ctx->pc = 0x286164u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x286168: 0x8fa90218  lw          $t1, 0x218($sp)
    ctx->pc = 0x286168u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x28616c: 0x8fac021c  lw          $t4, 0x21C($sp)
    ctx->pc = 0x28616cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x286170: 0x8fa40264  lw          $a0, 0x264($sp)
    ctx->pc = 0x286170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x286174: 0x1231021  addu        $v0, $t1, $v1
    ctx->pc = 0x286174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x286178: 0x1032821  addu        $a1, $t0, $v1
    ctx->pc = 0x286178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x28617c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x28617cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286180: 0x1834021  addu        $t0, $t4, $v1
    ctx->pc = 0x286180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x286184: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x286184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286188: 0x8fa9020c  lw          $t1, 0x20C($sp)
    ctx->pc = 0x286188u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x28618c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28618cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x286190: 0x8fac0210  lw          $t4, 0x210($sp)
    ctx->pc = 0x286190u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x286194: 0x1231021  addu        $v0, $t1, $v1
    ctx->pc = 0x286194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x286198: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x286198u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x28619c: 0x1834821  addu        $t1, $t4, $v1
    ctx->pc = 0x28619cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x2861a0: 0x8fa701f0  lw          $a3, 0x1F0($sp)
    ctx->pc = 0x2861a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2861a4: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x2861a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2861a8: 0x8fac0220  lw          $t4, 0x220($sp)
    ctx->pc = 0x2861a8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2861ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2861acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2861b0: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x2861b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2861b4: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x2861b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x2861b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2861b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2861bc: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x2861bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x2861c0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2861c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2861c4: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x2861c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2861c8: 0x7faa0270  sq          $t2, 0x270($sp)
    ctx->pc = 0x2861c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 10));
    // 0x2861cc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2861ccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2861d0: 0x7fab0280  sq          $t3, 0x280($sp)
    ctx->pc = 0x2861d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 11));
    // 0x2861d4: 0xc082b3c  jal         func_20ACF0
    ctx->pc = 0x2861D4u;
    SET_GPR_U32(ctx, 31, 0x2861DCu);
    ctx->pc = 0x2861D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2861D4u;
    // 0x2861d8: 0xe7a20138  swc1        $f2, 0x138($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x20ACF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ACF0u, 0x2861D4u, 0x2861DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2861DCu;
label_2861dc:
    // 0x2861dc: 0x8fa30204  lw          $v1, 0x204($sp)
    ctx->pc = 0x2861dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x2861e0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2861e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2861e4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2861e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2861e8: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x2861e8u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x2861ec: 0x600013  mtlo        $v1
    ctx->pc = 0x2861ecu;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x2861f0: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x2861f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2861f4: 0x72021000  madd        $v0, $s0, $v0
    ctx->pc = 0x2861f4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2861f8: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x2861f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x2861fc: 0x7bab0280  lq          $t3, 0x280($sp)
    ctx->pc = 0x2861fcu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x286200: 0x46001906  mov.s       $f4, $f3
    ctx->pc = 0x286200u;
    ctx->f[4] = FPU_MOV_S(ctx->f[3]);
    // 0x286204: 0x7baa0270  lq          $t2, 0x270($sp)
    ctx->pc = 0x286204u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x286208: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x286208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28620c: 0x0  nop
    ctx->pc = 0x28620cu;
    // NOP
label_286210:
    // 0x286210: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x286210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x286214: 0x46041032  c.eq.s      $f2, $f4
    ctx->pc = 0x286214u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x286218: 0x0  nop
    ctx->pc = 0x286218u;
    // NOP
    // 0x28621c: 0x4503001c  bc1tl       . + 4 + (0x1C << 2)
    ctx->pc = 0x28621Cu;
    {
        const bool branch_taken_0x28621c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28621c) {
            ctx->pc = 0x286220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28621Cu;
            // 0x286220: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286290u;
            goto label_286290;
        }
    }
    ctx->pc = 0x286224u;
    // 0x286224: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x286224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286228: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x286228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28622c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x28622cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x286230: 0x0  nop
    ctx->pc = 0x286230u;
    // NOP
    // 0x286234: 0x0  nop
    ctx->pc = 0x286234u;
    // NOP
    // 0x286238: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x286238u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x28623c: 0x46012036  c.le.s      $f4, $f1
    ctx->pc = 0x28623cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x286240: 0x0  nop
    ctx->pc = 0x286240u;
    // NOP
    // 0x286244: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x286244u;
    {
        const bool branch_taken_0x286244 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x286248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286244u;
        // 0x286248: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286244) {
            ctx->pc = 0x286250u;
            goto label_286250;
        }
    }
    ctx->pc = 0x28624Cu;
    // 0x28624c: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x28624cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
label_286250:
    // 0x286250: 0x46032036  c.le.s      $f4, $f3
    ctx->pc = 0x286250u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x286254: 0x0  nop
    ctx->pc = 0x286254u;
    // NOP
    // 0x286258: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x286258u;
    {
        const bool branch_taken_0x286258 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x286258) {
            ctx->pc = 0x28625Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286258u;
            // 0x28625c: 0x46001807  neg.s       $f0, $f3 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x286278u;
            goto label_286278;
        }
    }
    ctx->pc = 0x286260u;
    // 0x286260: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x286260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x286264: 0x0  nop
    ctx->pc = 0x286264u;
    // NOP
    // 0x286268: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x286268u;
    {
        const bool branch_taken_0x286268 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x286268) {
            ctx->pc = 0x28626Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286268u;
            // 0x28626c: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
            ctx->f[3] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28628Cu;
            goto label_28628c;
        }
    }
    ctx->pc = 0x286270u;
    // 0x286270: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x286270u;
    {
        const bool branch_taken_0x286270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286270u;
        // 0x286274: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286270) {
            ctx->pc = 0x286290u;
            goto label_286290;
        }
    }
    ctx->pc = 0x286278u;
label_286278:
    // 0x286278: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x286278u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28627c: 0x0  nop
    ctx->pc = 0x28627cu;
    // NOP
    // 0x286280: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x286280u;
    {
        const bool branch_taken_0x286280 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x286280) {
            ctx->pc = 0x286284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286280u;
            // 0x286284: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286290u;
            goto label_286290;
        }
    }
    ctx->pc = 0x286288u;
    // 0x286288: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x286288u;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
label_28628c:
    // 0x28628c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x28628cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_286290:
    // 0x286290: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x286290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x286294: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x286294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x286298: 0x461ffdd  bgez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x286298u;
    {
        const bool branch_taken_0x286298 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x28629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286298u;
        // 0x28629c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286298) {
            ctx->pc = 0x286210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286210;
        }
    }
    ctx->pc = 0x2862A0u;
    // 0x2862a0: 0x8fa40240  lw          $a0, 0x240($sp)
    ctx->pc = 0x2862a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2862a4: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x2862a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2862a8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2862a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2862ac: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2862acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2862b0: 0x0  nop
    ctx->pc = 0x2862b0u;
    // NOP
    // 0x2862b4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2862B4u;
    {
        const bool branch_taken_0x2862b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2862B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862B4u;
        // 0x2862b8: 0x2171818  mult        $v1, $s0, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2862b4) {
            ctx->pc = 0x2862F0u;
            goto label_2862f0;
        }
    }
    ctx->pc = 0x2862BCu;
    // 0x2862bc: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x2862bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2862c0: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x2862c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x2862c4: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x2862c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2862c8: 0x8fa6024c  lw          $a2, 0x24C($sp)
    ctx->pc = 0x2862c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x2862cc: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x2862ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2862d0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2862d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2862d4: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x2862d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2862d8: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x2862d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2862dc: 0x8fa70250  lw          $a3, 0x250($sp)
    ctx->pc = 0x2862dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2862e0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2862e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2862e4: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2862e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2862e8: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x2862e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2862ec: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2862ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2862f0:
    // 0x2862f0: 0x8fa80244  lw          $t0, 0x244($sp)
    ctx->pc = 0x2862f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x2862f4: 0x1111021  addu        $v0, $t0, $s1
    ctx->pc = 0x2862f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
    // 0x2862f8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2862f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2862fc: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2862fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x286300: 0x0  nop
    ctx->pc = 0x286300u;
    // NOP
    // 0x286304: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x286304u;
    {
        const bool branch_taken_0x286304 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x286308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286304u;
        // 0x286308: 0x2171818  mult        $v1, $s0, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x286304) {
            ctx->pc = 0x286340u;
            goto label_286340;
        }
    }
    ctx->pc = 0x28630Cu;
    // 0x28630c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x28630cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x286310: 0x8fa90254  lw          $t1, 0x254($sp)
    ctx->pc = 0x286310u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x286314: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x286314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286318: 0x8fac0258  lw          $t4, 0x258($sp)
    ctx->pc = 0x286318u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x28631c: 0x1231021  addu        $v0, $t1, $v1
    ctx->pc = 0x28631cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x286320: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x286320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x286324: 0x8fa2025c  lw          $v0, 0x25C($sp)
    ctx->pc = 0x286324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
    // 0x286328: 0x1832021  addu        $a0, $t4, $v1
    ctx->pc = 0x286328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x28632c: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x28632cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286330: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x286330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x286334: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x286334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x286338: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x286338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28633c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x28633cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_286340:
    // 0x286340: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x286340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x286344: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x286344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x286348: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x286348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28634c: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x28634cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x286350: 0x0  nop
    ctx->pc = 0x286350u;
    // NOP
    // 0x286354: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x286354u;
    {
        const bool branch_taken_0x286354 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x286354) {
            ctx->pc = 0x286358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286354u;
            // 0x286358: 0xe4450000  swc1        $f5, 0x0($v0) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x286368u;
            goto label_286368;
        }
    }
    ctx->pc = 0x28635Cu;
    // 0x28635c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28635Cu;
    {
        const bool branch_taken_0x28635c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28635Cu;
        // 0x286360: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28635c) {
            ctx->pc = 0x28636Cu;
            goto label_28636c;
        }
    }
    ctx->pc = 0x286364u;
label_286364:
    // 0x286364: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x286364u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_286368:
    // 0x286368: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x286368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28636c:
    // 0x28636c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x28636cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x286370: 0x1440ff71  bnez        $v0, . + 4 + (-0x8F << 2)
    ctx->pc = 0x286370u;
    {
        const bool branch_taken_0x286370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286370u;
        // 0x286374: 0x8fa50200  lw          $a1, 0x200($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286370) {
            ctx->pc = 0x286138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286138;
        }
    }
    ctx->pc = 0x286378u;
label_286378:
    // 0x286378: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x286378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_28637c:
    // 0x28637c: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x28637cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286380: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x286380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286384: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x286384u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x286388: 0x1440fef7  bnez        $v0, . + 4 + (-0x109 << 2)
    ctx->pc = 0x286388u;
    {
        const bool branch_taken_0x286388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286388u;
        // 0x28638c: 0x140902d  daddu       $s2, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286388) {
            ctx->pc = 0x285F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285f68;
        }
    }
    ctx->pc = 0x286390u;
    // 0x286390: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x286390u;
    {
        const bool branch_taken_0x286390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286390u;
        // 0x286394: 0x8fbe023c  lw          $fp, 0x23C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286390) {
            ctx->pc = 0x2863A4u;
            goto label_2863a4;
        }
    }
    ctx->pc = 0x286398u;
label_286398:
    // 0x286398: 0x27de0018  addiu       $fp, $fp, 0x18
    ctx->pc = 0x286398u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 24));
    // 0x28639c: 0xafbe023c  sw          $fp, 0x23C($sp)
    ctx->pc = 0x28639cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 30));
    // 0x2863a0: 0x8fbe023c  lw          $fp, 0x23C($sp)
    ctx->pc = 0x2863a0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
label_2863a4:
    // 0x2863a4: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x2863a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2863a8: 0x443fee1  bgezl       $v0, . + 4 + (-0x11F << 2)
    ctx->pc = 0x2863A8u;
    {
        const bool branch_taken_0x2863a8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2863a8) {
            ctx->pc = 0x2863ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2863A8u;
            // 0x2863ac: 0x8fc2000c  lw          $v0, 0xC($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285f30;
        }
    }
    ctx->pc = 0x2863B0u;
    // 0x2863b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2863B0u;
    {
        const bool branch_taken_0x2863b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2863B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2863B0u;
        // 0x2863b4: 0x8fa70260  lw          $a3, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2863b0) {
            ctx->pc = 0x2863C4u;
            goto label_2863c4;
        }
    }
    ctx->pc = 0x2863B8u;
label_2863b8:
    // 0x2863b8: 0x26640008  addiu       $a0, $s3, 0x8
    ctx->pc = 0x2863b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2863bc: 0xafa40234  sw          $a0, 0x234($sp)
    ctx->pc = 0x2863bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 4));
    // 0x2863c0: 0x8fa70260  lw          $a3, 0x260($sp)
    ctx->pc = 0x2863c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_2863c4:
    // 0x2863c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2863c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2863c8: 0x92680001  lbu         $t0, 0x1($s3)
    ctx->pc = 0x2863c8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x2863cc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2863ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2863d0: 0x24e50004  addiu       $a1, $a3, 0x4
    ctx->pc = 0x2863d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2863d4: 0x0  nop
    ctx->pc = 0x2863d4u;
    // NOP
label_2863d8:
    // 0x2863d8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2863d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2863dc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2863dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2863e0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2863e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2863e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2863e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2863e8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2863e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2863ec: 0x202300b  movn        $a2, $s0, $v0
    ctx->pc = 0x2863ecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 16));
    // 0x2863f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2863f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2863f4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x2863f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2863f8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2863F8u;
    {
        const bool branch_taken_0x2863f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2863FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2863F8u;
        // 0x2863fc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2863f8) {
            ctx->pc = 0x2863D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2863d8;
        }
    }
    ctx->pc = 0x286400u;
    // 0x286400: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x286400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286404: 0x10c2000e  beq         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x286404u;
    {
        const bool branch_taken_0x286404 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x286408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286404u;
        // 0x286408: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286404) {
            ctx->pc = 0x286440u;
            goto label_286440;
        }
    }
    ctx->pc = 0x28640Cu;
    // 0x28640c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28640Cu;
    {
        const bool branch_taken_0x28640c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28640Cu;
        // 0x286410: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28640c) {
            ctx->pc = 0x286424u;
            goto label_286424;
        }
    }
    ctx->pc = 0x286414u;
    // 0x286414: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x286414u;
    {
        const bool branch_taken_0x286414 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x286418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286414u;
        // 0x286418: 0x81600  sll         $v0, $t0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286414) {
            ctx->pc = 0x286434u;
            goto label_286434;
        }
    }
    ctx->pc = 0x28641Cu;
    // 0x28641c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x28641Cu;
    {
        const bool branch_taken_0x28641c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28641Cu;
        // 0x286420: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28641c) {
            ctx->pc = 0x28645Cu;
            goto label_28645c;
        }
    }
    ctx->pc = 0x286424u;
label_286424:
    // 0x286424: 0x10c20009  beq         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x286424u;
    {
        const bool branch_taken_0x286424 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x286428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286424u;
        // 0x286428: 0x81600  sll         $v0, $t0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286424) {
            ctx->pc = 0x28644Cu;
            goto label_28644c;
        }
    }
    ctx->pc = 0x28642Cu;
    // 0x28642c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28642Cu;
    {
        const bool branch_taken_0x28642c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28642Cu;
        // 0x286430: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28642c) {
            ctx->pc = 0x28645Cu;
            goto label_28645c;
        }
    }
    ctx->pc = 0x286434u;
label_286434:
    // 0x286434: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x286434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x286438: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x286438u;
    {
        const bool branch_taken_0x286438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286438u;
        // 0x28643c: 0x90a20001  lbu         $v0, 0x1($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286438) {
            ctx->pc = 0x286450u;
            goto label_286450;
        }
    }
    ctx->pc = 0x286440u;
label_286440:
    // 0x286440: 0x8fa601e4  lw          $a2, 0x1E4($sp)
    ctx->pc = 0x286440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x286444: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x286444u;
    {
        const bool branch_taken_0x286444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286444u;
        // 0x286448: 0x90c20001  lbu         $v0, 0x1($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286444) {
            ctx->pc = 0x286450u;
            goto label_286450;
        }
    }
    ctx->pc = 0x28644Cu;
label_28644c:
    // 0x28644c: 0x92c20001  lbu         $v0, 0x1($s6)
    ctx->pc = 0x28644cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
label_286450:
    // 0x286450: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x286450u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x286454: 0x81600  sll         $v0, $t0, 24
    ctx->pc = 0x286454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x286458: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x286458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28645c:
    // 0x28645c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x28645cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x286460: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x286460u;
    {
        const bool branch_taken_0x286460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x286464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286460u;
        // 0x286464: 0x8fa801d4  lw          $t0, 0x1D4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286460) {
            ctx->pc = 0x2864B8u;
            goto label_2864b8;
        }
    }
    ctx->pc = 0x286468u;
    // 0x286468: 0x8fa701d4  lw          $a3, 0x1D4($sp)
    ctx->pc = 0x286468u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x28646c: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x28646cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x286470: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x286470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286474: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x286474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x286478: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x286478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x28647c: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x28647cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286480: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x286480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x286484: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x286484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x286488: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x286488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x28648c: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x28648cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x286490: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x286490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x286494: 0xe6630008  swc1        $f3, 0x8($s3)
    ctx->pc = 0x286494u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x286498: 0xe661000c  swc1        $f1, 0xC($s3)
    ctx->pc = 0x286498u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x28649c: 0xc0b57ea  jal         func_2D5FA8
    ctx->pc = 0x28649Cu;
    SET_GPR_U32(ctx, 31, 0x2864A4u);
    ctx->pc = 0x2864A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28649Cu;
    // 0x2864a0: 0xe6620010  swc1        $f2, 0x10($s3) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5FA8u, 0x28649Cu, 0x2864A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2864A4u;
label_2864a4:
    // 0x2864a4: 0x8fa50234  lw          $a1, 0x234($sp)
    ctx->pc = 0x2864a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x2864a8: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x2864A8u;
    SET_GPR_U32(ctx, 31, 0x2864B0u);
    ctx->pc = 0x2864ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2864A8u;
    // 0x2864ac: 0x8fa401f4  lw          $a0, 0x1F4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x2864A8u, 0x2864B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2864B0u;
label_2864b0:
    // 0x2864b0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2864B0u;
    {
        const bool branch_taken_0x2864b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2864B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864B0u;
        // 0x2864b4: 0x8fa301d8  lw          $v1, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2864b0) {
            ctx->pc = 0x2865E8u;
            goto label_2865e8;
        }
    }
    ctx->pc = 0x2864B8u;
label_2864b8:
    // 0x2864b8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2864b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2864bc: 0x92650000  lbu         $a1, 0x0($s3)
    ctx->pc = 0x2864bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2864c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2864c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2864c4: 0x8d090004  lw          $t1, 0x4($t0)
    ctx->pc = 0x2864c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2864c8: 0x26710014  addiu       $s1, $s3, 0x14
    ctx->pc = 0x2864c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x2864cc: 0x8fa80200  lw          $t0, 0x200($sp)
    ctx->pc = 0x2864ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2864d0: 0x8fa60230  lw          $a2, 0x230($sp)
    ctx->pc = 0x2864d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2864d4: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2864d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2864d8:
    // 0x2864d8: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x2864d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2864dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2864dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2864e0: 0x4600012  bltz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2864E0u;
    {
        const bool branch_taken_0x2864e0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2864E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864E0u;
        // 0x2864e4: 0x26150001  addiu       $s5, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2864e0) {
            ctx->pc = 0x28652Cu;
            goto label_28652c;
        }
    }
    ctx->pc = 0x2864E8u;
    // 0x2864e8: 0x8faa0200  lw          $t2, 0x200($sp)
    ctx->pc = 0x2864e8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2864ec: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x2864ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2864f0: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x2864f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2864f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2864f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2864f8: 0x462000d  bltzl       $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2864F8u;
    {
        const bool branch_taken_0x2864f8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2864f8) {
            ctx->pc = 0x2864FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2864F8u;
            // 0x2864fc: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286530u;
            goto label_286530;
        }
    }
    ctx->pc = 0x286500u;
    // 0x286500: 0x4e00009  bltz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x286500u;
    {
        const bool branch_taken_0x286500 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x286504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286500u;
        // 0x286504: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286500) {
            ctx->pc = 0x286528u;
            goto label_286528;
        }
    }
    ctx->pc = 0x286508u;
    // 0x286508: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x286508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x28650c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x28650cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x286510: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x286510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286514: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x286514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286518: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x286518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28651c: 0x0  nop
    ctx->pc = 0x28651cu;
    // NOP
    // 0x286520: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x286520u;
    {
        const bool branch_taken_0x286520 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x286520) {
            ctx->pc = 0x286524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286520u;
            // 0x286524: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286530u;
            goto label_286530;
        }
    }
    ctx->pc = 0x286528u;
label_286528:
    // 0x286528: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x286528u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28652c:
    // 0x28652c: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x28652cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_286530:
    // 0x286530: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x286530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x286534: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x286534u;
    {
        const bool branch_taken_0x286534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286534) {
            ctx->pc = 0x286538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286534u;
            // 0x286538: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2864D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2864d8;
        }
    }
    ctx->pc = 0x28653Cu;
    // 0x28653c: 0x8fac0230  lw          $t4, 0x230($sp)
    ctx->pc = 0x28653cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x286540: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x286540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x286544: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x286544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x286548: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x286548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x28654c: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x28654cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x286550: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x286550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x286554: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x286554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286558: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x286558u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x28655c: 0x52c83  sra         $a1, $a1, 18
    ctx->pc = 0x28655cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 18));
    // 0x286560: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x286560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x286564: 0x1252821  addu        $a1, $t1, $a1
    ctx->pc = 0x286564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x286568: 0x8fa2025c  lw          $v0, 0x25C($sp)
    ctx->pc = 0x286568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
    // 0x28656c: 0x8fa60248  lw          $a2, 0x248($sp)
    ctx->pc = 0x28656cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x286570: 0x8fa7024c  lw          $a3, 0x24C($sp)
    ctx->pc = 0x286570u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x286574: 0x434821  addu        $t1, $v0, $v1
    ctx->pc = 0x286574u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x286578: 0x8fa80250  lw          $t0, 0x250($sp)
    ctx->pc = 0x286578u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x28657c: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x28657cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x286580: 0x8faa0254  lw          $t2, 0x254($sp)
    ctx->pc = 0x286580u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x286584: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x286584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x286588: 0x8fac0258  lw          $t4, 0x258($sp)
    ctx->pc = 0x286588u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x28658c: 0x1033821  addu        $a3, $t0, $v1
    ctx->pc = 0x28658cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x286590: 0x1434021  addu        $t0, $t2, $v1
    ctx->pc = 0x286590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x286594: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x286594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286598: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x286598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x28659c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x28659cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2865a0: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x2865a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2865a4: 0xc5040000  lwc1        $f4, 0x0($t0)
    ctx->pc = 0x2865a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2865a8: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x2865a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2865ac: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x2865acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2865b0: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x2865b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x2865b4: 0xe660001c  swc1        $f0, 0x1C($s3)
    ctx->pc = 0x2865b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x2865b8: 0xe662000c  swc1        $f2, 0xC($s3)
    ctx->pc = 0x2865b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x2865bc: 0xe6630010  swc1        $f3, 0x10($s3)
    ctx->pc = 0x2865bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x2865c0: 0xe6640014  swc1        $f4, 0x14($s3)
    ctx->pc = 0x2865c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x2865c4: 0xc0b57ea  jal         func_2D5FA8
    ctx->pc = 0x2865C4u;
    SET_GPR_U32(ctx, 31, 0x2865CCu);
    ctx->pc = 0x2865C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2865C4u;
    // 0x2865c8: 0xe6650018  swc1        $f5, 0x18($s3) (Delay Slot)
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5FA8u, 0x2865C4u, 0x2865CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2865CCu;
label_2865cc:
    // 0x2865cc: 0x8fa50234  lw          $a1, 0x234($sp)
    ctx->pc = 0x2865ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x2865d0: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x2865D0u;
    SET_GPR_U32(ctx, 31, 0x2865D8u);
    ctx->pc = 0x2865D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2865D0u;
    // 0x2865d4: 0x8fa40208  lw          $a0, 0x208($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x2865D0u, 0x2865D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2865D8u;
label_2865d8:
    // 0x2865d8: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x2865d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x2865dc: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x2865DCu;
    SET_GPR_U32(ctx, 31, 0x2865E4u);
    ctx->pc = 0x2865E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2865DCu;
    // 0x2865e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x2865DCu, 0x2865E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2865E4u;
label_2865e4:
    // 0x2865e4: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x2865e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_2865e8:
    // 0x2865e8: 0x8fb00214  lw          $s0, 0x214($sp)
    ctx->pc = 0x2865e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x2865ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2865ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2865f0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2865f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2865f4: 0x1440fd7e  bnez        $v0, . + 4 + (-0x282 << 2)
    ctx->pc = 0x2865F4u;
    {
        const bool branch_taken_0x2865f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2865F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865F4u;
        // 0x2865f8: 0x8fa201dc  lw          $v0, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2865f4) {
            ctx->pc = 0x285BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285bf0;
        }
    }
    ctx->pc = 0x2865FCu;
    // 0x2865fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2865FCu;
    {
        const bool branch_taken_0x2865fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2865fc) {
            ctx->pc = 0x28662Cu;
            goto label_28662c;
        }
    }
    ctx->pc = 0x286604u;
label_286604:
    // 0x286604: 0x8fa401d0  lw          $a0, 0x1D0($sp)
    ctx->pc = 0x286604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x286608: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x286608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28660c: 0x8fa701d0  lw          $a3, 0x1D0($sp)
    ctx->pc = 0x28660cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x286610: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x286610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x286614: 0x24840be8  addiu       $a0, $a0, 0xBE8
    ctx->pc = 0x286614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3048));
    // 0x286618: 0xafa501f8  sw          $a1, 0x1F8($sp)
    ctx->pc = 0x286618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 5));
    // 0x28661c: 0x24e70bdc  addiu       $a3, $a3, 0xBDC
    ctx->pc = 0x28661cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3036));
    // 0x286620: 0xafa4022c  sw          $a0, 0x22C($sp)
    ctx->pc = 0x286620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 4));
    // 0x286624: 0xafa601fc  sw          $a2, 0x1FC($sp)
    ctx->pc = 0x286624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 6));
    // 0x286628: 0xafa70224  sw          $a3, 0x224($sp)
    ctx->pc = 0x286628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 7));
label_28662c:
    // 0x28662c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28662cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x286630: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x286630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x286634: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x286634u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286638: 0x8fa401f8  lw          $a0, 0x1F8($sp)
    ctx->pc = 0x286638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x28663c: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x28663cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x286640: 0x8fa301fc  lw          $v1, 0x1FC($sp)
    ctx->pc = 0x286640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x286644: 0x0  nop
    ctx->pc = 0x286644u;
    // NOP
label_286648:
    // 0x286648: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x286648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28664c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x28664cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286650: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x286650u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x286654: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x286654u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x286658: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x286658u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28665c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x28665cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x286660: 0x0  nop
    ctx->pc = 0x286660u;
    // NOP
    // 0x286664: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x286664u;
    {
        const bool branch_taken_0x286664 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x286668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286664u;
        // 0x286668: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x286664) {
            ctx->pc = 0x286670u;
            goto label_286670;
        }
    }
    ctx->pc = 0x28666Cu;
    // 0x28666c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x28666cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_286670:
    // 0x286670: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x286670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x286674: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x286674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x286678: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x286678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x28667c: 0x601fff2  bgez        $s0, . + 4 + (-0xE << 2)
    ctx->pc = 0x28667Cu;
    {
        const bool branch_taken_0x28667c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x286680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28667Cu;
        // 0x286680: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28667c) {
            ctx->pc = 0x286648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286648;
        }
    }
    ctx->pc = 0x286684u;
    // 0x286684: 0xc78089ac  lwc1        $f0, -0x7654($gp)
    ctx->pc = 0x286684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286688: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x286688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28668c: 0x8fa4022c  lw          $a0, 0x22C($sp)
    ctx->pc = 0x28668cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
    // 0x286690: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x286690u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x286694: 0x8fa30224  lw          $v1, 0x224($sp)
    ctx->pc = 0x286694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
    // 0x286698: 0x8fa201fc  lw          $v0, 0x1FC($sp)
    ctx->pc = 0x286698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x28669c: 0x0  nop
    ctx->pc = 0x28669cu;
    // NOP
label_2866a0:
    // 0x2866a0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2866a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2866a4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2866a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2866a8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2866a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2866ac: 0x46140041  sub.s       $f1, $f0, $f20
    ctx->pc = 0x2866acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2866b0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2866b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2866b4: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2866b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2866b8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2866b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2866bc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2866bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2866c0: 0x601fff7  bgez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2866C0u;
    {
        const bool branch_taken_0x2866c0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2866C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866C0u;
        // 0x2866c4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2866c0) {
            ctx->pc = 0x2866A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2866a0;
        }
    }
    ctx->pc = 0x2866C8u;
    // 0x2866c8: 0xdfbf0320  ld          $ra, 0x320($sp)
    ctx->pc = 0x2866c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2866cc: 0xdfbe0310  ld          $fp, 0x310($sp)
    ctx->pc = 0x2866ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x2866d0: 0xdfb70300  ld          $s7, 0x300($sp)
    ctx->pc = 0x2866d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2866d4: 0xdfb602f0  ld          $s6, 0x2F0($sp)
    ctx->pc = 0x2866d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2866d8: 0xdfb502e0  ld          $s5, 0x2E0($sp)
    ctx->pc = 0x2866d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x2866dc: 0xdfb402d0  ld          $s4, 0x2D0($sp)
    ctx->pc = 0x2866dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2866e0: 0xdfb302c0  ld          $s3, 0x2C0($sp)
    ctx->pc = 0x2866e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2866e4: 0xdfb202b0  ld          $s2, 0x2B0($sp)
    ctx->pc = 0x2866e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2866e8: 0xdfb102a0  ld          $s1, 0x2A0($sp)
    ctx->pc = 0x2866e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x2866ec: 0xdfb00290  ld          $s0, 0x290($sp)
    ctx->pc = 0x2866ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2866f0: 0xc7b40330  lwc1        $f20, 0x330($sp)
    ctx->pc = 0x2866f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2866f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2866F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2866F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866F4u;
        // 0x2866f8: 0x27bd0340  addiu       $sp, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2866F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2866FCu;
}

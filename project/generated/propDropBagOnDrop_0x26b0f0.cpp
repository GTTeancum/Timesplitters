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

// Function: propDropBagOnDrop
// Address: 0x26b0f0 - 0x26b42c
void propDropBagOnDrop_0x26b0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propDropBagOnDrop_0x26b0f0");
#endif

    switch (ctx->pc) {
        case 0x26b178u: goto label_26b178;
        case 0x26b198u: goto label_26b198;
        case 0x26b1c8u: goto label_26b1c8;
        case 0x26b248u: goto label_26b248;
        case 0x26b254u: goto label_26b254;
        case 0x26b28cu: goto label_26b28c;
        case 0x26b2b0u: goto label_26b2b0;
        case 0x26b2c4u: goto label_26b2c4;
        case 0x26b2f8u: goto label_26b2f8;
        case 0x26b348u: goto label_26b348;
        case 0x26b35cu: goto label_26b35c;
        case 0x26b39cu: goto label_26b39c;
        case 0x26b3fcu: goto label_26b3fc;
        default: break;
    }

    ctx->pc = 0x26b0f0u;

    // 0x26b0f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x26b0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x26b0f4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26b0f8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x26b0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x26b0fc: 0x3442ffbf  ori         $v0, $v0, 0xFFBF
    ctx->pc = 0x26b0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65471);
    // 0x26b100: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x26b100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x26b104: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x26b104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x26b108: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x26b108u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b10c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x26b10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x26b110: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26b110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b114: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x26b114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x26b118: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x26b118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x26b11c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x26b11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x26b120: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x26b120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x26b124: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x26b124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x26b128: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x26b128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26b12c: 0x8e300bcc  lw          $s0, 0xBCC($s1)
    ctx->pc = 0x26b12cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3020)));
    // 0x26b130: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x26b130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x26b134: 0x8cb60160  lw          $s6, 0x160($a1)
    ctx->pc = 0x26b134u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 352)));
    // 0x26b138: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x26b138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x26b13c: 0x8e950160  lw          $s5, 0x160($s4)
    ctx->pc = 0x26b13cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 352)));
    // 0x26b140: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x26b140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26b144: 0xae830010  sw          $v1, 0x10($s4)
    ctx->pc = 0x26b144u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 3));
    // 0x26b148: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x26b148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x26b14c: 0x8ec70010  lw          $a3, 0x10($s6)
    ctx->pc = 0x26b14cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x26b150: 0x1447005e  bne         $v0, $a3, . + 4 + (0x5E << 2)
    ctx->pc = 0x26B150u;
    {
        const bool branch_taken_0x26b150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x26B154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B150u;
        // 0x26b154: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b150) {
            ctx->pc = 0x26B2CCu;
            goto label_26b2cc;
        }
    }
    ctx->pc = 0x26B158u;
    // 0x26b158: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x26b158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x26b15c: 0x10470056  beq         $v0, $a3, . + 4 + (0x56 << 2)
    ctx->pc = 0x26B15Cu;
    {
        const bool branch_taken_0x26b15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x26B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B15Cu;
        // 0x26b160: 0x24040027  addiu       $a0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b15c) {
            ctx->pc = 0x26B2B8u;
            goto label_26b2b8;
        }
    }
    ctx->pc = 0x26B164u;
    // 0x26b164: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x26b164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26b168: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26b168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26b16c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26b16cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26b170: 0xc088f98  jal         func_223E60
    ctx->pc = 0x26B170u;
    SET_GPR_U32(ctx, 31, 0x26B178u);
    ctx->pc = 0x26B174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B170u;
    // 0x26b174: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x26B170u, 0x26B178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B178u;
label_26b178:
    // 0x26b178: 0x8e2200f8  lw          $v0, 0xF8($s1)
    ctx->pc = 0x26b178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x26b17c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26b17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26b180: 0xae2200f8  sw          $v0, 0xF8($s1)
    ctx->pc = 0x26b180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 2));
    // 0x26b184: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x26b184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x26b188: 0x18a00039  blez        $a1, . + 4 + (0x39 << 2)
    ctx->pc = 0x26B188u;
    {
        const bool branch_taken_0x26b188 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x26B18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B188u;
        // 0x26b18c: 0x26130030  addiu       $s3, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b188) {
            ctx->pc = 0x26B270u;
            goto label_26b270;
        }
    }
    ctx->pc = 0x26B190u;
    // 0x26b190: 0x3c1e0033  lui         $fp, 0x33
    ctx->pc = 0x26b190u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)51 << 16));
    // 0x26b194: 0x2402071c  addiu       $v0, $zero, 0x71C
    ctx->pc = 0x26b194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
label_26b198:
    // 0x26b198: 0x8f86b230  lw          $a2, -0x4DD0($gp)
    ctx->pc = 0x26b198u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x26b19c: 0x2428018  mult        $s0, $s2, $v0
    ctx->pc = 0x26b19cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x26b1a0: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x26b1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x26b1a4: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x26b1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x26b1a8: 0x8c430180  lw          $v1, 0x180($v0)
    ctx->pc = 0x26b1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x26b1ac: 0x8c640160  lw          $a0, 0x160($v1)
    ctx->pc = 0x26b1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x26b1b0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x26b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x26b1b4: 0x54450006  bnel        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26B1B4u;
    {
        const bool branch_taken_0x26b1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x26b1b4) {
            ctx->pc = 0x26B1B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B1B4u;
            // 0x26b1b8: 0x2068021  addu        $s0, $s0, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B1D0u;
            goto label_26b1d0;
        }
    }
    ctx->pc = 0x26B1BCu;
    // 0x26b1bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26b1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b1c0: 0xc0ac3dc  jal         func_2B0F70
    ctx->pc = 0x26B1C0u;
    SET_GPR_U32(ctx, 31, 0x26B1C8u);
    ctx->pc = 0x26B1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B1C0u;
    // 0x26b1c4: 0x24050130  addiu       $a1, $zero, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0F70u, 0x26B1C0u, 0x26B1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B1C8u;
label_26b1c8:
    // 0x26b1c8: 0x8f86b230  lw          $a2, -0x4DD0($gp)
    ctx->pc = 0x26b1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x26b1cc: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x26b1ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_26b1d0:
    // 0x26b1d0: 0x8ea50010  lw          $a1, 0x10($s5)
    ctx->pc = 0x26b1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x26b1d4: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x26b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x26b1d8: 0x8c430160  lw          $v1, 0x160($v0)
    ctx->pc = 0x26b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x26b1dc: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x26b1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x26b1e0: 0x5485001d  bnel        $a0, $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x26B1E0u;
    {
        const bool branch_taken_0x26b1e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x26b1e0) {
            ctx->pc = 0x26B1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B1E0u;
            // 0x26b1e4: 0x8f859f74  lw          $a1, -0x608C($gp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B258u;
            goto label_26b258;
        }
    }
    ctx->pc = 0x26B1E8u;
    // 0x26b1e8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x26b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x26b1ec: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x26b1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x26b1f0: 0x8f849354  lw          $a0, -0x6CAC($gp)
    ctx->pc = 0x26b1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x26b1f4: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x26b1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x26b1f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26b1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26b1fc: 0x2469f928  addiu       $t1, $v1, -0x6D8
    ctx->pc = 0x26b1fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965544));
    // 0x26b200: 0x69260007  ldl         $a2, 0x7($t1)
    ctx->pc = 0x26b200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x26b204: 0x6d260000  ldr         $a2, 0x0($t1)
    ctx->pc = 0x26b204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x26b208: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x26b208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26b20c: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x26b20cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26b210: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x26b210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x26b214: 0x24a52c18  addiu       $a1, $a1, 0x2C18
    ctx->pc = 0x26b214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11288));
    // 0x26b218: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x26b218u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26b21c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x26b21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x26b220: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x26b220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x26b224: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x26b224u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26b228: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x26b228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26b22c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26b230: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x26b230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x26b234: 0x8ca611f4  lw          $a2, 0x11F4($a1)
    ctx->pc = 0x26b234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4596)));
    // 0x26b238: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x26b238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x26b23c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x26b23cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b240: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x26B240u;
    SET_GPR_U32(ctx, 31, 0x26B248u);
    ctx->pc = 0x26B244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B240u;
    // 0x26b244: 0x2484f920  addiu       $a0, $a0, -0x6E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x26B240u, 0x26B248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B248u;
label_26b248:
    // 0x26b248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b24c: 0xc0a01a4  jal         func_280690
    ctx->pc = 0x26B24Cu;
    SET_GPR_U32(ctx, 31, 0x26B254u);
    ctx->pc = 0x26B250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B24Cu;
    // 0x26b250: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280690u, 0x26B24Cu, 0x26B254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B254u;
label_26b254:
    // 0x26b254: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x26b254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_26b258:
    // 0x26b258: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x26b258u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x26b25c: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x26b25cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x26b260: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x26B260u;
    {
        const bool branch_taken_0x26b260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B260u;
        // 0x26b264: 0x2402071c  addiu       $v0, $zero, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b260) {
            ctx->pc = 0x26B198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26b198;
        }
    }
    ctx->pc = 0x26B268u;
    // 0x26b268: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26B268u;
    {
        const bool branch_taken_0x26b268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B268u;
        // 0x26b26c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b268) {
            ctx->pc = 0x26B278u;
            goto label_26b278;
        }
    }
    ctx->pc = 0x26B270u;
label_26b270:
    // 0x26b270: 0x3c1e0033  lui         $fp, 0x33
    ctx->pc = 0x26b270u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)51 << 16));
    // 0x26b274: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x26b274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26b278:
    // 0x26b278: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x26b278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x26b27c: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x26B27Cu;
    {
        const bool branch_taken_0x26b27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B27Cu;
        // 0x26b280: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b27c) {
            ctx->pc = 0x26B394u;
            goto label_26b394;
        }
    }
    ctx->pc = 0x26B284u;
    // 0x26b284: 0xc0ac3dc  jal         func_2B0F70
    ctx->pc = 0x26B284u;
    SET_GPR_U32(ctx, 31, 0x26B28Cu);
    ctx->pc = 0x26B288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B284u;
    // 0x26b288: 0x24050130  addiu       $a1, $zero, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0F70u, 0x26B284u, 0x26B28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B28Cu;
label_26b28c:
    // 0x26b28c: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x26b28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x26b290: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x26b290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x26b294: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x26b294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x26b298: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x26b298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26b29c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26b2a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26b2a4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x26b2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b2a8: 0xc0ac264  jal         func_2B0990
    ctx->pc = 0x26B2A8u;
    SET_GPR_U32(ctx, 31, 0x26B2B0u);
    ctx->pc = 0x26B2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B2A8u;
    // 0x26b2ac: 0x8cc511f8  lw          $a1, 0x11F8($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4600)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0990u, 0x26B2A8u, 0x26B2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B2B0u;
label_26b2b0:
    // 0x26b2b0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x26B2B0u;
    {
        const bool branch_taken_0x26b2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B2B0u;
        // 0x26b2b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b2b0) {
            ctx->pc = 0x26B394u;
            goto label_26b394;
        }
    }
    ctx->pc = 0x26B2B8u;
label_26b2b8:
    // 0x26b2b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26b2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b2bc: 0xc09ad0c  jal         func_26B430
    ctx->pc = 0x26B2BCu;
    SET_GPR_U32(ctx, 31, 0x26B2C4u);
    ctx->pc = 0x26B2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B2BCu;
    // 0x26b2c0: 0x26130030  addiu       $s3, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B430u, 0x26B2BCu, 0x26B2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B2C4u;
label_26b2c4:
    // 0x26b2c4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x26B2C4u;
    {
        const bool branch_taken_0x26b2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B2C4u;
        // 0x26b2c8: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b2c4) {
            ctx->pc = 0x26B38Cu;
            goto label_26b38c;
        }
    }
    ctx->pc = 0x26B2CCu;
label_26b2cc:
    // 0x26b2cc: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x26b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x26b2d0: 0x1047002d  beq         $v0, $a3, . + 4 + (0x2D << 2)
    ctx->pc = 0x26B2D0u;
    {
        const bool branch_taken_0x26b2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x26B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B2D0u;
        // 0x26b2d4: 0x8f859f74  lw          $a1, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b2d0) {
            ctx->pc = 0x26B388u;
            goto label_26b388;
        }
    }
    ctx->pc = 0x26B2D8u;
    // 0x26b2d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x26b2d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b2dc: 0x8f88b59c  lw          $t0, -0x4A64($gp)
    ctx->pc = 0x26b2dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x26b2e0: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x26b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x26b2e4: 0x18400028  blez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x26B2E4u;
    {
        const bool branch_taken_0x26b2e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B2E4u;
        // 0x26b2e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b2e4) {
            ctx->pc = 0x26B388u;
            goto label_26b388;
        }
    }
    ctx->pc = 0x26B2ECu;
    // 0x26b2ec: 0x26130030  addiu       $s3, $s0, 0x30
    ctx->pc = 0x26b2ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x26b2f0: 0x3c1e0033  lui         $fp, 0x33
    ctx->pc = 0x26b2f0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)51 << 16));
    // 0x26b2f4: 0x0  nop
    ctx->pc = 0x26b2f4u;
    // NOP
label_26b2f8:
    // 0x26b2f8: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x26b2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x26b2fc: 0x8f84b238  lw          $a0, -0x4DC8($gp)
    ctx->pc = 0x26b2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x26b300: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x26b300u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26b304: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x26b304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26b308: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x26b308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x26b30c: 0x54670016  bnel        $v1, $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x26B30Cu;
    {
        const bool branch_taken_0x26b30c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x26b30c) {
            ctx->pc = 0x26B310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B30Cu;
            // 0x26b310: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B368u;
            goto label_26b368;
        }
    }
    ctx->pc = 0x26B314u;
    // 0x26b314: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x26b314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x26b318: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x26b318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x26b31c: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x26b31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x26b320: 0x8cc500f8  lw          $a1, 0xF8($a2)
    ctx->pc = 0x26b320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 248)));
    // 0x26b324: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26b324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26b328: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26b328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b32c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26b32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26b330: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x26b330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x26b334: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26b334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26b338: 0xacc500f8  sw          $a1, 0xF8($a2)
    ctx->pc = 0x26b338u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 248), GPR_U32(ctx, 5));
    // 0x26b33c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x26b33cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b340: 0xc0ac264  jal         func_2B0990
    ctx->pc = 0x26B340u;
    SET_GPR_U32(ctx, 31, 0x26B348u);
    ctx->pc = 0x26B344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B340u;
    // 0x26b344: 0x8c451210  lw          $a1, 0x1210($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0990u, 0x26B340u, 0x26B348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B348u;
label_26b348:
    // 0x26b348: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26b348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26b34c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26b34cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26b350: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x26b350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x26b354: 0xc088f98  jal         func_223E60
    ctx->pc = 0x26B354u;
    SET_GPR_U32(ctx, 31, 0x26B35Cu);
    ctx->pc = 0x26B358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B354u;
    // 0x26b358: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x26B354u, 0x26B35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B35Cu;
label_26b35c:
    // 0x26b35c: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x26b35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x26b360: 0x8f88b59c  lw          $t0, -0x4A64($gp)
    ctx->pc = 0x26b360u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x26b364: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26b364u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_26b368:
    // 0x26b368: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x26b368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x26b36c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x26b36cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26b370: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x26B370u;
    {
        const bool branch_taken_0x26b370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b370) {
            ctx->pc = 0x26B374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B370u;
            // 0x26b374: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B394u;
            goto label_26b394;
        }
    }
    ctx->pc = 0x26B378u;
    // 0x26b378: 0x5240ffdf  beql        $s2, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x26B378u;
    {
        const bool branch_taken_0x26b378 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b378) {
            ctx->pc = 0x26B37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B378u;
            // 0x26b37c: 0x8ec70010  lw          $a3, 0x10($s6) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B2F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26b2f8;
        }
    }
    ctx->pc = 0x26B380u;
    // 0x26b380: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26B380u;
    {
        const bool branch_taken_0x26b380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B380u;
        // 0x26b384: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b380) {
            ctx->pc = 0x26B394u;
            goto label_26b394;
        }
    }
    ctx->pc = 0x26B388u;
label_26b388:
    // 0x26b388: 0x26130030  addiu       $s3, $s0, 0x30
    ctx->pc = 0x26b388u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_26b38c:
    // 0x26b38c: 0x3c1e0033  lui         $fp, 0x33
    ctx->pc = 0x26b38cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)51 << 16));
    // 0x26b390: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26b390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26b394:
    // 0x26b394: 0xc081546  jal         func_205518
    ctx->pc = 0x26B394u;
    SET_GPR_U32(ctx, 31, 0x26B39Cu);
    ctx->pc = 0x26B398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B394u;
    // 0x26b398: 0x240400e9  addiu       $a0, $zero, 0xE9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 233));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x26B394u, 0x26B39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B39Cu;
label_26b39c:
    // 0x26b39c: 0x27c3c4a8  addiu       $v1, $fp, -0x3B58
    ctx->pc = 0x26b39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
    // 0x26b3a0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x26b3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26b3a4: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x26b3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x26b3a8: 0x54440007  bnel        $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26B3A8u;
    {
        const bool branch_taken_0x26b3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x26b3a8) {
            ctx->pc = 0x26B3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B3A8u;
            // 0x26b3ac: 0xc6a20018  lwc1        $f2, 0x18($s5) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B3C8u;
            goto label_26b3c8;
        }
    }
    ctx->pc = 0x26B3B0u;
    // 0x26b3b0: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x26b3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x26b3b4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26b3b8: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x26b3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x26b3bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x26b3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26b3c0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x26B3C0u;
    {
        const bool branch_taken_0x26b3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B3C0u;
        // 0x26b3c4: 0xae830010  sw          $v1, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b3c0) {
            ctx->pc = 0x26B3FCu;
            goto label_26b3fc;
        }
    }
    ctx->pc = 0x26B3C8u;
label_26b3c8:
    // 0x26b3c8: 0x8ea20028  lw          $v0, 0x28($s5)
    ctx->pc = 0x26b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x26b3cc: 0xe6820030  swc1        $f2, 0x30($s4)
    ctx->pc = 0x26b3ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 48), bits); }
    // 0x26b3d0: 0xaea20024  sw          $v0, 0x24($s5)
    ctx->pc = 0x26b3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 2));
    // 0x26b3d4: 0xc6a0001c  lwc1        $f0, 0x1C($s5)
    ctx->pc = 0x26b3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b3d8: 0xe6800034  swc1        $f0, 0x34($s4)
    ctx->pc = 0x26b3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 52), bits); }
    // 0x26b3dc: 0xc6a10020  lwc1        $f1, 0x20($s5)
    ctx->pc = 0x26b3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b3e0: 0xe6820070  swc1        $f2, 0x70($s4)
    ctx->pc = 0x26b3e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 112), bits); }
    // 0x26b3e4: 0xe6800074  swc1        $f0, 0x74($s4)
    ctx->pc = 0x26b3e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 116), bits); }
    // 0x26b3e8: 0xe6810078  swc1        $f1, 0x78($s4)
    ctx->pc = 0x26b3e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 120), bits); }
    // 0x26b3ec: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x26B3ECu;
    {
        const bool branch_taken_0x26b3ec = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B3ECu;
        // 0x26b3f0: 0xe6810038  swc1        $f1, 0x38($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b3ec) {
            ctx->pc = 0x26B3FCu;
            goto label_26b3fc;
        }
    }
    ctx->pc = 0x26B3F4u;
    // 0x26b3f4: 0xc09ceb0  jal         func_273AC0
    ctx->pc = 0x26B3F4u;
    SET_GPR_U32(ctx, 31, 0x26B3FCu);
    ctx->pc = 0x26B3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B3F4u;
    // 0x26b3f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273AC0u, 0x26B3F4u, 0x26B3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B3FCu;
label_26b3fc:
    // 0x26b3fc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x26b3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26b400: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x26b400u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26b404: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x26b404u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26b408: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x26b408u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26b40c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x26b40cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26b410: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x26b410u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26b414: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x26b414u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26b418: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x26b418u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26b41c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x26b41cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b420: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x26b420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b424: 0x3e00008  jr          $ra
    ctx->pc = 0x26B424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B424u;
        // 0x26b428: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B42Cu;
}

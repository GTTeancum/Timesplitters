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

// Function: transformPart
// Address: 0x263110 - 0x2634c4
void transformPart_0x263110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("transformPart_0x263110");
#endif

    switch (ctx->pc) {
        case 0x2631d0u: goto label_2631d0;
        case 0x2631d8u: goto label_2631d8;
        case 0x2631e4u: goto label_2631e4;
        case 0x2631fcu: goto label_2631fc;
        case 0x263204u: goto label_263204;
        case 0x263210u: goto label_263210;
        case 0x263224u: goto label_263224;
        case 0x26322cu: goto label_26322c;
        case 0x263238u: goto label_263238;
        case 0x263248u: goto label_263248;
        case 0x263290u: goto label_263290;
        case 0x2632dcu: goto label_2632dc;
        case 0x263318u: goto label_263318;
        case 0x263344u: goto label_263344;
        case 0x263388u: goto label_263388;
        case 0x263390u: goto label_263390;
        case 0x26339cu: goto label_26339c;
        case 0x2633b0u: goto label_2633b0;
        case 0x2633f0u: goto label_2633f0;
        case 0x2633f8u: goto label_2633f8;
        case 0x263434u: goto label_263434;
        case 0x263460u: goto label_263460;
        default: break;
    }

    ctx->pc = 0x263110u;

    // 0x263110: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x263110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x263114: 0xffb10130  sd          $s1, 0x130($sp)
    ctx->pc = 0x263114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 17));
    // 0x263118: 0xffbf01b0  sd          $ra, 0x1B0($sp)
    ctx->pc = 0x263118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 31));
    // 0x26311c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26311cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263120: 0xffbe01a0  sd          $fp, 0x1A0($sp)
    ctx->pc = 0x263120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 30));
    // 0x263124: 0xffb70190  sd          $s7, 0x190($sp)
    ctx->pc = 0x263124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 23));
    // 0x263128: 0xffb60180  sd          $s6, 0x180($sp)
    ctx->pc = 0x263128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 22));
    // 0x26312c: 0xffb50170  sd          $s5, 0x170($sp)
    ctx->pc = 0x26312cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 21));
    // 0x263130: 0xffb40160  sd          $s4, 0x160($sp)
    ctx->pc = 0x263130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 20));
    // 0x263134: 0xffb30150  sd          $s3, 0x150($sp)
    ctx->pc = 0x263134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 19));
    // 0x263138: 0xffb20140  sd          $s2, 0x140($sp)
    ctx->pc = 0x263138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 18));
    // 0x26313c: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x26313Cu;
    {
        const bool branch_taken_0x26313c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x263140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26313Cu;
        // 0x263140: 0xffb00120  sd          $s0, 0x120($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26313c) {
            ctx->pc = 0x26315Cu;
            goto label_26315c;
        }
    }
    ctx->pc = 0x263144u;
    // 0x263144: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x263144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x263148: 0x104000d2  beqz        $v0, . + 4 + (0xD2 << 2)
    ctx->pc = 0x263148u;
    {
        const bool branch_taken_0x263148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263148u;
        // 0x26314c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263148) {
            ctx->pc = 0x263494u;
            goto label_263494;
        }
    }
    ctx->pc = 0x263150u;
    // 0x263150: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x263150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x263154: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x263154u;
    {
        const bool branch_taken_0x263154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263154u;
        // 0x263158: 0xafa20118  sw          $v0, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263154) {
            ctx->pc = 0x263170u;
            goto label_263170;
        }
    }
    ctx->pc = 0x26315Cu;
label_26315c:
    // 0x26315c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x26315cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x263160: 0x104000cc  beqz        $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x263160u;
    {
        const bool branch_taken_0x263160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263160u;
        // 0x263164: 0x2623002c  addiu       $v1, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263160) {
            ctx->pc = 0x263494u;
            goto label_263494;
        }
    }
    ctx->pc = 0x263168u;
    // 0x263168: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x263168u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26316c: 0xafa30118  sw          $v1, 0x118($sp)
    ctx->pc = 0x26316cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 3));
label_263170:
    // 0x263170: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x263170u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x263174: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x263174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x263178: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x263178u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x26317c: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x26317Cu;
    {
        const bool branch_taken_0x26317c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26317Cu;
        // 0x263180: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26317c) {
            ctx->pc = 0x263380u;
            goto label_263380;
        }
    }
    ctx->pc = 0x263184u;
    // 0x263184: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x263184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x263188: 0x82240002  lb          $a0, 0x2($s1)
    ctx->pc = 0x263188u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x26318c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26318cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263190: 0x82260003  lb          $a2, 0x3($s1)
    ctx->pc = 0x263190u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x263194: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x263194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x263198: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x263198u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26319c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x26319cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2631a0: 0x600013  mtlo        $v1
    ctx->pc = 0x2631a0u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x2631a4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2631a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2631a8: 0x70c50000  madd        $zero, $a2, $a1
    ctx->pc = 0x2631a8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x2631ac: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x2631acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x2631b0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2631b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2631b4: 0x1012  mflo        $v0
    ctx->pc = 0x2631b4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2631b8: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x2631b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x2631bc: 0x80640001  lb          $a0, 0x1($v1)
    ctx->pc = 0x2631bcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2631c0: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2631C0u;
    {
        const bool branch_taken_0x2631c0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2631C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2631C0u;
        // 0x2631c4: 0x8fa20114  lw          $v0, 0x114($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2631c0) {
            ctx->pc = 0x2631E8u;
            goto label_2631e8;
        }
    }
    ctx->pc = 0x2631C8u;
    // 0x2631c8: 0xc0855c0  jal         func_215700
    ctx->pc = 0x2631C8u;
    SET_GPR_U32(ctx, 31, 0x2631D0u);
    ctx->pc = 0x215700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215700u, 0x2631C8u, 0x2631D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2631D0u;
label_2631d0:
    // 0x2631d0: 0xc085600  jal         func_215800
    ctx->pc = 0x2631D0u;
    SET_GPR_U32(ctx, 31, 0x2631D8u);
    ctx->pc = 0x2631D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2631D0u;
    // 0x2631d4: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215800u, 0x2631D0u, 0x2631D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2631D8u;
label_2631d8:
    // 0x2631d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2631d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2631dc: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x2631DCu;
    SET_GPR_U32(ctx, 31, 0x2631E4u);
    ctx->pc = 0x2631E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2631DCu;
    // 0x2631e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x2631DCu, 0x2631E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2631E4u;
label_2631e4:
    // 0x2631e4: 0x8fa20114  lw          $v0, 0x114($sp)
    ctx->pc = 0x2631e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_2631e8:
    // 0x2631e8: 0x80440001  lb          $a0, 0x1($v0)
    ctx->pc = 0x2631e8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2631ec: 0x4820009  bltzl       $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2631ECu;
    {
        const bool branch_taken_0x2631ec = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2631ec) {
            ctx->pc = 0x2631F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2631ECu;
            // 0x2631f0: 0x82240001  lb          $a0, 0x1($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263214u;
            goto label_263214;
        }
    }
    ctx->pc = 0x2631F4u;
    // 0x2631f4: 0xc0855c0  jal         func_215700
    ctx->pc = 0x2631F4u;
    SET_GPR_U32(ctx, 31, 0x2631FCu);
    ctx->pc = 0x215700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215700u, 0x2631F4u, 0x2631FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2631FCu;
label_2631fc:
    // 0x2631fc: 0xc085600  jal         func_215800
    ctx->pc = 0x2631FCu;
    SET_GPR_U32(ctx, 31, 0x263204u);
    ctx->pc = 0x263200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2631FCu;
    // 0x263200: 0x27b00080  addiu       $s0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215800u, 0x2631FCu, 0x263204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263204u;
label_263204:
    // 0x263204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263208: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x263208u;
    SET_GPR_U32(ctx, 31, 0x263210u);
    ctx->pc = 0x26320Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263208u;
    // 0x26320c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x263208u, 0x263210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263210u;
label_263210:
    // 0x263210: 0x82240001  lb          $a0, 0x1($s1)
    ctx->pc = 0x263210u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_263214:
    // 0x263214: 0x4820009  bltzl       $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x263214u;
    {
        const bool branch_taken_0x263214 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x263214) {
            ctx->pc = 0x263218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263214u;
            // 0x263218: 0x8e820014  lw          $v0, 0x14($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26323Cu;
            goto label_26323c;
        }
    }
    ctx->pc = 0x26321Cu;
    // 0x26321c: 0xc0855c0  jal         func_215700
    ctx->pc = 0x26321Cu;
    SET_GPR_U32(ctx, 31, 0x263224u);
    ctx->pc = 0x215700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215700u, 0x26321Cu, 0x263224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263224u;
label_263224:
    // 0x263224: 0xc085600  jal         func_215800
    ctx->pc = 0x263224u;
    SET_GPR_U32(ctx, 31, 0x26322Cu);
    ctx->pc = 0x215800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215800u, 0x263224u, 0x26322Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26322Cu;
label_26322c:
    // 0x26322c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26322cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263230: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x263230u;
    SET_GPR_U32(ctx, 31, 0x263238u);
    ctx->pc = 0x263234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263230u;
    // 0x263234: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x263230u, 0x263238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263238u;
label_263238:
    // 0x263238: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x263238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_26323c:
    // 0x26323c: 0x4400096  bltz        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x26323Cu;
    {
        const bool branch_taken_0x26323c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x263240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26323Cu;
        // 0x263240: 0xdfbf01b0  ld          $ra, 0x1B0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26323c) {
            ctx->pc = 0x263498u;
            goto label_263498;
        }
    }
    ctx->pc = 0x263244u;
    // 0x263244: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x263244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_263248:
    // 0x263248: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x263248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26324c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x26324cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x263250: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x263250u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263254: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x263254u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x263258: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x263258u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x26325c: 0x8c480014  lw          $t0, 0x14($v0)
    ctx->pc = 0x26325cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x263260: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x263260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x263264: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x263264u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x263268: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x263268u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26326c: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x26326cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x263270: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x263270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x263274: 0xe48821  addu        $s1, $a3, $a0
    ctx->pc = 0x263274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x263278: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x263278u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26327c: 0x10c00039  beqz        $a2, . + 4 + (0x39 << 2)
    ctx->pc = 0x26327Cu;
    {
        const bool branch_taken_0x26327c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x263280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26327Cu;
        // 0x263280: 0x48b00b  movn        $s6, $v0, $t0 (Delay Slot)
        if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26327c) {
            ctx->pc = 0x263364u;
            goto label_263364;
        }
    }
    ctx->pc = 0x263284u;
    // 0x263284: 0x27b300c0  addiu       $s3, $sp, 0xC0
    ctx->pc = 0x263284u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x263288: 0x27be0100  addiu       $fp, $sp, 0x100
    ctx->pc = 0x263288u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x26328c: 0x26970018  addiu       $s7, $s4, 0x18
    ctx->pc = 0x26328cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
label_263290:
    // 0x263290: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x263290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x263294: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x263294u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x263298: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x263298u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x26329c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26329Cu;
    {
        const bool branch_taken_0x26329c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2632A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26329Cu;
        // 0x2632a0: 0x8fa40114  lw          $a0, 0x114($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26329c) {
            ctx->pc = 0x2632B0u;
            goto label_2632b0;
        }
    }
    ctx->pc = 0x2632A4u;
    // 0x2632a4: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x2632a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2632a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2632A8u;
    {
        const bool branch_taken_0x2632a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2632ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2632A8u;
        // 0x2632ac: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2632a8) {
            ctx->pc = 0x2632D0u;
            goto label_2632d0;
        }
    }
    ctx->pc = 0x2632B0u;
label_2632b0:
    // 0x2632b0: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x2632b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2632b4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2632B4u;
    {
        const bool branch_taken_0x2632b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2632B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2632B4u;
        // 0x2632b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2632b4) {
            ctx->pc = 0x2632C8u;
            goto label_2632c8;
        }
    }
    ctx->pc = 0x2632BCu;
    // 0x2632bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2632bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2632c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2632C0u;
    {
        const bool branch_taken_0x2632c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2632C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2632C0u;
        // 0x2632c4: 0x27b00080  addiu       $s0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2632c0) {
            ctx->pc = 0x2632CCu;
            goto label_2632cc;
        }
    }
    ctx->pc = 0x2632C8u;
label_2632c8:
    // 0x2632c8: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x2632c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2632cc:
    // 0x2632cc: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x2632ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
label_2632d0:
    // 0x2632d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2632d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2632d4: 0xc0b57d8  jal         func_2D5F60
    ctx->pc = 0x2632D4u;
    SET_GPR_U32(ctx, 31, 0x2632DCu);
    ctx->pc = 0x2632D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2632D4u;
    // 0x2632d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5F60u, 0x2632D4u, 0x2632DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2632DCu;
label_2632dc:
    // 0x2632dc: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2632dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2632e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2632e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2632e4: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x2632e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2632e8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2632e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2632ec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2632ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2632f0: 0xe7a10100  swc1        $f1, 0x100($sp)
    ctx->pc = 0x2632f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2632f4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2632f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2632f8: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x2632f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2632fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2632fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x263300: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x263300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x263304: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x263304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263308: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x263308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26330c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26330cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x263310: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x263310u;
    SET_GPR_U32(ctx, 31, 0x263318u);
    ctx->pc = 0x263314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263310u;
    // 0x263314: 0xe7a00108  swc1        $f0, 0x108($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x263310u, 0x263318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263318u;
label_263318:
    // 0x263318: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x263318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26331c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x26331cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x263320: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x263320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263324: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x263324u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x263328: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x263328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26332c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x26332cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x263330: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x263330u;
    {
        const bool branch_taken_0x263330 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x263334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263330u;
        // 0x263334: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263330) {
            ctx->pc = 0x263348u;
            goto label_263348;
        }
    }
    ctx->pc = 0x263338u;
    // 0x263338: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x263338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26333c: 0xc0ad568  jal         func_2B55A0
    ctx->pc = 0x26333Cu;
    SET_GPR_U32(ctx, 31, 0x263344u);
    ctx->pc = 0x263340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26333Cu;
    // 0x263340: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B55A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B55A0u, 0x26333Cu, 0x263344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263344u;
label_263344:
    // 0x263344: 0x26d6000c  addiu       $s6, $s6, 0xC
    ctx->pc = 0x263344u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
label_263348:
    // 0x263348: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x263348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x26334c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x26334cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x263350: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x263350u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x263354: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x263354u;
    {
        const bool branch_taken_0x263354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263354u;
        // 0x263358: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263354) {
            ctx->pc = 0x263290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263290;
        }
    }
    ctx->pc = 0x26335Cu;
    // 0x26335c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26335Cu;
    {
        const bool branch_taken_0x26335c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26335Cu;
        // 0x263360: 0x2e0a02d  daddu       $s4, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26335c) {
            ctx->pc = 0x26336Cu;
            goto label_26336c;
        }
    }
    ctx->pc = 0x263364u;
label_263364:
    // 0x263364: 0x26970018  addiu       $s7, $s4, 0x18
    ctx->pc = 0x263364u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x263368: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x263368u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26336c:
    // 0x26336c: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x26336cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x263370: 0x443ffb5  bgezl       $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x263370u;
    {
        const bool branch_taken_0x263370 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x263370) {
            ctx->pc = 0x263374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263370u;
            // 0x263374: 0x8e83000c  lw          $v1, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263248;
        }
    }
    ctx->pc = 0x263378u;
    // 0x263378: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x263378u;
    {
        const bool branch_taken_0x263378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263378u;
        // 0x26337c: 0xdfbf01b0  ld          $ra, 0x1B0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263378) {
            ctx->pc = 0x263498u;
            goto label_263498;
        }
    }
    ctx->pc = 0x263380u;
label_263380:
    // 0x263380: 0xc0855c0  jal         func_215700
    ctx->pc = 0x263380u;
    SET_GPR_U32(ctx, 31, 0x263388u);
    ctx->pc = 0x263384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263380u;
    // 0x263384: 0x82240001  lb          $a0, 0x1($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215700u, 0x263380u, 0x263388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263388u;
label_263388:
    // 0x263388: 0xc085600  jal         func_215800
    ctx->pc = 0x263388u;
    SET_GPR_U32(ctx, 31, 0x263390u);
    ctx->pc = 0x215800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215800u, 0x263388u, 0x263390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263390u;
label_263390:
    // 0x263390: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x263390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263394: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x263394u;
    SET_GPR_U32(ctx, 31, 0x26339Cu);
    ctx->pc = 0x263398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263394u;
    // 0x263398: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x263394u, 0x26339Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26339Cu;
label_26339c:
    // 0x26339c: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x26339cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x2633a0: 0x440003c  bltz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2633A0u;
    {
        const bool branch_taken_0x2633a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2633A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2633A0u;
        // 0x2633a4: 0x2412000c  addiu       $s2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2633a0) {
            ctx->pc = 0x263494u;
            goto label_263494;
        }
    }
    ctx->pc = 0x2633A8u;
    // 0x2633a8: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2633a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2633ac: 0x0  nop
    ctx->pc = 0x2633acu;
    // NOP
label_2633b0:
    // 0x2633b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2633b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2633b4: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2633b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2633b8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2633b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2633bc: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x2633bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2633c0: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x2633c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2633c4: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x2633c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2633c8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2633c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2633cc: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x2633ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2633d0: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x2633d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2633d4: 0x10c0002a  beqz        $a2, . + 4 + (0x2A << 2)
    ctx->pc = 0x2633D4u;
    {
        const bool branch_taken_0x2633d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2633D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2633D4u;
        // 0x2633d8: 0x65880b  movn        $s1, $v1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2633d4) {
            ctx->pc = 0x263480u;
            goto label_263480;
        }
    }
    ctx->pc = 0x2633DCu;
    // 0x2633dc: 0x27b300c0  addiu       $s3, $sp, 0xC0
    ctx->pc = 0x2633dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2633e0: 0x27be0100  addiu       $fp, $sp, 0x100
    ctx->pc = 0x2633e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2633e4: 0x26970018  addiu       $s7, $s4, 0x18
    ctx->pc = 0x2633e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x2633e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2633e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2633ec: 0x0  nop
    ctx->pc = 0x2633ecu;
    // NOP
label_2633f0:
    // 0x2633f0: 0xc0b57d8  jal         func_2D5F60
    ctx->pc = 0x2633F0u;
    SET_GPR_U32(ctx, 31, 0x2633F8u);
    ctx->pc = 0x2633F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2633F0u;
    // 0x2633f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5F60u, 0x2633F0u, 0x2633F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2633F8u;
label_2633f8:
    // 0x2633f8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2633f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2633fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2633fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263400: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x263400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263404: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x263404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263408: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x263408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26340c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x26340cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x263410: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x263410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x263414: 0xe7a10100  swc1        $f1, 0x100($sp)
    ctx->pc = 0x263414u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x263418: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x263418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26341c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x26341cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x263420: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x263420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x263424: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x263424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263428: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x263428u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x26342c: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x26342Cu;
    SET_GPR_U32(ctx, 31, 0x263434u);
    ctx->pc = 0x263430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26342Cu;
    // 0x263430: 0xe7a10108  swc1        $f1, 0x108($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x26342Cu, 0x263434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263434u;
label_263434:
    // 0x263434: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x263434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263438: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x263438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x26343c: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x26343cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263440: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x263440u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x263444: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x263444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263448: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x263448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x26344c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26344Cu;
    {
        const bool branch_taken_0x26344c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x263450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26344Cu;
        // 0x263450: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26344c) {
            ctx->pc = 0x263464u;
            goto label_263464;
        }
    }
    ctx->pc = 0x263454u;
    // 0x263454: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x263454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263458: 0xc0ad568  jal         func_2B55A0
    ctx->pc = 0x263458u;
    SET_GPR_U32(ctx, 31, 0x263460u);
    ctx->pc = 0x26345Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263458u;
    // 0x26345c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B55A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B55A0u, 0x263458u, 0x263460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263460u;
label_263460:
    // 0x263460: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x263460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_263464:
    // 0x263464: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x263464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x263468: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x263468u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x26346c: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x26346cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x263470: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x263470u;
    {
        const bool branch_taken_0x263470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263470u;
        // 0x263474: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263470) {
            ctx->pc = 0x2633F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2633f0;
        }
    }
    ctx->pc = 0x263478u;
    // 0x263478: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x263478u;
    {
        const bool branch_taken_0x263478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263478u;
        // 0x26347c: 0x2e0a02d  daddu       $s4, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263478) {
            ctx->pc = 0x263488u;
            goto label_263488;
        }
    }
    ctx->pc = 0x263480u;
label_263480:
    // 0x263480: 0x26970018  addiu       $s7, $s4, 0x18
    ctx->pc = 0x263480u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x263484: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x263484u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_263488:
    // 0x263488: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x263488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x26348c: 0x443ffc8  bgezl       $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x26348Cu;
    {
        const bool branch_taken_0x26348c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26348c) {
            ctx->pc = 0x263490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26348Cu;
            // 0x263490: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2633B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2633b0;
        }
    }
    ctx->pc = 0x263494u;
label_263494:
    // 0x263494: 0xdfbf01b0  ld          $ra, 0x1B0($sp)
    ctx->pc = 0x263494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 432)));
label_263498:
    // 0x263498: 0xdfbe01a0  ld          $fp, 0x1A0($sp)
    ctx->pc = 0x263498u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x26349c: 0xdfb70190  ld          $s7, 0x190($sp)
    ctx->pc = 0x26349cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2634a0: 0xdfb60180  ld          $s6, 0x180($sp)
    ctx->pc = 0x2634a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2634a4: 0xdfb50170  ld          $s5, 0x170($sp)
    ctx->pc = 0x2634a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2634a8: 0xdfb40160  ld          $s4, 0x160($sp)
    ctx->pc = 0x2634a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2634ac: 0xdfb30150  ld          $s3, 0x150($sp)
    ctx->pc = 0x2634acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2634b0: 0xdfb20140  ld          $s2, 0x140($sp)
    ctx->pc = 0x2634b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2634b4: 0xdfb10130  ld          $s1, 0x130($sp)
    ctx->pc = 0x2634b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2634b8: 0xdfb00120  ld          $s0, 0x120($sp)
    ctx->pc = 0x2634b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2634bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2634BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2634C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2634BCu;
        // 0x2634c0: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2634BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2634C4u;
}

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

// Function: gunUpdateParts
// Address: 0x2911e0 - 0x291d38
void gunUpdateParts_0x2911e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunUpdateParts_0x2911e0");
#endif

    switch (ctx->pc) {
        case 0x291268u: goto label_291268;
        case 0x291280u: goto label_291280;
        case 0x2912fcu: goto label_2912fc;
        case 0x2914acu: goto label_2914ac;
        case 0x2914bcu: goto label_2914bc;
        case 0x2914e4u: goto label_2914e4;
        case 0x2914f8u: goto label_2914f8;
        case 0x2915e0u: goto label_2915e0;
        case 0x291664u: goto label_291664;
        case 0x2917b0u: goto label_2917b0;
        case 0x291838u: goto label_291838;
        case 0x291878u: goto label_291878;
        case 0x291904u: goto label_291904;
        case 0x291924u: goto label_291924;
        case 0x291934u: goto label_291934;
        case 0x291954u: goto label_291954;
        case 0x291964u: goto label_291964;
        case 0x291998u: goto label_291998;
        case 0x2919b8u: goto label_2919b8;
        case 0x2919c8u: goto label_2919c8;
        case 0x2919e8u: goto label_2919e8;
        case 0x2919f8u: goto label_2919f8;
        case 0x291a50u: goto label_291a50;
        case 0x291a80u: goto label_291a80;
        case 0x291a90u: goto label_291a90;
        case 0x291ab0u: goto label_291ab0;
        case 0x291ac0u: goto label_291ac0;
        case 0x291ae0u: goto label_291ae0;
        case 0x291afcu: goto label_291afc;
        case 0x291b60u: goto label_291b60;
        case 0x291b94u: goto label_291b94;
        case 0x291ba4u: goto label_291ba4;
        case 0x291bc4u: goto label_291bc4;
        case 0x291bd4u: goto label_291bd4;
        case 0x291c2cu: goto label_291c2c;
        case 0x291c60u: goto label_291c60;
        case 0x291c70u: goto label_291c70;
        case 0x291c90u: goto label_291c90;
        case 0x291ca0u: goto label_291ca0;
        default: break;
    }

    ctx->pc = 0x2911e0u;

    // 0x2911e0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x2911e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x2911e4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2911e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2911e8: 0xffb60120  sd          $s6, 0x120($sp)
    ctx->pc = 0x2911e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 22));
    // 0x2911ec: 0x24426218  addiu       $v0, $v0, 0x6218
    ctx->pc = 0x2911ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25112));
    // 0x2911f0: 0xffb50110  sd          $s5, 0x110($sp)
    ctx->pc = 0x2911f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 21));
    // 0x2911f4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2911f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2911f8: 0xffb300f0  sd          $s3, 0xF0($sp)
    ctx->pc = 0x2911f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 19));
    // 0x2911fc: 0xffb100d0  sd          $s1, 0xD0($sp)
    ctx->pc = 0x2911fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 17));
    // 0x291200: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x291200u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291204: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x291204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x291208: 0x24040190  addiu       $a0, $zero, 0x190
    ctx->pc = 0x291208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x29120c: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x29120cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x291210: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x291210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291214: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x291214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x291218: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x291218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
    // 0x29121c: 0xe7b80160  swc1        $f24, 0x160($sp)
    ctx->pc = 0x29121cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x291220: 0xe7b70158  swc1        $f23, 0x158($sp)
    ctx->pc = 0x291220u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x291224: 0xe7b60150  swc1        $f22, 0x150($sp)
    ctx->pc = 0x291224u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x291228: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x291228u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x29122c: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x29122cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x291230: 0x8ec90000  lw          $t1, 0x0($s6)
    ctx->pc = 0x291230u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x291234: 0x8e68000c  lw          $t0, 0xC($s3)
    ctx->pc = 0x291234u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x291238: 0x1242018  mult        $a0, $t1, $a0
    ctx->pc = 0x291238u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x29123c: 0x8e660034  lw          $a2, 0x34($s3)
    ctx->pc = 0x29123cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x291240: 0x8d050020  lw          $a1, 0x20($t0)
    ctx->pc = 0x291240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x291244: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x291244u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291248: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x291248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29124c: 0x82a821  addu        $s5, $a0, $v0
    ctx->pc = 0x29124cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x291250: 0x26b100bc  addiu       $s1, $s5, 0xBC
    ctx->pc = 0x291250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 188));
    // 0x291254: 0x26a20034  addiu       $v0, $s5, 0x34
    ctx->pc = 0x291254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 52));
    // 0x291258: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x291258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29125c: 0x18a00011  blez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x29125Cu;
    {
        const bool branch_taken_0x29125c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x291260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29125Cu;
        // 0x291260: 0x46880a  movz        $s1, $v0, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29125c) {
            ctx->pc = 0x2912A4u;
            goto label_2912a4;
        }
    }
    ctx->pc = 0x291264u;
    // 0x291264: 0x3c120037  lui         $s2, 0x37
    ctx->pc = 0x291264u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
label_291268:
    // 0x291268: 0x8ce20020  lw          $v0, 0x20($a3)
    ctx->pc = 0x291268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x29126c: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x29126cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x291270: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x291270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x291274: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x291274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x291278: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x291278u;
    SET_GPR_U32(ctx, 31, 0x291280u);
    ctx->pc = 0x29127Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291278u;
    // 0x29127c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x291278u, 0x291280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291280u;
label_291280:
    // 0x291280: 0x8e68000c  lw          $t0, 0xC($s3)
    ctx->pc = 0x291280u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x291284: 0x8d040020  lw          $a0, 0x20($t0)
    ctx->pc = 0x291284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x291288: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x291288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29128c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x29128cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x291290: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x291290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x291294: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x291294u;
    {
        const bool branch_taken_0x291294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291294u;
        // 0x291298: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291294) {
            ctx->pc = 0x291268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291268;
        }
    }
    ctx->pc = 0x29129Cu;
    // 0x29129c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29129Cu;
    {
        const bool branch_taken_0x29129c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2912A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29129Cu;
        // 0x2912a0: 0x8e630098  lw          $v1, 0x98($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29129c) {
            ctx->pc = 0x2912ACu;
            goto label_2912ac;
        }
    }
    ctx->pc = 0x2912A4u;
label_2912a4:
    // 0x2912a4: 0x3c120037  lui         $s2, 0x37
    ctx->pc = 0x2912a4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
    // 0x2912a8: 0x8e630098  lw          $v1, 0x98($s3)
    ctx->pc = 0x2912a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
label_2912ac:
    // 0x2912ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2912acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2912b0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2912B0u;
    {
        const bool branch_taken_0x2912b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2912B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2912B0u;
        // 0x2912b4: 0x8f82b460  lw          $v0, -0x4BA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2912b0) {
            ctx->pc = 0x2912C0u;
            goto label_2912c0;
        }
    }
    ctx->pc = 0x2912B8u;
    // 0x2912b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2912b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2912bc: 0xae620098  sw          $v0, 0x98($s3)
    ctx->pc = 0x2912bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 2));
label_2912c0:
    // 0x2912c0: 0x8e62009c  lw          $v0, 0x9C($s3)
    ctx->pc = 0x2912c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
    // 0x2912c4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2912C4u;
    {
        const bool branch_taken_0x2912c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2912C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2912C4u;
        // 0x2912c8: 0x8ec90000  lw          $t1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2912c4) {
            ctx->pc = 0x291304u;
            goto label_291304;
        }
    }
    ctx->pc = 0x2912CCu;
    // 0x2912cc: 0x8e630098  lw          $v1, 0x98($s3)
    ctx->pc = 0x2912ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x2912d0: 0x8ea20184  lw          $v0, 0x184($s5)
    ctx->pc = 0x2912d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 388)));
    // 0x2912d4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2912d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2912d8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2912D8u;
    {
        const bool branch_taken_0x2912d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2912d8) {
            ctx->pc = 0x291304u;
            goto label_291304;
        }
    }
    ctx->pc = 0x2912E0u;
    // 0x2912e0: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2912e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2912e4: 0x11220007  beq         $t1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2912E4u;
    {
        const bool branch_taken_0x2912e4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x2912E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2912E4u;
        // 0x2912e8: 0x8f87b460  lw          $a3, -0x4BA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2912e4) {
            ctx->pc = 0x291304u;
            goto label_291304;
        }
    }
    ctx->pc = 0x2912ECu;
    // 0x2912ec: 0x18e00006  blez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2912ECu;
    {
        const bool branch_taken_0x2912ec = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x2912ec) {
            ctx->pc = 0x291308u;
            goto label_291308;
        }
    }
    ctx->pc = 0x2912F4u;
    // 0x2912f4: 0xc0a38d8  jal         func_28E360
    ctx->pc = 0x2912F4u;
    SET_GPR_U32(ctx, 31, 0x2912FCu);
    ctx->pc = 0x2912F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2912F4u;
    // 0x2912f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E360u, 0x2912F4u, 0x2912FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2912FCu;
label_2912fc:
    // 0x2912fc: 0x8ec90000  lw          $t1, 0x0($s6)
    ctx->pc = 0x2912fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x291300: 0x8e68000c  lw          $t0, 0xC($s3)
    ctx->pc = 0x291300u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_291304:
    // 0x291304: 0x8f87b460  lw          $a3, -0x4BA0($gp)
    ctx->pc = 0x291304u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
label_291308:
    // 0x291308: 0xc7819da8  lwc1        $f1, -0x6258($gp)
    ctx->pc = 0x291308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29130c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x29130cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x291310: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x291310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x291314: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x291314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x291318: 0xc7808b94  lwc1        $f0, -0x746C($gp)
    ctx->pc = 0x291318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29131c: 0x26455c60  addiu       $a1, $s2, 0x5C60
    ctx->pc = 0x29131cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 23648));
    // 0x291320: 0xc7848b98  lwc1        $f4, -0x7468($gp)
    ctx->pc = 0x291320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x291324: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x291324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x291328: 0x0  nop
    ctx->pc = 0x291328u;
    // NOP
    // 0x29132c: 0x0  nop
    ctx->pc = 0x29132cu;
    // NOP
    // 0x291330: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x291330u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x291334: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x291334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x291338: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x291338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x29133c: 0xc7878b9c  lwc1        $f7, -0x7464($gp)
    ctx->pc = 0x29133cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x291340: 0xc6630074  lwc1        $f3, 0x74($s3)
    ctx->pc = 0x291340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x291344: 0xc669005c  lwc1        $f9, 0x5C($s3)
    ctx->pc = 0x291344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x291348: 0xc62c0058  lwc1        $f12, 0x58($s1)
    ctx->pc = 0x291348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29134c: 0x46034a42  mul.s       $f9, $f9, $f3
    ctx->pc = 0x29134cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
    // 0x291350: 0xc66d0078  lwc1        $f13, 0x78($s3)
    ctx->pc = 0x291350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x291354: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x291354u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x291358: 0xc6650044  lwc1        $f5, 0x44($s3)
    ctx->pc = 0x291358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29135c: 0x46040882  mul.s       $f2, $f1, $f4
    ctx->pc = 0x29135cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x291360: 0xc5080030  lwc1        $f8, 0x30($t0)
    ctx->pc = 0x291360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x291364: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x291364u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x291368: 0xc78eb468  lwc1        $f14, -0x4B98($gp)
    ctx->pc = 0x291368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x29136c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x29136cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x291370: 0xc50a0034  lwc1        $f10, 0x34($t0)
    ctx->pc = 0x291370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x291374: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x291374u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x291378: 0xc50b0038  lwc1        $f11, 0x38($t0)
    ctx->pc = 0x291378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x29137c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x29137cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x291380: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x291380u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x291384: 0x460010e4  .word       0x460010E4                   # cvt.w.s     $f3, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x291384u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x291388: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x291388u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29138c: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x29138cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x291390: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x291390u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x291394: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x291394u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x291398: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x291398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x29139c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29139cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2913a0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2913a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2913a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2913a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2913a8: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2913a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2913ac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2913acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2913b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2913b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2913b4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2913b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2913b8: 0x308407ff  andi        $a0, $a0, 0x7FF
    ctx->pc = 0x2913b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x2913bc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2913bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2913c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2913c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2913c4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2913c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2913c8: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2913c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2913cc: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x2913ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x2913d0: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2913d0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2913d4: 0x46092940  add.s       $f5, $f5, $f9
    ctx->pc = 0x2913d4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[9]);
    // 0x2913d8: 0x46054200  add.s       $f8, $f8, $f5
    ctx->pc = 0x2913d8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[5]);
    // 0x2913dc: 0xe5080030  swc1        $f8, 0x30($t0)
    ctx->pc = 0x2913dcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 48), bits); }
    // 0x2913e0: 0xc6210058  lwc1        $f1, 0x58($s1)
    ctx->pc = 0x2913e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2913e4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2913e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2913e8: 0xc6640078  lwc1        $f4, 0x78($s3)
    ctx->pc = 0x2913e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2913ec: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2913ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2913f0: 0xc6630074  lwc1        $f3, 0x74($s3)
    ctx->pc = 0x2913f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2913f4: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x2913f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2913f8: 0xc6610060  lwc1        $f1, 0x60($s3)
    ctx->pc = 0x2913f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2913fc: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2913fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x291400: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x291400u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x291404: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x291404u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x291408: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x291408u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29140c: 0x46005280  add.s       $f10, $f10, $f0
    ctx->pc = 0x29140cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
    // 0x291410: 0xe50a0034  swc1        $f10, 0x34($t0)
    ctx->pc = 0x291410u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 52), bits); }
    // 0x291414: 0xc6210058  lwc1        $f1, 0x58($s1)
    ctx->pc = 0x291414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291418: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x291418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29141c: 0xc6640078  lwc1        $f4, 0x78($s3)
    ctx->pc = 0x29141cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x291420: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x291420u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x291424: 0xc660004c  lwc1        $f0, 0x4C($s3)
    ctx->pc = 0x291424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291428: 0xc6610064  lwc1        $f1, 0x64($s3)
    ctx->pc = 0x291428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29142c: 0xc6630074  lwc1        $f3, 0x74($s3)
    ctx->pc = 0x29142cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x291430: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x291430u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x291434: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x291434u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x291438: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x291438u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x29143c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29143cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x291440: 0x46005ac0  add.s       $f11, $f11, $f0
    ctx->pc = 0x291440u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
    // 0x291444: 0xe50b0038  swc1        $f11, 0x38($t0)
    ctx->pc = 0x291444u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 56), bits); }
    // 0x291448: 0xc6600058  lwc1        $f0, 0x58($s3)
    ctx->pc = 0x291448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29144c: 0xc6610054  lwc1        $f1, 0x54($s3)
    ctx->pc = 0x29144cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291450: 0x460e0002  mul.s       $f0, $f0, $f14
    ctx->pc = 0x291450u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x291454: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x291454u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x291458: 0x15260005  bne         $t1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x291458u;
    {
        const bool branch_taken_0x291458 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 6));
        ctx->pc = 0x29145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291458u;
        // 0x29145c: 0xe6610054  swc1        $f1, 0x54($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291458) {
            ctx->pc = 0x291470u;
            goto label_291470;
        }
    }
    ctx->pc = 0x291460u;
    // 0x291460: 0x8e630098  lw          $v1, 0x98($s3)
    ctx->pc = 0x291460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x291464: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x291464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x291468: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x291468u;
    {
        const bool branch_taken_0x291468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291468) {
            ctx->pc = 0x29146Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291468u;
            // 0x29146c: 0xae600054  sw          $zero, 0x54($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291470u;
            goto label_291470;
        }
    }
    ctx->pc = 0x291470u;
label_291470:
    // 0x291470: 0xc66100bc  lwc1        $f1, 0xBC($s3)
    ctx->pc = 0x291470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291474: 0xc7808ba0  lwc1        $f0, -0x7460($gp)
    ctx->pc = 0x291474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291478: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x291478u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29147c: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x29147Cu;
    {
        const bool branch_taken_0x29147c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29147c) {
            ctx->pc = 0x2914ECu;
            goto label_2914ec;
        }
    }
    ctx->pc = 0x291484u;
    // 0x291484: 0x10e00019  beqz        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x291484u;
    {
        const bool branch_taken_0x291484 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x291488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291484u;
        // 0x291488: 0x8f92b234  lw          $s2, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291484) {
            ctx->pc = 0x2914ECu;
            goto label_2914ec;
        }
    }
    ctx->pc = 0x29148Cu;
    // 0x29148c: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x29148cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x291490: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x291490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x291494: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x291494u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x291498: 0x30420050  andi        $v0, $v0, 0x50
    ctx->pc = 0x291498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)80);
    // 0x29149c: 0x14440013  bne         $v0, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x29149Cu;
    {
        const bool branch_taken_0x29149c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x29149c) {
            ctx->pc = 0x2914ECu;
            goto label_2914ec;
        }
    }
    ctx->pc = 0x2914A4u;
    // 0x2914a4: 0xc080f5c  jal         func_203D70
    ctx->pc = 0x2914A4u;
    SET_GPR_U32(ctx, 31, 0x2914ACu);
    ctx->pc = 0x2914A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2914A4u;
    // 0x2914a8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D70u, 0x2914A4u, 0x2914ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2914ACu;
label_2914ac:
    // 0x2914ac: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x2914acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2914b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2914b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2914b4: 0xc080f7c  jal         func_203DF0
    ctx->pc = 0x2914B4u;
    SET_GPR_U32(ctx, 31, 0x2914BCu);
    ctx->pc = 0x2914B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2914B4u;
    // 0x2914b8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203DF0u, 0x2914B4u, 0x2914BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2914BCu;
label_2914bc:
    // 0x2914bc: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2914bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2914c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2914c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2914c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2914c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2914c8: 0xc66000bc  lwc1        $f0, 0xBC($s3)
    ctx->pc = 0x2914c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2914cc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2914ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2914d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2914d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2914d4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2914d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2914d8: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2914d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2914dc: 0xc080f30  jal         func_203CC0
    ctx->pc = 0x2914DCu;
    SET_GPR_U32(ctx, 31, 0x2914E4u);
    ctx->pc = 0x2914E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2914DCu;
    // 0x2914e0: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203CC0u, 0x2914DCu, 0x2914E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2914E4u;
label_2914e4:
    // 0x2914e4: 0x8ec90000  lw          $t1, 0x0($s6)
    ctx->pc = 0x2914e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2914e8: 0x8f87b460  lw          $a3, -0x4BA0($gp)
    ctx->pc = 0x2914e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
label_2914ec:
    // 0x2914ec: 0x18e00030  blez        $a3, . + 4 + (0x30 << 2)
    ctx->pc = 0x2914ECu;
    {
        const bool branch_taken_0x2914ec = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2914F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914ECu;
        // 0x2914f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2914ec) {
            ctx->pc = 0x2915B0u;
            goto label_2915b0;
        }
    }
    ctx->pc = 0x2914F4u;
    // 0x2914f4: 0x8e630098  lw          $v1, 0x98($s3)
    ctx->pc = 0x2914f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
label_2914f8:
    // 0x2914f8: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x2914f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2914fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2914fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x291500: 0xc7838ba4  lwc1        $f3, -0x745C($gp)
    ctx->pc = 0x291500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x291504: 0x207102a  slt         $v0, $s0, $a3
    ctx->pc = 0x291504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x291508: 0xc661003c  lwc1        $f1, 0x3C($s3)
    ctx->pc = 0x291508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29150c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x29150cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x291510: 0xc6620044  lwc1        $f2, 0x44($s3)
    ctx->pc = 0x291510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291514: 0xc6640048  lwc1        $f4, 0x48($s3)
    ctx->pc = 0x291514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x291518: 0xc665004c  lwc1        $f5, 0x4C($s3)
    ctx->pc = 0x291518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29151c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29151cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x291520: 0xc6660058  lwc1        $f6, 0x58($s3)
    ctx->pc = 0x291520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x291524: 0xc6670074  lwc1        $f7, 0x74($s3)
    ctx->pc = 0x291524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x291528: 0xc6680078  lwc1        $f8, 0x78($s3)
    ctx->pc = 0x291528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x29152c: 0xe661003c  swc1        $f1, 0x3C($s3)
    ctx->pc = 0x29152cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 60), bits); }
    // 0x291530: 0xc66900bc  lwc1        $f9, 0xBC($s3)
    ctx->pc = 0x291530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x291534: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x291534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291538: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x291538u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x29153c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x29153cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x291540: 0xe6620044  swc1        $f2, 0x44($s3)
    ctx->pc = 0x291540u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
    // 0x291544: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x291544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291548: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x291548u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x29154c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x29154cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x291550: 0xe6640048  swc1        $f4, 0x48($s3)
    ctx->pc = 0x291550u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
    // 0x291554: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x291554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291558: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x291558u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x29155c: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x29155cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x291560: 0xe665004c  swc1        $f5, 0x4C($s3)
    ctx->pc = 0x291560u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 76), bits); }
    // 0x291564: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x291564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291568: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x291568u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x29156c: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x29156cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x291570: 0xe6660058  swc1        $f6, 0x58($s3)
    ctx->pc = 0x291570u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
    // 0x291574: 0xc6200064  lwc1        $f0, 0x64($s1)
    ctx->pc = 0x291574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291578: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x291578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x29157c: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x29157cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x291580: 0xe6670074  swc1        $f7, 0x74($s3)
    ctx->pc = 0x291580u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 116), bits); }
    // 0x291584: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x291584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291588: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x291588u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x29158c: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x29158cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x291590: 0xe6680078  swc1        $f8, 0x78($s3)
    ctx->pc = 0x291590u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 120), bits); }
    // 0x291594: 0xc6200084  lwc1        $f0, 0x84($s1)
    ctx->pc = 0x291594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291598: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x291598u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x29159c: 0x46004a42  mul.s       $f9, $f9, $f0
    ctx->pc = 0x29159cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x2915a0: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x2915A0u;
    {
        const bool branch_taken_0x2915a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2915A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2915A0u;
        // 0x2915a4: 0xe66900bc  swc1        $f9, 0xBC($s3) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 188), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2915a0) {
            ctx->pc = 0x2914F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2914f8;
        }
    }
    ctx->pc = 0x2915A8u;
    // 0x2915a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2915A8u;
    {
        const bool branch_taken_0x2915a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2915ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2915A8u;
        // 0x2915ac: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2915a8) {
            ctx->pc = 0x2915B8u;
            goto label_2915b8;
        }
    }
    ctx->pc = 0x2915B0u;
label_2915b0:
    // 0x2915b0: 0x8e630098  lw          $v1, 0x98($s3)
    ctx->pc = 0x2915b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x2915b4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2915b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2915b8:
    // 0x2915b8: 0x1122000c  beq         $t1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2915B8u;
    {
        const bool branch_taken_0x2915b8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x2915BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2915B8u;
        // 0x2915bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2915b8) {
            ctx->pc = 0x2915ECu;
            goto label_2915ec;
        }
    }
    ctx->pc = 0x2915C0u;
    // 0x2915c0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2915C0u;
    {
        const bool branch_taken_0x2915c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2915c0) {
            ctx->pc = 0x2915C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2915C0u;
            // 0x2915c4: 0xc62c004c  lwc1        $f12, 0x4C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2915D8u;
            goto label_2915d8;
        }
    }
    ctx->pc = 0x2915C8u;
    // 0x2915c8: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x2915c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2915cc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2915CCu;
    {
        const bool branch_taken_0x2915cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2915cc) {
            ctx->pc = 0x2915ECu;
            goto label_2915ec;
        }
    }
    ctx->pc = 0x2915D4u;
    // 0x2915d4: 0xc62c004c  lwc1        $f12, 0x4C($s1)
    ctx->pc = 0x2915d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2915d8:
    // 0x2915d8: 0xc0b5fa4  jal         func_2D7E90
    ctx->pc = 0x2915D8u;
    SET_GPR_U32(ctx, 31, 0x2915E0u);
    ctx->pc = 0x2915DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2915D8u;
    // 0x2915dc: 0xc78db468  lwc1        $f13, -0x4B98($gp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7E90u, 0x2915D8u, 0x2915E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2915E0u;
label_2915e0:
    // 0x2915e0: 0xc6610050  lwc1        $f1, 0x50($s3)
    ctx->pc = 0x2915e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2915e4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2915E4u;
    {
        const bool branch_taken_0x2915e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2915E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2915E4u;
        // 0x2915e8: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2915e4) {
            ctx->pc = 0x2916B8u;
            goto label_2916b8;
        }
    }
    ctx->pc = 0x2915ECu;
label_2915ec:
    // 0x2915ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2915ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2915f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2915f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2915f4: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2915f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x2915f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2915f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2915fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2915fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291600: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x291600u;
    {
        const bool branch_taken_0x291600 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x291600) {
            ctx->pc = 0x291634u;
            goto label_291634;
        }
    }
    ctx->pc = 0x291608u;
    // 0x291608: 0x3c014204  lui         $at, 0x4204
    ctx->pc = 0x291608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16900 << 16));
    // 0x29160c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29160cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291610: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x291610u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291614: 0x0  nop
    ctx->pc = 0x291614u;
    // NOP
    // 0x291618: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x291618u;
    {
        const bool branch_taken_0x291618 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291618u;
        // 0x29161c: 0xc782b468  lwc1        $f2, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291618) {
            ctx->pc = 0x29163Cu;
            goto label_29163c;
        }
    }
    ctx->pc = 0x291620u;
    // 0x291620: 0xc6200048  lwc1        $f0, 0x48($s1)
    ctx->pc = 0x291620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291624: 0xc6610050  lwc1        $f1, 0x50($s3)
    ctx->pc = 0x291624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291628: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291628u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29162c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x29162Cu;
    {
        const bool branch_taken_0x29162c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29162Cu;
        // 0x291630: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29162c) {
            ctx->pc = 0x2916B8u;
            goto label_2916b8;
        }
    }
    ctx->pc = 0x291634u;
label_291634:
    // 0x291634: 0x3c014204  lui         $at, 0x4204
    ctx->pc = 0x291634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16900 << 16));
    // 0x291638: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x291638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29163c:
    // 0x29163c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29163cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291640: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x291640u;
    {
        const bool branch_taken_0x291640 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x291640) {
            ctx->pc = 0x291670u;
            goto label_291670;
        }
    }
    ctx->pc = 0x291648u;
    // 0x291648: 0x8e6200a4  lw          $v0, 0xA4($s3)
    ctx->pc = 0x291648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
    // 0x29164c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29164Cu;
    {
        const bool branch_taken_0x29164c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29164Cu;
        // 0x291650: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29164c) {
            ctx->pc = 0x291670u;
            goto label_291670;
        }
    }
    ctx->pc = 0x291654u;
    // 0x291654: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x291654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291658: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x291658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29165c: 0xc0a37ca  jal         func_28DF28
    ctx->pc = 0x29165Cu;
    SET_GPR_U32(ctx, 31, 0x291664u);
    ctx->pc = 0x291660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29165Cu;
    // 0x291660: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DF28u, 0x29165Cu, 0x291664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291664u;
label_291664:
    // 0x291664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x291664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291668: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x291668u;
    {
        const bool branch_taken_0x291668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291668u;
        // 0x29166c: 0xae6200a4  sw          $v0, 0xA4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291668) {
            ctx->pc = 0x2916BCu;
            goto label_2916bc;
        }
    }
    ctx->pc = 0x291670u;
label_291670:
    // 0x291670: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x291670u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x291674: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x291674u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x291678: 0x3c014214  lui         $at, 0x4214
    ctx->pc = 0x291678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16916 << 16));
    // 0x29167c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29167cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291680: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x291680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291684: 0x0  nop
    ctx->pc = 0x291684u;
    // NOP
    // 0x291688: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x291688u;
    {
        const bool branch_taken_0x291688 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291688u;
        // 0x29168c: 0xc78db468  lwc1        $f13, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291688) {
            ctx->pc = 0x2916C0u;
            goto label_2916c0;
        }
    }
    ctx->pc = 0x291690u;
    // 0x291690: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x291690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x291694: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x291694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291698: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x291698u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29169c: 0x0  nop
    ctx->pc = 0x29169cu;
    // NOP
    // 0x2916a0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2916A0u;
    {
        const bool branch_taken_0x2916a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2916A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2916A0u;
        // 0x2916a4: 0xc782b468  lwc1        $f2, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2916a0) {
            ctx->pc = 0x2916C0u;
            goto label_2916c0;
        }
    }
    ctx->pc = 0x2916A8u;
    // 0x2916a8: 0xc6200048  lwc1        $f0, 0x48($s1)
    ctx->pc = 0x2916a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2916ac: 0xc6610050  lwc1        $f1, 0x50($s3)
    ctx->pc = 0x2916acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2916b0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2916b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2916b4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2916b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2916b8:
    // 0x2916b8: 0xe6610050  swc1        $f1, 0x50($s3)
    ctx->pc = 0x2916b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
label_2916bc:
    // 0x2916bc: 0xc78db468  lwc1        $f13, -0x4B98($gp)
    ctx->pc = 0x2916bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2916c0:
    // 0x2916c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2916c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2916c4: 0xc6630068  lwc1        $f3, 0x68($s3)
    ctx->pc = 0x2916c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2916c8: 0xc664006c  lwc1        $f4, 0x6C($s3)
    ctx->pc = 0x2916c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2916cc: 0xc6650070  lwc1        $f5, 0x70($s3)
    ctx->pc = 0x2916ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2916d0: 0x460d18c2  mul.s       $f3, $f3, $f13
    ctx->pc = 0x2916d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[13]);
    // 0x2916d4: 0x460d2102  mul.s       $f4, $f4, $f13
    ctx->pc = 0x2916d4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[13]);
    // 0x2916d8: 0xc662005c  lwc1        $f2, 0x5C($s3)
    ctx->pc = 0x2916d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2916dc: 0x460d2942  mul.s       $f5, $f5, $f13
    ctx->pc = 0x2916dcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[13]);
    // 0x2916e0: 0xc6600060  lwc1        $f0, 0x60($s3)
    ctx->pc = 0x2916e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2916e4: 0xc6610064  lwc1        $f1, 0x64($s3)
    ctx->pc = 0x2916e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2916e8: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2916e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2916ec: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2916ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2916f0: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2916f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2916f4: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x2916f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2916f8: 0xe662005c  swc1        $f2, 0x5C($s3)
    ctx->pc = 0x2916f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 92), bits); }
    // 0x2916fc: 0xe6600060  swc1        $f0, 0x60($s3)
    ctx->pc = 0x2916fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 96), bits); }
    // 0x291700: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x291700u;
    {
        const bool branch_taken_0x291700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x291704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291700u;
        // 0x291704: 0xe6610064  swc1        $f1, 0x64($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291700) {
            ctx->pc = 0x2917A8u;
            goto label_2917a8;
        }
    }
    ctx->pc = 0x291708u;
    // 0x291708: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x291708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29170c: 0xc6610080  lwc1        $f1, 0x80($s3)
    ctx->pc = 0x29170cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291710: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x291710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x291714: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x291714u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x291718: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x291718u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29171c: 0xe6610080  swc1        $f1, 0x80($s3)
    ctx->pc = 0x29171cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 128), bits); }
    // 0x291720: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x291720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291724: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x291724u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291728: 0x0  nop
    ctx->pc = 0x291728u;
    // NOP
    // 0x29172c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x29172Cu;
    {
        const bool branch_taken_0x29172c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29172Cu;
        // 0x291730: 0xc620006c  lwc1        $f0, 0x6C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29172c) {
            ctx->pc = 0x291740u;
            goto label_291740;
        }
    }
    ctx->pc = 0x291734u;
    // 0x291734: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x291734u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291738: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x291738u;
    {
        const bool branch_taken_0x291738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291738) {
            ctx->pc = 0x291748u;
            goto label_291748;
        }
    }
    ctx->pc = 0x291740u;
label_291740:
    // 0x291740: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x291740u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291744: 0x0  nop
    ctx->pc = 0x291744u;
    // NOP
label_291748:
    // 0x291748: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x291748u;
    {
        const bool branch_taken_0x291748 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291748u;
        // 0x29174c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291748) {
            ctx->pc = 0x29175Cu;
            goto label_29175c;
        }
    }
    ctx->pc = 0x291750u;
    // 0x291750: 0xe6600080  swc1        $f0, 0x80($s3)
    ctx->pc = 0x291750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 128), bits); }
    // 0x291754: 0xae62007c  sw          $v0, 0x7C($s3)
    ctx->pc = 0x291754u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 2));
    // 0x291758: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x291758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29175c:
    // 0x29175c: 0x8ea20188  lw          $v0, 0x188($s5)
    ctx->pc = 0x29175cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 392)));
    // 0x291760: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x291760u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x291764: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x291764u;
    {
        const bool branch_taken_0x291764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x291764) {
            ctx->pc = 0x291768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291764u;
            // 0x291768: 0xae60007c  sw          $zero, 0x7C($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29176Cu;
            goto label_29176c;
        }
    }
    ctx->pc = 0x29176Cu;
label_29176c:
    // 0x29176c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x29176cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x291770: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x291770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x291774: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x291774u;
    {
        const bool branch_taken_0x291774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x291778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291774u;
        // 0x291778: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291774) {
            ctx->pc = 0x291784u;
            goto label_291784;
        }
    }
    ctx->pc = 0x29177Cu;
    // 0x29177c: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x29177Cu;
    {
        const bool branch_taken_0x29177c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29177c) {
            ctx->pc = 0x291780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29177Cu;
            // 0x291780: 0x8e63007c  lw          $v1, 0x7C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2917C0u;
            goto label_2917c0;
        }
    }
    ctx->pc = 0x291784u;
label_291784:
    // 0x291784: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x291784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x291788: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x291788u;
    {
        const bool branch_taken_0x291788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291788u;
        // 0x29178c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291788) {
            ctx->pc = 0x2917BCu;
            goto label_2917bc;
        }
    }
    ctx->pc = 0x291790u;
    // 0x291790: 0x8e630098  lw          $v1, 0x98($s3)
    ctx->pc = 0x291790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x291794: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x291794u;
    {
        const bool branch_taken_0x291794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x291794) {
            ctx->pc = 0x291798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291794u;
            // 0x291798: 0x8e63007c  lw          $v1, 0x7C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2917C0u;
            goto label_2917c0;
        }
    }
    ctx->pc = 0x29179Cu;
    // 0x29179c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29179cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2917a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2917A0u;
    {
        const bool branch_taken_0x2917a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2917A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917A0u;
        // 0x2917a4: 0xae62007c  sw          $v0, 0x7C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2917a0) {
            ctx->pc = 0x2917BCu;
            goto label_2917bc;
        }
    }
    ctx->pc = 0x2917A8u;
label_2917a8:
    // 0x2917a8: 0xc0b5fa4  jal         func_2D7E90
    ctx->pc = 0x2917A8u;
    SET_GPR_U32(ctx, 31, 0x2917B0u);
    ctx->pc = 0x2917ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2917A8u;
    // 0x2917ac: 0xc62c0070  lwc1        $f12, 0x70($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7E90u, 0x2917A8u, 0x2917B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2917B0u;
label_2917b0:
    // 0x2917b0: 0xc6610080  lwc1        $f1, 0x80($s3)
    ctx->pc = 0x2917b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2917b4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2917b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2917b8: 0xe6610080  swc1        $f1, 0x80($s3)
    ctx->pc = 0x2917b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 128), bits); }
label_2917bc:
    // 0x2917bc: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2917bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_2917c0:
    // 0x2917c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2917c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2917c4: 0x54620017  bnel        $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2917C4u;
    {
        const bool branch_taken_0x2917c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2917c4) {
            ctx->pc = 0x2917C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2917C4u;
            // 0x2917c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291824u;
            goto label_291824;
        }
    }
    ctx->pc = 0x2917CCu;
    // 0x2917cc: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x2917ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2917d0: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x2917d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2917d4: 0xc6620084  lwc1        $f2, 0x84($s3)
    ctx->pc = 0x2917d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2917d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2917d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2917dc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2917dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2917e0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2917e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2917e4: 0xe6620084  swc1        $f2, 0x84($s3)
    ctx->pc = 0x2917e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
    // 0x2917e8: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x2917e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2917ec: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2917ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2917f0: 0x0  nop
    ctx->pc = 0x2917f0u;
    // NOP
    // 0x2917f4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2917F4u;
    {
        const bool branch_taken_0x2917f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2917F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917F4u;
        // 0x2917f8: 0xc6200078  lwc1        $f0, 0x78($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2917f4) {
            ctx->pc = 0x291808u;
            goto label_291808;
        }
    }
    ctx->pc = 0x2917FCu;
    // 0x2917fc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2917fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291800: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x291800u;
    {
        const bool branch_taken_0x291800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291800) {
            ctx->pc = 0x291810u;
            goto label_291810;
        }
    }
    ctx->pc = 0x291808u;
label_291808:
    // 0x291808: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x291808u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29180c: 0x0  nop
    ctx->pc = 0x29180cu;
    // NOP
label_291810:
    // 0x291810: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x291810u;
    {
        const bool branch_taken_0x291810 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x291810) {
            ctx->pc = 0x291814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291810u;
            // 0x291814: 0x8ea50170  lw          $a1, 0x170($s5) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 368)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291848u;
            goto label_291848;
        }
    }
    ctx->pc = 0x291818u;
    // 0x291818: 0xe6600084  swc1        $f0, 0x84($s3)
    ctx->pc = 0x291818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
    // 0x29181c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x29181Cu;
    {
        const bool branch_taken_0x29181c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29181Cu;
        // 0x291820: 0xae60007c  sw          $zero, 0x7C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29181c) {
            ctx->pc = 0x291844u;
            goto label_291844;
        }
    }
    ctx->pc = 0x291824u;
label_291824:
    // 0x291824: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x291824u;
    {
        const bool branch_taken_0x291824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x291824) {
            ctx->pc = 0x291828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291824u;
            // 0x291828: 0x8ea50170  lw          $a1, 0x170($s5) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 368)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291848u;
            goto label_291848;
        }
    }
    ctx->pc = 0x29182Cu;
    // 0x29182c: 0xc62c007c  lwc1        $f12, 0x7C($s1)
    ctx->pc = 0x29182cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x291830: 0xc0b5fa4  jal         func_2D7E90
    ctx->pc = 0x291830u;
    SET_GPR_U32(ctx, 31, 0x291838u);
    ctx->pc = 0x291834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291830u;
    // 0x291834: 0xc78db468  lwc1        $f13, -0x4B98($gp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7E90u, 0x291830u, 0x291838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291838u;
label_291838:
    // 0x291838: 0xc6610084  lwc1        $f1, 0x84($s3)
    ctx->pc = 0x291838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29183c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29183cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x291840: 0xe6610084  swc1        $f1, 0x84($s3)
    ctx->pc = 0x291840u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
label_291844:
    // 0x291844: 0x8ea50170  lw          $a1, 0x170($s5)
    ctx->pc = 0x291844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 368)));
label_291848:
    // 0x291848: 0x4a2006c  bltzl       $a1, . + 4 + (0x6C << 2)
    ctx->pc = 0x291848u;
    {
        const bool branch_taken_0x291848 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x291848) {
            ctx->pc = 0x29184Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291848u;
            // 0x29184c: 0x8ea30160  lw          $v1, 0x160($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2919FCu;
            goto label_2919fc;
        }
    }
    ctx->pc = 0x291850u;
    // 0x291850: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x291850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x291854: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x291854u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x291858: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x291858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x29185c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x29185cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x291860: 0xc66e0050  lwc1        $f14, 0x50($s3)
    ctx->pc = 0x291860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x291864: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x291864u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x291868: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x291868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29186c: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x29186cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x291870: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x291870u;
    SET_GPR_U32(ctx, 31, 0x291878u);
    ctx->pc = 0x291874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291870u;
    // 0x291874: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x291870u, 0x291878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291878u;
label_291878:
    // 0x291878: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x291878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x29187c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x29187cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x291880: 0x5462005e  bnel        $v1, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x291880u;
    {
        const bool branch_taken_0x291880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x291880) {
            ctx->pc = 0x291884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291880u;
            // 0x291884: 0x8ea30160  lw          $v1, 0x160($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2919FCu;
            goto label_2919fc;
        }
    }
    ctx->pc = 0x291888u;
    // 0x291888: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x291888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x29188c: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x29188cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x291890: 0xc6610050  lwc1        $f1, 0x50($s3)
    ctx->pc = 0x291890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291894: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x291894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x291898: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x291898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x29189c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x29189cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2918a0: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x2918a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2918a4: 0x3c01c2b4  lui         $at, 0xC2B4
    ctx->pc = 0x2918a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49844 << 16));
    // 0x2918a8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2918a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2918ac: 0x46140d02  mul.s       $f20, $f1, $f20
    ctx->pc = 0x2918acu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2918b0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2918b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2918b4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2918b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2918b8: 0x46150d42  mul.s       $f21, $f1, $f21
    ctx->pc = 0x2918b8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x2918bc: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x2918bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2918c0: 0x3c01c140  lui         $at, 0xC140
    ctx->pc = 0x2918c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49472 << 16));
    // 0x2918c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2918c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2918c8: 0x24740140  addiu       $s4, $v1, 0x140
    ctx->pc = 0x2918c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 320));
    // 0x2918cc: 0xc7968ba8  lwc1        $f22, -0x7458($gp)
    ctx->pc = 0x2918ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2918d0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2918d0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2918d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2918d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2918d8: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x2918d8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2918dc: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2918dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2918e0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2918e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2918e4: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x2918e4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2918e8: 0x8e300048  lw          $s0, 0x48($s1)
    ctx->pc = 0x2918e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2918ec: 0x2612000c  addiu       $s2, $s0, 0xC
    ctx->pc = 0x2918ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2918f0: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x2918f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2918f4: 0xc64e0008  lwc1        $f14, 0x8($s2)
    ctx->pc = 0x2918f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2918f8: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x2918f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2918fc: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x2918FCu;
    SET_GPR_U32(ctx, 31, 0x291904u);
    ctx->pc = 0x291900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2918FCu;
    // 0x291900: 0x46017380  add.s       $f14, $f14, $f1 (Delay Slot)
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x2918FCu, 0x291904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291904u;
label_291904:
    // 0x291904: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x291904u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x291908: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x291908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29190c: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x29190cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x291910: 0x0  nop
    ctx->pc = 0x291910u;
    // NOP
    // 0x291914: 0x0  nop
    ctx->pc = 0x291914u;
    // NOP
    // 0x291918: 0x4617a343  div.s       $f13, $f20, $f23
    ctx->pc = 0x291918u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[13] = ctx->f[20] / ctx->f[23];
    // 0x29191c: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x29191Cu;
    SET_GPR_U32(ctx, 31, 0x291924u);
    ctx->pc = 0x291920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29191Cu;
    // 0x291920: 0x4600c386  mov.s       $f14, $f24 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x29191Cu, 0x291924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291924u;
label_291924:
    // 0x291924: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x291924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291928: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x291928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29192c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x29192Cu;
    SET_GPR_U32(ctx, 31, 0x291934u);
    ctx->pc = 0x291930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29192Cu;
    // 0x291930: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x29192Cu, 0x291934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291934u;
label_291934:
    // 0x291934: 0xc64e0008  lwc1        $f14, 0x8($s2)
    ctx->pc = 0x291934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x291938: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x291938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29193c: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x29193cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x291940: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x291940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x291944: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x291944u;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x291948: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x291948u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x29194c: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x29194Cu;
    SET_GPR_U32(ctx, 31, 0x291954u);
    ctx->pc = 0x291950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29194Cu;
    // 0x291950: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x29194Cu, 0x291954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291954u;
label_291954:
    // 0x291954: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x291954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291958: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x291958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29195c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x29195Cu;
    SET_GPR_U32(ctx, 31, 0x291964u);
    ctx->pc = 0x291960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29195Cu;
    // 0x291960: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x29195Cu, 0x291964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291964u;
label_291964:
    // 0x291964: 0x8e300048  lw          $s0, 0x48($s1)
    ctx->pc = 0x291964u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x291968: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x291968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x29196c: 0x26120018  addiu       $s2, $s0, 0x18
    ctx->pc = 0x29196cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x291970: 0xc6600050  lwc1        $f0, 0x50($s3)
    ctx->pc = 0x291970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291974: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x291974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x291978: 0xc64e0008  lwc1        $f14, 0x8($s2)
    ctx->pc = 0x291978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x29197c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x29197cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x291980: 0x46007380  add.s       $f14, $f14, $f0
    ctx->pc = 0x291980u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
    // 0x291984: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x291984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x291988: 0x24740100  addiu       $s4, $v1, 0x100
    ctx->pc = 0x291988u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x29198c: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x29198cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x291990: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x291990u;
    SET_GPR_U32(ctx, 31, 0x291998u);
    ctx->pc = 0x291994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291990u;
    // 0x291994: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x291990u, 0x291998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291998u;
label_291998:
    // 0x291998: 0x4616ad42  mul.s       $f21, $f21, $f22
    ctx->pc = 0x291998u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x29199c: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x29199cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x2919a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2919a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2919a4: 0x0  nop
    ctx->pc = 0x2919a4u;
    // NOP
    // 0x2919a8: 0x0  nop
    ctx->pc = 0x2919a8u;
    // NOP
    // 0x2919ac: 0x4617ab43  div.s       $f13, $f21, $f23
    ctx->pc = 0x2919acu;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[13] = ctx->f[21] / ctx->f[23];
    // 0x2919b0: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x2919B0u;
    SET_GPR_U32(ctx, 31, 0x2919B8u);
    ctx->pc = 0x2919B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2919B0u;
    // 0x2919b4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x2919B0u, 0x2919B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2919B8u;
label_2919b8:
    // 0x2919b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2919b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2919bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2919bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2919c0: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2919C0u;
    SET_GPR_U32(ctx, 31, 0x2919C8u);
    ctx->pc = 0x2919C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2919C0u;
    // 0x2919c4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2919C0u, 0x2919C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2919C8u;
label_2919c8:
    // 0x2919c8: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x2919c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2919cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2919ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2919d0: 0xc64e0008  lwc1        $f14, 0x8($s2)
    ctx->pc = 0x2919d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2919d4: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x2919d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2919d8: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x2919d8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x2919dc: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x2919dcu;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x2919e0: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x2919E0u;
    SET_GPR_U32(ctx, 31, 0x2919E8u);
    ctx->pc = 0x2919E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2919E0u;
    // 0x2919e4: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x2919E0u, 0x2919E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2919E8u;
label_2919e8:
    // 0x2919e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2919e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2919ec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2919ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2919f0: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2919F0u;
    SET_GPR_U32(ctx, 31, 0x2919F8u);
    ctx->pc = 0x2919F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2919F0u;
    // 0x2919f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2919F0u, 0x2919F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2919F8u;
label_2919f8:
    // 0x2919f8: 0x8ea30160  lw          $v1, 0x160($s5)
    ctx->pc = 0x2919f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 352)));
label_2919fc:
    // 0x2919fc: 0x4600042  bltz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x2919FCu;
    {
        const bool branch_taken_0x2919fc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x291A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2919FCu;
        // 0x291a00: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2919fc) {
            ctx->pc = 0x291B08u;
            goto label_291b08;
        }
    }
    ctx->pc = 0x291A04u;
    // 0x291a04: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x291a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x291a08: 0x673818  mult        $a3, $v1, $a3
    ctx->pc = 0x291a08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x291a0c: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x291a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x291a10: 0x8c460020  lw          $a2, 0x20($v0)
    ctx->pc = 0x291a10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x291a14: 0x8ea40174  lw          $a0, 0x174($s5)
    ctx->pc = 0x291a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 372)));
    // 0x291a18: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x291a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x291a1c: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x291a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x291a20: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x291a20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x291a24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x291a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x291a28: 0xa48821  addu        $s1, $a1, $a0
    ctx->pc = 0x291a28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x291a2c: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x291a2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x291a30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x291a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291a34: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x291a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x291a38: 0x8c700048  lw          $s0, 0x48($v1)
    ctx->pc = 0x291a38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x291a3c: 0x2078021  addu        $s0, $s0, $a3
    ctx->pc = 0x291a3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x291a40: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x291a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x291a44: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x291a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x291a48: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x291A48u;
    SET_GPR_U32(ctx, 31, 0x291A50u);
    ctx->pc = 0x291A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291A48u;
    // 0x291a4c: 0xc60e0008  lwc1        $f14, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x291A48u, 0x291A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291A50u;
label_291a50:
    // 0x291a50: 0xc66e0054  lwc1        $f14, 0x54($s3)
    ctx->pc = 0x291a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x291a54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x291a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291a58: 0xc7808bac  lwc1        $f0, -0x7454($gp)
    ctx->pc = 0x291a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291a5c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x291a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x291a60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x291a60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x291a64: 0x46007382  mul.s       $f14, $f14, $f0
    ctx->pc = 0x291a64u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x291a68: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x291a68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x291a6c: 0x0  nop
    ctx->pc = 0x291a6cu;
    // NOP
    // 0x291a70: 0x0  nop
    ctx->pc = 0x291a70u;
    // NOP
    // 0x291a74: 0x46017383  div.s       $f14, $f14, $f1
    ctx->pc = 0x291a74u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[14] = ctx->f[14] / ctx->f[1];
    // 0x291a78: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x291A78u;
    SET_GPR_U32(ctx, 31, 0x291A80u);
    ctx->pc = 0x291A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291A78u;
    // 0x291a7c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x291A78u, 0x291A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291A80u;
label_291a80:
    // 0x291a80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x291a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291a84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x291a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291a88: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x291A88u;
    SET_GPR_U32(ctx, 31, 0x291A90u);
    ctx->pc = 0x291A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291A88u;
    // 0x291a8c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x291A88u, 0x291A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291A90u;
label_291a90:
    // 0x291a90: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x291a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x291a94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x291a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291a98: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x291a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x291a9c: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x291a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x291aa0: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x291aa0u;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x291aa4: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x291aa4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x291aa8: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x291AA8u;
    SET_GPR_U32(ctx, 31, 0x291AB0u);
    ctx->pc = 0x291AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291AA8u;
    // 0x291aac: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x291AA8u, 0x291AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291AB0u;
label_291ab0:
    // 0x291ab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x291ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291ab4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x291ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291ab8: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x291AB8u;
    SET_GPR_U32(ctx, 31, 0x291AC0u);
    ctx->pc = 0x291ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291AB8u;
    // 0x291abc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x291AB8u, 0x291AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291AC0u;
label_291ac0:
    // 0x291ac0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x291ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x291ac4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x291ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x291ac8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x291AC8u;
    {
        const bool branch_taken_0x291ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x291ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291AC8u;
        // 0x291acc: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291ac8) {
            ctx->pc = 0x291AD8u;
            goto label_291ad8;
        }
    }
    ctx->pc = 0x291AD0u;
    // 0x291ad0: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x291AD0u;
    {
        const bool branch_taken_0x291ad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x291ad0) {
            ctx->pc = 0x291AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291AD0u;
            // 0x291ad4: 0x8ea30164  lw          $v1, 0x164($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 356)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291B0Cu;
            goto label_291b0c;
        }
    }
    ctx->pc = 0x291AD8u;
label_291ad8:
    // 0x291ad8: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x291ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x291adc: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x291adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_291ae0:
    // 0x291ae0: 0x103180  sll         $a2, $s0, 6
    ctx->pc = 0x291ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x291ae4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x291ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291ae8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x291ae8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x291aec: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x291aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x291af0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x291af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x291af4: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x291AF4u;
    SET_GPR_U32(ctx, 31, 0x291AFCu);
    ctx->pc = 0x291AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291AF4u;
    // 0x291af8: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x291AF4u, 0x291AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291AFCu;
label_291afc:
    // 0x291afc: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x291afcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x291b00: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x291B00u;
    {
        const bool branch_taken_0x291b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x291b00) {
            ctx->pc = 0x291B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291B00u;
            // 0x291b04: 0x8e63000c  lw          $v1, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291ae0;
        }
    }
    ctx->pc = 0x291B08u;
label_291b08:
    // 0x291b08: 0x8ea30164  lw          $v1, 0x164($s5)
    ctx->pc = 0x291b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 356)));
label_291b0c:
    // 0x291b0c: 0x4600031  bltz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x291B0Cu;
    {
        const bool branch_taken_0x291b0c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x291B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291B0Cu;
        // 0x291b10: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291b0c) {
            ctx->pc = 0x291BD4u;
            goto label_291bd4;
        }
    }
    ctx->pc = 0x291B14u;
    // 0x291b14: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x291b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x291b18: 0x663018  mult        $a2, $v1, $a2
    ctx->pc = 0x291b18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x291b1c: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x291b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x291b20: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x291b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x291b24: 0x8ea40178  lw          $a0, 0x178($s5)
    ctx->pc = 0x291b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 376)));
    // 0x291b28: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x291b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x291b2c: 0x8cb20004  lw          $s2, 0x4($a1)
    ctx->pc = 0x291b2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x291b30: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x291b30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x291b34: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x291b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x291b38: 0x2449021  addu        $s2, $s2, $a0
    ctx->pc = 0x291b38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x291b3c: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x291b3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x291b40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b44: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x291b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x291b48: 0x8c700048  lw          $s0, 0x48($v1)
    ctx->pc = 0x291b48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x291b4c: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x291b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x291b50: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x291b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x291b54: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x291b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x291b58: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x291B58u;
    SET_GPR_U32(ctx, 31, 0x291B60u);
    ctx->pc = 0x291B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291B58u;
    // 0x291b5c: 0xc60e0008  lwc1        $f14, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x291B58u, 0x291B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291B60u;
label_291b60:
    // 0x291b60: 0xc66c0080  lwc1        $f12, 0x80($s3)
    ctx->pc = 0x291b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x291b64: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x291b64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x291b68: 0xc7808bb0  lwc1        $f0, -0x7450($gp)
    ctx->pc = 0x291b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291b6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x291b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b70: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x291b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x291b74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x291b74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x291b78: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x291b78u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x291b7c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x291b7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x291b80: 0x0  nop
    ctx->pc = 0x291b80u;
    // NOP
    // 0x291b84: 0x0  nop
    ctx->pc = 0x291b84u;
    // NOP
    // 0x291b88: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x291b88u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x291b8c: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x291B8Cu;
    SET_GPR_U32(ctx, 31, 0x291B94u);
    ctx->pc = 0x291B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291B8Cu;
    // 0x291b90: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x291B8Cu, 0x291B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291B94u;
label_291b94:
    // 0x291b94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x291b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b9c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x291B9Cu;
    SET_GPR_U32(ctx, 31, 0x291BA4u);
    ctx->pc = 0x291BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291B9Cu;
    // 0x291ba0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x291B9Cu, 0x291BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291BA4u;
label_291ba4:
    // 0x291ba4: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x291ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x291ba8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x291ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291bac: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x291bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x291bb0: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x291bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x291bb4: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x291bb4u;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x291bb8: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x291bb8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x291bbc: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x291BBCu;
    SET_GPR_U32(ctx, 31, 0x291BC4u);
    ctx->pc = 0x291BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291BBCu;
    // 0x291bc0: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x291BBCu, 0x291BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291BC4u;
label_291bc4:
    // 0x291bc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291bc8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x291bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291bcc: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x291BCCu;
    SET_GPR_U32(ctx, 31, 0x291BD4u);
    ctx->pc = 0x291BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291BCCu;
    // 0x291bd0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x291BCCu, 0x291BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291BD4u;
label_291bd4:
    // 0x291bd4: 0x8ea30168  lw          $v1, 0x168($s5)
    ctx->pc = 0x291bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 360)));
    // 0x291bd8: 0x4600031  bltz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x291BD8u;
    {
        const bool branch_taken_0x291bd8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x291BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291BD8u;
        // 0x291bdc: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291bd8) {
            ctx->pc = 0x291CA0u;
            goto label_291ca0;
        }
    }
    ctx->pc = 0x291BE0u;
    // 0x291be0: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x291be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x291be4: 0x663018  mult        $a2, $v1, $a2
    ctx->pc = 0x291be4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x291be8: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x291be8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x291bec: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x291becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x291bf0: 0x8ea4017c  lw          $a0, 0x17C($s5)
    ctx->pc = 0x291bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 380)));
    // 0x291bf4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x291bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x291bf8: 0x8cb20004  lw          $s2, 0x4($a1)
    ctx->pc = 0x291bf8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x291bfc: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x291bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x291c00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x291c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x291c04: 0x2449021  addu        $s2, $s2, $a0
    ctx->pc = 0x291c04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x291c08: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x291c08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x291c0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291c10: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x291c10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x291c14: 0x8c700048  lw          $s0, 0x48($v1)
    ctx->pc = 0x291c14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x291c18: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x291c18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x291c1c: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x291c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x291c20: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x291c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x291c24: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x291C24u;
    SET_GPR_U32(ctx, 31, 0x291C2Cu);
    ctx->pc = 0x291C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291C24u;
    // 0x291c28: 0xc60e0008  lwc1        $f14, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x291C24u, 0x291C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291C2Cu;
label_291c2c:
    // 0x291c2c: 0xc66c0084  lwc1        $f12, 0x84($s3)
    ctx->pc = 0x291c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x291c30: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x291c30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x291c34: 0xc7808bb4  lwc1        $f0, -0x744C($gp)
    ctx->pc = 0x291c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291c38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x291c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291c3c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x291c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x291c40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x291c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x291c44: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x291c44u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x291c48: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x291c48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x291c4c: 0x0  nop
    ctx->pc = 0x291c4cu;
    // NOP
    // 0x291c50: 0x0  nop
    ctx->pc = 0x291c50u;
    // NOP
    // 0x291c54: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x291c54u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x291c58: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x291C58u;
    SET_GPR_U32(ctx, 31, 0x291C60u);
    ctx->pc = 0x291C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291C58u;
    // 0x291c5c: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x291C58u, 0x291C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291C60u;
label_291c60:
    // 0x291c60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291c64: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x291c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291c68: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x291C68u;
    SET_GPR_U32(ctx, 31, 0x291C70u);
    ctx->pc = 0x291C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291C68u;
    // 0x291c6c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x291C68u, 0x291C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291C70u;
label_291c70:
    // 0x291c70: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x291c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x291c74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x291c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291c78: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x291c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x291c7c: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x291c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x291c80: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x291c80u;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x291c84: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x291c84u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x291c88: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x291C88u;
    SET_GPR_U32(ctx, 31, 0x291C90u);
    ctx->pc = 0x291C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291C88u;
    // 0x291c8c: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x291C88u, 0x291C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291C90u;
label_291c90:
    // 0x291c90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291c94: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x291c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291c98: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x291C98u;
    SET_GPR_U32(ctx, 31, 0x291CA0u);
    ctx->pc = 0x291C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291C98u;
    // 0x291c9c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x291C98u, 0x291CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291CA0u;
label_291ca0:
    // 0x291ca0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x291ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x291ca4: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x291ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x291ca8: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x291CA8u;
    {
        const bool branch_taken_0x291ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x291CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291CA8u;
        // 0x291cac: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291ca8) {
            ctx->pc = 0x291CCCu;
            goto label_291ccc;
        }
    }
    ctx->pc = 0x291CB0u;
    // 0x291cb0: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x291cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x291cb4: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x291cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x291cb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x291cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x291cbc: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x291cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291cc0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x291cc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x291cc4: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x291cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x291cc8: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x291cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_291ccc:
    // 0x291ccc: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x291CCCu;
    {
        const bool branch_taken_0x291ccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x291CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291CCCu;
        // 0x291cd0: 0xdfbf0130  ld          $ra, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291ccc) {
            ctx->pc = 0x291D00u;
            goto label_291d00;
        }
    }
    ctx->pc = 0x291CD4u;
    // 0x291cd4: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x291cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x291cd8: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x291cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x291cdc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x291cdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x291ce0: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x291ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291ce4: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x291ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291ce8: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x291ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x291cec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x291cecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x291cf0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x291cf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x291cf4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x291cf4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x291cf8: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x291cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x291cfc: 0xe4410048  swc1        $f1, 0x48($v0)
    ctx->pc = 0x291cfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
label_291d00:
    // 0x291d00: 0xdfb60120  ld          $s6, 0x120($sp)
    ctx->pc = 0x291d00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x291d04: 0xdfb50110  ld          $s5, 0x110($sp)
    ctx->pc = 0x291d04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x291d08: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x291d08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x291d0c: 0xdfb300f0  ld          $s3, 0xF0($sp)
    ctx->pc = 0x291d0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x291d10: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x291d10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x291d14: 0xdfb100d0  ld          $s1, 0xD0($sp)
    ctx->pc = 0x291d14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x291d18: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x291d18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x291d1c: 0xc7b80160  lwc1        $f24, 0x160($sp)
    ctx->pc = 0x291d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x291d20: 0xc7b70158  lwc1        $f23, 0x158($sp)
    ctx->pc = 0x291d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x291d24: 0xc7b60150  lwc1        $f22, 0x150($sp)
    ctx->pc = 0x291d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x291d28: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x291d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x291d2c: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x291d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x291d30: 0x3e00008  jr          $ra
    ctx->pc = 0x291D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D30u;
        // 0x291d34: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291D38u;
}

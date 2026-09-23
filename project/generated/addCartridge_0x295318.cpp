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

// Function: addCartridge
// Address: 0x295318 - 0x295a00
void addCartridge_0x295318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("addCartridge_0x295318");
#endif

    switch (ctx->pc) {
        case 0x295378u: goto label_295378;
        case 0x2953e8u: goto label_2953e8;
        case 0x295468u: goto label_295468;
        case 0x2954e8u: goto label_2954e8;
        case 0x2954fcu: goto label_2954fc;
        case 0x295584u: goto label_295584;
        case 0x2955b4u: goto label_2955b4;
        case 0x295638u: goto label_295638;
        case 0x29564cu: goto label_29564c;
        case 0x2956bcu: goto label_2956bc;
        case 0x2956c4u: goto label_2956c4;
        case 0x295724u: goto label_295724;
        case 0x295784u: goto label_295784;
        case 0x29597cu: goto label_29597c;
        case 0x29598cu: goto label_29598c;
        case 0x29599cu: goto label_29599c;
        case 0x2959acu: goto label_2959ac;
        case 0x2959bcu: goto label_2959bc;
        default: break;
    }

    ctx->pc = 0x295318u;

    // 0x295318: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x295318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x29531c: 0xffb70130  sd          $s7, 0x130($sp)
    ctx->pc = 0x29531cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 23));
    // 0x295320: 0x3c17003b  lui         $s7, 0x3B
    ctx->pc = 0x295320u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
    // 0x295324: 0xffbe0140  sd          $fp, 0x140($sp)
    ctx->pc = 0x295324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
    // 0x295328: 0xffb60120  sd          $s6, 0x120($sp)
    ctx->pc = 0x295328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 22));
    // 0x29532c: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x29532cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295330: 0xffb50110  sd          $s5, 0x110($sp)
    ctx->pc = 0x295330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 21));
    // 0x295334: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x295334u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295338: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x295338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x29533c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x29533cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295340: 0xffb300f0  sd          $s3, 0xF0($sp)
    ctx->pc = 0x295340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 19));
    // 0x295344: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x295344u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295348: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x295348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
    // 0x29534c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x29534cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295350: 0x8ee28e10  lw          $v0, -0x71F0($s7)
    ctx->pc = 0x295350u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A8E10u));
    // 0x295354: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x295354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295358: 0xffbf0150  sd          $ra, 0x150($sp)
    ctx->pc = 0x295358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 31));
    // 0x29535c: 0xffb100d0  sd          $s1, 0xD0($sp)
    ctx->pc = 0x29535cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 17));
    // 0x295360: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x295360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x295364: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x295364u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x295368: 0x1046000c  beq         $v0, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x295368u;
    {
        const bool branch_taken_0x295368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x29536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295368u;
        // 0x29536c: 0xafa500b0  sw          $a1, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295368) {
            ctx->pc = 0x29539Cu;
            goto label_29539c;
        }
    }
    ctx->pc = 0x295370u;
    // 0x295370: 0x26e48e10  addiu       $a0, $s7, -0x71F0
    ctx->pc = 0x295370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294938128));
    // 0x295374: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x295374u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_295378:
    // 0x295378: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x295378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29537c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29537cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x295380: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x295380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x295384: 0x10660006  beq         $v1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x295384u;
    {
        const bool branch_taken_0x295384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x295388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295384u;
        // 0x295388: 0x2a420004  slti        $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x295384) {
            ctx->pc = 0x2953A0u;
            goto label_2953a0;
        }
    }
    ctx->pc = 0x29538Cu;
    // 0x29538c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29538Cu;
    {
        const bool branch_taken_0x29538c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29538c) {
            ctx->pc = 0x295390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29538Cu;
            // 0x295390: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295378;
        }
    }
    ctx->pc = 0x295394u;
    // 0x295394: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x295394u;
    {
        const bool branch_taken_0x295394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295394) {
            ctx->pc = 0x2953A0u;
            goto label_2953a0;
        }
    }
    ctx->pc = 0x29539Cu;
label_29539c:
    // 0x29539c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29539cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2953a0:
    // 0x2953a0: 0x1040018a  beqz        $v0, . + 4 + (0x18A << 2)
    ctx->pc = 0x2953A0u;
    {
        const bool branch_taken_0x2953a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2953A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2953A0u;
        // 0x2953a4: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2953a0) {
            ctx->pc = 0x2959CCu;
            goto label_2959cc;
        }
    }
    ctx->pc = 0x2953A8u;
    // 0x2953a8: 0x245092c0  addiu       $s0, $v0, -0x6D40
    ctx->pc = 0x2953a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x2953ac: 0x8e0403c4  lw          $a0, 0x3C4($s0)
    ctx->pc = 0x2953acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 964)));
    // 0x2953b0: 0x2882000a  slti        $v0, $a0, 0xA
    ctx->pc = 0x2953b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2953b4: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2953B4u;
    {
        const bool branch_taken_0x2953b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2953b4) {
            ctx->pc = 0x2953B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2953B4u;
            // 0x2953b8: 0x8e0203c0  lw          $v0, 0x3C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 960)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295414u;
            goto label_295414;
        }
    }
    ctx->pc = 0x2953BCu;
    // 0x2953bc: 0x8e0503c0  lw          $a1, 0x3C0($s0)
    ctx->pc = 0x2953bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 960)));
    // 0x2953c0: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x2953c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2953c4: 0x24110060  addiu       $s1, $zero, 0x60
    ctx->pc = 0x2953c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2953c8: 0xae0203c4  sw          $v0, 0x3C4($s0)
    ctx->pc = 0x2953c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 964), GPR_U32(ctx, 2));
    // 0x2953cc: 0xb12018  mult        $a0, $a1, $s1
    ctx->pc = 0x2953ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2953d0: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x2953d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2953d4: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x2953d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2953d8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2953D8u;
    {
        const bool branch_taken_0x2953d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2953DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2953D8u;
        // 0x2953dc: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2953d8) {
            ctx->pc = 0x2953FCu;
            goto label_2953fc;
        }
    }
    ctx->pc = 0x2953E0u;
    // 0x2953e0: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x2953E0u;
    SET_GPR_U32(ctx, 31, 0x2953E8u);
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x2953E0u, 0x2953E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2953E8u;
label_2953e8:
    // 0x2953e8: 0x8e0503c0  lw          $a1, 0x3C0($s0)
    ctx->pc = 0x2953e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 960)));
    // 0x2953ec: 0xb11818  mult        $v1, $a1, $s1
    ctx->pc = 0x2953ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2953f0: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2953f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2953f4: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x2953f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x2953f8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2953f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2953fc:
    // 0x2953fc: 0x2843000a  slti        $v1, $v0, 0xA
    ctx->pc = 0x2953fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x295400: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x295400u;
    {
        const bool branch_taken_0x295400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x295404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295400u;
        // 0x295404: 0xae0203c0  sw          $v0, 0x3C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295400) {
            ctx->pc = 0x29540Cu;
            goto label_29540c;
        }
    }
    ctx->pc = 0x295408u;
    // 0x295408: 0xae0003c0  sw          $zero, 0x3C0($s0)
    ctx->pc = 0x295408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 0));
label_29540c:
    // 0x29540c: 0x8e0403c4  lw          $a0, 0x3C4($s0)
    ctx->pc = 0x29540cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 964)));
    // 0x295410: 0x8e0203c0  lw          $v0, 0x3C0($s0)
    ctx->pc = 0x295410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 960)));
label_295414:
    // 0x295414: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x295414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x295418: 0xae0303c4  sw          $v1, 0x3C4($s0)
    ctx->pc = 0x295418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 964), GPR_U32(ctx, 3));
    // 0x29541c: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x29541cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x295420: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x295420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x295424: 0x2844000a  slti        $a0, $v0, 0xA
    ctx->pc = 0x295424u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x295428: 0x2443fff6  addiu       $v1, $v0, -0xA
    ctx->pc = 0x295428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x29542c: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x29542cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x295430: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x295430u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x295434: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x295434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x295438: 0x14800054  bnez        $a0, . + 4 + (0x54 << 2)
    ctx->pc = 0x295438u;
    {
        const bool branch_taken_0x295438 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295438u;
        // 0x29543c: 0x708821  addu        $s1, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295438) {
            ctx->pc = 0x29558Cu;
            goto label_29558c;
        }
    }
    ctx->pc = 0x295440u;
    // 0x295440: 0x26e38e10  addiu       $v1, $s7, -0x71F0
    ctx->pc = 0x295440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294938128));
    // 0x295444: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x295444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x295448: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x295448u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x29544c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29544cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x295450: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x295450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x295454: 0xc66c001c  lwc1        $f12, 0x1C($s3)
    ctx->pc = 0x295454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x295458: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x295458u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x29545c: 0xc66d0020  lwc1        $f13, 0x20($s3)
    ctx->pc = 0x29545cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x295460: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x295460u;
    SET_GPR_U32(ctx, 31, 0x295468u);
    ctx->pc = 0x295464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295460u;
    // 0x295464: 0xc66e0024  lwc1        $f14, 0x24($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x295460u, 0x295468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295468u;
label_295468:
    // 0x295468: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x295468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x29546c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29546cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295470: 0xe4540058  swc1        $f20, 0x58($v0)
    ctx->pc = 0x295470u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x295474: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x295474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x295478: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x295478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x29547c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29547cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295480: 0xe4540048  swc1        $f20, 0x48($v0)
    ctx->pc = 0x295480u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x295484: 0xc7818c70  lwc1        $f1, -0x7390($gp)
    ctx->pc = 0x295484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295488: 0xc46e0058  lwc1        $f14, 0x58($v1)
    ctx->pc = 0x295488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x29548c: 0xc46c0048  lwc1        $f12, 0x48($v1)
    ctx->pc = 0x29548cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x295490: 0xc46d004c  lwc1        $f13, 0x4C($v1)
    ctx->pc = 0x295490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x295494: 0x46017382  mul.s       $f14, $f14, $f1
    ctx->pc = 0x295494u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x295498: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x295498u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x29549c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x29549cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2954a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2954a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2954a4: 0x46016b42  mul.s       $f13, $f13, $f1
    ctx->pc = 0x2954a4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x2954a8: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x2954a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2954ac: 0xac45008c  sw          $a1, 0x8C($v0)
    ctx->pc = 0x2954acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 5));
    // 0x2954b0: 0x0  nop
    ctx->pc = 0x2954b0u;
    // NOP
    // 0x2954b4: 0x0  nop
    ctx->pc = 0x2954b4u;
    // NOP
    // 0x2954b8: 0x46007383  div.s       $f14, $f14, $f0
    ctx->pc = 0x2954b8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[14] = ctx->f[14] / ctx->f[0];
    // 0x2954bc: 0x0  nop
    ctx->pc = 0x2954bcu;
    // NOP
    // 0x2954c0: 0x0  nop
    ctx->pc = 0x2954c0u;
    // NOP
    // 0x2954c4: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x2954c4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x2954c8: 0x8c650180  lw          $a1, 0x180($v1)
    ctx->pc = 0x2954c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
    // 0x2954cc: 0x0  nop
    ctx->pc = 0x2954ccu;
    // NOP
    // 0x2954d0: 0x0  nop
    ctx->pc = 0x2954d0u;
    // NOP
    // 0x2954d4: 0x46006b43  div.s       $f13, $f13, $f0
    ctx->pc = 0x2954d4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[0];
    // 0x2954d8: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2954d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2954dc: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2954dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2954e0: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x2954E0u;
    SET_GPR_U32(ctx, 31, 0x2954E8u);
    ctx->pc = 0x2954E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2954E0u;
    // 0x2954e4: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x2954E0u, 0x2954E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2954E8u;
label_2954e8:
    // 0x2954e8: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2954e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2954ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2954ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2954f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2954f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2954f4: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2954F4u;
    SET_GPR_U32(ctx, 31, 0x2954FCu);
    ctx->pc = 0x2954F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2954F4u;
    // 0x2954f8: 0x8c4506ec  lw          $a1, 0x6EC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1772)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2954F4u, 0x2954FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2954FCu;
label_2954fc:
    // 0x2954fc: 0xe6340038  swc1        $f20, 0x38($s1)
    ctx->pc = 0x2954fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x295500: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x295500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x295504: 0xe6340030  swc1        $f20, 0x30($s1)
    ctx->pc = 0x295504u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x295508: 0xe6340034  swc1        $f20, 0x34($s1)
    ctx->pc = 0x295508u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x29550c: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x29550cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295510: 0xc6640020  lwc1        $f4, 0x20($s3)
    ctx->pc = 0x295510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x295514: 0xc6650024  lwc1        $f5, 0x24($s3)
    ctx->pc = 0x295514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x295518: 0xc6630028  lwc1        $f3, 0x28($s3)
    ctx->pc = 0x295518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29551c: 0xc662002c  lwc1        $f2, 0x2C($s3)
    ctx->pc = 0x29551cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x295520: 0xc6610030  lwc1        $f1, 0x30($s3)
    ctx->pc = 0x295520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295524: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x295524u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x295528: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x295528u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x29552c: 0xc6a00150  lwc1        $f0, 0x150($s5)
    ctx->pc = 0x29552cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295530: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x295530u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x295534: 0xc6a70144  lwc1        $f7, 0x144($s5)
    ctx->pc = 0x295534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x295538: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x295538u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x29553c: 0xc6a6014c  lwc1        $f6, 0x14C($s5)
    ctx->pc = 0x29553cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x295540: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x295540u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x295544: 0xc6a40148  lwc1        $f4, 0x148($s5)
    ctx->pc = 0x295544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x295548: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x295548u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29554c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x29554cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x295550: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x295550u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x295554: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x295554u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x295558: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x295558u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29555c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x29555cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x295560: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x295560u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x295564: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x295564u;
    {
        const bool branch_taken_0x295564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x295568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295564u;
        // 0x295568: 0xe7a70010  swc1        $f7, 0x10($sp) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x295564) {
            ctx->pc = 0x295578u;
            goto label_295578;
        }
    }
    ctx->pc = 0x29556Cu;
    // 0x29556c: 0xc7808c74  lwc1        $f0, -0x738C($gp)
    ctx->pc = 0x29556cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295570: 0x46003801  sub.s       $f0, $f7, $f0
    ctx->pc = 0x295570u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x295574: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x295574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_295578:
    // 0x295578: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x295578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29557c: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x29557Cu;
    SET_GPR_U32(ctx, 31, 0x295584u);
    ctx->pc = 0x295580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29557Cu;
    // 0x295580: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x29557Cu, 0x295584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295584u;
label_295584:
    // 0x295584: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x295584u;
    {
        const bool branch_taken_0x295584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295584) {
            ctx->pc = 0x2956BCu;
            goto label_2956bc;
        }
    }
    ctx->pc = 0x29558Cu;
label_29558c:
    // 0x29558c: 0x26e38e10  addiu       $v1, $s7, -0x71F0
    ctx->pc = 0x29558cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294938128));
    // 0x295590: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x295590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x295594: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x295594u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x295598: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x295598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29559c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x29559cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2955a0: 0xc68c0054  lwc1        $f12, 0x54($s4)
    ctx->pc = 0x2955a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2955a4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x2955a4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x2955a8: 0xc68d0058  lwc1        $f13, 0x58($s4)
    ctx->pc = 0x2955a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2955ac: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x2955ACu;
    SET_GPR_U32(ctx, 31, 0x2955B4u);
    ctx->pc = 0x2955B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2955ACu;
    // 0x2955b0: 0xc68e005c  lwc1        $f14, 0x5C($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x2955ACu, 0x2955B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2955B4u;
label_2955b4:
    // 0x2955b4: 0x8fc30bcc  lw          $v1, 0xBCC($fp)
    ctx->pc = 0x2955b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 3020)));
    // 0x2955b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2955b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2955bc: 0xe4540058  swc1        $f20, 0x58($v0)
    ctx->pc = 0x2955bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2955c0: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x2955c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2955c4: 0xe4540048  swc1        $f20, 0x48($v0)
    ctx->pc = 0x2955c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2955c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2955c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2955cc: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2955ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2955d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2955d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2955d4: 0xc46d004c  lwc1        $f13, 0x4C($v1)
    ctx->pc = 0x2955d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2955d8: 0xc7808c78  lwc1        $f0, -0x7388($gp)
    ctx->pc = 0x2955d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2955dc: 0x46016b40  add.s       $f13, $f13, $f1
    ctx->pc = 0x2955dcu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x2955e0: 0xc46e0058  lwc1        $f14, 0x58($v1)
    ctx->pc = 0x2955e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2955e4: 0xc46c0048  lwc1        $f12, 0x48($v1)
    ctx->pc = 0x2955e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2955e8: 0x46007382  mul.s       $f14, $f14, $f0
    ctx->pc = 0x2955e8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x2955ec: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x2955ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2955f0: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2955f0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2955f4: 0xac45008c  sw          $a1, 0x8C($v0)
    ctx->pc = 0x2955f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 5));
    // 0x2955f8: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x2955f8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2955fc: 0x8c650180  lw          $a1, 0x180($v1)
    ctx->pc = 0x2955fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
    // 0x295600: 0x0  nop
    ctx->pc = 0x295600u;
    // NOP
    // 0x295604: 0x0  nop
    ctx->pc = 0x295604u;
    // NOP
    // 0x295608: 0x46017383  div.s       $f14, $f14, $f1
    ctx->pc = 0x295608u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[14] = ctx->f[14] / ctx->f[1];
    // 0x29560c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x29560cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x295610: 0x0  nop
    ctx->pc = 0x295610u;
    // NOP
    // 0x295614: 0x0  nop
    ctx->pc = 0x295614u;
    // NOP
    // 0x295618: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x295618u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x29561c: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x29561cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x295620: 0x0  nop
    ctx->pc = 0x295620u;
    // NOP
    // 0x295624: 0x0  nop
    ctx->pc = 0x295624u;
    // NOP
    // 0x295628: 0x46016b43  div.s       $f13, $f13, $f1
    ctx->pc = 0x295628u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[1];
    // 0x29562c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x29562cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x295630: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x295630u;
    SET_GPR_U32(ctx, 31, 0x295638u);
    ctx->pc = 0x295634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295630u;
    // 0x295634: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x295630u, 0x295638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295638u;
label_295638:
    // 0x295638: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x295638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x29563c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29563cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295640: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x295640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295644: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x295644u;
    SET_GPR_U32(ctx, 31, 0x29564Cu);
    ctx->pc = 0x295648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295644u;
    // 0x295648: 0x8c4506ec  lw          $a1, 0x6EC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1772)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x295644u, 0x29564Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29564Cu;
label_29564c:
    // 0x29564c: 0xe6340038  swc1        $f20, 0x38($s1)
    ctx->pc = 0x29564cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x295650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x295650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295654: 0xe6340030  swc1        $f20, 0x30($s1)
    ctx->pc = 0x295654u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x295658: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x295658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29565c: 0xe6340034  swc1        $f20, 0x34($s1)
    ctx->pc = 0x29565cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x295660: 0xc685005c  lwc1        $f5, 0x5C($s4)
    ctx->pc = 0x295660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x295664: 0xc6800054  lwc1        $f0, 0x54($s4)
    ctx->pc = 0x295664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295668: 0xc6840058  lwc1        $f4, 0x58($s4)
    ctx->pc = 0x295668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29566c: 0xc6830060  lwc1        $f3, 0x60($s4)
    ctx->pc = 0x29566cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x295670: 0xc6820064  lwc1        $f2, 0x64($s4)
    ctx->pc = 0x295670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x295674: 0xc6810068  lwc1        $f1, 0x68($s4)
    ctx->pc = 0x295674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295678: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x295678u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x29567c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x29567cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x295680: 0xc6a00150  lwc1        $f0, 0x150($s5)
    ctx->pc = 0x295680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295684: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x295684u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x295688: 0xc6a6014c  lwc1        $f6, 0x14C($s5)
    ctx->pc = 0x295688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x29568c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x29568cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x295690: 0xc6a40144  lwc1        $f4, 0x144($s5)
    ctx->pc = 0x295690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x295694: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x295694u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x295698: 0xc6a50148  lwc1        $f5, 0x148($s5)
    ctx->pc = 0x295698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29569c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29569cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2956a0: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x2956a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2956a4: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2956a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2956a8: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2956a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2956ac: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2956acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2956b0: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x2956b0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2956b4: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x2956B4u;
    SET_GPR_U32(ctx, 31, 0x2956BCu);
    ctx->pc = 0x2956B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2956B4u;
    // 0x2956b8: 0xe7a60018  swc1        $f6, 0x18($sp) (Delay Slot)
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x2956B4u, 0x2956BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2956BCu;
label_2956bc:
    // 0x2956bc: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2956BCu;
    SET_GPR_U32(ctx, 31, 0x2956C4u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2956BCu, 0x2956C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2956C4u;
label_2956c4:
    // 0x2956c4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2956C4u;
    {
        const bool branch_taken_0x2956c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2956C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2956C4u;
        // 0x2956c8: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2956c4) {
            ctx->pc = 0x2956D8u;
            goto label_2956d8;
        }
    }
    ctx->pc = 0x2956CCu;
    // 0x2956cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2956ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2956d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2956D0u;
    {
        const bool branch_taken_0x2956d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2956D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2956D0u;
        // 0x2956d4: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2956d0) {
            ctx->pc = 0x2956F0u;
            goto label_2956f0;
        }
    }
    ctx->pc = 0x2956D8u;
label_2956d8:
    // 0x2956d8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2956d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2956dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2956dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2956e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2956e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2956e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2956e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2956e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2956e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2956ec: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2956ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2956f0:
    // 0x2956f0: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2956f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2956f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2956f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2956f8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2956f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2956fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2956fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x295700: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x295700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x295704: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x295704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x295708: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x295708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29570c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x29570cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x295710: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x295710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x295714: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x295714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x295718: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x295718u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29571c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x29571Cu;
    SET_GPR_U32(ctx, 31, 0x295724u);
    ctx->pc = 0x295720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29571Cu;
    // 0x295720: 0xe481003c  swc1        $f1, 0x3C($a0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x29571Cu, 0x295724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295724u;
label_295724:
    // 0x295724: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x295724u;
    {
        const bool branch_taken_0x295724 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x295728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295724u;
        // 0x295728: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295724) {
            ctx->pc = 0x295738u;
            goto label_295738;
        }
    }
    ctx->pc = 0x29572Cu;
    // 0x29572c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29572cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x295730: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x295730u;
    {
        const bool branch_taken_0x295730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295730u;
        // 0x295734: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x295730) {
            ctx->pc = 0x295750u;
            goto label_295750;
        }
    }
    ctx->pc = 0x295738u;
label_295738:
    // 0x295738: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x295738u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x29573c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29573cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x295740: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x295740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x295744: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x295744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x295748: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x295748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29574c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29574cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_295750:
    // 0x295750: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x295750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x295754: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x295754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295758: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x295758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29575c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29575cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x295760: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x295760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x295764: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x295764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x295768: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x295768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29576c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x29576cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x295770: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x295770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x295774: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x295774u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x295778: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x295778u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29577c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x29577Cu;
    SET_GPR_U32(ctx, 31, 0x295784u);
    ctx->pc = 0x295780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29577Cu;
    // 0x295780: 0xe4810040  swc1        $f1, 0x40($a0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x29577Cu, 0x295784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295784u;
label_295784:
    // 0x295784: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x295784u;
    {
        const bool branch_taken_0x295784 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x295788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295784u;
        // 0x295788: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295784) {
            ctx->pc = 0x295798u;
            goto label_295798;
        }
    }
    ctx->pc = 0x29578Cu;
    // 0x29578c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29578cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x295790: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x295790u;
    {
        const bool branch_taken_0x295790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295790u;
        // 0x295794: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x295790) {
            ctx->pc = 0x2957B0u;
            goto label_2957b0;
        }
    }
    ctx->pc = 0x295798u;
label_295798:
    // 0x295798: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x295798u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x29579c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29579cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2957a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2957a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2957a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2957a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2957a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2957a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2957ac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2957acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2957b0:
    // 0x2957b0: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2957b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2957b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2957b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2957b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2957b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2957bc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2957bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2957c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2957c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2957c4: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x2957c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2957c8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2957c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2957cc: 0xc784b468  lwc1        $f4, -0x4B98($gp)
    ctx->pc = 0x2957ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2957d0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2957d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2957d4: 0x8fc20bcc  lw          $v0, 0xBCC($fp)
    ctx->pc = 0x2957d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 3020)));
    // 0x2957d8: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2957d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2957dc: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x2957dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2957e0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2957e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2957e4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2957e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2957e8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2957e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2957ec: 0xe4810044  swc1        $f1, 0x44($a0)
    ctx->pc = 0x2957ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x2957f0: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x2957f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2957f4: 0xc4430030  lwc1        $f3, 0x30($v0)
    ctx->pc = 0x2957f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2957f8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2957f8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2957fc: 0x0  nop
    ctx->pc = 0x2957fcu;
    // NOP
    // 0x295800: 0x0  nop
    ctx->pc = 0x295800u;
    // NOP
    // 0x295804: 0x460418c3  div.s       $f3, $f3, $f4
    ctx->pc = 0x295804u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[4];
    // 0x295808: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x295808u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29580c: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x29580cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295810: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x295810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295814: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x295814u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x295818: 0x0  nop
    ctx->pc = 0x295818u;
    // NOP
    // 0x29581c: 0x0  nop
    ctx->pc = 0x29581cu;
    // NOP
    // 0x295820: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x295820u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x295824: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x295824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x295828: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x295828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29582c: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x29582cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295830: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x295830u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x295834: 0x0  nop
    ctx->pc = 0x295834u;
    // NOP
    // 0x295838: 0x0  nop
    ctx->pc = 0x295838u;
    // NOP
    // 0x29583c: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x29583cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
    // 0x295840: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x295840u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x295844: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x295844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295848: 0xc4820040  lwc1        $f2, 0x40($a0)
    ctx->pc = 0x295848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29584c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x29584cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x295850: 0xc4860044  lwc1        $f6, 0x44($a0)
    ctx->pc = 0x295850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x295854: 0xc4830030  lwc1        $f3, 0x30($a0)
    ctx->pc = 0x295854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x295858: 0xc4850034  lwc1        $f5, 0x34($a0)
    ctx->pc = 0x295858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29585c: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x29585cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x295860: 0x46040202  mul.s       $f8, $f0, $f4
    ctx->pc = 0x295860u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x295864: 0xc4870038  lwc1        $f7, 0x38($a0)
    ctx->pc = 0x295864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x295868: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x295868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x29586c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x29586cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295870: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x295870u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x295874: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x295874u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x295878: 0xe4820040  swc1        $f2, 0x40($a0)
    ctx->pc = 0x295878u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x29587c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x29587cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x295880: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x295880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295884: 0xe4830030  swc1        $f3, 0x30($a0)
    ctx->pc = 0x295884u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x295888: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x295888u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x29588c: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x29588cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x295890: 0x46043102  mul.s       $f4, $f6, $f4
    ctx->pc = 0x295890u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x295894: 0xe4860044  swc1        $f6, 0x44($a0)
    ctx->pc = 0x295894u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x295898: 0xe4850034  swc1        $f5, 0x34($a0)
    ctx->pc = 0x295898u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x29589c: 0x460439c0  add.s       $f7, $f7, $f4
    ctx->pc = 0x29589cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
    // 0x2958a0: 0xe4870038  swc1        $f7, 0x38($a0)
    ctx->pc = 0x2958a0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x2958a4: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x2958a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x2958a8: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x2958a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x2958ac: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x2958acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2958b0: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x2958b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x2958b4: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x2958b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x2958b8: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x2958b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2958bc: 0xe6210054  swc1        $f1, 0x54($s1)
    ctx->pc = 0x2958bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x2958c0: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2958c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x2958c4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2958c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2958c8: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2958C8u;
    {
        const bool branch_taken_0x2958c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2958CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2958C8u;
        // 0x2958cc: 0x2ec20005  sltiu       $v0, $s6, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2958c8) {
            ctx->pc = 0x295934u;
            goto label_295934;
        }
    }
    ctx->pc = 0x2958D0u;
    // 0x2958d0: 0x2ec20004  sltiu       $v0, $s6, 0x4
    ctx->pc = 0x2958d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2958d4: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2958D4u;
    {
        const bool branch_taken_0x2958d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2958D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2958D4u;
        // 0x2958d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2958d4) {
            ctx->pc = 0x2959CCu;
            goto label_2959cc;
        }
    }
    ctx->pc = 0x2958DCu;
    // 0x2958dc: 0x12c2000f  beq         $s6, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2958DCu;
    {
        const bool branch_taken_0x2958dc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x2958E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2958DCu;
        // 0x2958e0: 0x2ac20002  slti        $v0, $s6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2958dc) {
            ctx->pc = 0x29591Cu;
            goto label_29591c;
        }
    }
    ctx->pc = 0x2958E4u;
    // 0x2958e4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2958E4u;
    {
        const bool branch_taken_0x2958e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2958e4) {
            ctx->pc = 0x2958E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2958E4u;
            // 0x2958e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2958FCu;
            goto label_2958fc;
        }
    }
    ctx->pc = 0x2958ECu;
    // 0x2958ec: 0x12c00009  beqz        $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x2958ECu;
    {
        const bool branch_taken_0x2958ec = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2958F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2958ECu;
        // 0x2958f0: 0xdfbf0150  ld          $ra, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2958ec) {
            ctx->pc = 0x295914u;
            goto label_295914;
        }
    }
    ctx->pc = 0x2958F4u;
    // 0x2958f4: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2958F4u;
    {
        const bool branch_taken_0x2958f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2958F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2958F4u;
        // 0x2958f8: 0xdfbe0140  ld          $fp, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2958f4) {
            ctx->pc = 0x2959D4u;
            goto label_2959d4;
        }
    }
    ctx->pc = 0x2958FCu;
label_2958fc:
    // 0x2958fc: 0x12c20009  beq         $s6, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2958FCu;
    {
        const bool branch_taken_0x2958fc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x295900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2958FCu;
        // 0x295900: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2958fc) {
            ctx->pc = 0x295924u;
            goto label_295924;
        }
    }
    ctx->pc = 0x295904u;
    // 0x295904: 0x12c20009  beq         $s6, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x295904u;
    {
        const bool branch_taken_0x295904 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x295908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295904u;
        // 0x295908: 0xdfbf0150  ld          $ra, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295904) {
            ctx->pc = 0x29592Cu;
            goto label_29592c;
        }
    }
    ctx->pc = 0x29590Cu;
    // 0x29590c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x29590Cu;
    {
        const bool branch_taken_0x29590c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29590Cu;
        // 0x295910: 0xdfbe0140  ld          $fp, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29590c) {
            ctx->pc = 0x2959D4u;
            goto label_2959d4;
        }
    }
    ctx->pc = 0x295914u;
label_295914:
    // 0x295914: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x295914u;
    {
        const bool branch_taken_0x295914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295914u;
        // 0x295918: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295914) {
            ctx->pc = 0x2959C4u;
            goto label_2959c4;
        }
    }
    ctx->pc = 0x29591Cu;
label_29591c:
    // 0x29591c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x29591Cu;
    {
        const bool branch_taken_0x29591c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29591Cu;
        // 0x295920: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29591c) {
            ctx->pc = 0x2959C4u;
            goto label_2959c4;
        }
    }
    ctx->pc = 0x295924u;
label_295924:
    // 0x295924: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x295924u;
    {
        const bool branch_taken_0x295924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295924u;
        // 0x295928: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295924) {
            ctx->pc = 0x2959C4u;
            goto label_2959c4;
        }
    }
    ctx->pc = 0x29592Cu;
label_29592c:
    // 0x29592c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x29592Cu;
    {
        const bool branch_taken_0x29592c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29592Cu;
        // 0x295930: 0x3c020800  lui         $v0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29592c) {
            ctx->pc = 0x2959C4u;
            goto label_2959c4;
        }
    }
    ctx->pc = 0x295934u;
label_295934:
    // 0x295934: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x295934u;
    {
        const bool branch_taken_0x295934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295934u;
        // 0x295938: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295934) {
            ctx->pc = 0x2959B4u;
            goto label_2959b4;
        }
    }
    ctx->pc = 0x29593Cu;
    // 0x29593c: 0x12c20011  beq         $s6, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29593Cu;
    {
        const bool branch_taken_0x29593c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x295940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29593Cu;
        // 0x295940: 0x2ac20002  slti        $v0, $s6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29593c) {
            ctx->pc = 0x295984u;
            goto label_295984;
        }
    }
    ctx->pc = 0x295944u;
    // 0x295944: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x295944u;
    {
        const bool branch_taken_0x295944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x295944) {
            ctx->pc = 0x295948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295944u;
            // 0x295948: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29595Cu;
            goto label_29595c;
        }
    }
    ctx->pc = 0x29594Cu;
    // 0x29594c: 0x12c00009  beqz        $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x29594Cu;
    {
        const bool branch_taken_0x29594c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x295950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29594Cu;
        // 0x295950: 0xdfbf0150  ld          $ra, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29594c) {
            ctx->pc = 0x295974u;
            goto label_295974;
        }
    }
    ctx->pc = 0x295954u;
    // 0x295954: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x295954u;
    {
        const bool branch_taken_0x295954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295954u;
        // 0x295958: 0xdfbe0140  ld          $fp, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295954) {
            ctx->pc = 0x2959D4u;
            goto label_2959d4;
        }
    }
    ctx->pc = 0x29595Cu;
label_29595c:
    // 0x29595c: 0x12c2000d  beq         $s6, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29595Cu;
    {
        const bool branch_taken_0x29595c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x295960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29595Cu;
        // 0x295960: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29595c) {
            ctx->pc = 0x295994u;
            goto label_295994;
        }
    }
    ctx->pc = 0x295964u;
    // 0x295964: 0x12c2000f  beq         $s6, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x295964u;
    {
        const bool branch_taken_0x295964 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x295968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295964u;
        // 0x295968: 0xdfbf0150  ld          $ra, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295964) {
            ctx->pc = 0x2959A4u;
            goto label_2959a4;
        }
    }
    ctx->pc = 0x29596Cu;
    // 0x29596c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x29596Cu;
    {
        const bool branch_taken_0x29596c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29596Cu;
        // 0x295970: 0xdfbe0140  ld          $fp, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29596c) {
            ctx->pc = 0x2959D4u;
            goto label_2959d4;
        }
    }
    ctx->pc = 0x295974u;
label_295974:
    // 0x295974: 0xc09a3c0  jal         func_268F00
    ctx->pc = 0x295974u;
    SET_GPR_U32(ctx, 31, 0x29597Cu);
    ctx->pc = 0x268F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268F00u, 0x295974u, 0x29597Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29597Cu;
label_29597c:
    // 0x29597c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x29597Cu;
    {
        const bool branch_taken_0x29597c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29597Cu;
        // 0x295980: 0x3c030e00  lui         $v1, 0xE00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3584 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29597c) {
            ctx->pc = 0x2959C0u;
            goto label_2959c0;
        }
    }
    ctx->pc = 0x295984u;
label_295984:
    // 0x295984: 0xc09a3c0  jal         func_268F00
    ctx->pc = 0x295984u;
    SET_GPR_U32(ctx, 31, 0x29598Cu);
    ctx->pc = 0x268F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268F00u, 0x295984u, 0x29598Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29598Cu;
label_29598c:
    // 0x29598c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29598Cu;
    {
        const bool branch_taken_0x29598c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29598Cu;
        // 0x295990: 0x3c030d00  lui         $v1, 0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3328 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29598c) {
            ctx->pc = 0x2959C0u;
            goto label_2959c0;
        }
    }
    ctx->pc = 0x295994u;
label_295994:
    // 0x295994: 0xc09a3c0  jal         func_268F00
    ctx->pc = 0x295994u;
    SET_GPR_U32(ctx, 31, 0x29599Cu);
    ctx->pc = 0x268F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268F00u, 0x295994u, 0x29599Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29599Cu;
label_29599c:
    // 0x29599c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29599Cu;
    {
        const bool branch_taken_0x29599c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2959A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29599Cu;
        // 0x2959a0: 0x3c030b00  lui         $v1, 0xB00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2816 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29599c) {
            ctx->pc = 0x2959C0u;
            goto label_2959c0;
        }
    }
    ctx->pc = 0x2959A4u;
label_2959a4:
    // 0x2959a4: 0xc09a3c0  jal         func_268F00
    ctx->pc = 0x2959A4u;
    SET_GPR_U32(ctx, 31, 0x2959ACu);
    ctx->pc = 0x268F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268F00u, 0x2959A4u, 0x2959ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2959ACu;
label_2959ac:
    // 0x2959ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2959ACu;
    {
        const bool branch_taken_0x2959ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2959B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2959ACu;
        // 0x2959b0: 0x3c030700  lui         $v1, 0x700 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1792 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2959ac) {
            ctx->pc = 0x2959C0u;
            goto label_2959c0;
        }
    }
    ctx->pc = 0x2959B4u;
label_2959b4:
    // 0x2959b4: 0xc09a3c0  jal         func_268F00
    ctx->pc = 0x2959B4u;
    SET_GPR_U32(ctx, 31, 0x2959BCu);
    ctx->pc = 0x268F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268F00u, 0x2959B4u, 0x2959BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2959BCu;
label_2959bc:
    // 0x2959bc: 0x3c030f00  lui         $v1, 0xF00
    ctx->pc = 0x2959bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3840 << 16));
label_2959c0:
    // 0x2959c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2959c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2959c4:
    // 0x2959c4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2959c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2959c8: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x2959c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
label_2959cc:
    // 0x2959cc: 0xdfbf0150  ld          $ra, 0x150($sp)
    ctx->pc = 0x2959ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2959d0: 0xdfbe0140  ld          $fp, 0x140($sp)
    ctx->pc = 0x2959d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_2959d4:
    // 0x2959d4: 0xdfb70130  ld          $s7, 0x130($sp)
    ctx->pc = 0x2959d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2959d8: 0xdfb60120  ld          $s6, 0x120($sp)
    ctx->pc = 0x2959d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2959dc: 0xdfb50110  ld          $s5, 0x110($sp)
    ctx->pc = 0x2959dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2959e0: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x2959e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2959e4: 0xdfb300f0  ld          $s3, 0xF0($sp)
    ctx->pc = 0x2959e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2959e8: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x2959e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2959ec: 0xdfb100d0  ld          $s1, 0xD0($sp)
    ctx->pc = 0x2959ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2959f0: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x2959f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2959f4: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x2959f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2959f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2959F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2959FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2959F8u;
        // 0x2959fc: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2959F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295A00u;
}

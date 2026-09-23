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

// Function: partTransform
// Address: 0x260258 - 0x260490
void partTransform_0x260258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("partTransform_0x260258");
#endif

    switch (ctx->pc) {
        case 0x260294u: goto label_260294;
        case 0x2602f8u: goto label_2602f8;
        case 0x260310u: goto label_260310;
        case 0x26031cu: goto label_26031c;
        case 0x26032cu: goto label_26032c;
        case 0x260358u: goto label_260358;
        case 0x26036cu: goto label_26036c;
        case 0x260398u: goto label_260398;
        case 0x2603d8u: goto label_2603d8;
        case 0x2603e8u: goto label_2603e8;
        case 0x2603f4u: goto label_2603f4;
        case 0x260454u: goto label_260454;
        default: break;
    }

    ctx->pc = 0x260258u;

label_260258:
    // 0x260258: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x260258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x26025c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x26025cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x260260: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x260260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x260264: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x260264u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260268: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x260268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x26026c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x26026cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x260270: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x260270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x260274: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x260274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x260278: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x260278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x26027c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x26027cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x260280: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x260280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x260284: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x260284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x260288: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x260288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x26028c: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x26028cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x260290: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x260290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_260294:
    // 0x260294: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x260294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x260298: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x260298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x26029c: 0x70431018  mult1       $v0, $v0, $v1
    ctx->pc = 0x26029cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2602a0: 0xa32018  mult        $a0, $a1, $v1
    ctx->pc = 0x2602a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2602a4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2602a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2602a8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2602a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2602ac: 0x44a821  addu        $s5, $v0, $a0
    ctx->pc = 0x2602acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2602b0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2602b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2602b4: 0x50800002  beql        $a0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2602B4u;
    {
        const bool branch_taken_0x2602b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2602b4) {
            ctx->pc = 0x2602B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2602B4u;
            // 0x2602b8: 0x8eb20008  lw          $s2, 0x8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2602C0u;
            goto label_2602c0;
        }
    }
    ctx->pc = 0x2602BCu;
    // 0x2602bc: 0x8eb2000c  lw          $s2, 0xC($s5)
    ctx->pc = 0x2602bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_2602c0:
    // 0x2602c0: 0x26a20014  addiu       $v0, $s5, 0x14
    ctx->pc = 0x2602c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    // 0x2602c4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2602c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2602c8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2602c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2602cc: 0x26a2002c  addiu       $v0, $s5, 0x2C
    ctx->pc = 0x2602ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 44));
    // 0x2602d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2602d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2602d4: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x2602d4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x2602d8: 0x10800028  beqz        $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2602D8u;
    {
        const bool branch_taken_0x2602d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2602DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2602D8u;
        // 0x2602dc: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2602d8) {
            ctx->pc = 0x26037Cu;
            goto label_26037c;
        }
    }
    ctx->pc = 0x2602E0u;
    // 0x2602e0: 0x82a20006  lb          $v0, 0x6($s5)
    ctx->pc = 0x2602e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x2602e4: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2602E4u;
    {
        const bool branch_taken_0x2602e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2602E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2602E4u;
        // 0x2602e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2602e4) {
            ctx->pc = 0x260348u;
            goto label_260348;
        }
    }
    ctx->pc = 0x2602ECu;
    // 0x2602ec: 0x24140098  addiu       $s4, $zero, 0x98
    ctx->pc = 0x2602ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x2602f0: 0x2141818  mult        $v1, $s0, $s4
    ctx->pc = 0x2602f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2602f4: 0x0  nop
    ctx->pc = 0x2602f4u;
    // NOP
label_2602f8:
    // 0x2602f8: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x2602f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x2602fc: 0x26130001  addiu       $s3, $s0, 0x1
    ctx->pc = 0x2602fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x260300: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x260300u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x260304: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x260304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x260308: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x260308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x26030c: 0x0  nop
    ctx->pc = 0x26030cu;
    // NOP
label_260310:
    // 0x260310: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x260310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260314: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x260314u;
    SET_GPR_U32(ctx, 31, 0x26031Cu);
    ctx->pc = 0x260318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260314u;
    // 0x260318: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x260314u, 0x26031Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26031Cu;
label_26031c:
    // 0x26031c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x26031cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x260320: 0x2605003c  addiu       $a1, $s0, 0x3C
    ctx->pc = 0x260320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x260324: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x260324u;
    SET_GPR_U32(ctx, 31, 0x26032Cu);
    ctx->pc = 0x260328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260324u;
    // 0x260328: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x260324u, 0x26032Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26032Cu;
label_26032c:
    // 0x26032c: 0x621fff8  bgez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x26032Cu;
    {
        const bool branch_taken_0x26032c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x260330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26032Cu;
        // 0x260330: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26032c) {
            ctx->pc = 0x260310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_260310;
        }
    }
    ctx->pc = 0x260334u;
    // 0x260334: 0x82a20006  lb          $v0, 0x6($s5)
    ctx->pc = 0x260334u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x260338: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x260338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26033c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x26033cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x260340: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x260340u;
    {
        const bool branch_taken_0x260340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260340u;
        // 0x260344: 0x2141818  mult        $v1, $s0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x260340) {
            ctx->pc = 0x2602F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2602f8;
        }
    }
    ctx->pc = 0x260348u;
label_260348:
    // 0x260348: 0x82a20007  lb          $v0, 0x7($s5)
    ctx->pc = 0x260348u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 7)));
    // 0x26034c: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26034Cu;
    {
        const bool branch_taken_0x26034c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x260350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26034Cu;
        // 0x260350: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26034c) {
            ctx->pc = 0x26037Cu;
            goto label_26037c;
        }
    }
    ctx->pc = 0x260354u;
    // 0x260354: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x260354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260358:
    // 0x260358: 0x8ea50048  lw          $a1, 0x48($s5)
    ctx->pc = 0x260358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
    // 0x26035c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26035cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260360: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x260360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x260364: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x260364u;
    SET_GPR_U32(ctx, 31, 0x26036Cu);
    ctx->pc = 0x260368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260364u;
    // 0x260368: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x260364u, 0x26036Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26036Cu;
label_26036c:
    // 0x26036c: 0x82a20007  lb          $v0, 0x7($s5)
    ctx->pc = 0x26036cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 7)));
    // 0x260370: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x260370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x260374: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x260374u;
    {
        const bool branch_taken_0x260374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260374u;
        // 0x260378: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260374) {
            ctx->pc = 0x260358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_260358;
        }
    }
    ctx->pc = 0x26037Cu;
label_26037c:
    // 0x26037c: 0x5240002d  beql        $s2, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x26037Cu;
    {
        const bool branch_taken_0x26037c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x26037c) {
            ctx->pc = 0x260380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26037Cu;
            // 0x260380: 0x82a50003  lb          $a1, 0x3($s5) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260434u;
            goto label_260434;
        }
    }
    ctx->pc = 0x260384u;
    // 0x260384: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x260384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x260388: 0x442002a  bltzl       $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x260388u;
    {
        const bool branch_taken_0x260388 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x260388) {
            ctx->pc = 0x26038Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260388u;
            // 0x26038c: 0x82a50003  lb          $a1, 0x3($s5) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260434u;
            goto label_260434;
        }
    }
    ctx->pc = 0x260390u;
    // 0x260390: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x260390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x260394: 0x0  nop
    ctx->pc = 0x260394u;
    // NOP
label_260398:
    // 0x260398: 0x265e0018  addiu       $fp, $s2, 0x18
    ctx->pc = 0x260398u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x26039c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x26039cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2603a0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2603a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2603a4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2603a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2603a8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2603a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2603ac: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2603acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2603b0: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2603b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2603b4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2603b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2603b8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2603b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2603bc: 0xc39821  addu        $s3, $a2, $v1
    ctx->pc = 0x2603bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2603c0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2603c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2603c4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2603c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2603c8: 0xa49021  addu        $s2, $a1, $a0
    ctx->pc = 0x2603c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2603cc: 0x30548000  andi        $s4, $v0, 0x8000
    ctx->pc = 0x2603ccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2603d0: 0x30517fff  andi        $s1, $v0, 0x7FFF
    ctx->pc = 0x2603d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x2603d4: 0x0  nop
    ctx->pc = 0x2603d4u;
    // NOP
label_2603d8:
    // 0x2603d8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2603D8u;
    {
        const bool branch_taken_0x2603d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2603d8) {
            ctx->pc = 0x260400u;
            goto label_260400;
        }
    }
    ctx->pc = 0x2603E0u;
    // 0x2603e0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2603e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2603e4: 0x0  nop
    ctx->pc = 0x2603e4u;
    // NOP
label_2603e8:
    // 0x2603e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2603e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2603ec: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x2603ECu;
    SET_GPR_U32(ctx, 31, 0x2603F4u);
    ctx->pc = 0x2603F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2603ECu;
    // 0x2603f0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x2603ECu, 0x2603F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2603F4u;
label_2603f4:
    // 0x2603f4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2603f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2603f8: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2603F8u;
    {
        const bool branch_taken_0x2603f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2603FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2603F8u;
        // 0x2603fc: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2603f8) {
            ctx->pc = 0x2603E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2603e8;
        }
    }
    ctx->pc = 0x260400u;
label_260400:
    // 0x260400: 0x56800005  bnel        $s4, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x260400u;
    {
        const bool branch_taken_0x260400 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x260400) {
            ctx->pc = 0x260404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260400u;
            // 0x260404: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260418u;
            goto label_260418;
        }
    }
    ctx->pc = 0x260408u;
    // 0x260408: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x260408u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x26040c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x26040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x260410: 0x30548000  andi        $s4, $v0, 0x8000
    ctx->pc = 0x260410u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x260414: 0x30517fff  andi        $s1, $v0, 0x7FFF
    ctx->pc = 0x260414u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_260418:
    // 0x260418: 0x12c0ffef  beqz        $s6, . + 4 + (-0x11 << 2)
    ctx->pc = 0x260418u;
    {
        const bool branch_taken_0x260418 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x260418) {
            ctx->pc = 0x2603D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2603d8;
        }
    }
    ctx->pc = 0x260420u;
    // 0x260420: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x260420u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260424: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x260424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x260428: 0x441ffdb  bgez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x260428u;
    {
        const bool branch_taken_0x260428 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260428u;
        // 0x26042c: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260428) {
            ctx->pc = 0x260398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_260398;
        }
    }
    ctx->pc = 0x260430u;
    // 0x260430: 0x82a50003  lb          $a1, 0x3($s5)
    ctx->pc = 0x260430u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
label_260434:
    // 0x260434: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x260434u;
    {
        const bool branch_taken_0x260434 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x260438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260434u;
        // 0x260438: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260434) {
            ctx->pc = 0x260454u;
            goto label_260454;
        }
    }
    ctx->pc = 0x26043Cu;
    // 0x26043c: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x26043cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x260440: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x260440u;
    {
        const bool branch_taken_0x260440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x260444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260440u;
        // 0x260444: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260440) {
            ctx->pc = 0x260454u;
            goto label_260454;
        }
    }
    ctx->pc = 0x260448u;
    // 0x260448: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x260448u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26044c: 0xc098096  jal         func_260258
    ctx->pc = 0x26044Cu;
    SET_GPR_U32(ctx, 31, 0x260454u);
    ctx->pc = 0x260450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26044Cu;
    // 0x260450: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260258u;
    goto label_260258;
    ctx->pc = 0x260454u;
label_260454:
    // 0x260454: 0x82a50004  lb          $a1, 0x4($s5)
    ctx->pc = 0x260454u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x260458: 0x4a1ff8e  bgez        $a1, . + 4 + (-0x72 << 2)
    ctx->pc = 0x260458u;
    {
        const bool branch_taken_0x260458 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x26045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260458u;
        // 0x26045c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260458) {
            ctx->pc = 0x260294u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_260294;
        }
    }
    ctx->pc = 0x260460u;
    // 0x260460: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x260460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x260464: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x260464u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x260468: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x260468u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26046c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x26046cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x260470: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x260470u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260474: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x260474u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260478: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x260478u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26047c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x26047cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x260480: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x260480u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260484: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x260484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260488: 0x3e00008  jr          $ra
    ctx->pc = 0x260488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260488u;
        // 0x26048c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260490u;
}

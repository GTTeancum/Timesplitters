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

// Function: sounddataSave
// Address: 0x206028 - 0x2062c0
void sounddataSave_0x206028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sounddataSave_0x206028");
#endif

    switch (ctx->pc) {
        case 0x206064u: goto label_206064;
        case 0x206080u: goto label_206080;
        case 0x206090u: goto label_206090;
        case 0x2060a8u: goto label_2060a8;
        case 0x206138u: goto label_206138;
        case 0x2061d0u: goto label_2061d0;
        case 0x206214u: goto label_206214;
        case 0x206220u: goto label_206220;
        case 0x206240u: goto label_206240;
        case 0x206248u: goto label_206248;
        case 0x206260u: goto label_206260;
        case 0x206268u: goto label_206268;
        case 0x206278u: goto label_206278;
        case 0x206288u: goto label_206288;
        case 0x206290u: goto label_206290;
        default: break;
    }

    ctx->pc = 0x206028u;

    // 0x206028: 0x27bdfb40  addiu       $sp, $sp, -0x4C0
    ctx->pc = 0x206028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966080));
    // 0x20602c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x20602cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x206030: 0xffb30450  sd          $s3, 0x450($sp)
    ctx->pc = 0x206030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 19));
    // 0x206034: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x206034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x206038: 0xffb10430  sd          $s1, 0x430($sp)
    ctx->pc = 0x206038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 17));
    // 0x20603c: 0x245398b0  addiu       $s3, $v0, -0x6750
    ctx->pc = 0x20603cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940848));
    // 0x206040: 0xffbf04b0  sd          $ra, 0x4B0($sp)
    ctx->pc = 0x206040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1200), GPR_U64(ctx, 31));
    // 0x206044: 0xffbe04a0  sd          $fp, 0x4A0($sp)
    ctx->pc = 0x206044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 30));
    // 0x206048: 0xffb70490  sd          $s7, 0x490($sp)
    ctx->pc = 0x206048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1168), GPR_U64(ctx, 23));
    // 0x20604c: 0xffb60480  sd          $s6, 0x480($sp)
    ctx->pc = 0x20604cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 22));
    // 0x206050: 0xffb50470  sd          $s5, 0x470($sp)
    ctx->pc = 0x206050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 21));
    // 0x206054: 0xffb40460  sd          $s4, 0x460($sp)
    ctx->pc = 0x206054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 20));
    // 0x206058: 0xffb20440  sd          $s2, 0x440($sp)
    ctx->pc = 0x206058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 18));
    // 0x20605c: 0xc0b9294  jal         func_2E4A50
    ctx->pc = 0x20605Cu;
    SET_GPR_U32(ctx, 31, 0x206064u);
    ctx->pc = 0x206060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20605Cu;
    // 0x206060: 0xffb00420  sd          $s0, 0x420($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4A50u, 0x20605Cu, 0x206064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206064u;
label_206064:
    // 0x206064: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x206064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206068: 0x12200089  beqz        $s1, . + 4 + (0x89 << 2)
    ctx->pc = 0x206068u;
    {
        const bool branch_taken_0x206068 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x20606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206068u;
        // 0x20606c: 0x3c05003a  lui         $a1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206068) {
            ctx->pc = 0x206290u;
            goto label_206290;
        }
    }
    ctx->pc = 0x206070u;
    // 0x206070: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x206070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206074: 0x24a598c8  addiu       $a1, $a1, -0x6738
    ctx->pc = 0x206074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940872));
    // 0x206078: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x206078u;
    SET_GPR_U32(ctx, 31, 0x206080u);
    ctx->pc = 0x20607Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206078u;
    // 0x20607c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x206078u, 0x206080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206080u;
label_206080:
    // 0x206080: 0x3c1e003a  lui         $fp, 0x3A
    ctx->pc = 0x206080u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)58 << 16));
    // 0x206084: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x206084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206088: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x206088u;
    SET_GPR_U32(ctx, 31, 0x206090u);
    ctx->pc = 0x20608Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206088u;
    // 0x20608c: 0x3c16003a  lui         $s6, 0x3A (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)58 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x206088u, 0x206090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206090u;
label_206090:
    // 0x206090: 0x3c17003a  lui         $s7, 0x3A
    ctx->pc = 0x206090u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)58 << 16));
    // 0x206094: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x206094u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x206098: 0x3c15003a  lui         $s5, 0x3A
    ctx->pc = 0x206098u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)58 << 16));
    // 0x20609c: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x20609cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x2060a0: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x2060a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2060a4: 0x0  nop
    ctx->pc = 0x2060a4u;
    // NOP
label_2060a8:
    // 0x2060a8: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x2060a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x2060ac: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x2060acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2060b0: 0x2483e180  addiu       $v1, $a0, -0x1E80
    ctx->pc = 0x2060b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959488));
    // 0x2060b4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2060b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2060b8: 0x94c70016  lhu         $a3, 0x16($a2)
    ctx->pc = 0x2060b8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 22)));
    // 0x2060bc: 0x30e20008  andi        $v0, $a3, 0x8
    ctx->pc = 0x2060bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x2060c0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2060C0u;
    {
        const bool branch_taken_0x2060c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2060C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060C0u;
        // 0x2060c4: 0x24cb0008  addiu       $t3, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2060c0) {
            ctx->pc = 0x206140u;
            goto label_206140;
        }
    }
    ctx->pc = 0x2060C8u;
    // 0x2060c8: 0x85650008  lh          $a1, 0x8($t3)
    ctx->pc = 0x2060c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x2060cc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2060ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2060d0: 0x94c40012  lhu         $a0, 0x12($a2)
    ctx->pc = 0x2060d0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x2060d4: 0x244c9938  addiu       $t4, $v0, -0x66C8
    ctx->pc = 0x2060d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940984));
    // 0x2060d8: 0x94c30014  lhu         $v1, 0x14($a2)
    ctx->pc = 0x2060d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2060dc: 0x30e20010  andi        $v0, $a3, 0x10
    ctx->pc = 0x2060dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x2060e0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2060e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2060e4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2060e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2060e8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2060e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x2060ec: 0x85690002  lh          $t1, 0x2($t3)
    ctx->pc = 0x2060ecu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x2060f0: 0x856a0004  lh          $t2, 0x4($t3)
    ctx->pc = 0x2060f0u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2060f4: 0x84c80008  lh          $t0, 0x8($a2)
    ctx->pc = 0x2060f4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2060f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2060F8u;
    {
        const bool branch_taken_0x2060f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2060FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060F8u;
        // 0x2060fc: 0x856b0006  lh          $t3, 0x6($t3) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2060f8) {
            ctx->pc = 0x20610Cu;
            goto label_20610c;
        }
    }
    ctx->pc = 0x206100u;
    // 0x206100: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x206100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x206104: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x206104u;
    {
        const bool branch_taken_0x206104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206104u;
        // 0x206108: 0x24439980  addiu       $v1, $v0, -0x6680 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206104) {
            ctx->pc = 0x206114u;
            goto label_206114;
        }
    }
    ctx->pc = 0x20610Cu;
label_20610c:
    // 0x20610c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x20610cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x206110: 0x2443e338  addiu       $v1, $v0, -0x1CC8
    ctx->pc = 0x206110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959928));
label_206114:
    // 0x206114: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x206114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x206118: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x206118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20611c: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x20611cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x206120: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x206120u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x206124: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x206124u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x206128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20612c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x20612cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x206130: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x206130u;
    SET_GPR_U32(ctx, 31, 0x206138u);
    ctx->pc = 0x206134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206130u;
    // 0x206134: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x206130u, 0x206138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206138u;
label_206138:
    // 0x206138: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x206138u;
    {
        const bool branch_taken_0x206138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206138u;
        // 0x20613c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206138) {
            ctx->pc = 0x206218u;
            goto label_206218;
        }
    }
    ctx->pc = 0x206140u;
label_206140:
    // 0x206140: 0x30e20010  andi        $v0, $a3, 0x10
    ctx->pc = 0x206140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x206144: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x206144u;
    {
        const bool branch_taken_0x206144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206144u;
        // 0x206148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206144) {
            ctx->pc = 0x20615Cu;
            goto label_20615c;
        }
    }
    ctx->pc = 0x20614Cu;
    // 0x20614c: 0x856c0008  lh          $t4, 0x8($t3)
    ctx->pc = 0x20614cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x206150: 0x84c80008  lh          $t0, 0x8($a2)
    ctx->pc = 0x206150u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x206154: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x206154u;
    {
        const bool branch_taken_0x206154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206154u;
        // 0x206158: 0x27c59998  addiu       $a1, $fp, -0x6668 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206154) {
            ctx->pc = 0x2061A4u;
            goto label_2061a4;
        }
    }
    ctx->pc = 0x20615Cu;
label_20615c:
    // 0x20615c: 0x30e20004  andi        $v0, $a3, 0x4
    ctx->pc = 0x20615cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x206160: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x206160u;
    {
        const bool branch_taken_0x206160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206160u;
        // 0x206164: 0x26c599d8  addiu       $a1, $s6, -0x6628 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206160) {
            ctx->pc = 0x206174u;
            goto label_206174;
        }
    }
    ctx->pc = 0x206168u;
    // 0x206168: 0x856c0008  lh          $t4, 0x8($t3)
    ctx->pc = 0x206168u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x20616c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20616Cu;
    {
        const bool branch_taken_0x20616c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20616Cu;
        // 0x206170: 0x84c80008  lh          $t0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20616c) {
            ctx->pc = 0x2061A4u;
            goto label_2061a4;
        }
    }
    ctx->pc = 0x206174u;
label_206174:
    // 0x206174: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x206174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x206178: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x206178u;
    {
        const bool branch_taken_0x206178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206178u;
        // 0x20617c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206178) {
            ctx->pc = 0x206190u;
            goto label_206190;
        }
    }
    ctx->pc = 0x206180u;
    // 0x206180: 0x856c0008  lh          $t4, 0x8($t3)
    ctx->pc = 0x206180u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x206184: 0x84c80008  lh          $t0, 0x8($a2)
    ctx->pc = 0x206184u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x206188: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x206188u;
    {
        const bool branch_taken_0x206188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206188u;
        // 0x20618c: 0x26e59a18  addiu       $a1, $s7, -0x65E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206188) {
            ctx->pc = 0x2061A4u;
            goto label_2061a4;
        }
    }
    ctx->pc = 0x206190u;
label_206190:
    // 0x206190: 0x30e20002  andi        $v0, $a3, 0x2
    ctx->pc = 0x206190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
    // 0x206194: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x206194u;
    {
        const bool branch_taken_0x206194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206194u;
        // 0x206198: 0x26a59a58  addiu       $a1, $s5, -0x65A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206194) {
            ctx->pc = 0x2061D8u;
            goto label_2061d8;
        }
    }
    ctx->pc = 0x20619Cu;
    // 0x20619c: 0x856c0008  lh          $t4, 0x8($t3)
    ctx->pc = 0x20619cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x2061a0: 0x84c80008  lh          $t0, 0x8($a2)
    ctx->pc = 0x2061a0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
label_2061a4:
    // 0x2061a4: 0x85690002  lh          $t1, 0x2($t3)
    ctx->pc = 0x2061a4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x2061a8: 0x856a0004  lh          $t2, 0x4($t3)
    ctx->pc = 0x2061a8u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2061ac: 0x94c30012  lhu         $v1, 0x12($a2)
    ctx->pc = 0x2061acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x2061b0: 0x94c20014  lhu         $v0, 0x14($a2)
    ctx->pc = 0x2061b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2061b4: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x2061b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2061b8: 0x856b0006  lh          $t3, 0x6($t3)
    ctx->pc = 0x2061b8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x2061bc: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x2061bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2061c0: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x2061c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    // 0x2061c4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2061c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2061c8: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x2061C8u;
    SET_GPR_U32(ctx, 31, 0x2061D0u);
    ctx->pc = 0x2061CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2061C8u;
    // 0x2061cc: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x2061C8u, 0x2061D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2061D0u;
label_2061d0:
    // 0x2061d0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2061D0u;
    {
        const bool branch_taken_0x2061d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2061D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2061D0u;
        // 0x2061d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2061d0) {
            ctx->pc = 0x206218u;
            goto label_206218;
        }
    }
    ctx->pc = 0x2061D8u;
label_2061d8:
    // 0x2061d8: 0x856c0008  lh          $t4, 0x8($t3)
    ctx->pc = 0x2061d8u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x2061dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2061dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2061e0: 0x84c80008  lh          $t0, 0x8($a2)
    ctx->pc = 0x2061e0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2061e4: 0x26859a98  addiu       $a1, $s4, -0x6568
    ctx->pc = 0x2061e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941336));
    // 0x2061e8: 0x85690002  lh          $t1, 0x2($t3)
    ctx->pc = 0x2061e8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x2061ec: 0x856a0004  lh          $t2, 0x4($t3)
    ctx->pc = 0x2061ecu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2061f0: 0x94c30012  lhu         $v1, 0x12($a2)
    ctx->pc = 0x2061f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x2061f4: 0x94c20014  lhu         $v0, 0x14($a2)
    ctx->pc = 0x2061f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2061f8: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x2061f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2061fc: 0x856b0006  lh          $t3, 0x6($t3)
    ctx->pc = 0x2061fcu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x206200: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x206200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x206204: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x206204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    // 0x206208: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x206208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x20620c: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x20620Cu;
    SET_GPR_U32(ctx, 31, 0x206214u);
    ctx->pc = 0x206210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20620Cu;
    // 0x206210: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x20620Cu, 0x206214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206214u;
label_206214:
    // 0x206214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_206218:
    // 0x206218: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x206218u;
    SET_GPR_U32(ctx, 31, 0x206220u);
    ctx->pc = 0x20621Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206218u;
    // 0x20621c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x206218u, 0x206220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206220u;
label_206220:
    // 0x206220: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x206220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x206224: 0x2a4204bf  slti        $v0, $s2, 0x4BF
    ctx->pc = 0x206224u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)1215) ? 1 : 0);
    // 0x206228: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
    ctx->pc = 0x206228u;
    {
        const bool branch_taken_0x206228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206228u;
        // 0x20622c: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206228) {
            ctx->pc = 0x2060A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2060a8;
        }
    }
    ctx->pc = 0x206230u;
    // 0x206230: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x206230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x206234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206238: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x206238u;
    SET_GPR_U32(ctx, 31, 0x206240u);
    ctx->pc = 0x20623Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206238u;
    // 0x20623c: 0x24a5e340  addiu       $a1, $a1, -0x1CC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x206238u, 0x206240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206240u;
label_206240:
    // 0x206240: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x206240u;
    SET_GPR_U32(ctx, 31, 0x206248u);
    ctx->pc = 0x206244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206240u;
    // 0x206244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x206240u, 0x206248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206248u;
label_206248:
    // 0x206248: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x206248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x20624c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x20624cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x206250: 0x24a5e348  addiu       $a1, $a1, -0x1CB8
    ctx->pc = 0x206250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959944));
    // 0x206254: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x206254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x206258: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x206258u;
    SET_GPR_U32(ctx, 31, 0x206260u);
    ctx->pc = 0x20625Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206258u;
    // 0x20625c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x206258u, 0x206260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206260u;
label_206260:
    // 0x206260: 0xc0868ce  jal         func_21A338
    ctx->pc = 0x206260u;
    SET_GPR_U32(ctx, 31, 0x206268u);
    ctx->pc = 0x206264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206260u;
    // 0x206264: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A338u, 0x206260u, 0x206268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206268u;
label_206268:
    // 0x206268: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x206268u;
    {
        const bool branch_taken_0x206268 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206268u;
        // 0x20626c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206268) {
            ctx->pc = 0x20627Cu;
            goto label_20627c;
        }
    }
    ctx->pc = 0x206270u;
    // 0x206270: 0xc08697e  jal         func_21A5F8
    ctx->pc = 0x206270u;
    SET_GPR_U32(ctx, 31, 0x206278u);
    ctx->pc = 0x206274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206270u;
    // 0x206274: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5F8u, 0x206270u, 0x206278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206278u;
label_206278:
    // 0x206278: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x206278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20627c:
    // 0x20627c: 0x2113023  subu        $a2, $s0, $s1
    ctx->pc = 0x20627cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x206280: 0xc086966  jal         func_21A598
    ctx->pc = 0x206280u;
    SET_GPR_U32(ctx, 31, 0x206288u);
    ctx->pc = 0x206284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206280u;
    // 0x206284: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A598u, 0x206280u, 0x206288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206288u;
label_206288:
    // 0x206288: 0xc0b929e  jal         func_2E4A78
    ctx->pc = 0x206288u;
    SET_GPR_U32(ctx, 31, 0x206290u);
    ctx->pc = 0x20628Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206288u;
    // 0x20628c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4A78u, 0x206288u, 0x206290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206290u;
label_206290:
    // 0x206290: 0xdfbf04b0  ld          $ra, 0x4B0($sp)
    ctx->pc = 0x206290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x206294: 0xdfbe04a0  ld          $fp, 0x4A0($sp)
    ctx->pc = 0x206294u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x206298: 0xdfb70490  ld          $s7, 0x490($sp)
    ctx->pc = 0x206298u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x20629c: 0xdfb60480  ld          $s6, 0x480($sp)
    ctx->pc = 0x20629cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x2062a0: 0xdfb50470  ld          $s5, 0x470($sp)
    ctx->pc = 0x2062a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x2062a4: 0xdfb40460  ld          $s4, 0x460($sp)
    ctx->pc = 0x2062a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x2062a8: 0xdfb30450  ld          $s3, 0x450($sp)
    ctx->pc = 0x2062a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x2062ac: 0xdfb20440  ld          $s2, 0x440($sp)
    ctx->pc = 0x2062acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x2062b0: 0xdfb10430  ld          $s1, 0x430($sp)
    ctx->pc = 0x2062b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x2062b4: 0xdfb00420  ld          $s0, 0x420($sp)
    ctx->pc = 0x2062b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x2062b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2062B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2062BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2062B8u;
        // 0x2062bc: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2062B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2062C0u;
}

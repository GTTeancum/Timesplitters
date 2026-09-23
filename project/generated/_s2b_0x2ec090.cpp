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

// Function: _s2b
// Address: 0x2ec090 - 0x2ec1d8
void _s2b_0x2ec090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_s2b_0x2ec090");
#endif

    switch (ctx->pc) {
        case 0x2ec0f8u: goto label_2ec0f8;
        case 0x2ec12cu: goto label_2ec12c;
        case 0x2ec148u: goto label_2ec148;
        case 0x2ec160u: goto label_2ec160;
        case 0x2ec188u: goto label_2ec188;
        case 0x2ec1a4u: goto label_2ec1a4;
        default: break;
    }

    ctx->pc = 0x2ec090u;

    // 0x2ec090: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ec090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2ec094: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2ec094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ec098: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2ec098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2ec09c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2ec09cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec0a0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2ec0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2ec0a4: 0x26a30008  addiu       $v1, $s5, 0x8
    ctx->pc = 0x2ec0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x2ec0a8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2ec0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2ec0ac: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2ec0acu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2ec0b0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2ec0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2ec0b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ec0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ec0b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ec0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec0bc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2ec0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2ec0c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ec0c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec0c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ec0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ec0c8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ec0c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec0cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ec0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ec0d0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2ec0d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec0d4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EC0D4u;
    {
        const bool branch_taken_0x2ec0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec0d4) {
            ctx->pc = 0x2EC0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC0D4u;
            // 0x2ec0d8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC0DCu;
            goto label_2ec0dc;
        }
    }
    ctx->pc = 0x2EC0DCu;
label_2ec0dc:
    // 0x2ec0dc: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2ec0dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec0e0: 0x1812  mflo        $v1
    ctx->pc = 0x2ec0e0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2ec0e4: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x2ec0e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ec0e8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2EC0E8u;
    {
        const bool branch_taken_0x2ec0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC0E8u;
        // 0x2ec0ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec0e8) {
            ctx->pc = 0x2EC11Cu;
            goto label_2ec11c;
        }
    }
    ctx->pc = 0x2EC0F0u;
    // 0x2ec0f0: 0x2a72000a  slti        $s2, $s3, 0xA
    ctx->pc = 0x2ec0f0u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2ec0f4: 0x0  nop
    ctx->pc = 0x2ec0f4u;
    // NOP
label_2ec0f8:
    // 0x2ec0f8: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x2ec0f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2ec0fc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ec0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ec100: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x2ec100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ec104: 0x0  nop
    ctx->pc = 0x2ec104u;
    // NOP
    // 0x2ec108: 0x0  nop
    ctx->pc = 0x2ec108u;
    // NOP
    // 0x2ec10c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EC10Cu;
    {
        const bool branch_taken_0x2ec10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec10c) {
            ctx->pc = 0x2EC0F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ec0f8;
        }
    }
    ctx->pc = 0x2EC114u;
    // 0x2ec114: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC114u;
    {
        const bool branch_taken_0x2ec114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC114u;
        // 0x2ec118: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec114) {
            ctx->pc = 0x2EC124u;
            goto label_2ec124;
        }
    }
    ctx->pc = 0x2EC11Cu;
label_2ec11c:
    // 0x2ec11c: 0x2a72000a  slti        $s2, $s3, 0xA
    ctx->pc = 0x2ec11cu;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2ec120: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ec120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ec124:
    // 0x2ec124: 0xc0bafa8  jal         func_2EBEA0
    ctx->pc = 0x2EC124u;
    SET_GPR_U32(ctx, 31, 0x2EC12Cu);
    ctx->pc = 0x2EC128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC124u;
    // 0x2ec128: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBEA0u, 0x2EC124u, 0x2EC12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC12Cu;
label_2ec12c:
    // 0x2ec12c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ec12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec130: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ec130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec134: 0xacb60014  sw          $s6, 0x14($a1)
    ctx->pc = 0x2ec134u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 22));
    // 0x2ec138: 0x1640000f  bnez        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x2EC138u;
    {
        const bool branch_taken_0x2ec138 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC138u;
        // 0x2ec13c: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec138) {
            ctx->pc = 0x2EC178u;
            goto label_2ec178;
        }
    }
    ctx->pc = 0x2EC140u;
    // 0x2ec140: 0x26100009  addiu       $s0, $s0, 0x9
    ctx->pc = 0x2ec140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x2ec144: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x2ec144u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2ec148:
    // 0x2ec148: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ec148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec14c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2ec14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ec150: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ec150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ec154: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x2ec154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x2ec158: 0xc0bafde  jal         func_2EBF78
    ctx->pc = 0x2EC158u;
    SET_GPR_U32(ctx, 31, 0x2EC160u);
    ctx->pc = 0x2EC15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC158u;
    // 0x2ec15c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF78u, 0x2EC158u, 0x2EC160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC160u;
label_2ec160:
    // 0x2ec160: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ec160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec164: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x2ec164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2ec168: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2EC168u;
    {
        const bool branch_taken_0x2ec168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec168) {
            ctx->pc = 0x2EC16Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC168u;
            // 0x2ec16c: 0x82070000  lb          $a3, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ec148;
        }
    }
    ctx->pc = 0x2EC170u;
    // 0x2ec170: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EC170u;
    {
        const bool branch_taken_0x2ec170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC170u;
        // 0x2ec174: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec170) {
            ctx->pc = 0x2EC17Cu;
            goto label_2ec17c;
        }
    }
    ctx->pc = 0x2EC178u;
label_2ec178:
    // 0x2ec178: 0x2610000a  addiu       $s0, $s0, 0xA
    ctx->pc = 0x2ec178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
label_2ec17c:
    // 0x2ec17c: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x2ec17cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2ec180: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EC180u;
    {
        const bool branch_taken_0x2ec180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC180u;
        // 0x2ec184: 0x2b18823  subu        $s1, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec180) {
            ctx->pc = 0x2EC1ACu;
            goto label_2ec1ac;
        }
    }
    ctx->pc = 0x2EC188u;
label_2ec188:
    // 0x2ec188: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x2ec188u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ec18c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ec18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec190: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2ec190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ec194: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ec194u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ec198: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x2ec198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x2ec19c: 0xc0bafde  jal         func_2EBF78
    ctx->pc = 0x2EC19Cu;
    SET_GPR_U32(ctx, 31, 0x2EC1A4u);
    ctx->pc = 0x2EC1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC19Cu;
    // 0x2ec1a0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF78u, 0x2EC19Cu, 0x2EC1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC1A4u;
label_2ec1a4:
    // 0x2ec1a4: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2EC1A4u;
    {
        const bool branch_taken_0x2ec1a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC1A4u;
        // 0x2ec1a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec1a4) {
            ctx->pc = 0x2EC188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ec188;
        }
    }
    ctx->pc = 0x2EC1ACu;
label_2ec1ac:
    // 0x2ec1ac: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2ec1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ec1b0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2ec1b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec1b4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2ec1b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ec1b8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2ec1b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ec1bc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2ec1bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ec1c0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2ec1c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ec1c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ec1c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ec1c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ec1c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec1cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ec1ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC1D0u;
        // 0x2ec1d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC1D8u;
}

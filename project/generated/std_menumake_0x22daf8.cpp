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

// Function: std_menumake
// Address: 0x22daf8 - 0x22dcd8
void std_menumake_0x22daf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("std_menumake_0x22daf8");
#endif

    switch (ctx->pc) {
        case 0x22db34u: goto label_22db34;
        case 0x22db48u: goto label_22db48;
        case 0x22db64u: goto label_22db64;
        case 0x22db84u: goto label_22db84;
        case 0x22dc28u: goto label_22dc28;
        case 0x22dc84u: goto label_22dc84;
        case 0x22dca0u: goto label_22dca0;
        default: break;
    }

    ctx->pc = 0x22daf8u;

    // 0x22daf8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x22daf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x22dafc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x22dafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x22db00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22db00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db04: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x22db04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x22db08: 0x8f84a024  lw          $a0, -0x5FDC($gp)
    ctx->pc = 0x22db08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942756)));
    // 0x22db0c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22db0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db10: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x22db10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x22db14: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x22db14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x22db18: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x22db18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db1c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x22db1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x22db20: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22db20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22db24: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22db24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db28: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x22db28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x22db2c: 0xc08089c  jal         func_202270
    ctx->pc = 0x22DB2Cu;
    SET_GPR_U32(ctx, 31, 0x22DB34u);
    ctx->pc = 0x22DB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DB2Cu;
    // 0x22db30: 0x26500010  addiu       $s0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x22DB2Cu, 0x22DB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DB34u;
label_22db34:
    // 0x22db34: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x22db34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db38: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x22db38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22db3c: 0x18400056  blez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x22DB3Cu;
    {
        const bool branch_taken_0x22db3c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22db3c) {
            ctx->pc = 0x22DC98u;
            goto label_22dc98;
        }
    }
    ctx->pc = 0x22DB44u;
    // 0x22db44: 0x0  nop
    ctx->pc = 0x22db44u;
    // NOP
label_22db48:
    // 0x22db48: 0x9605000a  lhu         $a1, 0xA($s0)
    ctx->pc = 0x22db48u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x22db4c: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x22db4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x22db50: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22DB50u;
    {
        const bool branch_taken_0x22db50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB50u;
        // 0x22db54: 0x30a20100  andi        $v0, $a1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db50) {
            ctx->pc = 0x22DB74u;
            goto label_22db74;
        }
    }
    ctx->pc = 0x22DB58u;
    // 0x22db58: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x22db58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x22db5c: 0xc08b662  jal         func_22D988
    ctx->pc = 0x22DB5Cu;
    SET_GPR_U32(ctx, 31, 0x22DB64u);
    ctx->pc = 0x22DB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DB5Cu;
    // 0x22db60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D988u, 0x22DB5Cu, 0x22DB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DB64u;
label_22db64:
    // 0x22db64: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x22db64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x22db68: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x22db68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x22db6c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x22DB6Cu;
    {
        const bool branch_taken_0x22db6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB6Cu;
        // 0x22db70: 0x918821  addu        $s1, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db6c) {
            ctx->pc = 0x22DC84u;
            goto label_22dc84;
        }
    }
    ctx->pc = 0x22DB74u;
label_22db74:
    // 0x22db74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22DB74u;
    {
        const bool branch_taken_0x22db74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB74u;
        // 0x22db78: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db74) {
            ctx->pc = 0x22DB8Cu;
            goto label_22db8c;
        }
    }
    ctx->pc = 0x22DB7Cu;
    // 0x22db7c: 0xc08089c  jal         func_202270
    ctx->pc = 0x22DB7Cu;
    SET_GPR_U32(ctx, 31, 0x22DB84u);
    ctx->pc = 0x22DB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DB7Cu;
    // 0x22db80: 0x8f84a028  lw          $a0, -0x5FD8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x22DB7Cu, 0x22DB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DB84u;
label_22db84:
    // 0x22db84: 0x9605000a  lhu         $a1, 0xA($s0)
    ctx->pc = 0x22db84u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x22db88: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x22db88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_22db8c:
    // 0x22db8c: 0x86420004  lh          $v0, 0x4($s2)
    ctx->pc = 0x22db8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x22db90: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x22db90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22db94: 0x246699f0  addiu       $a2, $v1, -0x6610
    ctx->pc = 0x22db94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941168));
    // 0x22db98: 0x8cc30058  lw          $v1, 0x58($a2)
    ctx->pc = 0x22db98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x22db9c: 0x30a50020  andi        $a1, $a1, 0x20
    ctx->pc = 0x22db9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
    // 0x22dba0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22dba4: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x22dba4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x22dba8: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x22DBA8u;
    {
        const bool branch_taken_0x22dba8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DBA8u;
        // 0x22dbac: 0xa7a20000  sh          $v0, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dba8) {
            ctx->pc = 0x22DBC8u;
            goto label_22dbc8;
        }
    }
    ctx->pc = 0x22DBB0u;
    // 0x22dbb0: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x22dbb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x22dbb4: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x22dbb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x22dbb8: 0x8cc4005c  lw          $a0, 0x5C($a2)
    ctx->pc = 0x22dbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
    // 0x22dbbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22dbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22dbc0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x22DBC0u;
    {
        const bool branch_taken_0x22dbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DBC0u;
        // 0x22dbc4: 0x821007  srav        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dbc0) {
            ctx->pc = 0x22DC10u;
            goto label_22dc10;
        }
    }
    ctx->pc = 0x22DBC8u;
label_22dbc8:
    // 0x22dbc8: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x22dbc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x22dbcc: 0x97a40002  lhu         $a0, 0x2($sp)
    ctx->pc = 0x22dbccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x22dbd0: 0x8cc5005c  lw          $a1, 0x5C($a2)
    ctx->pc = 0x22dbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
    // 0x22dbd4: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x22dbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x22dbd8: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x22dbd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x22dbdc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x22dbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x22dbe0: 0xa32807  srav        $a1, $v1, $a1
    ctx->pc = 0x22dbe0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x22dbe4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22dbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22dbe8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22DBE8u;
    {
        const bool branch_taken_0x22dbe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DBE8u;
        // 0x22dbec: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dbe8) {
            ctx->pc = 0x22DC00u;
            goto label_22dc00;
        }
    }
    ctx->pc = 0x22DBF0u;
    // 0x22dbf0: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x22dbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x22dbf4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x22dbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x22dbf8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22DBF8u;
    {
        const bool branch_taken_0x22dbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DBF8u;
        // 0x22dbfc: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dbf8) {
            ctx->pc = 0x22DC08u;
            goto label_22dc08;
        }
    }
    ctx->pc = 0x22DC00u;
label_22dc00:
    // 0x22dc00: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x22dc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x22dc04: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x22dc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_22dc08:
    // 0x22dc08: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x22dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22dc0c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x22dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_22dc10:
    // 0x22dc10: 0xa7a20002  sh          $v0, 0x2($sp)
    ctx->pc = 0x22dc10u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x22dc14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22dc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dc18: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x22dc18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dc1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22dc1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dc20: 0xc08b5f0  jal         func_22D7C0
    ctx->pc = 0x22DC20u;
    SET_GPR_U32(ctx, 31, 0x22DC28u);
    ctx->pc = 0x22DC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DC20u;
    // 0x22dc24: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7C0u, 0x22DC20u, 0x22DC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DC28u;
label_22dc28:
    // 0x22dc28: 0x9605000a  lhu         $a1, 0xA($s0)
    ctx->pc = 0x22dc28u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x22dc2c: 0x30a20008  andi        $v0, $a1, 0x8
    ctx->pc = 0x22dc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x22dc30: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22DC30u;
    {
        const bool branch_taken_0x22dc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC30u;
        // 0x22dc34: 0x97a20002  lhu         $v0, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dc30) {
            ctx->pc = 0x22DC70u;
            goto label_22dc70;
        }
    }
    ctx->pc = 0x22DC38u;
    // 0x22dc38: 0x93839ab5  lbu         $v1, -0x654B($gp)
    ctx->pc = 0x22dc38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x22dc3c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x22dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x22dc40: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x22dc40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x22dc44: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22DC44u;
    {
        const bool branch_taken_0x22dc44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC44u;
        // 0x22dc48: 0x22403  sra         $a0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dc44) {
            ctx->pc = 0x22DC60u;
            goto label_22dc60;
        }
    }
    ctx->pc = 0x22DC4Cu;
    // 0x22dc4c: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x22dc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x22dc50: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x22dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x22dc54: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x22dc54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x22dc58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22DC58u;
    {
        const bool branch_taken_0x22dc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC58u;
        // 0x22dc5c: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dc58) {
            ctx->pc = 0x22DC6Cu;
            goto label_22dc6c;
        }
    }
    ctx->pc = 0x22DC60u;
label_22dc60:
    // 0x22dc60: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x22dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x22dc64: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x22dc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x22dc68: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x22dc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_22dc6c:
    // 0x22dc6c: 0xa7a20002  sh          $v0, 0x2($sp)
    ctx->pc = 0x22dc6cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
label_22dc70:
    // 0x22dc70: 0x30a20100  andi        $v0, $a1, 0x100
    ctx->pc = 0x22dc70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x22dc74: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x22DC74u;
    {
        const bool branch_taken_0x22dc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dc74) {
            ctx->pc = 0x22DC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DC74u;
            // 0x22dc78: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DC88u;
            goto label_22dc88;
        }
    }
    ctx->pc = 0x22DC7Cu;
    // 0x22dc7c: 0xc08089c  jal         func_202270
    ctx->pc = 0x22DC7Cu;
    SET_GPR_U32(ctx, 31, 0x22DC84u);
    ctx->pc = 0x22DC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DC7Cu;
    // 0x22dc80: 0x8f84a024  lw          $a0, -0x5FDC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942756)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x22DC7Cu, 0x22DC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DC84u;
label_22dc84:
    // 0x22dc84: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x22dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22dc88:
    // 0x22dc88: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x22dc88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x22dc8c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x22dc8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22dc90: 0x1440ffad  bnez        $v0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x22DC90u;
    {
        const bool branch_taken_0x22dc90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC90u;
        // 0x22dc94: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dc90) {
            ctx->pc = 0x22DB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22db48;
        }
    }
    ctx->pc = 0x22DC98u;
label_22dc98:
    // 0x22dc98: 0xc08089c  jal         func_202270
    ctx->pc = 0x22DC98u;
    SET_GPR_U32(ctx, 31, 0x22DCA0u);
    ctx->pc = 0x22DC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DC98u;
    // 0x22dc9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x22DC98u, 0x22DCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DCA0u;
label_22dca0:
    // 0x22dca0: 0x3c03aaaa  lui         $v1, 0xAAAA
    ctx->pc = 0x22dca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43690 << 16));
    // 0x22dca4: 0x2351023  subu        $v0, $s1, $s5
    ctx->pc = 0x22dca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x22dca8: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x22dca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x22dcac: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x22dcacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22dcb0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x22dcb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22dcb4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x22dcb4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22dcb8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x22dcb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22dcbc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x22dcbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22dcc0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x22dcc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22dcc4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x22dcc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22dcc8: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x22dcc8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x22dccc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22dcccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22dcd0: 0x3e00008  jr          $ra
    ctx->pc = 0x22DCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DCD0u;
        // 0x22dcd4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DCD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DCD8u;
}

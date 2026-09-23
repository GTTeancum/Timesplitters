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

// Function: statistics_pageTick
// Address: 0x23db20 - 0x23dd64
void statistics_pageTick_0x23db20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("statistics_pageTick_0x23db20");
#endif

    switch (ctx->pc) {
        case 0x23db9cu: goto label_23db9c;
        case 0x23dba4u: goto label_23dba4;
        case 0x23dbd0u: goto label_23dbd0;
        case 0x23dbf0u: goto label_23dbf0;
        case 0x23dd24u: goto label_23dd24;
        case 0x23dd30u: goto label_23dd30;
        default: break;
    }

    ctx->pc = 0x23db20u;

    // 0x23db20: 0x8f82b73c  lw          $v0, -0x48C4($gp)
    ctx->pc = 0x23db20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948668)));
    // 0x23db24: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x23db24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x23db28: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x23db28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23db2c: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x23db2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
    // 0x23db30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23db30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23db34: 0x3c0501fc  lui         $a1, 0x1FC
    ctx->pc = 0x23db34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)508 << 16));
    // 0x23db38: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x23db38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x23db3c: 0x24a51308  addiu       $a1, $a1, 0x1308
    ctx->pc = 0x23db3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4872));
    // 0x23db40: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x23db40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x23db44: 0x24e62c18  addiu       $a2, $a3, 0x2C18
    ctx->pc = 0x23db44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 11288));
    // 0x23db48: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x23db48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x23db4c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x23db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x23db50: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x23db50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x23db54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23db54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23db58: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x23db58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x23db5c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23db5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23db60: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x23db60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x23db64: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x23db64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x23db68: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x23db68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x23db6c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x23db6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23db70: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x23db70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x23db74: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x23db74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x23db78: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x23db78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x23db7c: 0x24a54fd0  addiu       $a1, $a1, 0x4FD0
    ctx->pc = 0x23db7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20432));
    // 0x23db80: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x23db80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x23db84: 0x3c170035  lui         $s7, 0x35
    ctx->pc = 0x23db84u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)53 << 16));
    // 0x23db88: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x23db88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x23db8c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x23db8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23db90: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x23db90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23db94: 0xc08c086  jal         func_230218
    ctx->pc = 0x23DB94u;
    SET_GPR_U32(ctx, 31, 0x23DB9Cu);
    ctx->pc = 0x23DB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DB94u;
    // 0x23db98: 0x8cc404cc  lw          $a0, 0x4CC($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1228)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230218u, 0x23DB94u, 0x23DB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DB9Cu;
label_23db9c:
    // 0x23db9c: 0xc08a984  jal         func_22A610
    ctx->pc = 0x23DB9Cu;
    SET_GPR_U32(ctx, 31, 0x23DBA4u);
    ctx->pc = 0x23DBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DB9Cu;
    // 0x23dba0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A610u, 0x23DB9Cu, 0x23DBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DBA4u;
label_23dba4:
    // 0x23dba4: 0x8f8db730  lw          $t5, -0x48D0($gp)
    ctx->pc = 0x23dba4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x23dba8: 0x26e34ec8  addiu       $v1, $s7, 0x4EC8
    ctx->pc = 0x23dba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 20168));
    // 0x23dbac: 0x25a2ffff  addiu       $v0, $t5, -0x1
    ctx->pc = 0x23dbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x23dbb0: 0x19a0001b  blez        $t5, . + 4 + (0x1B << 2)
    ctx->pc = 0x23DBB0u;
    {
        const bool branch_taken_0x23dbb0 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x23DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBB0u;
        // 0x23dbb4: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dbb0) {
            ctx->pc = 0x23DC20u;
            goto label_23dc20;
        }
    }
    ctx->pc = 0x23DBB8u;
    // 0x23dbb8: 0x3c1301fc  lui         $s3, 0x1FC
    ctx->pc = 0x23dbb8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)508 << 16));
    // 0x23dbbc: 0x3c1e01fc  lui         $fp, 0x1FC
    ctx->pc = 0x23dbbcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)508 << 16));
    // 0x23dbc0: 0x3c0e01fc  lui         $t6, 0x1FC
    ctx->pc = 0x23dbc0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)508 << 16));
    // 0x23dbc4: 0x3c15003b  lui         $s5, 0x3B
    ctx->pc = 0x23dbc4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
    // 0x23dbc8: 0x3c16003b  lui         $s6, 0x3B
    ctx->pc = 0x23dbc8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
    // 0x23dbcc: 0x0  nop
    ctx->pc = 0x23dbccu;
    // NOP
label_23dbd0:
    // 0x23dbd0: 0x1288c0  sll         $s1, $s2, 3
    ctx->pc = 0x23dbd0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x23dbd4: 0x267031b0  addiu       $s0, $s3, 0x31B0
    ctx->pc = 0x23dbd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 12720));
    // 0x23dbd8: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x23dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x23dbdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23dbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dbe0: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x23dbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x23dbe4: 0x7fae0000  sq          $t6, 0x0($sp)
    ctx->pc = 0x23dbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 14));
    // 0x23dbe8: 0xc08828c  jal         func_220A30
    ctx->pc = 0x23DBE8u;
    SET_GPR_U32(ctx, 31, 0x23DBF0u);
    ctx->pc = 0x23DBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DBE8u;
    // 0x23dbec: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x23DBE8u, 0x23DBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DBF0u;
label_23dbf0:
    // 0x23dbf0: 0x24030b78  addiu       $v1, $zero, 0xB78
    ctx->pc = 0x23dbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
    // 0x23dbf4: 0x8f849dd8  lw          $a0, -0x6228($gp)
    ctx->pc = 0x23dbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x23dbf8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x23dbf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23dbfc: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x23dbfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x23dc00: 0x8f8db730  lw          $t5, -0x48D0($gp)
    ctx->pc = 0x23dc00u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x23dc04: 0x24d182a  slt         $v1, $s2, $t5
    ctx->pc = 0x23dc04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x23dc08: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x23dc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23dc0c: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x23dc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x23dc10: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x23DC10u;
    {
        const bool branch_taken_0x23dc10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC10u;
        // 0x23dc14: 0x7bae0000  lq          $t6, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc10) {
            ctx->pc = 0x23DBD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23dbd0;
        }
    }
    ctx->pc = 0x23DC18u;
    // 0x23dc18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23DC18u;
    {
        const bool branch_taken_0x23dc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC18u;
        // 0x23dc1c: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc18) {
            ctx->pc = 0x23DC38u;
            goto label_23dc38;
        }
    }
    ctx->pc = 0x23DC20u;
label_23dc20:
    // 0x23dc20: 0x3c1301fc  lui         $s3, 0x1FC
    ctx->pc = 0x23dc20u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)508 << 16));
    // 0x23dc24: 0x3c1e01fc  lui         $fp, 0x1FC
    ctx->pc = 0x23dc24u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)508 << 16));
    // 0x23dc28: 0x3c0e01fc  lui         $t6, 0x1FC
    ctx->pc = 0x23dc28u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)508 << 16));
    // 0x23dc2c: 0x3c15003b  lui         $s5, 0x3B
    ctx->pc = 0x23dc2cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
    // 0x23dc30: 0x3c16003b  lui         $s6, 0x3B
    ctx->pc = 0x23dc30u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
    // 0x23dc34: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
label_23dc38:
    // 0x23dc38: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x23dc38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x23dc3c: 0x24652c18  addiu       $a1, $v1, 0x2C18
    ctx->pc = 0x23dc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x23dc40: 0x266631b0  addiu       $a2, $s3, 0x31B0
    ctx->pc = 0x23dc40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 12720));
    // 0x23dc44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23dc44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23dc48: 0x1220c0  sll         $a0, $s2, 3
    ctx->pc = 0x23dc48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x23dc4c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23dc50: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x23dc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x23dc54: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x23dc54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23dc58: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x23dc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x23dc5c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x23dc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x23dc60: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x23dc64: 0x8c474ec8  lw          $a3, 0x4EC8($v0)
    ctx->pc = 0x23dc64u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x354EC8u));
    // 0x23dc68: 0x27c331d8  addiu       $v1, $fp, 0x31D8
    ctx->pc = 0x23dc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 12760));
    // 0x23dc6c: 0x8ca204d0  lw          $v0, 0x4D0($a1)
    ctx->pc = 0x23dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1232)));
    // 0x23dc70: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x23dc70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23dc74: 0xed382a  slt         $a3, $a3, $t5
    ctx->pc = 0x23dc74u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x23dc78: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x23dc78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x23dc7c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x23dc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x23dc80: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x23dc80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23dc84: 0xafc031d8  sw          $zero, 0x31D8($fp)
    ctx->pc = 0x23dc84u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12760), GPR_U32(ctx, 0));
    // 0x23dc88: 0x25c43200  addiu       $a0, $t6, 0x3200
    ctx->pc = 0x23dc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 12800));
    // 0x23dc8c: 0x8ca204d4  lw          $v0, 0x4D4($a1)
    ctx->pc = 0x23dc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1236)));
    // 0x23dc90: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x23dc90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23dc94: 0xac660018  sw          $a2, 0x18($v1)
    ctx->pc = 0x23dc94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 6));
    // 0x23dc98: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x23dc98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23dc9c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x23dc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x23dca0: 0x26abe880  addiu       $t3, $s5, -0x1780
    ctx->pc = 0x23dca0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
    // 0x23dca4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23dca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x23dca8: 0xac680020  sw          $t0, 0x20($v1)
    ctx->pc = 0x23dca8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 8));
    // 0x23dcac: 0x244d4ec8  addiu       $t5, $v0, 0x4EC8
    ctx->pc = 0x23dcacu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 20168));
    // 0x23dcb0: 0xadc03200  sw          $zero, 0x3200($t6)
    ctx->pc = 0x23dcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12800), GPR_U32(ctx, 0));
    // 0x23dcb4: 0x8ca204d8  lw          $v0, 0x4D8($a1)
    ctx->pc = 0x23dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1240)));
    // 0x23dcb8: 0x26cce888  addiu       $t4, $s6, -0x1778
    ctx->pc = 0x23dcb8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961288));
    // 0x23dcbc: 0xac890008  sw          $t1, 0x8($a0)
    ctx->pc = 0x23dcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 9));
    // 0x23dcc0: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x23dcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x23dcc4: 0xac8a0010  sw          $t2, 0x10($a0)
    ctx->pc = 0x23dcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 10));
    // 0x23dcc8: 0x8ca204dc  lw          $v0, 0x4DC($a1)
    ctx->pc = 0x23dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1244)));
    // 0x23dccc: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x23dcccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x23dcd0: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x23dcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x23dcd4: 0xac8b0004  sw          $t3, 0x4($a0)
    ctx->pc = 0x23dcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 11));
    // 0x23dcd8: 0xac8c000c  sw          $t4, 0xC($a0)
    ctx->pc = 0x23dcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 12));
    // 0x23dcdc: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x23dcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x23dce0: 0xac690008  sw          $t1, 0x8($v1)
    ctx->pc = 0x23dce0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 9));
    // 0x23dce4: 0x14e00002  bnez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x23DCE4u;
    {
        const bool branch_taken_0x23dce4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCE4u;
        // 0x23dce8: 0xac6a0010  sw          $t2, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dce4) {
            ctx->pc = 0x23DCF0u;
            goto label_23dcf0;
        }
    }
    ctx->pc = 0x23DCECu;
    // 0x23dcec: 0xaee04ec8  sw          $zero, 0x4EC8($s7)
    ctx->pc = 0x23dcecu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 20168), GPR_U32(ctx, 0));
label_23dcf0:
    // 0x23dcf0: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x23dcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x23dcf4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23dcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x23dcf8: 0x24704f40  addiu       $s0, $v1, 0x4F40
    ctx->pc = 0x23dcf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 20288));
    // 0x23dcfc: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x23dcfcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
    // 0x23dd00: 0x24434f18  addiu       $v1, $v0, 0x4F18
    ctx->pc = 0x23dd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20248));
    // 0x23dd04: 0x24e64ef0  addiu       $a2, $a3, 0x4EF0
    ctx->pc = 0x23dd04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 20208));
    // 0x23dd08: 0x2402023a  addiu       $v0, $zero, 0x23A
    ctx->pc = 0x23dd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 570));
    // 0x23dd0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23dd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dd10: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x23dd10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x354F34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x354F34u, _value); } while (0);
    // 0x23dd14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23dd14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dd18: 0xada2001c  sw          $v0, 0x1C($t5)
    ctx->pc = 0x23dd18u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 28), GPR_U32(ctx, 2));
    // 0x23dd1c: 0xc08c08e  jal         func_230238
    ctx->pc = 0x23DD1Cu;
    SET_GPR_U32(ctx, 31, 0x23DD24u);
    ctx->pc = 0x23DD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DD1Cu;
    // 0x23dd20: 0xacc2001c  sw          $v0, 0x1C($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230238u, 0x23DD1Cu, 0x23DD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD24u;
label_23dd24:
    // 0x23dd24: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x23dd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x23dd28: 0xc08b6be  jal         func_22DAF8
    ctx->pc = 0x23DD28u;
    SET_GPR_U32(ctx, 31, 0x23DD30u);
    ctx->pc = 0x23DD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DD28u;
    // 0x23dd2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DAF8u, 0x23DD28u, 0x23DD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD30u;
label_23dd30:
    // 0x23dd30: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x23dd30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x23dd34: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x23dd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23dd38: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x23dd38u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23dd3c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x23dd3cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23dd40: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x23dd40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23dd44: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x23dd44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23dd48: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x23dd48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23dd4c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x23dd4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23dd50: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x23dd50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23dd54: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x23dd54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23dd58: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x23dd58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23dd5c: 0x3e00008  jr          $ra
    ctx->pc = 0x23DD5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD5Cu;
        // 0x23dd60: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DD5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23DD64u;
}

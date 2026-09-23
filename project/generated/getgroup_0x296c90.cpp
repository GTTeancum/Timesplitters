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

// Function: getgroup
// Address: 0x296c90 - 0x296e40
void getgroup_0x296c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getgroup_0x296c90");
#endif

    switch (ctx->pc) {
        case 0x296d04u: goto label_296d04;
        case 0x296d28u: goto label_296d28;
        case 0x296d30u: goto label_296d30;
        case 0x296d50u: goto label_296d50;
        case 0x296d80u: goto label_296d80;
        case 0x296e08u: goto label_296e08;
        default: break;
    }

    ctx->pc = 0x296c90u;

label_296c90:
    // 0x296c90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x296c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x296c94: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x296c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x296c98: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x296c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x296c9c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x296c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x296ca0: 0x3c170037  lui         $s7, 0x37
    ctx->pc = 0x296ca0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)55 << 16));
    // 0x296ca4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x296ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x296ca8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x296ca8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296cac: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x296cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x296cb0: 0x13a100  sll         $s4, $s3, 4
    ctx->pc = 0x296cb0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x296cb4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x296cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x296cb8: 0x26e29710  addiu       $v0, $s7, -0x68F0
    ctx->pc = 0x296cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294940432));
    // 0x296cbc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x296cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x296cc0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x296cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x296cc4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x296cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x296cc8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x296cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x296ccc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296cd0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x296cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x296cd4: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x296CD4u;
    {
        const bool branch_taken_0x296cd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x296CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296CD4u;
        // 0x296cd8: 0x3c1501ff  lui         $s5, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)511 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296cd4) {
            ctx->pc = 0x296D0Cu;
            goto label_296d0c;
        }
    }
    ctx->pc = 0x296CDCu;
    // 0x296cdc: 0x139080  sll         $s2, $s3, 2
    ctx->pc = 0x296cdcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x296ce0: 0x26a29a00  addiu       $v0, $s5, -0x6600
    ctx->pc = 0x296ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941184));
    // 0x296ce4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x296ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x296ce8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x296ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x296cec: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x296cecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x296cf0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x296CF0u;
    {
        const bool branch_taken_0x296cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x296CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296CF0u;
        // 0x296cf4: 0x8f90b960  lw          $s0, -0x46A0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296cf0) {
            ctx->pc = 0x296D14u;
            goto label_296d14;
        }
    }
    ctx->pc = 0x296CF8u;
    // 0x296cf8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x296cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296cfc: 0xc0a5afc  jal         func_296BF0
    ctx->pc = 0x296CFCu;
    SET_GPR_U32(ctx, 31, 0x296D04u);
    ctx->pc = 0x296D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296CFCu;
    // 0x296d00: 0x3c1601ff  lui         $s6, 0x1FF (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)511 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296BF0u, 0x296CFCu, 0x296D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296D04u;
label_296d04:
    // 0x296d04: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x296D04u;
    {
        const bool branch_taken_0x296d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D04u;
        // 0x296d08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296d04) {
            ctx->pc = 0x296D78u;
            goto label_296d78;
        }
    }
    ctx->pc = 0x296D0Cu;
label_296d0c:
    // 0x296d0c: 0x139080  sll         $s2, $s3, 2
    ctx->pc = 0x296d0cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x296d10: 0x8f90b960  lw          $s0, -0x46A0($gp)
    ctx->pc = 0x296d10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949216)));
label_296d14:
    // 0x296d14: 0x1600001c  bnez        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x296D14u;
    {
        const bool branch_taken_0x296d14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x296D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D14u;
        // 0x296d18: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296d14) {
            ctx->pc = 0x296D88u;
            goto label_296d88;
        }
    }
    ctx->pc = 0x296D1Cu;
    // 0x296d1c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x296d1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296d20: 0x3c1601ff  lui         $s6, 0x1FF
    ctx->pc = 0x296d20u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)511 << 16));
    // 0x296d24: 0x0  nop
    ctx->pc = 0x296d24u;
    // NOP
label_296d28:
    // 0x296d28: 0xc0a5afc  jal         func_296BF0
    ctx->pc = 0x296D28u;
    SET_GPR_U32(ctx, 31, 0x296D30u);
    ctx->pc = 0x296D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296D28u;
    // 0x296d2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296BF0u, 0x296D28u, 0x296D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296D30u;
label_296d30:
    // 0x296d30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x296d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296d34: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x296D34u;
    {
        const bool branch_taken_0x296d34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x296D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D34u;
        // 0x296d38: 0x26240001  addiu       $a0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296d34) {
            ctx->pc = 0x296D6Cu;
            goto label_296d6c;
        }
    }
    ctx->pc = 0x296D3Cu;
    // 0x296d3c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x296d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x296d40: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x296D40u;
    {
        const bool branch_taken_0x296d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D40u;
        // 0x296d44: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296d40) {
            ctx->pc = 0x296D70u;
            goto label_296d70;
        }
    }
    ctx->pc = 0x296D48u;
    // 0x296d48: 0x8e100040  lw          $s0, 0x40($s0)
    ctx->pc = 0x296d48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x296d4c: 0x0  nop
    ctx->pc = 0x296d4cu;
    // NOP
label_296d50:
    // 0x296d50: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x296D50u;
    {
        const bool branch_taken_0x296d50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x296D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D50u;
        // 0x296d54: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296d50) {
            ctx->pc = 0x296D70u;
            goto label_296d70;
        }
    }
    ctx->pc = 0x296D58u;
    // 0x296d58: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x296d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x296d5c: 0x5440fffc  bnel        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x296D5Cu;
    {
        const bool branch_taken_0x296d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296d5c) {
            ctx->pc = 0x296D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296D5Cu;
            // 0x296d60: 0x8e100040  lw          $s0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296d50;
        }
    }
    ctx->pc = 0x296D64u;
    // 0x296d64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x296D64u;
    {
        const bool branch_taken_0x296d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296d64) {
            ctx->pc = 0x296D70u;
            goto label_296d70;
        }
    }
    ctx->pc = 0x296D6Cu;
label_296d6c:
    // 0x296d6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x296d6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_296d70:
    // 0x296d70: 0x1200ffed  beqz        $s0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x296D70u;
    {
        const bool branch_taken_0x296d70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x296D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D70u;
        // 0x296d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296d70) {
            ctx->pc = 0x296D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296d28;
        }
    }
    ctx->pc = 0x296D78u;
label_296d78:
    // 0x296d78: 0xc0a5ac2  jal         func_296B08
    ctx->pc = 0x296D78u;
    SET_GPR_U32(ctx, 31, 0x296D80u);
    ctx->pc = 0x296B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296B08u, 0x296D78u, 0x296D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296D80u;
label_296d80:
    // 0x296d80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x296D80u;
    {
        const bool branch_taken_0x296d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D80u;
        // 0x296d84: 0x8f82b960  lw          $v0, -0x46A0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296d80) {
            ctx->pc = 0x296D8Cu;
            goto label_296d8c;
        }
    }
    ctx->pc = 0x296D88u;
label_296d88:
    // 0x296d88: 0x3c1601ff  lui         $s6, 0x1FF
    ctx->pc = 0x296d88u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)511 << 16));
label_296d8c:
    // 0x296d8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x296d8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296d90: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x296d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x296d94: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x296D94u;
    {
        const bool branch_taken_0x296d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D94u;
        // 0x296d98: 0xaf82b960  sw          $v0, -0x46A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296d94) {
            ctx->pc = 0x296DA0u;
            goto label_296da0;
        }
    }
    ctx->pc = 0x296D9Cu;
    // 0x296d9c: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x296d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_296da0:
    // 0x296da0: 0x26c299c0  addiu       $v0, $s6, -0x6640
    ctx->pc = 0x296da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941120));
    // 0x296da4: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x296da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x296da8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x296da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x296dac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x296DACu;
    {
        const bool branch_taken_0x296dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296DACu;
        // 0x296db0: 0xae020044  sw          $v0, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296dac) {
            ctx->pc = 0x296DB8u;
            goto label_296db8;
        }
    }
    ctx->pc = 0x296DB4u;
    // 0x296db4: 0xac500040  sw          $s0, 0x40($v0)
    ctx->pc = 0x296db4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 16));
label_296db8:
    // 0x296db8: 0x26a39a00  addiu       $v1, $s5, -0x6600
    ctx->pc = 0x296db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941184));
    // 0x296dbc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x296dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296dc0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x296dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x296dc4: 0x26e49710  addiu       $a0, $s7, -0x68F0
    ctx->pc = 0x296dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294940432));
    // 0x296dc8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x296dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x296dcc: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x296dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x296dd0: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x296dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
    // 0x296dd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x296dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x296dd8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x296dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x296ddc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x296ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x296de0: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x296de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    // 0x296de4: 0xae060038  sw          $a2, 0x38($s0)
    ctx->pc = 0x296de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    // 0x296de8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x296de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x296dec: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x296decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x296df0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x296df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x296df4: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x296df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x296df8: 0x10850004  beq         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x296DF8u;
    {
        const bool branch_taken_0x296df8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x296DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296DF8u;
        // 0x296dfc: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296df8) {
            ctx->pc = 0x296E0Cu;
            goto label_296e0c;
        }
    }
    ctx->pc = 0x296E00u;
    // 0x296e00: 0xc0a5b24  jal         func_296C90
    ctx->pc = 0x296E00u;
    SET_GPR_U32(ctx, 31, 0x296E08u);
    ctx->pc = 0x296C90u;
    goto label_296c90;
    ctx->pc = 0x296E08u;
label_296e08:
    // 0x296e08: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x296e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_296e0c:
    // 0x296e0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x296e0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296e10: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x296e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x296e14: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x296e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x296e18: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x296e18u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x296e1c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x296e1cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x296e20: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x296e20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x296e24: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x296e24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296e28: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x296e28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296e2c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x296e2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296e30: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x296e30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296e34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296e34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296e38: 0x3e00008  jr          $ra
    ctx->pc = 0x296E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E38u;
        // 0x296e3c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296E40u;
}

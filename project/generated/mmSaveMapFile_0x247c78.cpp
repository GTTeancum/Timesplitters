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

// Function: mmSaveMapFile
// Address: 0x247c78 - 0x248060
void mmSaveMapFile_0x247c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmSaveMapFile_0x247c78");
#endif

    switch (ctx->pc) {
        case 0x247cb4u: goto label_247cb4;
        case 0x247cf0u: goto label_247cf0;
        case 0x247cfcu: goto label_247cfc;
        case 0x247d18u: goto label_247d18;
        case 0x247d30u: goto label_247d30;
        case 0x247d54u: goto label_247d54;
        case 0x247d68u: goto label_247d68;
        case 0x247d78u: goto label_247d78;
        case 0x247d88u: goto label_247d88;
        case 0x247dacu: goto label_247dac;
        case 0x247dc0u: goto label_247dc0;
        case 0x247e98u: goto label_247e98;
        case 0x247efcu: goto label_247efc;
        case 0x247f48u: goto label_247f48;
        case 0x247f78u: goto label_247f78;
        case 0x247fd4u: goto label_247fd4;
        case 0x248004u: goto label_248004;
        default: break;
    }

    ctx->pc = 0x247c78u;

    // 0x247c78: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x247c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x247c7c: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x247c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x247c80: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x247c80u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247c84: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x247c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x247c88: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x247c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x247c8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x247c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247c90: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x247c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x247c94: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x247c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x247c98: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x247c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x247c9c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x247c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x247ca0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x247ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x247ca4: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x247ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x247ca8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x247ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x247cac: 0xc0922f6  jal         func_248BD8
    ctx->pc = 0x247CACu;
    SET_GPR_U32(ctx, 31, 0x247CB4u);
    ctx->pc = 0x247CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247CACu;
    // 0x247cb0: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248BD8u, 0x247CACu, 0x247CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247CB4u;
label_247cb4:
    // 0x247cb4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x247cb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247cb8: 0x8f82a0dc  lw          $v0, -0x5F24($gp)
    ctx->pc = 0x247cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942940)));
    // 0x247cbc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x247cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x247cc0: 0x8f82a128  lw          $v0, -0x5ED8($gp)
    ctx->pc = 0x247cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943016)));
    // 0x247cc4: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x247CC4u;
    {
        const bool branch_taken_0x247cc4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x247CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247CC4u;
        // 0x247cc8: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247cc4) {
            ctx->pc = 0x247CD4u;
            goto label_247cd4;
        }
    }
    ctx->pc = 0x247CCCu;
    // 0x247ccc: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x247CCCu;
    {
        const bool branch_taken_0x247ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247CCCu;
        // 0x247cd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247ccc) {
            ctx->pc = 0x248030u;
            goto label_248030;
        }
    }
    ctx->pc = 0x247CD4u;
label_247cd4:
    // 0x247cd4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x247CD4u;
    {
        const bool branch_taken_0x247cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x247cd4) {
            ctx->pc = 0x247CF4u;
            goto label_247cf4;
        }
    }
    ctx->pc = 0x247CDCu;
    // 0x247cdc: 0x8f84a0f8  lw          $a0, -0x5F08($gp)
    ctx->pc = 0x247cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
    // 0x247ce0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x247CE0u;
    {
        const bool branch_taken_0x247ce0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x247ce0) {
            ctx->pc = 0x247CF4u;
            goto label_247cf4;
        }
    }
    ctx->pc = 0x247CE8u;
    // 0x247ce8: 0xc0921e6  jal         func_248798
    ctx->pc = 0x247CE8u;
    SET_GPR_U32(ctx, 31, 0x247CF0u);
    ctx->pc = 0x248798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248798u, 0x247CE8u, 0x247CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247CF0u;
label_247cf0:
    // 0x247cf0: 0xaf80a0f8  sw          $zero, -0x5F08($gp)
    ctx->pc = 0x247cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942968), GPR_U32(ctx, 0));
label_247cf4:
    // 0x247cf4: 0xc091e80  jal         func_247A00
    ctx->pc = 0x247CF4u;
    SET_GPR_U32(ctx, 31, 0x247CFCu);
    ctx->pc = 0x247CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247CF4u;
    // 0x247cf8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247A00u, 0x247CF4u, 0x247CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247CFCu;
label_247cfc:
    // 0x247cfc: 0x3c060132  lui         $a2, 0x132
    ctx->pc = 0x247cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)306 << 16));
    // 0x247d00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x247d00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247d04: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x247d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247d08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x247d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247d0c: 0x34c64626  ori         $a2, $a2, 0x4626
    ctx->pc = 0x247d0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)17958);
    // 0x247d10: 0xc091e10  jal         func_247840
    ctx->pc = 0x247D10u;
    SET_GPR_U32(ctx, 31, 0x247D18u);
    ctx->pc = 0x247D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247D10u;
    // 0x247d14: 0x24070072  addiu       $a3, $zero, 0x72 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247840u, 0x247D10u, 0x247D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247D18u;
label_247d18:
    // 0x247d18: 0x3c060132  lui         $a2, 0x132
    ctx->pc = 0x247d18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)306 << 16));
    // 0x247d1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x247d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247d20: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x247d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247d24: 0x34c64627  ori         $a2, $a2, 0x4627
    ctx->pc = 0x247d24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)17959);
    // 0x247d28: 0xc091e10  jal         func_247840
    ctx->pc = 0x247D28u;
    SET_GPR_U32(ctx, 31, 0x247D30u);
    ctx->pc = 0x247D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247D28u;
    // 0x247d2c: 0x240700ac  addiu       $a3, $zero, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247840u, 0x247D28u, 0x247D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247D30u;
label_247d30:
    // 0x247d30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x247d30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247d34: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x247d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x247d38: 0x2f28021  addu        $s0, $s7, $s2
    ctx->pc = 0x247d38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
    // 0x247d3c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x247d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x247d40: 0x265200ac  addiu       $s2, $s2, 0xAC
    ctx->pc = 0x247d40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 172));
    // 0x247d44: 0x946267d8  lhu         $v0, 0x67D8($v1)
    ctx->pc = 0x247d44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x3567D8u));
    // 0x247d48: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x247d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x247d4c: 0xc09321c  jal         func_24C870
    ctx->pc = 0x247D4Cu;
    SET_GPR_U32(ctx, 31, 0x247D54u);
    ctx->pc = 0x247D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247D4Cu;
    // 0x247d50: 0xa6020008  sh          $v0, 0x8($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C870u, 0x247D4Cu, 0x247D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247D54u;
label_247d54:
    // 0x247d54: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x247d54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x247d58: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x247d58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x247d5c: 0x24a565e8  addiu       $a1, $a1, 0x65E8
    ctx->pc = 0x247d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26088));
    // 0x247d60: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x247D60u;
    SET_GPR_U32(ctx, 31, 0x247D68u);
    ctx->pc = 0x247D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247D60u;
    // 0x247d64: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x247D60u, 0x247D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247D68u;
label_247d68:
    // 0x247d68: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x247d68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x247d6c: 0x2604002c  addiu       $a0, $s0, 0x2C
    ctx->pc = 0x247d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x247d70: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x247D70u;
    SET_GPR_U32(ctx, 31, 0x247D78u);
    ctx->pc = 0x247D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247D70u;
    // 0x247d74: 0x24a56608  addiu       $a1, $a1, 0x6608 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x247D70u, 0x247D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247D78u;
label_247d78:
    // 0x247d78: 0x1260009d  beqz        $s3, . + 4 + (0x9D << 2)
    ctx->pc = 0x247D78u;
    {
        const bool branch_taken_0x247d78 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x247D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247D78u;
        // 0x247d7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247d78) {
            ctx->pc = 0x247FF0u;
            goto label_247ff0;
        }
    }
    ctx->pc = 0x247D80u;
    // 0x247d80: 0xc092334  jal         func_248CD0
    ctx->pc = 0x247D80u;
    SET_GPR_U32(ctx, 31, 0x247D88u);
    ctx->pc = 0x247D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247D80u;
    // 0x247d84: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248CD0u, 0x247D80u, 0x247D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247D88u;
label_247d88:
    // 0x247d88: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x247d88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x247d8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x247d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x247d90: 0x2673818  mult        $a3, $s3, $a3
    ctx->pc = 0x247d90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x247d94: 0x3c060132  lui         $a2, 0x132
    ctx->pc = 0x247d94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)306 << 16));
    // 0x247d98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x247d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247d9c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x247d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247da0: 0x34c64628  ori         $a2, $a2, 0x4628
    ctx->pc = 0x247da0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)17960);
    // 0x247da4: 0xc091e10  jal         func_247840
    ctx->pc = 0x247DA4u;
    SET_GPR_U32(ctx, 31, 0x247DACu);
    ctx->pc = 0x247DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247DA4u;
    // 0x247da8: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247840u, 0x247DA4u, 0x247DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247DACu;
label_247dac:
    // 0x247dac: 0x8f91a12c  lw          $s1, -0x5ED4($gp)
    ctx->pc = 0x247dacu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943020)));
    // 0x247db0: 0x1220008e  beqz        $s1, . + 4 + (0x8E << 2)
    ctx->pc = 0x247DB0u;
    {
        const bool branch_taken_0x247db0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x247DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247DB0u;
        // 0x247db4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247db0) {
            ctx->pc = 0x247FECu;
            goto label_247fec;
        }
    }
    ctx->pc = 0x247DB8u;
    // 0x247db8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x247db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x247dbc: 0x0  nop
    ctx->pc = 0x247dbcu;
    // NOP
label_247dc0:
    // 0x247dc0: 0x2f28021  addu        $s0, $s7, $s2
    ctx->pc = 0x247dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
    // 0x247dc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x247dc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247dc8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x247dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247dcc: 0x14460084  bne         $v0, $a2, . + 4 + (0x84 << 2)
    ctx->pc = 0x247DCCu;
    {
        const bool branch_taken_0x247dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x247DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247DCCu;
        // 0x247dd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247dcc) {
            ctx->pc = 0x247FE0u;
            goto label_247fe0;
        }
    }
    ctx->pc = 0x247DD4u;
    // 0x247dd4: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x247dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x247dd8: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x247dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x247ddc: 0x24c67940  addiu       $a2, $a2, 0x7940
    ctx->pc = 0x247ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31040));
    // 0x247de0: 0x3c034f72  lui         $v1, 0x4F72
    ctx->pc = 0x247de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20338 << 16));
    // 0x247de4: 0x861023  subu        $v0, $a0, $a2
    ctx->pc = 0x247de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x247de8: 0x3463c235  ori         $v1, $v1, 0xC235
    ctx->pc = 0x247de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49717);
    // 0x247dec: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x247decu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x247df0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x247df0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x247df4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x247df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x247df8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x247df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x247dfc: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x247dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x247e00: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x247e00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x247e04: 0x24543  sra         $t0, $v0, 21
    ctx->pc = 0x247e04u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 21));
    // 0x247e08: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x247e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x247e0c: 0x31d43  sra         $v1, $v1, 21
    ctx->pc = 0x247e0cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 21));
    // 0x247e10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x247e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247e14: 0x10c2000e  beq         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x247E14u;
    {
        const bool branch_taken_0x247e14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x247E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E14u;
        // 0x247e18: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247e14) {
            ctx->pc = 0x247E50u;
            goto label_247e50;
        }
    }
    ctx->pc = 0x247E1Cu;
    // 0x247e1c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x247e1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x247e20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x247E20u;
    {
        const bool branch_taken_0x247e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E20u;
        // 0x247e24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247e20) {
            ctx->pc = 0x247E38u;
            goto label_247e38;
        }
    }
    ctx->pc = 0x247E28u;
    // 0x247e28: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x247E28u;
    {
        const bool branch_taken_0x247e28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x247E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E28u;
        // 0x247e2c: 0x1091021  addu        $v0, $t0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247e28) {
            ctx->pc = 0x247E6Cu;
            goto label_247e6c;
        }
    }
    ctx->pc = 0x247E30u;
    // 0x247e30: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x247E30u;
    {
        const bool branch_taken_0x247e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E30u;
        // 0x247e34: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247e30) {
            ctx->pc = 0x247E74u;
            goto label_247e74;
        }
    }
    ctx->pc = 0x247E38u;
label_247e38:
    // 0x247e38: 0x10c20007  beq         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x247E38u;
    {
        const bool branch_taken_0x247e38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x247E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E38u;
        // 0x247e3c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247e38) {
            ctx->pc = 0x247E58u;
            goto label_247e58;
        }
    }
    ctx->pc = 0x247E40u;
    // 0x247e40: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x247E40u;
    {
        const bool branch_taken_0x247e40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x247E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E40u;
        // 0x247e44: 0x1091021  addu        $v0, $t0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247e40) {
            ctx->pc = 0x247E64u;
            goto label_247e64;
        }
    }
    ctx->pc = 0x247E48u;
    // 0x247e48: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x247E48u;
    {
        const bool branch_taken_0x247e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E48u;
        // 0x247e4c: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247e48) {
            ctx->pc = 0x247E74u;
            goto label_247e74;
        }
    }
    ctx->pc = 0x247E50u;
label_247e50:
    // 0x247e50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x247E50u;
    {
        const bool branch_taken_0x247e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E50u;
        // 0x247e54: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247e50) {
            ctx->pc = 0x247E6Cu;
            goto label_247e6c;
        }
    }
    ctx->pc = 0x247E58u;
label_247e58:
    // 0x247e58: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x247e58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247e5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x247E5Cu;
    {
        const bool branch_taken_0x247e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E5Cu;
        // 0x247e60: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247e5c) {
            ctx->pc = 0x247E6Cu;
            goto label_247e6c;
        }
    }
    ctx->pc = 0x247E64u;
label_247e64:
    // 0x247e64: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x247e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247e68: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x247e68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247e6c:
    // 0x247e6c: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x247e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x247e70: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x247e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_247e74:
    // 0x247e74: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x247e74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x247e78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x247e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247e7c: 0x26520024  addiu       $s2, $s2, 0x24
    ctx->pc = 0x247e7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x247e80: 0x92230014  lbu         $v1, 0x14($s1)
    ctx->pc = 0x247e80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x247e84: 0xa2050006  sb          $a1, 0x6($s0)
    ctx->pc = 0x247e84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 5));
    // 0x247e88: 0xa2030005  sb          $v1, 0x5($s0)
    ctx->pc = 0x247e88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x247e8c: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x247e8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x247e90: 0xc091e16  jal         func_247858
    ctx->pc = 0x247E90u;
    SET_GPR_U32(ctx, 31, 0x247E98u);
    ctx->pc = 0x247E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247E90u;
    // 0x247e94: 0xa2020007  sb          $v0, 0x7($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247858u, 0x247E90u, 0x247E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247E98u;
label_247e98:
    // 0x247e98: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x247e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x247e9c: 0x3c04fefe  lui         $a0, 0xFEFE
    ctx->pc = 0x247e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65278 << 16));
    // 0x247ea0: 0x3484fe00  ori         $a0, $a0, 0xFE00
    ctx->pc = 0x247ea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65024);
    // 0x247ea4: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x247ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x247ea8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x247ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x247eac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x247eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x247eb0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x247eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x247eb4: 0x246300ff  addiu       $v1, $v1, 0xFF
    ctx->pc = 0x247eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
    // 0x247eb8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x247eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x247ebc: 0x9222001c  lbu         $v0, 0x1C($s1)
    ctx->pc = 0x247ebcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x247ec0: 0xa2020010  sb          $v0, 0x10($s0)
    ctx->pc = 0x247ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x247ec4: 0x9223001d  lbu         $v1, 0x1D($s1)
    ctx->pc = 0x247ec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 29)));
    // 0x247ec8: 0xa2030011  sb          $v1, 0x11($s0)
    ctx->pc = 0x247ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x247ecc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x247eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x247ed0: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x247ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x247ed4: 0x21543  sra         $v0, $v0, 21
    ctx->pc = 0x247ed4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 21));
    // 0x247ed8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x247ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x247edc: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x247edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x247ee0: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x247ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x247ee4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x247ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x247ee8: 0x21543  sra         $v0, $v0, 21
    ctx->pc = 0x247ee8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 21));
    // 0x247eec: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x247eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x247ef0: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x247ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x247ef4: 0xc092326  jal         func_248C98
    ctx->pc = 0x247EF4u;
    SET_GPR_U32(ctx, 31, 0x247EFCu);
    ctx->pc = 0x247EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247EF4u;
    // 0x247ef8: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248C98u, 0x247EF4u, 0x247EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247EFCu;
label_247efc:
    // 0x247efc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x247efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x247f00: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x247F00u;
    {
        const bool branch_taken_0x247f00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x247F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F00u;
        // 0x247f04: 0xa602000a  sh          $v0, 0xA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247f00) {
            ctx->pc = 0x247FE0u;
            goto label_247fe0;
        }
    }
    ctx->pc = 0x247F08u;
    // 0x247f08: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x247f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x247f0c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x247f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x247f10: 0x24638ee0  addiu       $v1, $v1, -0x7120
    ctx->pc = 0x247f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938336));
    // 0x247f14: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x247f14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x247f18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x247f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x247f1c: 0x8e270018  lw          $a3, 0x18($s1)
    ctx->pc = 0x247f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x247f20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x247f24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x247f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x247f28: 0x2473000c  addiu       $s3, $v1, 0xC
    ctx->pc = 0x247f28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x247f2c: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
    ctx->pc = 0x247F2Cu;
    {
        const bool branch_taken_0x247f2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x247F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F2Cu;
        // 0x247f30: 0x8c740004  lw          $s4, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247f2c) {
            ctx->pc = 0x247FE0u;
            goto label_247fe0;
        }
    }
    ctx->pc = 0x247F34u;
    // 0x247f34: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x247f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x247f38: 0x14b02a  slt         $s6, $zero, $s4
    ctx->pc = 0x247f38u;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x247f3c: 0x245e7380  addiu       $fp, $v0, 0x7380
    ctx->pc = 0x247f3cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 29568));
    // 0x247f40: 0x2415001c  addiu       $s5, $zero, 0x1C
    ctx->pc = 0x247f40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x247f44: 0x0  nop
    ctx->pc = 0x247f44u;
    // NOP
label_247f48:
    // 0x247f48: 0x96040002  lhu         $a0, 0x2($s0)
    ctx->pc = 0x247f48u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x247f4c: 0x2f21821  addu        $v1, $s7, $s2
    ctx->pc = 0x247f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
    // 0x247f50: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x247f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x247f54: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x247f54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x247f58: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x247f58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x247f5c: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x247f5cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x247f60: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x247f60u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x247f64: 0x10a4000d  beq         $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x247F64u;
    {
        const bool branch_taken_0x247f64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x247F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F64u;
        // 0x247f68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247f64) {
            ctx->pc = 0x247F9Cu;
            goto label_247f9c;
        }
    }
    ctx->pc = 0x247F6Cu;
    // 0x247f6c: 0x12c0000c  beqz        $s6, . + 4 + (0xC << 2)
    ctx->pc = 0x247F6Cu;
    {
        const bool branch_taken_0x247f6c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x247F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F6Cu;
        // 0x247f70: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247f6c) {
            ctx->pc = 0x247FA0u;
            goto label_247fa0;
        }
    }
    ctx->pc = 0x247F74u;
    // 0x247f74: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x247f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_247f78:
    // 0x247f78: 0xd51818  mult        $v1, $a2, $s5
    ctx->pc = 0x247f78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x247f7c: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x247f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x247f80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x247f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x247f84: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x247F84u;
    {
        const bool branch_taken_0x247f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x247F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F84u;
        // 0x247f88: 0xd4102a  slt         $v0, $a2, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x247f84) {
            ctx->pc = 0x247FA0u;
            goto label_247fa0;
        }
    }
    ctx->pc = 0x247F8Cu;
    // 0x247f8c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x247F8Cu;
    {
        const bool branch_taken_0x247f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x247f8c) {
            ctx->pc = 0x247F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247F8Cu;
            // 0x247f90: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247f78;
        }
    }
    ctx->pc = 0x247F94u;
    // 0x247f94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x247F94u;
    {
        const bool branch_taken_0x247f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F94u;
        // 0x247f98: 0xd51818  mult        $v1, $a2, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x247f94) {
            ctx->pc = 0x247FA4u;
            goto label_247fa4;
        }
    }
    ctx->pc = 0x247F9Cu;
label_247f9c:
    // 0x247f9c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x247f9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_247fa0:
    // 0x247fa0: 0xd51818  mult        $v1, $a2, $s5
    ctx->pc = 0x247fa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_247fa4:
    // 0x247fa4: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x247fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x247fa8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x247fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247fac: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x247facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x247fb0: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x247fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247fb4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x247fb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x247fb8: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x247fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247fbc: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x247FBCu;
    {
        const bool branch_taken_0x247fbc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x247FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247FBCu;
        // 0x247fc0: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x247fbc) {
            ctx->pc = 0x247FD4u;
            goto label_247fd4;
        }
    }
    ctx->pc = 0x247FC4u;
    // 0x247fc4: 0x72180  sll         $a0, $a3, 6
    ctx->pc = 0x247fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x247fc8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x247fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247fcc: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x247FCCu;
    SET_GPR_U32(ctx, 31, 0x247FD4u);
    ctx->pc = 0x247FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247FCCu;
    // 0x247fd0: 0x9e2021  addu        $a0, $a0, $fp (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x247FCCu, 0x247FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247FD4u;
label_247fd4:
    // 0x247fd4: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x247fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x247fd8: 0x5600ffdb  bnel        $s0, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x247FD8u;
    {
        const bool branch_taken_0x247fd8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x247fd8) {
            ctx->pc = 0x247FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247FD8u;
            // 0x247fdc: 0x8e270018  lw          $a3, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247f48;
        }
    }
    ctx->pc = 0x247FE0u;
label_247fe0:
    // 0x247fe0: 0x8e310038  lw          $s1, 0x38($s1)
    ctx->pc = 0x247fe0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x247fe4: 0x5620ff76  bnel        $s1, $zero, . + 4 + (-0x8A << 2)
    ctx->pc = 0x247FE4u;
    {
        const bool branch_taken_0x247fe4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x247fe4) {
            ctx->pc = 0x247FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247FE4u;
            // 0x247fe8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247dc0;
        }
    }
    ctx->pc = 0x247FECu;
label_247fec:
    // 0x247fec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x247fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_247ff0:
    // 0x247ff0: 0x3c060132  lui         $a2, 0x132
    ctx->pc = 0x247ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)306 << 16));
    // 0x247ff4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x247ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247ff8: 0x34c64629  ori         $a2, $a2, 0x4629
    ctx->pc = 0x247ff8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)17961);
    // 0x247ffc: 0xc091e10  jal         func_247840
    ctx->pc = 0x247FFCu;
    SET_GPR_U32(ctx, 31, 0x248004u);
    ctx->pc = 0x248000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247FFCu;
    // 0x248000: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247840u, 0x247FFCu, 0x248004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248004u;
label_248004:
    // 0x248004: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x248004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248008: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x248008u;
    {
        const bool branch_taken_0x248008 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x24800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248008u;
        // 0x24800c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248008) {
            ctx->pc = 0x248024u;
            goto label_248024;
        }
    }
    ctx->pc = 0x248010u;
    // 0x248010: 0x8f83a0d8  lw          $v1, -0x5F28($gp)
    ctx->pc = 0x248010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x248014: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x248014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x248018: 0x3442efff  ori         $v0, $v0, 0xEFFF
    ctx->pc = 0x248018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61439);
    // 0x24801c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x24801cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x248020: 0xaf83a0d8  sw          $v1, -0x5F28($gp)
    ctx->pc = 0x248020u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 3));
label_248024:
    // 0x248024: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x248024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x248028: 0xaf82a0dc  sw          $v0, -0x5F24($gp)
    ctx->pc = 0x248028u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942940), GPR_U32(ctx, 2));
    // 0x24802c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x24802cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_248030:
    // 0x248030: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x248030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x248034: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x248034u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x248038: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x248038u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24803c: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x24803cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x248040: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x248040u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x248044: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x248044u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x248048: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x248048u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24804c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x24804cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x248050: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x248050u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x248054: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x248054u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248058: 0x3e00008  jr          $ra
    ctx->pc = 0x248058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248058u;
        // 0x24805c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248060u;
}

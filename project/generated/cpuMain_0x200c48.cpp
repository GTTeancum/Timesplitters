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

// Function: cpuMain
// Address: 0x200c48 - 0x200f0c
void cpuMain_0x200c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cpuMain_0x200c48");
#endif

    switch (ctx->pc) {
        case 0x200c88u: goto label_200c88;
        case 0x200c90u: goto label_200c90;
        case 0x200ca0u: goto label_200ca0;
        case 0x200ca8u: goto label_200ca8;
        case 0x200cb0u: goto label_200cb0;
        case 0x200cb8u: goto label_200cb8;
        case 0x200cc0u: goto label_200cc0;
        case 0x200cc8u: goto label_200cc8;
        case 0x200cd0u: goto label_200cd0;
        case 0x200ce0u: goto label_200ce0;
        case 0x200ce8u: goto label_200ce8;
        case 0x200cf0u: goto label_200cf0;
        case 0x200d10u: goto label_200d10;
        case 0x200d1cu: goto label_200d1c;
        case 0x200d24u: goto label_200d24;
        case 0x200d2cu: goto label_200d2c;
        case 0x200d34u: goto label_200d34;
        case 0x200d3cu: goto label_200d3c;
        case 0x200d44u: goto label_200d44;
        case 0x200d4cu: goto label_200d4c;
        case 0x200d54u: goto label_200d54;
        case 0x200d5cu: goto label_200d5c;
        case 0x200d64u: goto label_200d64;
        case 0x200d6cu: goto label_200d6c;
        case 0x200d98u: goto label_200d98;
        case 0x200da0u: goto label_200da0;
        case 0x200db8u: goto label_200db8;
        case 0x200e04u: goto label_200e04;
        case 0x200e40u: goto label_200e40;
        case 0x200e7cu: goto label_200e7c;
        case 0x200e90u: goto label_200e90;
        case 0x200e98u: goto label_200e98;
        case 0x200ea0u: goto label_200ea0;
        case 0x200ea8u: goto label_200ea8;
        case 0x200ebcu: goto label_200ebc;
        case 0x200ee8u: goto label_200ee8;
        case 0x200efcu: goto label_200efc;
        case 0x200f04u: goto label_200f04;
        default: break;
    }

    ctx->pc = 0x200c48u;

    // 0x200c48: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x200c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x200c4c: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x200c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x200c50: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x200c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x200c54: 0x3c1e0038  lui         $fp, 0x38
    ctx->pc = 0x200c54u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)56 << 16));
    // 0x200c58: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x200c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x200c5c: 0x27979310  addiu       $s7, $gp, -0x6CF0
    ctx->pc = 0x200c5cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939408));
    // 0x200c60: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x200c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x200c64: 0x3c160038  lui         $s6, 0x38
    ctx->pc = 0x200c64u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)56 << 16));
    // 0x200c68: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x200c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x200c6c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x200c6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200c70: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x200c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x200c74: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x200c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x200c78: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x200c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x200c7c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x200c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x200c80: 0xc0ad9ba  jal         func_2B66E8
    ctx->pc = 0x200C80u;
    SET_GPR_U32(ctx, 31, 0x200C88u);
    ctx->pc = 0x200C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200C80u;
    // 0x200c84: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B66E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B66E8u, 0x200C80u, 0x200C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200C88u;
label_200c88:
    // 0x200c88: 0x8f82935c  lw          $v0, -0x6CA4($gp)
    ctx->pc = 0x200c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939484)));
    // 0x200c8c: 0x0  nop
    ctx->pc = 0x200c8cu;
    // NOP
label_200c90:
    // 0x200c90: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x200C90u;
    {
        const bool branch_taken_0x200c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200c90) {
            ctx->pc = 0x200CD8u;
            goto label_200cd8;
        }
    }
    ctx->pc = 0x200C98u;
    // 0x200c98: 0xc0ad7fa  jal         func_2B5FE8
    ctx->pc = 0x200C98u;
    SET_GPR_U32(ctx, 31, 0x200CA0u);
    ctx->pc = 0x200C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200C98u;
    // 0x200c9c: 0xaf959358  sw          $s5, -0x6CA8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939480), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FE8u, 0x200C98u, 0x200CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200CA0u;
label_200ca0:
    // 0x200ca0: 0xc0806ea  jal         func_201BA8
    ctx->pc = 0x200CA0u;
    SET_GPR_U32(ctx, 31, 0x200CA8u);
    ctx->pc = 0x201BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201BA8u, 0x200CA0u, 0x200CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200CA8u;
label_200ca8:
    // 0x200ca8: 0xc087a32  jal         func_21E8C8
    ctx->pc = 0x200CA8u;
    SET_GPR_U32(ctx, 31, 0x200CB0u);
    ctx->pc = 0x21E8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E8C8u, 0x200CA8u, 0x200CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200CB0u;
label_200cb0:
    // 0x200cb0: 0xc089714  jal         func_225C50
    ctx->pc = 0x200CB0u;
    SET_GPR_U32(ctx, 31, 0x200CB8u);
    ctx->pc = 0x225C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225C50u, 0x200CB0u, 0x200CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200CB8u;
label_200cb8:
    // 0x200cb8: 0xc0897a6  jal         func_225E98
    ctx->pc = 0x200CB8u;
    SET_GPR_U32(ctx, 31, 0x200CC0u);
    ctx->pc = 0x225E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225E98u, 0x200CB8u, 0x200CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200CC0u;
label_200cc0:
    // 0x200cc0: 0xc08a47a  jal         func_2291E8
    ctx->pc = 0x200CC0u;
    SET_GPR_U32(ctx, 31, 0x200CC8u);
    ctx->pc = 0x2291E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2291E8u, 0x200CC0u, 0x200CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200CC8u;
label_200cc8:
    // 0x200cc8: 0xc087b7a  jal         func_21EDE8
    ctx->pc = 0x200CC8u;
    SET_GPR_U32(ctx, 31, 0x200CD0u);
    ctx->pc = 0x21EDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EDE8u, 0x200CC8u, 0x200CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200CD0u;
label_200cd0:
    // 0x200cd0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x200CD0u;
    {
        const bool branch_taken_0x200cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200cd0) {
            ctx->pc = 0x200D5Cu;
            goto label_200d5c;
        }
    }
    ctx->pc = 0x200CD8u;
label_200cd8:
    // 0x200cd8: 0xc0ad808  jal         func_2B6020
    ctx->pc = 0x200CD8u;
    SET_GPR_U32(ctx, 31, 0x200CE0u);
    ctx->pc = 0x200CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200CD8u;
    // 0x200cdc: 0xaf809358  sw          $zero, -0x6CA8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939480), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6020u, 0x200CD8u, 0x200CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200CE0u;
label_200ce0:
    // 0x200ce0: 0xc0806ec  jal         func_201BB0
    ctx->pc = 0x200CE0u;
    SET_GPR_U32(ctx, 31, 0x200CE8u);
    ctx->pc = 0x201BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201BB0u, 0x200CE0u, 0x200CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200CE8u;
label_200ce8:
    // 0x200ce8: 0xc087aa4  jal         func_21EA90
    ctx->pc = 0x200CE8u;
    SET_GPR_U32(ctx, 31, 0x200CF0u);
    ctx->pc = 0x21EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EA90u, 0x200CE8u, 0x200CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200CF0u;
label_200cf0:
    // 0x200cf0: 0x8f829368  lw          $v0, -0x6C98($gp)
    ctx->pc = 0x200cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939496)));
    // 0x200cf4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x200CF4u;
    {
        const bool branch_taken_0x200cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CF4u;
        // 0x200cf8: 0x8f839f70  lw          $v1, -0x6090($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200cf4) {
            ctx->pc = 0x200D14u;
            goto label_200d14;
        }
    }
    ctx->pc = 0x200CFCu;
    // 0x200cfc: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x200cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x200d00: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x200D00u;
    {
        const bool branch_taken_0x200d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x200d00) {
            ctx->pc = 0x200D14u;
            goto label_200d14;
        }
    }
    ctx->pc = 0x200D08u;
    // 0x200d08: 0xc085a10  jal         func_216840
    ctx->pc = 0x200D08u;
    SET_GPR_U32(ctx, 31, 0x200D10u);
    ctx->pc = 0x216840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216840u, 0x200D08u, 0x200D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D10u;
label_200d10:
    // 0x200d10: 0xaf809368  sw          $zero, -0x6C98($gp)
    ctx->pc = 0x200d10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939496), GPR_U32(ctx, 0));
label_200d14:
    // 0x200d14: 0xc089736  jal         func_225CD8
    ctx->pc = 0x200D14u;
    SET_GPR_U32(ctx, 31, 0x200D1Cu);
    ctx->pc = 0x225CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225CD8u, 0x200D14u, 0x200D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D1Cu;
label_200d1c:
    // 0x200d1c: 0xc089766  jal         func_225D98
    ctx->pc = 0x200D1Cu;
    SET_GPR_U32(ctx, 31, 0x200D24u);
    ctx->pc = 0x225D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225D98u, 0x200D1Cu, 0x200D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D24u;
label_200d24:
    // 0x200d24: 0xc0871ca  jal         func_21C728
    ctx->pc = 0x200D24u;
    SET_GPR_U32(ctx, 31, 0x200D2Cu);
    ctx->pc = 0x21C728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C728u, 0x200D24u, 0x200D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D2Cu;
label_200d2c:
    // 0x200d2c: 0xc0811f2  jal         func_2047C8
    ctx->pc = 0x200D2Cu;
    SET_GPR_U32(ctx, 31, 0x200D34u);
    ctx->pc = 0x2047C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2047C8u, 0x200D2Cu, 0x200D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D34u;
label_200d34:
    // 0x200d34: 0xc09592a  jal         func_2564A8
    ctx->pc = 0x200D34u;
    SET_GPR_U32(ctx, 31, 0x200D3Cu);
    ctx->pc = 0x2564A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2564A8u, 0x200D34u, 0x200D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D3Cu;
label_200d3c:
    // 0x200d3c: 0xc087242  jal         func_21C908
    ctx->pc = 0x200D3Cu;
    SET_GPR_U32(ctx, 31, 0x200D44u);
    ctx->pc = 0x21C908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C908u, 0x200D3Cu, 0x200D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D44u;
label_200d44:
    // 0x200d44: 0xc0897da  jal         func_225F68
    ctx->pc = 0x200D44u;
    SET_GPR_U32(ctx, 31, 0x200D4Cu);
    ctx->pc = 0x200D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200D44u;
    // 0x200d48: 0xaf959358  sw          $s5, -0x6CA8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939480), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F68u, 0x200D44u, 0x200D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D4Cu;
label_200d4c:
    // 0x200d4c: 0xc08a47a  jal         func_2291E8
    ctx->pc = 0x200D4Cu;
    SET_GPR_U32(ctx, 31, 0x200D54u);
    ctx->pc = 0x2291E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2291E8u, 0x200D4Cu, 0x200D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D54u;
label_200d54:
    // 0x200d54: 0xc087b7a  jal         func_21EDE8
    ctx->pc = 0x200D54u;
    SET_GPR_U32(ctx, 31, 0x200D5Cu);
    ctx->pc = 0x21EDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EDE8u, 0x200D54u, 0x200D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D5Cu;
label_200d5c:
    // 0x200d5c: 0xc0ada18  jal         func_2B6860
    ctx->pc = 0x200D5Cu;
    SET_GPR_U32(ctx, 31, 0x200D64u);
    ctx->pc = 0x2B6860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6860u, 0x200D5Cu, 0x200D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D64u;
label_200d64:
    // 0x200d64: 0xc0ad9ba  jal         func_2B66E8
    ctx->pc = 0x200D64u;
    SET_GPR_U32(ctx, 31, 0x200D6Cu);
    ctx->pc = 0x2B66E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B66E8u, 0x200D64u, 0x200D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D6Cu;
label_200d6c:
    // 0x200d6c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x200d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x200d70: 0x8f82934c  lw          $v0, -0x6CB4($gp)
    ctx->pc = 0x200d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939468)));
    // 0x200d74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x200D74u;
    {
        const bool branch_taken_0x200d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D74u;
        // 0x200d78: 0xaf83936c  sw          $v1, -0x6C94($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939500), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200d74) {
            ctx->pc = 0x200D90u;
            goto label_200d90;
        }
    }
    ctx->pc = 0x200D7Cu;
    // 0x200d7c: 0xaf809318  sw          $zero, -0x6CE8($gp)
    ctx->pc = 0x200d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939416), GPR_U32(ctx, 0));
    // 0x200d80: 0xaf80931c  sw          $zero, -0x6CE4($gp)
    ctx->pc = 0x200d80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939420), GPR_U32(ctx, 0));
    // 0x200d84: 0xaf809350  sw          $zero, -0x6CB0($gp)
    ctx->pc = 0x200d84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939472), GPR_U32(ctx, 0));
    // 0x200d88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x200D88u;
    {
        const bool branch_taken_0x200d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D88u;
        // 0x200d8c: 0xaf8093a4  sw          $zero, -0x6C5C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200d88) {
            ctx->pc = 0x200D9Cu;
            goto label_200d9c;
        }
    }
    ctx->pc = 0x200D90u;
label_200d90:
    // 0x200d90: 0xc0b4760  jal         func_2D1D80
    ctx->pc = 0x200D90u;
    SET_GPR_U32(ctx, 31, 0x200D98u);
    ctx->pc = 0x200D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200D90u;
    // 0x200d94: 0x27c438a0  addiu       $a0, $fp, 0x38A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 14496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1D80u, 0x200D90u, 0x200D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D98u;
label_200d98:
    // 0x200d98: 0xaf8093a4  sw          $zero, -0x6C5C($gp)
    ctx->pc = 0x200d98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939556), GPR_U32(ctx, 0));
label_200d9c:
    // 0x200d9c: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x200d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_200da0:
    // 0x200da0: 0x3c100fff  lui         $s0, 0xFFF
    ctx->pc = 0x200da0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
    // 0x200da4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x200da4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200da8: 0x24522c00  addiu       $s2, $v0, 0x2C00
    ctx->pc = 0x200da8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
    // 0x200dac: 0x2413000c  addiu       $s3, $zero, 0xC
    ctx->pc = 0x200dacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x200db0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x200db0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200db4: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x200db4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
label_200db8:
    // 0x200db8: 0x8f839318  lw          $v1, -0x6CE8($gp)
    ctx->pc = 0x200db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939416)));
    // 0x200dbc: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x200dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x200dc0: 0x8f85b454  lw          $a1, -0x4BAC($gp)
    ctx->pc = 0x200dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947924)));
    // 0x200dc4: 0x26460008  addiu       $a2, $s2, 0x8
    ctx->pc = 0x200dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x200dc8: 0x731018  mult        $v0, $v1, $s3
    ctx->pc = 0x200dc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x200dcc: 0xaf809320  sw          $zero, -0x6CE0($gp)
    ctx->pc = 0x200dccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939424), GPR_U32(ctx, 0));
    // 0x200dd0: 0xaf809324  sw          $zero, -0x6CDC($gp)
    ctx->pc = 0x200dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939428), GPR_U32(ctx, 0));
    // 0x200dd4: 0xaf809328  sw          $zero, -0x6CD8($gp)
    ctx->pc = 0x200dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939432), GPR_U32(ctx, 0));
    // 0x200dd8: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x200dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x200ddc: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x200ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x200de0: 0x8f829318  lw          $v0, -0x6CE8($gp)
    ctx->pc = 0x200de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939416)));
    // 0x200de4: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x200de4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x200de8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x200de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x200dec: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x200decu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x200df0: 0x8f839318  lw          $v1, -0x6CE8($gp)
    ctx->pc = 0x200df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939416)));
    // 0x200df4: 0x731818  mult        $v1, $v1, $s3
    ctx->pc = 0x200df4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x200df8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x200df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x200dfc: 0xc08018e  jal         func_200638
    ctx->pc = 0x200DFCu;
    SET_GPR_U32(ctx, 31, 0x200E04u);
    ctx->pc = 0x200E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200DFCu;
    // 0x200e00: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200638u, 0x200DFCu, 0x200E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200E04u;
label_200e04:
    // 0x200e04: 0x8f839318  lw          $v1, -0x6CE8($gp)
    ctx->pc = 0x200e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939416)));
    // 0x200e08: 0x8f8493a0  lw          $a0, -0x6C60($gp)
    ctx->pc = 0x200e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x200e0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x200e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x200e10: 0x8f859360  lw          $a1, -0x6CA0($gp)
    ctx->pc = 0x200e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939488)));
    // 0x200e14: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x200e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x200e18: 0x902024  and         $a0, $a0, $s0
    ctx->pc = 0x200e18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    // 0x200e1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x200e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x200e20: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x200e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x200e24: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x200e24u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x200e28: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x200e28u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x200e2c: 0xa4282a  slt         $a1, $a1, $a0
    ctx->pc = 0x200e2cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x200e30: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x200E30u;
    {
        const bool branch_taken_0x200e30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x200e30) {
            ctx->pc = 0x200E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200E30u;
            // 0x200e34: 0xaf849360  sw          $a0, -0x6CA0($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294939488), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200E38u;
            goto label_200e38;
        }
    }
    ctx->pc = 0x200E38u;
label_200e38:
    // 0x200e38: 0xc0ada18  jal         func_2B6860
    ctx->pc = 0x200E38u;
    SET_GPR_U32(ctx, 31, 0x200E40u);
    ctx->pc = 0x2B6860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6860u, 0x200E38u, 0x200E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200E40u;
label_200e40:
    // 0x200e40: 0x8f83936c  lw          $v1, -0x6C94($gp)
    ctx->pc = 0x200e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939500)));
    // 0x200e44: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x200E44u;
    {
        const bool branch_taken_0x200e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x200e44) {
            ctx->pc = 0x200E5Cu;
            goto label_200e5c;
        }
    }
    ctx->pc = 0x200E4Cu;
    // 0x200e4c: 0x8f829318  lw          $v0, -0x6CE8($gp)
    ctx->pc = 0x200e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939416)));
    // 0x200e50: 0x532018  mult        $a0, $v0, $s3
    ctx->pc = 0x200e50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x200e54: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x200e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x200e58: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x200e58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_200e5c:
    // 0x200e5c: 0x8f829318  lw          $v0, -0x6CE8($gp)
    ctx->pc = 0x200e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939416)));
    // 0x200e60: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x200e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x200e64: 0xaf829318  sw          $v0, -0x6CE8($gp)
    ctx->pc = 0x200e64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939416), GPR_U32(ctx, 2));
    // 0x200e68: 0xaf919350  sw          $s1, -0x6CB0($gp)
    ctx->pc = 0x200e68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939472), GPR_U32(ctx, 17));
    // 0x200e6c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x200E6Cu;
    {
        const bool branch_taken_0x200e6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x200E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E6Cu;
        // 0x200e70: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e6c) {
            ctx->pc = 0x200E88u;
            goto label_200e88;
        }
    }
    ctx->pc = 0x200E74u;
    // 0x200e74: 0xc0b4058  jal         func_2D0160
    ctx->pc = 0x200E74u;
    SET_GPR_U32(ctx, 31, 0x200E7Cu);
    ctx->pc = 0x200E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200E74u;
    // 0x200e78: 0x8f84933c  lw          $a0, -0x6CC4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939452)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0160u, 0x200E74u, 0x200E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200E7Cu;
label_200e7c:
    // 0x200e7c: 0x8f83936c  lw          $v1, -0x6C94($gp)
    ctx->pc = 0x200e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939500)));
    // 0x200e80: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x200E80u;
    {
        const bool branch_taken_0x200e80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x200E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E80u;
        // 0x200e84: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e80) {
            ctx->pc = 0x200EA0u;
            goto label_200ea0;
        }
    }
    ctx->pc = 0x200E88u;
label_200e88:
    // 0x200e88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x200E88u;
    {
        const bool branch_taken_0x200e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E88u;
        // 0x200e8c: 0xaf83936c  sw          $v1, -0x6C94($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939500), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e88) {
            ctx->pc = 0x200EA0u;
            goto label_200ea0;
        }
    }
    ctx->pc = 0x200E90u;
label_200e90:
    // 0x200e90: 0xc0b3774  jal         func_2CDDD0
    ctx->pc = 0x200E90u;
    SET_GPR_U32(ctx, 31, 0x200E98u);
    ctx->pc = 0x2CDDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDD0u, 0x200E90u, 0x200E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200E98u;
label_200e98:
    // 0x200e98: 0xc0b4058  jal         func_2D0160
    ctx->pc = 0x200E98u;
    SET_GPR_U32(ctx, 31, 0x200EA0u);
    ctx->pc = 0x200E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200E98u;
    // 0x200e9c: 0x8f84933c  lw          $a0, -0x6CC4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939452)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0160u, 0x200E98u, 0x200EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200EA0u;
label_200ea0:
    // 0x200ea0: 0xc0b3776  jal         func_2CDDD8
    ctx->pc = 0x200EA0u;
    SET_GPR_U32(ctx, 31, 0x200EA8u);
    ctx->pc = 0x2CDDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDD8u, 0x200EA0u, 0x200EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200EA8u;
label_200ea8:
    // 0x200ea8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x200EA8u;
    {
        const bool branch_taken_0x200ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200ea8) {
            ctx->pc = 0x200E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200e90;
        }
    }
    ctx->pc = 0x200EB0u;
    // 0x200eb0: 0xaf809350  sw          $zero, -0x6CB0($gp)
    ctx->pc = 0x200eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939472), GPR_U32(ctx, 0));
    // 0x200eb4: 0xc0ad9ba  jal         func_2B66E8
    ctx->pc = 0x200EB4u;
    SET_GPR_U32(ctx, 31, 0x200EBCu);
    ctx->pc = 0x2B66E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B66E8u, 0x200EB4u, 0x200EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200EBCu;
label_200ebc:
    // 0x200ebc: 0x8f8393a4  lw          $v1, -0x6C5C($gp)
    ctx->pc = 0x200ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939556)));
    // 0x200ec0: 0x1060ffb7  beqz        $v1, . + 4 + (-0x49 << 2)
    ctx->pc = 0x200EC0u;
    {
        const bool branch_taken_0x200ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x200EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EC0u;
        // 0x200ec4: 0x3c02002f  lui         $v0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ec0) {
            ctx->pc = 0x200DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200da0;
        }
    }
    ctx->pc = 0x200EC8u;
    // 0x200ec8: 0xaf809350  sw          $zero, -0x6CB0($gp)
    ctx->pc = 0x200ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939472), GPR_U32(ctx, 0));
    // 0x200ecc: 0xae912c00  sw          $s1, 0x2C00($s4)
    ctx->pc = 0x200eccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 11264), GPR_U32(ctx, 17));
    // 0x200ed0: 0xae51000c  sw          $s1, 0xC($s2)
    ctx->pc = 0x200ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
    // 0x200ed4: 0x8f82934c  lw          $v0, -0x6CB4($gp)
    ctx->pc = 0x200ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939468)));
    // 0x200ed8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x200ED8u;
    {
        const bool branch_taken_0x200ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200ed8) {
            ctx->pc = 0x200EECu;
            goto label_200eec;
        }
    }
    ctx->pc = 0x200EE0u;
    // 0x200ee0: 0xc0b4760  jal         func_2D1D80
    ctx->pc = 0x200EE0u;
    SET_GPR_U32(ctx, 31, 0x200EE8u);
    ctx->pc = 0x200EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200EE0u;
    // 0x200ee4: 0x26c438b8  addiu       $a0, $s6, 0x38B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 14520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1D80u, 0x200EE0u, 0x200EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200EE8u;
label_200ee8:
    // 0x200ee8: 0x8f8393a4  lw          $v1, -0x6C5C($gp)
    ctx->pc = 0x200ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939556)));
label_200eec:
    // 0x200eec: 0x1060ffb2  beqz        $v1, . + 4 + (-0x4E << 2)
    ctx->pc = 0x200EECu;
    {
        const bool branch_taken_0x200eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x200eec) {
            ctx->pc = 0x200DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200db8;
        }
    }
    ctx->pc = 0x200EF4u;
    // 0x200ef4: 0xc0ad8a2  jal         func_2B6288
    ctx->pc = 0x200EF4u;
    SET_GPR_U32(ctx, 31, 0x200EFCu);
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x200EF4u, 0x200EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200EFCu;
label_200efc:
    // 0x200efc: 0xc087c0e  jal         func_21F038
    ctx->pc = 0x200EFCu;
    SET_GPR_U32(ctx, 31, 0x200F04u);
    ctx->pc = 0x21F038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F038u, 0x200EFCu, 0x200F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200F04u;
label_200f04:
    // 0x200f04: 0x1000ff62  b           . + 4 + (-0x9E << 2)
    ctx->pc = 0x200F04u;
    {
        const bool branch_taken_0x200f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F04u;
        // 0x200f08: 0x8f82935c  lw          $v0, -0x6CA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f04) {
            ctx->pc = 0x200C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200c90;
        }
    }
    ctx->pc = 0x200F0Cu;
}

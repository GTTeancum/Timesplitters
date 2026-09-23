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

// Function: drawLittleGuys
// Address: 0x235de0 - 0x2361bc
void drawLittleGuys_0x235de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("drawLittleGuys_0x235de0");
#endif

    switch (ctx->pc) {
        case 0x235e6cu: goto label_235e6c;
        case 0x235e7cu: goto label_235e7c;
        case 0x235e90u: goto label_235e90;
        case 0x235ea0u: goto label_235ea0;
        case 0x235eb0u: goto label_235eb0;
        case 0x235ef0u: goto label_235ef0;
        case 0x235f10u: goto label_235f10;
        case 0x235f24u: goto label_235f24;
        case 0x235f48u: goto label_235f48;
        case 0x235f5cu: goto label_235f5c;
        case 0x235fb8u: goto label_235fb8;
        case 0x236030u: goto label_236030;
        case 0x2360b8u: goto label_2360b8;
        case 0x236104u: goto label_236104;
        case 0x236118u: goto label_236118;
        case 0x23615cu: goto label_23615c;
        case 0x236170u: goto label_236170;
        default: break;
    }

    ctx->pc = 0x235de0u;

    // 0x235de0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x235de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x235de4: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x235de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x235de8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x235de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x235dec: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x235decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x235df0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x235df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x235df4: 0x245011f8  addiu       $s0, $v0, 0x11F8
    ctx->pc = 0x235df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4600));
    // 0x235df8: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x235df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x235dfc: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x235dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x235e00: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x235e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x235e04: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x235e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x235e08: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x235e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x235e0c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x235e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x235e10: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x235e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x235e14: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x235e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x235e18: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x235e18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FC1228u));
    // 0x235e1c: 0x106400db  beq         $v1, $a0, . + 4 + (0xDB << 2)
    ctx->pc = 0x235E1Cu;
    {
        const bool branch_taken_0x235e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x235E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E1Cu;
        // 0x235e20: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e1c) {
            ctx->pc = 0x23618Cu;
            goto label_23618c;
        }
    }
    ctx->pc = 0x235E24u;
    // 0x235e24: 0x8c433838  lw          $v1, 0x3838($v0)
    ctx->pc = 0x235e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14392)));
    // 0x235e28: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x235E28u;
    {
        const bool branch_taken_0x235e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x235E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E28u;
        // 0x235e2c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e28) {
            ctx->pc = 0x235E98u;
            goto label_235e98;
        }
    }
    ctx->pc = 0x235E30u;
    // 0x235e30: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x235e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x235e34: 0x244299f0  addiu       $v0, $v0, -0x6610
    ctx->pc = 0x235e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941168));
    // 0x235e38: 0x3c085050  lui         $t0, 0x5050
    ctx->pc = 0x235e38u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20560 << 16));
    // 0x235e3c: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x235e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x235e40: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x235e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x235e44: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x235e44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x235e48: 0x35085080  ori         $t0, $t0, 0x5080
    ctx->pc = 0x235e48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)20608);
    // 0x235e4c: 0x24b3fff6  addiu       $s3, $a1, -0xA
    ctx->pc = 0x235e4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967286));
    // 0x235e50: 0x24a7ffff  addiu       $a3, $a1, -0x1
    ctx->pc = 0x235e50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x235e54: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x235e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x235e58: 0x24c6ffef  addiu       $a2, $a2, -0x11
    ctx->pc = 0x235e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967279));
    // 0x235e5c: 0x24a5fff7  addiu       $a1, $a1, -0x9
    ctx->pc = 0x235e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967287));
    // 0x235e60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x235e60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235e64: 0xc08ba0c  jal         func_22E830
    ctx->pc = 0x235E64u;
    SET_GPR_U32(ctx, 31, 0x235E6Cu);
    ctx->pc = 0x235E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235E64u;
    // 0x235e68: 0x240a0080  addiu       $t2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E830u, 0x235E64u, 0x235E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235E6Cu;
label_235e6c:
    // 0x235e6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x235e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235e70: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x235e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235e74: 0xc08d666  jal         func_235998
    ctx->pc = 0x235E74u;
    SET_GPR_U32(ctx, 31, 0x235E7Cu);
    ctx->pc = 0x235E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235E74u;
    // 0x235e78: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235998u, 0x235E74u, 0x235E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235E7Cu;
label_235e7c:
    // 0x235e7c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x235e7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235e80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x235e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235e84: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x235e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235e88: 0xc08d6c0  jal         func_235B00
    ctx->pc = 0x235E88u;
    SET_GPR_U32(ctx, 31, 0x235E90u);
    ctx->pc = 0x235E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235E88u;
    // 0x235e8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235B00u, 0x235E88u, 0x235E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235E90u;
label_235e90:
    // 0x235e90: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x235E90u;
    {
        const bool branch_taken_0x235e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E90u;
        // 0x235e94: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e90) {
            ctx->pc = 0x236190u;
            goto label_236190;
        }
    }
    ctx->pc = 0x235E98u;
label_235e98:
    // 0x235e98: 0xc08d4ec  jal         func_2353B0
    ctx->pc = 0x235E98u;
    SET_GPR_U32(ctx, 31, 0x235EA0u);
    ctx->pc = 0x2353B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2353B0u, 0x235E98u, 0x235EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235EA0u;
label_235ea0:
    // 0x235ea0: 0x104000bb  beqz        $v0, . + 4 + (0xBB << 2)
    ctx->pc = 0x235EA0u;
    {
        const bool branch_taken_0x235ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EA0u;
        // 0x235ea4: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ea0) {
            ctx->pc = 0x236190u;
            goto label_236190;
        }
    }
    ctx->pc = 0x235EA8u;
    // 0x235ea8: 0xc08d4ec  jal         func_2353B0
    ctx->pc = 0x235EA8u;
    SET_GPR_U32(ctx, 31, 0x235EB0u);
    ctx->pc = 0x235EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235EA8u;
    // 0x235eac: 0x3c160033  lui         $s6, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)51 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2353B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2353B0u, 0x235EA8u, 0x235EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235EB0u;
label_235eb0:
    // 0x235eb0: 0x26c399f0  addiu       $v1, $s6, -0x6610
    ctx->pc = 0x235eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941168));
    // 0x235eb4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x235EB4u;
    {
        const bool branch_taken_0x235eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235eb4) {
            ctx->pc = 0x235EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235EB4u;
            // 0x235eb8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x235EBCu;
            goto label_235ebc;
        }
    }
    ctx->pc = 0x235EBCu;
label_235ebc:
    // 0x235ebc: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x235ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x235ec0: 0x27b20004  addiu       $s2, $sp, 0x4
    ctx->pc = 0x235ec0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x235ec4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x235ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x235ec8: 0x2615003c  addiu       $s5, $s0, 0x3C
    ctx->pc = 0x235ec8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x235ecc: 0x2484ffe0  addiu       $a0, $a0, -0x20
    ctx->pc = 0x235eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x235ed0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x235ed0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235ed4: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x235ed4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x235ed8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x235ed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235edc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x235edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x235ee0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x235ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x235ee4: 0xb812  mflo        $s7
    ctx->pc = 0x235ee4u;
    SET_GPR_U64(ctx, 23, ctx->lo);
    // 0x235ee8: 0x26f3fff8  addiu       $s3, $s7, -0x8
    ctx->pc = 0x235ee8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967288));
    // 0x235eec: 0x2351021  addu        $v0, $s1, $s5
    ctx->pc = 0x235eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
label_235ef0:
    // 0x235ef0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x235ef0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x235ef4: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x235EF4u;
    {
        const bool branch_taken_0x235ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x235EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EF4u;
        // 0x235ef8: 0x26300001  addiu       $s0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ef4) {
            ctx->pc = 0x235F78u;
            goto label_235f78;
        }
    }
    ctx->pc = 0x235EFCu;
    // 0x235efc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x235efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x235f00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235f04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x235f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235f08: 0xc08d666  jal         func_235998
    ctx->pc = 0x235F08u;
    SET_GPR_U32(ctx, 31, 0x235F10u);
    ctx->pc = 0x235F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235F08u;
    // 0x235f0c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235998u, 0x235F08u, 0x235F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F10u;
label_235f10:
    // 0x235f10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235f14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x235f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235f18: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x235f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x235f1c: 0xc08d6c0  jal         func_235B00
    ctx->pc = 0x235F1Cu;
    SET_GPR_U32(ctx, 31, 0x235F24u);
    ctx->pc = 0x235F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235F1Cu;
    // 0x235f20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235B00u, 0x235F1Cu, 0x235F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F24u;
label_235f24:
    // 0x235f24: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x235f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x235f28: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x235f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x235f2c: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x235f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x235f30: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x235f30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x235f34: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x235F34u;
    {
        const bool branch_taken_0x235f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235f34) {
            ctx->pc = 0x235F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235F34u;
            // 0x235f38: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235F7Cu;
            goto label_235f7c;
        }
    }
    ctx->pc = 0x235F3Cu;
    // 0x235f3c: 0x73a023  subu        $s4, $v1, $s3
    ctx->pc = 0x235f3cu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x235f40: 0xc08d4ec  jal         func_2353B0
    ctx->pc = 0x235F40u;
    SET_GPR_U32(ctx, 31, 0x235F48u);
    ctx->pc = 0x235F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235F40u;
    // 0x235f44: 0xafb10010  sw          $s1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2353B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2353B0u, 0x235F40u, 0x235F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F48u;
label_235f48:
    // 0x235f48: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x235f48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x235f4c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x235F4Cu;
    {
        const bool branch_taken_0x235f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F4Cu;
        // 0x235f50: 0x26c299f0  addiu       $v0, $s6, -0x6610 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f4c) {
            ctx->pc = 0x235F8Cu;
            goto label_235f8c;
        }
    }
    ctx->pc = 0x235F54u;
    // 0x235f54: 0xc08d4ec  jal         func_2353B0
    ctx->pc = 0x235F54u;
    SET_GPR_U32(ctx, 31, 0x235F5Cu);
    ctx->pc = 0x2353B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2353B0u, 0x235F54u, 0x235F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F5Cu;
label_235f5c:
    // 0x235f5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x235f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x235f60: 0x282001a  div         $zero, $s4, $v0
    ctx->pc = 0x235f60u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 20);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x235f64: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x235F64u;
    {
        const bool branch_taken_0x235f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235f64) {
            ctx->pc = 0x235F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235F64u;
            // 0x235f68: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x235F6Cu;
            goto label_235f6c;
        }
    }
    ctx->pc = 0x235F6Cu;
label_235f6c:
    // 0x235f6c: 0x1812  mflo        $v1
    ctx->pc = 0x235f6cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x235f70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x235F70u;
    {
        const bool branch_taken_0x235f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F70u;
        // 0x235f74: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f70) {
            ctx->pc = 0x235F88u;
            goto label_235f88;
        }
    }
    ctx->pc = 0x235F78u;
label_235f78:
    // 0x235f78: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x235f78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235f7c:
    // 0x235f7c: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x235f7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x235f80: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x235F80u;
    {
        const bool branch_taken_0x235f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F80u;
        // 0x235f84: 0x2351021  addu        $v0, $s1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f80) {
            ctx->pc = 0x235EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235ef0;
        }
    }
    ctx->pc = 0x235F88u;
label_235f88:
    // 0x235f88: 0x26c299f0  addiu       $v0, $s6, -0x6610
    ctx->pc = 0x235f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941168));
label_235f8c:
    // 0x235f8c: 0x2f4a021  addu        $s4, $s7, $s4
    ctx->pc = 0x235f8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x235f90: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x235f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x235f94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x235f94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235f98: 0xafb40014  sw          $s4, 0x14($sp)
    ctx->pc = 0x235f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 20));
    // 0x235f9c: 0x241e0005  addiu       $fp, $zero, 0x5
    ctx->pc = 0x235f9cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x235fa0: 0x2493fff6  addiu       $s3, $a0, -0xA
    ctx->pc = 0x235fa0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967286));
    // 0x235fa4: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x235fa4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x235fa8: 0x27b60004  addiu       $s6, $sp, 0x4
    ctx->pc = 0x235fa8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x235fac: 0x27b50008  addiu       $s5, $sp, 0x8
    ctx->pc = 0x235facu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x235fb0: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x235fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x235fb4: 0x0  nop
    ctx->pc = 0x235fb4u;
    // NOP
label_235fb8:
    // 0x235fb8: 0x246311f8  addiu       $v1, $v1, 0x11F8
    ctx->pc = 0x235fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4600));
    // 0x235fbc: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x235fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x235fc0: 0x9043003c  lbu         $v1, 0x3C($v0)
    ctx->pc = 0x235fc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x235fc4: 0x1060006c  beqz        $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x235FC4u;
    {
        const bool branch_taken_0x235fc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x235FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FC4u;
        // 0x235fc8: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235fc4) {
            ctx->pc = 0x236178u;
            goto label_236178;
        }
    }
    ctx->pc = 0x235FCCu;
    // 0x235fcc: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x235fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x235fd0: 0x2251826  xor         $v1, $s1, $a1
    ctx->pc = 0x235fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 5));
    // 0x235fd4: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x235fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x235fd8: 0x2e41023  subu        $v0, $s7, $a0
    ctx->pc = 0x235fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x235fdc: 0x24a599f0  addiu       $a1, $a1, -0x6610
    ctx->pc = 0x235fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941168));
    // 0x235fe0: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x235fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x235fe4: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x235fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x235fe8: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x235fe8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x235fec: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x235fecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x235ff0: 0x2483fff0  addiu       $v1, $a0, -0x10
    ctx->pc = 0x235ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x235ff4: 0x72182a  slt         $v1, $v1, $s2
    ctx->pc = 0x235ff4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x235ff8: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x235FF8u;
    {
        const bool branch_taken_0x235ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x235ff8) {
            ctx->pc = 0x235FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235FF8u;
            // 0x235ffc: 0x2492fff0  addiu       $s2, $a0, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236000u;
            goto label_236000;
        }
    }
    ctx->pc = 0x236000u;
label_236000:
    // 0x236000: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x236000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x236004: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x236004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x236008: 0x2463c380  addiu       $v1, $v1, -0x3C80
    ctx->pc = 0x236008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951808));
    // 0x23600c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23600cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236010: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x236010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x236014: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x236014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x236018: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x236018u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23601c: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x23601cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x236020: 0x26670009  addiu       $a3, $s3, 0x9
    ctx->pc = 0x236020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 9));
    // 0x236024: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x236024u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236028: 0xc08ba0c  jal         func_22E830
    ctx->pc = 0x236028u;
    SET_GPR_U32(ctx, 31, 0x236030u);
    ctx->pc = 0x23602Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236028u;
    // 0x23602c: 0x240a0080  addiu       $t2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E830u, 0x236028u, 0x236030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236030u;
label_236030:
    // 0x236030: 0x3c0501fc  lui         $a1, 0x1FC
    ctx->pc = 0x236030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)508 << 16));
    // 0x236034: 0x26840004  addiu       $a0, $s4, 0x4
    ctx->pc = 0x236034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x236038: 0x24a511f8  addiu       $a1, $a1, 0x11F8
    ctx->pc = 0x236038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4600));
    // 0x23603c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23603cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x236040: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x236040u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FC1228u));
    // 0x236044: 0x1462003f  bne         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x236044u;
    {
        const bool branch_taken_0x236044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x236048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236044u;
        // 0x236048: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236044) {
            ctx->pc = 0x236144u;
            goto label_236144;
        }
    }
    ctx->pc = 0x23604Cu;
    // 0x23604c: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x23604cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x236050: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x236050u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x236054: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x236054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236058: 0x26650002  addiu       $a1, $s3, 0x2
    ctx->pc = 0x236058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x23605c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x23605cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x236060: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x236060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x236064: 0x16030009  bne         $s0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x236064u;
    {
        const bool branch_taken_0x236064 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x236068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236064u;
        // 0x236068: 0xa3829ab5  sb          $v0, -0x654B($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236064) {
            ctx->pc = 0x23608Cu;
            goto label_23608c;
        }
    }
    ctx->pc = 0x23606Cu;
    // 0x23606c: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23606cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x236070: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x236070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x236074: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x236074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x236078: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x236078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23607c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23607cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x236080: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x236080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236084: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x236084u;
    {
        const bool branch_taken_0x236084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236084u;
        // 0x236088: 0x8c66069c  lw          $a2, 0x69C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236084) {
            ctx->pc = 0x2360A8u;
            goto label_2360a8;
        }
    }
    ctx->pc = 0x23608Cu;
label_23608c:
    // 0x23608c: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23608cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x236090: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x236090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x236094: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x236094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x236098: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x236098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23609c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23609cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2360a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2360a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2360a4: 0x8c6606a0  lw          $a2, 0x6A0($v1)
    ctx->pc = 0x2360a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1696)));
label_2360a8:
    // 0x2360a8: 0x3c074078  lui         $a3, 0x4078
    ctx->pc = 0x2360a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16504 << 16));
    // 0x2360ac: 0x24085080  addiu       $t0, $zero, 0x5080
    ctx->pc = 0x2360acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    // 0x2360b0: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x2360B0u;
    SET_GPR_U32(ctx, 31, 0x2360B8u);
    ctx->pc = 0x2360B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2360B0u;
    // 0x2360b4: 0x34e77880  ori         $a3, $a3, 0x7880 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30848);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x2360B0u, 0x2360B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2360B8u;
label_2360b8:
    // 0x2360b8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x2360b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x2360bc: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x2360bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x2360c0: 0x248499f0  addiu       $a0, $a0, -0x6610
    ctx->pc = 0x2360c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941168));
    // 0x2360c4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2360c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2360c8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2360c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3299FCu));
    // 0x2360cc: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x2360ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x2360d0: 0xa3829ab5  sb          $v0, -0x654B($gp)
    ctx->pc = 0x2360d0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 2));
    // 0x2360d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2360d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2360d8: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x2360d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x2360dc: 0x53c00001  beql        $fp, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2360DCu;
    {
        const bool branch_taken_0x2360dc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2360dc) {
            ctx->pc = 0x2360E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2360DCu;
            // 0x2360e0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2360E4u;
            goto label_2360e4;
        }
    }
    ctx->pc = 0x2360E4u;
label_2360e4:
    // 0x2360e4: 0x7e001a  div         $zero, $v1, $fp
    ctx->pc = 0x2360e4u;
    { int32_t divisor = GPR_S32(ctx, 30);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2360e8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2360e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2360ec: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2360ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2360f0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2360f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2360f4: 0x1812  mflo        $v1
    ctx->pc = 0x2360f4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2360f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2360f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2360fc: 0xc08d666  jal         func_235998
    ctx->pc = 0x2360FCu;
    SET_GPR_U32(ctx, 31, 0x236104u);
    ctx->pc = 0x236100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2360FCu;
    // 0x236100: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235998u, 0x2360FCu, 0x236104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236104u;
label_236104:
    // 0x236104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x236104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236108: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x236108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23610c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x23610cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x236110: 0xc08d6c0  jal         func_235B00
    ctx->pc = 0x236110u;
    SET_GPR_U32(ctx, 31, 0x236118u);
    ctx->pc = 0x236114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236110u;
    // 0x236114: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235B00u, 0x236110u, 0x236118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236118u;
label_236118:
    // 0x236118: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x236118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x23611c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x23611cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x236120: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x236120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x236124: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x236124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x236128: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x236128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x23612c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x23612cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x236130: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236130u;
    {
        const bool branch_taken_0x236130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236130u;
        // 0x236134: 0x2642fffc  addiu       $v0, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236130) {
            ctx->pc = 0x236148u;
            goto label_236148;
        }
    }
    ctx->pc = 0x236138u;
    // 0x236138: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x236138u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23613c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23613Cu;
    {
        const bool branch_taken_0x23613c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23613Cu;
        // 0x236140: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23613c) {
            ctx->pc = 0x236148u;
            goto label_236148;
        }
    }
    ctx->pc = 0x236144u;
label_236144:
    // 0x236144: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x236144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_236148:
    // 0x236148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23614c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23614cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236150: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x236150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236154: 0xc08d666  jal         func_235998
    ctx->pc = 0x236154u;
    SET_GPR_U32(ctx, 31, 0x23615Cu);
    ctx->pc = 0x236158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236154u;
    // 0x236158: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235998u, 0x236154u, 0x23615Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23615Cu;
label_23615c:
    // 0x23615c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23615cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236160: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x236160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236164: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x236164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236168: 0xc08d6c0  jal         func_235B00
    ctx->pc = 0x236168u;
    SET_GPR_U32(ctx, 31, 0x236170u);
    ctx->pc = 0x23616Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236168u;
    // 0x23616c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235B00u, 0x236168u, 0x236170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236170u;
label_236170:
    // 0x236170: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x236170u;
    {
        const bool branch_taken_0x236170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236170u;
        // 0x236174: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236170) {
            ctx->pc = 0x236180u;
            goto label_236180;
        }
    }
    ctx->pc = 0x236178u;
label_236178:
    // 0x236178: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x236178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x23617c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x23617cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236180:
    // 0x236180: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x236180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x236184: 0x1440ff8c  bnez        $v0, . + 4 + (-0x74 << 2)
    ctx->pc = 0x236184u;
    {
        const bool branch_taken_0x236184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236184u;
        // 0x236188: 0x3c0301fc  lui         $v1, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236184) {
            ctx->pc = 0x235FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235fb8;
        }
    }
    ctx->pc = 0x23618Cu;
label_23618c:
    // 0x23618c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x23618cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_236190:
    // 0x236190: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x236190u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x236194: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x236194u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x236198: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x236198u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23619c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x23619cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2361a0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2361a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2361a4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2361a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2361a8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2361a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2361ac: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2361acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2361b0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2361b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2361b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2361B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2361B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361B4u;
        // 0x2361b8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2361B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2361BCu;
}

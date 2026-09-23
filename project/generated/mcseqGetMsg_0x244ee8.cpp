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

// Function: mcseqGetMsg
// Address: 0x244ee8 - 0x245238
void mcseqGetMsg_0x244ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcseqGetMsg_0x244ee8");
#endif

    switch (ctx->pc) {
        case 0x244f6cu: goto label_244f6c;
        case 0x244f80u: goto label_244f80;
        case 0x244facu: goto label_244fac;
        case 0x244fd0u: goto label_244fd0;
        case 0x245064u: goto label_245064;
        case 0x2450f0u: goto label_2450f0;
        case 0x24511cu: goto label_24511c;
        case 0x245148u: goto label_245148;
        case 0x245160u: goto label_245160;
        case 0x245194u: goto label_245194;
        case 0x2451a4u: goto label_2451a4;
        case 0x2451acu: goto label_2451ac;
        case 0x2451f4u: goto label_2451f4;
        default: break;
    }

    ctx->pc = 0x244ee8u;

    // 0x244ee8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x244ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x244eec: 0x2c82000d  sltiu       $v0, $a0, 0xD
    ctx->pc = 0x244eecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x244ef0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x244ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x244ef4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x244ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x244ef8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x244ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x244efc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x244efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x244f00: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x244f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x244f04: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x244F04u;
    {
        const bool branch_taken_0x244f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F04u;
        // 0x244f08: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f04) {
            ctx->pc = 0x2451FCu;
            goto label_2451fc;
        }
    }
    ctx->pc = 0x244F0Cu;
    // 0x244f0c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x244f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x244f10: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x244f10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x244f14: 0x24422070  addiu       $v0, $v0, 0x2070
    ctx->pc = 0x244f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8304));
    // 0x244f18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x244f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x244f1c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x244f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x244f20: 0x800008  jr          $a0
    ctx->pc = 0x244F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244F28u: goto label_244f28;
            case 0x244F48u: goto label_244f48;
            case 0x244F88u: goto label_244f88;
            case 0x244FD8u: goto label_244fd8;
            case 0x244FF8u: goto label_244ff8;
            case 0x245018u: goto label_245018;
            case 0x245038u: goto label_245038;
            case 0x24506Cu: goto label_24506c;
            case 0x24508Cu: goto label_24508c;
            case 0x2450ACu: goto label_2450ac;
            case 0x2450CCu: goto label_2450cc;
            case 0x245124u: goto label_245124;
            case 0x24519Cu: goto label_24519c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244F20u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x244F28u;
label_244f28:
    // 0x244f28: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x244f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x244f2c: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x244f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x244f30: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x244f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x244f34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x244f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x244f38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x244f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x244f3c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x244f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x244f40: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x244F40u;
    {
        const bool branch_taken_0x244f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F40u;
        // 0x244f44: 0x8c8205d8  lw          $v0, 0x5D8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f40) {
            ctx->pc = 0x245218u;
            goto label_245218;
        }
    }
    ctx->pc = 0x244F48u;
label_244f48:
    // 0x244f48: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x244f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x244f4c: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x244f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x244f50: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x244f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x244f54: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x244f54u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x244f58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x244f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x244f5c: 0x26102000  addiu       $s0, $s0, 0x2000
    ctx->pc = 0x244f5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
    // 0x244f60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x244f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x244f64: 0xc090d0a  jal         func_243428
    ctx->pc = 0x244F64u;
    SET_GPR_U32(ctx, 31, 0x244F6Cu);
    ctx->pc = 0x244F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244F64u;
    // 0x244f68: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243428u, 0x244F64u, 0x244F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244F6Cu;
label_244f6c:
    // 0x244f6c: 0x8e2605e0  lw          $a2, 0x5E0($s1)
    ctx->pc = 0x244f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1504)));
    // 0x244f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244f74: 0x8e2505dc  lw          $a1, 0x5DC($s1)
    ctx->pc = 0x244f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1500)));
    // 0x244f78: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x244F78u;
    SET_GPR_U32(ctx, 31, 0x244F80u);
    ctx->pc = 0x244F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244F78u;
    // 0x244f7c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x244F78u, 0x244F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244F80u;
label_244f80:
    // 0x244f80: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x244F80u;
    {
        const bool branch_taken_0x244f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F80u;
        // 0x244f84: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f80) {
            ctx->pc = 0x24521Cu;
            goto label_24521c;
        }
    }
    ctx->pc = 0x244F88u;
label_244f88:
    // 0x244f88: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x244f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x244f8c: 0x3c11002f  lui         $s1, 0x2F
    ctx->pc = 0x244f8cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)47 << 16));
    // 0x244f90: 0x26312c18  addiu       $s1, $s1, 0x2C18
    ctx->pc = 0x244f90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 11288));
    // 0x244f94: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x244f94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x244f98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x244f98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x244f9c: 0x26102010  addiu       $s0, $s0, 0x2010
    ctx->pc = 0x244f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8208));
    // 0x244fa0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x244fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x244fa4: 0xc090d0a  jal         func_243428
    ctx->pc = 0x244FA4u;
    SET_GPR_U32(ctx, 31, 0x244FACu);
    ctx->pc = 0x244FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244FA4u;
    // 0x244fa8: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243428u, 0x244FA4u, 0x244FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244FACu;
label_244fac:
    // 0x244fac: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x244facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x244fb0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x244fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244fb4: 0x8e4505e4  lw          $a1, 0x5E4($s2)
    ctx->pc = 0x244fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1508)));
    // 0x244fb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244fbc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x244fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x244fc0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x244fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x244fc4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x244fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x244fc8: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x244FC8u;
    SET_GPR_U32(ctx, 31, 0x244FD0u);
    ctx->pc = 0x244FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244FC8u;
    // 0x244fcc: 0x8c4705e8  lw          $a3, 0x5E8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x244FC8u, 0x244FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244FD0u;
label_244fd0:
    // 0x244fd0: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x244FD0u;
    {
        const bool branch_taken_0x244fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244FD0u;
        // 0x244fd4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244fd0) {
            ctx->pc = 0x24521Cu;
            goto label_24521c;
        }
    }
    ctx->pc = 0x244FD8u;
label_244fd8:
    // 0x244fd8: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x244fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x244fdc: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x244fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x244fe0: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x244fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x244fe4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x244fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x244fe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x244fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x244fec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x244fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x244ff0: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x244FF0u;
    {
        const bool branch_taken_0x244ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244FF0u;
        // 0x244ff4: 0x8c8205ec  lw          $v0, 0x5EC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ff0) {
            ctx->pc = 0x245218u;
            goto label_245218;
        }
    }
    ctx->pc = 0x244FF8u;
label_244ff8:
    // 0x244ff8: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x244ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x244ffc: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x244ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x245000: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x245000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x245004: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x245004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x245008: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x245008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24500c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24500cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x245010: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x245010u;
    {
        const bool branch_taken_0x245010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245010u;
        // 0x245014: 0x8c8205f0  lw          $v0, 0x5F0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245010) {
            ctx->pc = 0x245218u;
            goto label_245218;
        }
    }
    ctx->pc = 0x245018u;
label_245018:
    // 0x245018: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x245018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24501c: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x24501cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x245020: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x245020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x245024: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x245024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x245028: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x245028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24502c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24502cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x245030: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x245030u;
    {
        const bool branch_taken_0x245030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245030u;
        // 0x245034: 0x8c8205f4  lw          $v0, 0x5F4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245030) {
            ctx->pc = 0x245218u;
            goto label_245218;
        }
    }
    ctx->pc = 0x245038u;
label_245038:
    // 0x245038: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x245038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24503c: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x24503cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x245040: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x245040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x245044: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x245044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x245048: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x245048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24504c: 0x2484e8b0  addiu       $a0, $a0, -0x1750
    ctx->pc = 0x24504cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961328));
    // 0x245050: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x245050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x245054: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x245054u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x245058: 0x8ce605fc  lw          $a2, 0x5FC($a3)
    ctx->pc = 0x245058u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1532)));
    // 0x24505c: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x24505Cu;
    SET_GPR_U32(ctx, 31, 0x245064u);
    ctx->pc = 0x245060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24505Cu;
    // 0x245060: 0x8ce505f8  lw          $a1, 0x5F8($a3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x24505Cu, 0x245064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245064u;
label_245064:
    // 0x245064: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x245064u;
    {
        const bool branch_taken_0x245064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245064u;
        // 0x245068: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245064) {
            ctx->pc = 0x24521Cu;
            goto label_24521c;
        }
    }
    ctx->pc = 0x24506Cu;
label_24506c:
    // 0x24506c: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x24506cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x245070: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x245070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x245074: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x245074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x245078: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x245078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24507c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24507cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x245080: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x245080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x245084: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x245084u;
    {
        const bool branch_taken_0x245084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245084u;
        // 0x245088: 0x8c820600  lw          $v0, 0x600($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245084) {
            ctx->pc = 0x245218u;
            goto label_245218;
        }
    }
    ctx->pc = 0x24508Cu;
label_24508c:
    // 0x24508c: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x24508cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x245090: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x245090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x245094: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x245094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x245098: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x245098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24509c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24509cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2450a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2450a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2450a4: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2450A4u;
    {
        const bool branch_taken_0x2450a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2450A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450A4u;
        // 0x2450a8: 0x8c820604  lw          $v0, 0x604($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2450a4) {
            ctx->pc = 0x245218u;
            goto label_245218;
        }
    }
    ctx->pc = 0x2450ACu;
label_2450ac:
    // 0x2450ac: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x2450acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2450b0: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2450b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2450b4: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x2450b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x2450b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2450b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2450bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2450bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2450c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2450c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2450c4: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2450C4u;
    {
        const bool branch_taken_0x2450c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2450C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450C4u;
        // 0x2450c8: 0x8c820608  lw          $v0, 0x608($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2450c4) {
            ctx->pc = 0x245218u;
            goto label_245218;
        }
    }
    ctx->pc = 0x2450CCu;
label_2450cc:
    // 0x2450cc: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x2450ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2450d0: 0x3c11002f  lui         $s1, 0x2F
    ctx->pc = 0x2450d0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)47 << 16));
    // 0x2450d4: 0x26312c18  addiu       $s1, $s1, 0x2C18
    ctx->pc = 0x2450d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 11288));
    // 0x2450d8: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x2450d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x2450dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2450dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2450e0: 0x26102020  addiu       $s0, $s0, 0x2020
    ctx->pc = 0x2450e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8224));
    // 0x2450e4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2450e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2450e8: 0xc090d0a  jal         func_243428
    ctx->pc = 0x2450E8u;
    SET_GPR_U32(ctx, 31, 0x2450F0u);
    ctx->pc = 0x2450ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2450E8u;
    // 0x2450ec: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243428u, 0x2450E8u, 0x2450F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2450F0u;
label_2450f0:
    // 0x2450f0: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x2450f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2450f4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2450f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2450f8: 0x8e460610  lw          $a2, 0x610($s2)
    ctx->pc = 0x2450f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1552)));
    // 0x2450fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2450fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245100: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x245100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x245104: 0x8e45060c  lw          $a1, 0x60C($s2)
    ctx->pc = 0x245104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1548)));
    // 0x245108: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x245108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x24510c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24510cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x245110: 0x8c490618  lw          $t1, 0x618($v0)
    ctx->pc = 0x245110u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1560)));
    // 0x245114: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x245114u;
    SET_GPR_U32(ctx, 31, 0x24511Cu);
    ctx->pc = 0x245118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245114u;
    // 0x245118: 0x8c480614  lw          $t0, 0x614($v0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1556)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x245114u, 0x24511Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24511Cu;
label_24511c:
    // 0x24511c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x24511Cu;
    {
        const bool branch_taken_0x24511c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24511Cu;
        // 0x245120: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24511c) {
            ctx->pc = 0x24521Cu;
            goto label_24521c;
        }
    }
    ctx->pc = 0x245124u;
label_245124:
    // 0x245124: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x245124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x245128: 0x3c11002f  lui         $s1, 0x2F
    ctx->pc = 0x245128u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)47 << 16));
    // 0x24512c: 0x26312c18  addiu       $s1, $s1, 0x2C18
    ctx->pc = 0x24512cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 11288));
    // 0x245130: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x245130u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x245134: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x245134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x245138: 0x26102030  addiu       $s0, $s0, 0x2030
    ctx->pc = 0x245138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8240));
    // 0x24513c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24513cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x245140: 0xc090d0a  jal         func_243428
    ctx->pc = 0x245140u;
    SET_GPR_U32(ctx, 31, 0x245148u);
    ctx->pc = 0x245144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245140u;
    // 0x245144: 0x8c540000  lw          $s4, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243428u, 0x245140u, 0x245148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245148u;
label_245148:
    // 0x245148: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x245148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24514c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x24514cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245150: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x245150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x245154: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x245154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x245158: 0xc0912a0  jal         func_244A80
    ctx->pc = 0x245158u;
    SET_GPR_U32(ctx, 31, 0x245160u);
    ctx->pc = 0x24515Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245158u;
    // 0x24515c: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A80u, 0x245158u, 0x245160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245160u;
label_245160:
    // 0x245160: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x245160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x245164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245168: 0x8e860620  lw          $a2, 0x620($s4)
    ctx->pc = 0x245168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1568)));
    // 0x24516c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x24516cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245170: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x245170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x245174: 0x8e480624  lw          $t0, 0x624($s2)
    ctx->pc = 0x245174u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1572)));
    // 0x245178: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x245178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x24517c: 0x8e85061c  lw          $a1, 0x61C($s4)
    ctx->pc = 0x24517cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1564)));
    // 0x245180: 0x8c6c0000  lw          $t4, 0x0($v1)
    ctx->pc = 0x245180u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x245184: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x245184u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245188: 0x8d8b062c  lw          $t3, 0x62C($t4)
    ctx->pc = 0x245188u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 1580)));
    // 0x24518c: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x24518Cu;
    SET_GPR_U32(ctx, 31, 0x245194u);
    ctx->pc = 0x245190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24518Cu;
    // 0x245190: 0x8d8a0628  lw          $t2, 0x628($t4) (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 1576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x24518Cu, 0x245194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245194u;
label_245194:
    // 0x245194: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x245194u;
    {
        const bool branch_taken_0x245194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245194u;
        // 0x245198: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245194) {
            ctx->pc = 0x24521Cu;
            goto label_24521c;
        }
    }
    ctx->pc = 0x24519Cu;
label_24519c:
    // 0x24519c: 0xc090d0a  jal         func_243428
    ctx->pc = 0x24519Cu;
    SET_GPR_U32(ctx, 31, 0x2451A4u);
    ctx->pc = 0x243428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243428u, 0x24519Cu, 0x2451A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2451A4u;
label_2451a4:
    // 0x2451a4: 0xc0912a0  jal         func_244A80
    ctx->pc = 0x2451A4u;
    SET_GPR_U32(ctx, 31, 0x2451ACu);
    ctx->pc = 0x2451A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2451A4u;
    // 0x2451a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A80u, 0x2451A4u, 0x2451ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2451ACu;
label_2451ac:
    // 0x2451ac: 0x8f859354  lw          $a1, -0x6CAC($gp)
    ctx->pc = 0x2451acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2451b0: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2451b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2451b4: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x2451b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x2451b8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2451b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2451bc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2451bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2451c0: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2451c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2451c4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2451c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2451c8: 0x24842048  addiu       $a0, $a0, 0x2048
    ctx->pc = 0x2451c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8264));
    // 0x2451cc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2451ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2451d0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2451d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2451d4: 0x8c620644  lw          $v0, 0x644($v1)
    ctx->pc = 0x2451d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1604)));
    // 0x2451d8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2451d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2451dc: 0x8c6b0640  lw          $t3, 0x640($v1)
    ctx->pc = 0x2451dcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1600)));
    // 0x2451e0: 0x8c650630  lw          $a1, 0x630($v1)
    ctx->pc = 0x2451e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1584)));
    // 0x2451e4: 0x8c660634  lw          $a2, 0x634($v1)
    ctx->pc = 0x2451e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1588)));
    // 0x2451e8: 0x8c680638  lw          $t0, 0x638($v1)
    ctx->pc = 0x2451e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1592)));
    // 0x2451ec: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x2451ECu;
    SET_GPR_U32(ctx, 31, 0x2451F4u);
    ctx->pc = 0x2451F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2451ECu;
    // 0x2451f0: 0x8c6a063c  lw          $t2, 0x63C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1596)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x2451ECu, 0x2451F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2451F4u;
label_2451f4:
    // 0x2451f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2451F4u;
    {
        const bool branch_taken_0x2451f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2451F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451F4u;
        // 0x2451f8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2451f4) {
            ctx->pc = 0x24521Cu;
            goto label_24521c;
        }
    }
    ctx->pc = 0x2451FCu;
label_2451fc:
    // 0x2451fc: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x2451fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x245200: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x245200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x245204: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x245204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x245208: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x245208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24520c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24520cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x245210: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x245210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x245214: 0x8c820648  lw          $v0, 0x648($a0)
    ctx->pc = 0x245214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1608)));
label_245218:
    // 0x245218: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x245218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_24521c:
    // 0x24521c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24521cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x245220: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x245220u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x245224: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x245224u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245228: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x245228u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24522c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24522cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245230: 0x3e00008  jr          $ra
    ctx->pc = 0x245230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245230u;
        // 0x245234: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245238u;
}

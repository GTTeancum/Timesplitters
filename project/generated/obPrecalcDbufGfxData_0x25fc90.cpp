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

// Function: obPrecalcDbufGfxData
// Address: 0x25fc90 - 0x260128
void obPrecalcDbufGfxData_0x25fc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obPrecalcDbufGfxData_0x25fc90");
#endif

    switch (ctx->pc) {
        case 0x25fcf8u: goto label_25fcf8;
        case 0x25fd18u: goto label_25fd18;
        case 0x25fd38u: goto label_25fd38;
        case 0x25fd58u: goto label_25fd58;
        case 0x25fd78u: goto label_25fd78;
        case 0x25fd98u: goto label_25fd98;
        case 0x25fdb8u: goto label_25fdb8;
        case 0x25fdd8u: goto label_25fdd8;
        case 0x25fe00u: goto label_25fe00;
        case 0x25fe38u: goto label_25fe38;
        case 0x25fea8u: goto label_25fea8;
        case 0x25febcu: goto label_25febc;
        case 0x25ff04u: goto label_25ff04;
        case 0x25ff18u: goto label_25ff18;
        case 0x25ffb0u: goto label_25ffb0;
        case 0x26000cu: goto label_26000c;
        case 0x260020u: goto label_260020;
        case 0x260068u: goto label_260068;
        case 0x26007cu: goto label_26007c;
        default: break;
    }

    ctx->pc = 0x25fc90u;

    // 0x25fc90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x25fc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x25fc94: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x25fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x25fc98: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x25fc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x25fc9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25fc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25fca0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x25fca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x25fca4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x25fca4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fca8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x25fca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x25fcac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25fcacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fcb0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x25fcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x25fcb4: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x25fcb4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x25fcb8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x25fcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x25fcbc: 0x3610fff0  ori         $s0, $s0, 0xFFF0
    ctx->pc = 0x25fcbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65520);
    // 0x25fcc0: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x25fcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x25fcc4: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x25fcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x25fcc8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x25fcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x25fccc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x25fcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x25fcd0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x25fcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x25fcd4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25fcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25fcd8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25fcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25fcdc: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x25fcdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25fce0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25fce0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25fce4: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x25fce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x25fce8: 0x902024  and         $a0, $a0, $s0
    ctx->pc = 0x25fce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    // 0x25fcec: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x25fcecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25fcf0: 0xc08070e  jal         func_201C38
    ctx->pc = 0x25FCF0u;
    SET_GPR_U32(ctx, 31, 0x25FCF8u);
    ctx->pc = 0x25FCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FCF0u;
    // 0x25fcf4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x25FCF0u, 0x25FCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FCF8u;
label_25fcf8:
    // 0x25fcf8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25fcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25fcfc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25fcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25fd00: 0xae4200fc  sw          $v0, 0xFC($s2)
    ctx->pc = 0x25fd00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 252), GPR_U32(ctx, 2));
    // 0x25fd04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25fd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25fd08: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25fd08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25fd0c: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x25fd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x25fd10: 0xc08070e  jal         func_201C38
    ctx->pc = 0x25FD10u;
    SET_GPR_U32(ctx, 31, 0x25FD18u);
    ctx->pc = 0x25FD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FD10u;
    // 0x25fd14: 0x902024  and         $a0, $a0, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x25FD10u, 0x25FD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FD18u;
label_25fd18:
    // 0x25fd18: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25fd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25fd1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25fd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25fd20: 0xae420100  sw          $v0, 0x100($s2)
    ctx->pc = 0x25fd20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 2));
    // 0x25fd24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25fd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25fd28: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25fd28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25fd2c: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x25fd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x25fd30: 0xc08070e  jal         func_201C38
    ctx->pc = 0x25FD30u;
    SET_GPR_U32(ctx, 31, 0x25FD38u);
    ctx->pc = 0x25FD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FD30u;
    // 0x25fd34: 0x902024  and         $a0, $a0, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x25FD30u, 0x25FD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FD38u;
label_25fd38:
    // 0x25fd38: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25fd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25fd3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25fd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25fd40: 0xae420104  sw          $v0, 0x104($s2)
    ctx->pc = 0x25fd40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 2));
    // 0x25fd44: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25fd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25fd48: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25fd48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25fd4c: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x25fd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x25fd50: 0xc08070e  jal         func_201C38
    ctx->pc = 0x25FD50u;
    SET_GPR_U32(ctx, 31, 0x25FD58u);
    ctx->pc = 0x25FD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FD50u;
    // 0x25fd54: 0x902024  and         $a0, $a0, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x25FD50u, 0x25FD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FD58u;
label_25fd58:
    // 0x25fd58: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25fd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25fd5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25fd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25fd60: 0xae420108  sw          $v0, 0x108($s2)
    ctx->pc = 0x25fd60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 2));
    // 0x25fd64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25fd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25fd68: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25fd68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25fd6c: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x25fd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x25fd70: 0xc08070e  jal         func_201C38
    ctx->pc = 0x25FD70u;
    SET_GPR_U32(ctx, 31, 0x25FD78u);
    ctx->pc = 0x25FD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FD70u;
    // 0x25fd74: 0x902024  and         $a0, $a0, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x25FD70u, 0x25FD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FD78u;
label_25fd78:
    // 0x25fd78: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25fd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25fd7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25fd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25fd80: 0xae42010c  sw          $v0, 0x10C($s2)
    ctx->pc = 0x25fd80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 2));
    // 0x25fd84: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25fd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25fd88: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25fd88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25fd8c: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x25fd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x25fd90: 0xc08070e  jal         func_201C38
    ctx->pc = 0x25FD90u;
    SET_GPR_U32(ctx, 31, 0x25FD98u);
    ctx->pc = 0x25FD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FD90u;
    // 0x25fd94: 0x902024  and         $a0, $a0, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x25FD90u, 0x25FD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FD98u;
label_25fd98:
    // 0x25fd98: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25fd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25fd9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25fd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25fda0: 0xae420110  sw          $v0, 0x110($s2)
    ctx->pc = 0x25fda0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 2));
    // 0x25fda4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25fda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25fda8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25fda8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25fdac: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x25fdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x25fdb0: 0xc08070e  jal         func_201C38
    ctx->pc = 0x25FDB0u;
    SET_GPR_U32(ctx, 31, 0x25FDB8u);
    ctx->pc = 0x25FDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FDB0u;
    // 0x25fdb4: 0x902024  and         $a0, $a0, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x25FDB0u, 0x25FDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FDB8u;
label_25fdb8:
    // 0x25fdb8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25fdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25fdbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25fdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25fdc0: 0xae420114  sw          $v0, 0x114($s2)
    ctx->pc = 0x25fdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 2));
    // 0x25fdc4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25fdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25fdc8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25fdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25fdcc: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x25fdccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x25fdd0: 0xc08070e  jal         func_201C38
    ctx->pc = 0x25FDD0u;
    SET_GPR_U32(ctx, 31, 0x25FDD8u);
    ctx->pc = 0x25FDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FDD0u;
    // 0x25fdd4: 0x902024  and         $a0, $a0, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x25FDD0u, 0x25FDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FDD8u;
label_25fdd8:
    // 0x25fdd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25fddc: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x25fddcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25fde0: 0xae43011c  sw          $v1, 0x11C($s2)
    ctx->pc = 0x25fde0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 284), GPR_U32(ctx, 3));
    // 0x25fde4: 0xae420118  sw          $v0, 0x118($s2)
    ctx->pc = 0x25fde4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 2));
    // 0x25fde8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x25fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x25fdec: 0x184000c3  blez        $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x25FDECu;
    {
        const bool branch_taken_0x25fdec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x25FDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FDECu;
        // 0x25fdf0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fdec) {
            ctx->pc = 0x2600FCu;
            goto label_2600fc;
        }
    }
    ctx->pc = 0x25FDF4u;
    // 0x25fdf4: 0x3c1effff  lui         $fp, 0xFFFF
    ctx->pc = 0x25fdf4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65535 << 16));
    // 0x25fdf8: 0x37defff0  ori         $fp, $fp, 0xFFF0
    ctx->pc = 0x25fdf8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)65520);
    // 0x25fdfc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_25fe00:
    // 0x25fe00: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x25fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x25fe04: 0x600013  mtlo        $v1
    ctx->pc = 0x25fe04u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x25fe08: 0x72829800  madd        $s3, $s4, $v0
    ctx->pc = 0x25fe08u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x25fe0c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x25fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x25fe10: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x25FE10u;
    {
        const bool branch_taken_0x25fe10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE10u;
        // 0x25fe14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe10) {
            ctx->pc = 0x25FF50u;
            goto label_25ff50;
        }
    }
    ctx->pc = 0x25FE18u;
    // 0x25fe18: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x25fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x25fe1c: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25FE1Cu;
    {
        const bool branch_taken_0x25fe1c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25FE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE1Cu;
        // 0x25fe20: 0x148880  sll         $s1, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe1c) {
            ctx->pc = 0x25FE5Cu;
            goto label_25fe5c;
        }
    }
    ctx->pc = 0x25FE24u;
    // 0x25fe24: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x25fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x25fe28: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x25FE28u;
    {
        const bool branch_taken_0x25fe28 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25FE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE28u;
        // 0x25fe2c: 0x26970001  addiu       $s7, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe28) {
            ctx->pc = 0x25FE64u;
            goto label_25fe64;
        }
    }
    ctx->pc = 0x25FE30u;
    // 0x25fe30: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x25fe30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x25fe34: 0x0  nop
    ctx->pc = 0x25fe34u;
    // NOP
label_25fe38:
    // 0x25fe38: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x25fe38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x25fe3c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x25fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x25fe40: 0x0  nop
    ctx->pc = 0x25fe40u;
    // NOP
    // 0x25fe44: 0x0  nop
    ctx->pc = 0x25fe44u;
    // NOP
    // 0x25fe48: 0x0  nop
    ctx->pc = 0x25fe48u;
    // NOP
    // 0x25fe4c: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25FE4Cu;
    {
        const bool branch_taken_0x25fe4c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x25fe4c) {
            ctx->pc = 0x25FE38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25fe38;
        }
    }
    ctx->pc = 0x25FE54u;
    // 0x25fe54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25FE54u;
    {
        const bool branch_taken_0x25fe54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE54u;
        // 0x25fe58: 0x8c830010  lw          $v1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe54) {
            ctx->pc = 0x25FE74u;
            goto label_25fe74;
        }
    }
    ctx->pc = 0x25FE5Cu;
label_25fe5c:
    // 0x25fe5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25FE5Cu;
    {
        const bool branch_taken_0x25fe5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE5Cu;
        // 0x25fe60: 0x8e650020  lw          $a1, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe5c) {
            ctx->pc = 0x25FE6Cu;
            goto label_25fe6c;
        }
    }
    ctx->pc = 0x25FE64u;
label_25fe64:
    // 0x25fe64: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x25fe64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x25fe68: 0x148880  sll         $s1, $s4, 2
    ctx->pc = 0x25fe68u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_25fe6c:
    // 0x25fe6c: 0x26970001  addiu       $s7, $s4, 0x1
    ctx->pc = 0x25fe6cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x25fe70: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x25fe70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_25fe74:
    // 0x25fe74: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x25fe74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fe78: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x25fe78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x25fe7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25fe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25fe80: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x25fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x25fe84: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x25fe84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x25fe88: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x25fe88u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25fe8c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x25fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x25fe90: 0x2610000f  addiu       $s0, $s0, 0xF
    ctx->pc = 0x25fe90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x25fe94: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x25fe94u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25fe98: 0x21e8024  and         $s0, $s0, $fp
    ctx->pc = 0x25fe98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 30));
    // 0x25fe9c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x25fe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x25fea0: 0xc08070e  jal         func_201C38
    ctx->pc = 0x25FEA0u;
    SET_GPR_U32(ctx, 31, 0x25FEA8u);
    ctx->pc = 0x25FEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FEA0u;
    // 0x25fea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x25FEA0u, 0x25FEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FEA8u;
label_25fea8:
    // 0x25fea8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x25fea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25feac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25feacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25feb0: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x25feb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
    // 0x25feb4: 0xc097d02  jal         func_25F408
    ctx->pc = 0x25FEB4u;
    SET_GPR_U32(ctx, 31, 0x25FEBCu);
    ctx->pc = 0x25FEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FEB4u;
    // 0x25feb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F408u, 0x25FEB4u, 0x25FEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FEBCu;
label_25febc:
    // 0x25febc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x25febcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25fec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25fec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fec4: 0x8e4800fc  lw          $t0, 0xFC($s2)
    ctx->pc = 0x25fec4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 252)));
    // 0x25fec8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25fec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25fecc: 0x8c47001c  lw          $a3, 0x1C($v0)
    ctx->pc = 0x25feccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x25fed0: 0x2284021  addu        $t0, $s1, $t0
    ctx->pc = 0x25fed0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x25fed4: 0x8e43010c  lw          $v1, 0x10C($s2)
    ctx->pc = 0x25fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x25fed8: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x25fed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x25fedc: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x25fedcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x25fee0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x25fee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x25fee4: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x25fee4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x25fee8: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x25fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x25feec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x25feecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x25fef0: 0xacf50000  sw          $s5, 0x0($a3)
    ctx->pc = 0x25fef0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 21));
    // 0x25fef4: 0xae760020  sw          $s6, 0x20($s3)
    ctx->pc = 0x25fef4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 22));
    // 0x25fef8: 0x8cf50000  lw          $s5, 0x0($a3)
    ctx->pc = 0x25fef8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x25fefc: 0xc08070e  jal         func_201C38
    ctx->pc = 0x25FEFCu;
    SET_GPR_U32(ctx, 31, 0x25FF04u);
    ctx->pc = 0x25FF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FEFCu;
    // 0x25ff00: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x25FEFCu, 0x25FF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FF04u;
label_25ff04:
    // 0x25ff04: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x25ff04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25ff08: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25ff08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ff0c: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x25ff0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
    // 0x25ff10: 0xc097d02  jal         func_25F408
    ctx->pc = 0x25FF10u;
    SET_GPR_U32(ctx, 31, 0x25FF18u);
    ctx->pc = 0x25FF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FF10u;
    // 0x25ff14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F408u, 0x25FF10u, 0x25FF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FF18u;
label_25ff18:
    // 0x25ff18: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x25ff18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25ff1c: 0x8e450104  lw          $a1, 0x104($s2)
    ctx->pc = 0x25ff1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x25ff20: 0x8ce6001c  lw          $a2, 0x1C($a3)
    ctx->pc = 0x25ff20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x25ff24: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x25ff24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x25ff28: 0x8e430114  lw          $v1, 0x114($s2)
    ctx->pc = 0x25ff28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
    // 0x25ff2c: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x25ff2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x25ff30: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x25ff30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25ff34: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x25ff34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x25ff38: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x25ff38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x25ff3c: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x25ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x25ff40: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x25ff40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x25ff44: 0xacd50000  sw          $s5, 0x0($a2)
    ctx->pc = 0x25ff44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 21));
    // 0x25ff48: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x25FF48u;
    {
        const bool branch_taken_0x25ff48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF48u;
        // 0x25ff4c: 0xae760020  sw          $s6, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ff48) {
            ctx->pc = 0x25FF88u;
            goto label_25ff88;
        }
    }
    ctx->pc = 0x25FF50u;
label_25ff50:
    // 0x25ff50: 0x8e4200fc  lw          $v0, 0xFC($s2)
    ctx->pc = 0x25ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 252)));
    // 0x25ff54: 0x148880  sll         $s1, $s4, 2
    ctx->pc = 0x25ff54u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x25ff58: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x25ff58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x25ff5c: 0x26970001  addiu       $s7, $s4, 0x1
    ctx->pc = 0x25ff5cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x25ff60: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x25ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x25ff64: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x25ff64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x25ff68: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x25ff68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x25ff6c: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x25ff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x25ff70: 0x8e420114  lw          $v0, 0x114($s2)
    ctx->pc = 0x25ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
    // 0x25ff74: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x25ff74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x25ff78: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x25ff78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x25ff7c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x25ff7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x25ff80: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x25ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x25ff84: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x25ff84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_25ff88:
    // 0x25ff88: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x25ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x25ff8c: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x25FF8Cu;
    {
        const bool branch_taken_0x25ff8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF8Cu;
        // 0x25ff90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ff8c) {
            ctx->pc = 0x2600B4u;
            goto label_2600b4;
        }
    }
    ctx->pc = 0x25FF94u;
    // 0x25ff94: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x25ff94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x25ff98: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x25FF98u;
    {
        const bool branch_taken_0x25ff98 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25FF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF98u;
        // 0x25ff9c: 0x8e650038  lw          $a1, 0x38($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ff98) {
            ctx->pc = 0x25FFD4u;
            goto label_25ffd4;
        }
    }
    ctx->pc = 0x25FFA0u;
    // 0x25ffa0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x25ffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x25ffa4: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x25FFA4u;
    {
        const bool branch_taken_0x25ffa4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x25ffa4) {
            ctx->pc = 0x25FFD4u;
            goto label_25ffd4;
        }
    }
    ctx->pc = 0x25FFACu;
    // 0x25ffac: 0x0  nop
    ctx->pc = 0x25ffacu;
    // NOP
label_25ffb0:
    // 0x25ffb0: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x25ffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x25ffb4: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x25ffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x25ffb8: 0x0  nop
    ctx->pc = 0x25ffb8u;
    // NOP
    // 0x25ffbc: 0x0  nop
    ctx->pc = 0x25ffbcu;
    // NOP
    // 0x25ffc0: 0x0  nop
    ctx->pc = 0x25ffc0u;
    // NOP
    // 0x25ffc4: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25FFC4u;
    {
        const bool branch_taken_0x25ffc4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x25ffc4) {
            ctx->pc = 0x25FFB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25ffb0;
        }
    }
    ctx->pc = 0x25FFCCu;
    // 0x25ffcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25FFCCu;
    {
        const bool branch_taken_0x25ffcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FFCCu;
        // 0x25ffd0: 0x8c830010  lw          $v1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ffcc) {
            ctx->pc = 0x25FFD8u;
            goto label_25ffd8;
        }
    }
    ctx->pc = 0x25FFD4u;
label_25ffd4:
    // 0x25ffd4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x25ffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_25ffd8:
    // 0x25ffd8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x25ffd8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ffdc: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x25ffdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x25ffe0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25ffe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ffe4: 0x8ce20020  lw          $v0, 0x20($a3)
    ctx->pc = 0x25ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x25ffe8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x25ffe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x25ffec: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x25ffecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25fff0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x25fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x25fff4: 0x2610000f  addiu       $s0, $s0, 0xF
    ctx->pc = 0x25fff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x25fff8: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x25fff8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25fffc: 0x21e8024  and         $s0, $s0, $fp
    ctx->pc = 0x25fffcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 30));
    // 0x260000: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x260000u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x260004: 0xc08070e  jal         func_201C38
    ctx->pc = 0x260004u;
    SET_GPR_U32(ctx, 31, 0x26000Cu);
    ctx->pc = 0x260008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260004u;
    // 0x260008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x260004u, 0x26000Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26000Cu;
label_26000c:
    // 0x26000c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x26000cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x260010: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x260010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260014: 0xae620038  sw          $v0, 0x38($s3)
    ctx->pc = 0x260014u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
    // 0x260018: 0xc097d02  jal         func_25F408
    ctx->pc = 0x260018u;
    SET_GPR_U32(ctx, 31, 0x260020u);
    ctx->pc = 0x26001Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260018u;
    // 0x26001c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F408u, 0x260018u, 0x260020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260020u;
label_260020:
    // 0x260020: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x260020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x260024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x260024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260028: 0x8e480100  lw          $t0, 0x100($s2)
    ctx->pc = 0x260028u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x26002c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26002cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260030: 0x8c470020  lw          $a3, 0x20($v0)
    ctx->pc = 0x260030u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x260034: 0x2284021  addu        $t0, $s1, $t0
    ctx->pc = 0x260034u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x260038: 0x8e430110  lw          $v1, 0x110($s2)
    ctx->pc = 0x260038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x26003c: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x26003cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x260040: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x260040u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x260044: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x260044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x260048: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x260048u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x26004c: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x26004cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x260050: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x260050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x260054: 0xacf50000  sw          $s5, 0x0($a3)
    ctx->pc = 0x260054u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 21));
    // 0x260058: 0xae760038  sw          $s6, 0x38($s3)
    ctx->pc = 0x260058u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 22));
    // 0x26005c: 0x8cf50000  lw          $s5, 0x0($a3)
    ctx->pc = 0x26005cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x260060: 0xc08070e  jal         func_201C38
    ctx->pc = 0x260060u;
    SET_GPR_U32(ctx, 31, 0x260068u);
    ctx->pc = 0x260064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260060u;
    // 0x260064: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x260060u, 0x260068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260068u;
label_260068:
    // 0x260068: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x260068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26006c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26006cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260070: 0xae620038  sw          $v0, 0x38($s3)
    ctx->pc = 0x260070u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
    // 0x260074: 0xc097d02  jal         func_25F408
    ctx->pc = 0x260074u;
    SET_GPR_U32(ctx, 31, 0x26007Cu);
    ctx->pc = 0x260078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260074u;
    // 0x260078: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F408u, 0x260074u, 0x26007Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26007Cu;
label_26007c:
    // 0x26007c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x26007cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x260080: 0x8e450108  lw          $a1, 0x108($s2)
    ctx->pc = 0x260080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x260084: 0x8ce60020  lw          $a2, 0x20($a3)
    ctx->pc = 0x260084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x260088: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x260088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x26008c: 0x8e430118  lw          $v1, 0x118($s2)
    ctx->pc = 0x26008cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
    // 0x260090: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x260090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x260094: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x260094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x260098: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x260098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x26009c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x26009cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x2600a0: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x2600a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2600a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2600a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2600a8: 0xacd50000  sw          $s5, 0x0($a2)
    ctx->pc = 0x2600a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 21));
    // 0x2600ac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2600ACu;
    {
        const bool branch_taken_0x2600ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2600B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600ACu;
        // 0x2600b0: 0xae760038  sw          $s6, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2600ac) {
            ctx->pc = 0x2600E4u;
            goto label_2600e4;
        }
    }
    ctx->pc = 0x2600B4u;
label_2600b4:
    // 0x2600b4: 0x8e420100  lw          $v0, 0x100($s2)
    ctx->pc = 0x2600b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x2600b8: 0x8e430110  lw          $v1, 0x110($s2)
    ctx->pc = 0x2600b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x2600bc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2600bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2600c0: 0x8e440108  lw          $a0, 0x108($s2)
    ctx->pc = 0x2600c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x2600c4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2600c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2600c8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2600c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2600cc: 0x8e420118  lw          $v0, 0x118($s2)
    ctx->pc = 0x2600ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
    // 0x2600d0: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x2600d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2600d4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2600d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2600d8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2600d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2600dc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2600dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2600e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2600e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2600e4:
    // 0x2600e4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2600e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2600e8: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x2600e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2600ec: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x2600ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2600f0: 0x1440ff43  bnez        $v0, . + 4 + (-0xBD << 2)
    ctx->pc = 0x2600F0u;
    {
        const bool branch_taken_0x2600f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2600F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600F0u;
        // 0x2600f4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2600f0) {
            ctx->pc = 0x25FE00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25fe00;
        }
    }
    ctx->pc = 0x2600F8u;
    // 0x2600f8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2600f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2600fc:
    // 0x2600fc: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2600fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x260100: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x260100u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x260104: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x260104u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x260108: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x260108u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26010c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x26010cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260110: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x260110u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x260114: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x260114u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x260118: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x260118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26011c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x26011cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260120: 0x3e00008  jr          $ra
    ctx->pc = 0x260120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260120u;
        // 0x260124: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260128u;
}

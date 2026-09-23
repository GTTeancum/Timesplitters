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

// Function: challengeGetDisplayFailed
// Address: 0x21f540 - 0x21f77c
void challengeGetDisplayFailed_0x21f540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("challengeGetDisplayFailed_0x21f540");
#endif

    switch (ctx->pc) {
        case 0x21f5d8u: goto label_21f5d8;
        case 0x21f614u: goto label_21f614;
        case 0x21f678u: goto label_21f678;
        case 0x21f6d8u: goto label_21f6d8;
        case 0x21f6f8u: goto label_21f6f8;
        case 0x21f748u: goto label_21f748;
        case 0x21f754u: goto label_21f754;
        default: break;
    }

    ctx->pc = 0x21f540u;

    // 0x21f540: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x21f540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x21f544: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x21f544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21f548: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x21f548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x21f54c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21f54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21f550: 0x3c150033  lui         $s5, 0x33
    ctx->pc = 0x21f550u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
    // 0x21f554: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x21f554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x21f558: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21f558u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f55c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x21f55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21f560: 0x26a4c4a8  addiu       $a0, $s5, -0x3B58
    ctx->pc = 0x21f560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952104));
    // 0x21f564: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x21f564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x21f568: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x21f568u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f56c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x21f56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21f570: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x21f570u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f574: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21f574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f578: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x21f578u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x21f57c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x21f57cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x21f580: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x21f580u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x21f584: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x21F584u;
    {
        const bool branch_taken_0x21f584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F584u;
        // 0x21f588: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f584) {
            ctx->pc = 0x21F5E0u;
            goto label_21f5e0;
        }
    }
    ctx->pc = 0x21F58Cu;
    // 0x21f58c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x21f58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x21f590: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x21f590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21f594: 0x8c442010  lw          $a0, 0x2010($v0)
    ctx->pc = 0x21f594u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x382010u));
    // 0x21f598: 0xc4800208  lwc1        $f0, 0x208($a0)
    ctx->pc = 0x21f598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f59c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x21f59cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f5a0: 0x0  nop
    ctx->pc = 0x21f5a0u;
    // NOP
    // 0x21f5a4: 0x4500006c  bc1f        . + 4 + (0x6C << 2)
    ctx->pc = 0x21F5A4u;
    {
        const bool branch_taken_0x21f5a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21F5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5A4u;
        // 0x21f5a8: 0x8f839354  lw          $v1, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f5a4) {
            ctx->pc = 0x21F758u;
            goto label_21f758;
        }
    }
    ctx->pc = 0x21F5ACu;
    // 0x21f5ac: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x21f5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x21f5b0: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x21f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x21f5b4: 0x8c860160  lw          $a2, 0x160($a0)
    ctx->pc = 0x21f5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x21f5b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21f5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21f5bc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x21f5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x21f5c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21f5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21f5c4: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x21f5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x21f5c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21f5cc: 0x2484e5c0  addiu       $a0, $a0, -0x1A40
    ctx->pc = 0x21f5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960576));
    // 0x21f5d0: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x21F5D0u;
    SET_GPR_U32(ctx, 31, 0x21F5D8u);
    ctx->pc = 0x21F5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F5D0u;
    // 0x21f5d4: 0x8c460a64  lw          $a2, 0xA64($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2660)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x21F5D0u, 0x21F5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F5D8u;
label_21f5d8:
    // 0x21f5d8: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x21F5D8u;
    {
        const bool branch_taken_0x21f5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5D8u;
        // 0x21f5dc: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f5d8) {
            ctx->pc = 0x21F758u;
            goto label_21f758;
        }
    }
    ctx->pc = 0x21F5E0u;
label_21f5e0:
    // 0x21f5e0: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x21f5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x21f5e4: 0x2c620012  sltiu       $v0, $v1, 0x12
    ctx->pc = 0x21f5e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x21f5e8: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x21F5E8u;
    {
        const bool branch_taken_0x21f5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5E8u;
        // 0x21f5ec: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f5e8) {
            ctx->pc = 0x21F6FCu;
            goto label_21f6fc;
        }
    }
    ctx->pc = 0x21F5F0u;
    // 0x21f5f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21f5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21f5f4: 0x24420990  addiu       $v0, $v0, 0x990
    ctx->pc = 0x21f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2448));
    // 0x21f5f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21f5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21f5fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21f5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21f600: 0x800008  jr          $a0
    ctx->pc = 0x21F600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21F608u: goto label_21f608;
            case 0x21F61Cu: goto label_21f61c;
            case 0x21F6FCu: goto label_21f6fc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F600u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21F608u;
label_21f608:
    // 0x21f608: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21f608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f60c: 0xc087ce0  jal         func_21F380
    ctx->pc = 0x21F60Cu;
    SET_GPR_U32(ctx, 31, 0x21F614u);
    ctx->pc = 0x21F610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F60Cu;
    // 0x21f610: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F380u, 0x21F60Cu, 0x21F614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F614u;
label_21f614:
    // 0x21f614: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x21F614u;
    {
        const bool branch_taken_0x21f614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F614u;
        // 0x21f618: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f614) {
            ctx->pc = 0x21F700u;
            goto label_21f700;
        }
    }
    ctx->pc = 0x21F61Cu;
label_21f61c:
    // 0x21f61c: 0x8f86b238  lw          $a2, -0x4DC8($gp)
    ctx->pc = 0x21f61cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x21f620: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21f620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f624: 0x8cc21ddc  lw          $v0, 0x1DDC($a2)
    ctx->pc = 0x21f624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 7644)));
    // 0x21f628: 0xc4410208  lwc1        $f1, 0x208($v0)
    ctx->pc = 0x21f628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21f62c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21f62cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f630: 0x0  nop
    ctx->pc = 0x21f630u;
    // NOP
    // 0x21f634: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x21F634u;
    {
        const bool branch_taken_0x21f634 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21F638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F634u;
        // 0x21f638: 0x8f839354  lw          $v1, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f634) {
            ctx->pc = 0x21F65Cu;
            goto label_21f65c;
        }
    }
    ctx->pc = 0x21F63Cu;
    // 0x21f63c: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x21f63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x21f640: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x21f640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x21f644: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21f644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21f648: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21f648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21f64c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21f64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21f650: 0x8c820a68  lw          $v0, 0xA68($a0)
    ctx->pc = 0x21f650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2664)));
    // 0x21f654: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x21F654u;
    {
        const bool branch_taken_0x21f654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F654u;
        // 0x21f658: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f654) {
            ctx->pc = 0x21F6FCu;
            goto label_21f6fc;
        }
    }
    ctx->pc = 0x21F65Cu;
label_21f65c:
    // 0x21f65c: 0x26a2c4a8  addiu       $v0, $s5, -0x3B58
    ctx->pc = 0x21f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952104));
    // 0x21f660: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x21f660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x21f664: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x21f664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x21f668: 0x14640010  bne         $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x21F668u;
    {
        const bool branch_taken_0x21f668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x21F66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F668u;
        // 0x21f66c: 0x8f859354  lw          $a1, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f668) {
            ctx->pc = 0x21F6ACu;
            goto label_21f6ac;
        }
    }
    ctx->pc = 0x21F670u;
    // 0x21f670: 0xc0a23da  jal         func_288F68
    ctx->pc = 0x21F670u;
    SET_GPR_U32(ctx, 31, 0x21F678u);
    ctx->pc = 0x21F674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F670u;
    // 0x21f674: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288F68u, 0x21F670u, 0x21F678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F678u;
label_21f678:
    // 0x21f678: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x21f678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x21f67c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21F67Cu;
    {
        const bool branch_taken_0x21f67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F67Cu;
        // 0x21f680: 0x8f86b238  lw          $a2, -0x4DC8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f67c) {
            ctx->pc = 0x21F6A8u;
            goto label_21f6a8;
        }
    }
    ctx->pc = 0x21F684u;
    // 0x21f684: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x21f684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x21f688: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x21f688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x21f68c: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x21f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x21f690: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21f690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21f694: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21f694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21f698: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21f698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21f69c: 0x8c820a6c  lw          $v0, 0xA6C($a0)
    ctx->pc = 0x21f69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2668)));
    // 0x21f6a0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x21F6A0u;
    {
        const bool branch_taken_0x21f6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F6A0u;
        // 0x21f6a4: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f6a0) {
            ctx->pc = 0x21F6FCu;
            goto label_21f6fc;
        }
    }
    ctx->pc = 0x21F6A8u;
label_21f6a8:
    // 0x21f6a8: 0x8f859354  lw          $a1, -0x6CAC($gp)
    ctx->pc = 0x21f6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
label_21f6ac:
    // 0x21f6ac: 0x3c11002f  lui         $s1, 0x2F
    ctx->pc = 0x21f6acu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)47 << 16));
    // 0x21f6b0: 0x26312c18  addiu       $s1, $s1, 0x2C18
    ctx->pc = 0x21f6b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 11288));
    // 0x21f6b4: 0x8cc40018  lw          $a0, 0x18($a2)
    ctx->pc = 0x21f6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x21f6b8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x21f6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x21f6bc: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x21f6bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x21f6c0: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x21f6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x21f6c4: 0x2610e5a8  addiu       $s0, $s0, -0x1A58
    ctx->pc = 0x21f6c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960552));
    // 0x21f6c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x21f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21f6cc: 0x8c43073c  lw          $v1, 0x73C($v0)
    ctx->pc = 0x21f6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1852)));
    // 0x21f6d0: 0xc0a241e  jal         func_289078
    ctx->pc = 0x21F6D0u;
    SET_GPR_U32(ctx, 31, 0x21F6D8u);
    ctx->pc = 0x21F6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F6D0u;
    // 0x21f6d4: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289078u, 0x21F6D0u, 0x21F6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F6D8u;
label_21f6d8:
    // 0x21f6d8: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x21f6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x21f6dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21f6dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f6e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f6e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21f6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21f6e8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x21f6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x21f6ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21f6f0: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x21F6F0u;
    SET_GPR_U32(ctx, 31, 0x21F6F8u);
    ctx->pc = 0x21F6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F6F0u;
    // 0x21f6f4: 0x8c460a70  lw          $a2, 0xA70($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x21F6F0u, 0x21F6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F6F8u;
label_21f6f8:
    // 0x21f6f8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x21f6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_21f6fc:
    // 0x21f6fc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x21f6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21f700:
    // 0x21f700: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x21F700u;
    {
        const bool branch_taken_0x21f700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F700u;
        // 0x21f704: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f700) {
            ctx->pc = 0x21F75Cu;
            goto label_21f75c;
        }
    }
    ctx->pc = 0x21F708u;
    // 0x21f708: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21f708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21f70c: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x21F70Cu;
    {
        const bool branch_taken_0x21f70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f70c) {
            ctx->pc = 0x21F710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F70Cu;
            // 0x21f710: 0xdfb50050  ld          $s5, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F760u;
            goto label_21f760;
        }
    }
    ctx->pc = 0x21F714u;
    // 0x21f714: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x21f714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x21f718: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x21F718u;
    {
        const bool branch_taken_0x21f718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f718) {
            ctx->pc = 0x21F71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F718u;
            // 0x21f71c: 0xdfb50050  ld          $s5, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F760u;
            goto label_21f760;
        }
    }
    ctx->pc = 0x21F720u;
    // 0x21f720: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x21f720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x21f724: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x21f724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x21f728: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x21f728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x21f72c: 0x26b0c4a8  addiu       $s0, $s5, -0x3B58
    ctx->pc = 0x21f72cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952104));
    // 0x21f730: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21f730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21f734: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21f734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21f738: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21f738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21f73c: 0x8c83073c  lw          $v1, 0x73C($a0)
    ctx->pc = 0x21f73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1852)));
    // 0x21f740: 0xc087c20  jal         func_21F080
    ctx->pc = 0x21F740u;
    SET_GPR_U32(ctx, 31, 0x21F748u);
    ctx->pc = 0x21F744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F740u;
    // 0x21f744: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F080u, 0x21F740u, 0x21F748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F748u;
label_21f748:
    // 0x21f748: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x21f748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x21f74c: 0xc087c5a  jal         func_21F168
    ctx->pc = 0x21F74Cu;
    SET_GPR_U32(ctx, 31, 0x21F754u);
    ctx->pc = 0x21F750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F74Cu;
    // 0x21f750: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F168u, 0x21F74Cu, 0x21F754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F754u;
label_21f754:
    // 0x21f754: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x21f754u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_21f758:
    // 0x21f758: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x21f758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_21f75c:
    // 0x21f75c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x21f75cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_21f760:
    // 0x21f760: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x21f760u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21f764: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x21f764u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21f768: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21f768u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f76c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21f76cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f774: 0x3e00008  jr          $ra
    ctx->pc = 0x21F774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F774u;
        // 0x21f778: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F77Cu;
}

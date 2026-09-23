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

// Function: carPropNew
// Address: 0x2764b0 - 0x276678
void carPropNew_0x2764b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("carPropNew_0x2764b0");
#endif

    switch (ctx->pc) {
        case 0x27650cu: goto label_27650c;
        case 0x276548u: goto label_276548;
        case 0x276558u: goto label_276558;
        case 0x27657cu: goto label_27657c;
        case 0x276610u: goto label_276610;
        default: break;
    }

    ctx->pc = 0x2764b0u;

    // 0x2764b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2764b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2764b4: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2764b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2764b8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2764b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2764bc: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2764bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2764c0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2764c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2764c4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2764c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2764c8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2764c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2764cc: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x2764ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2764d0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2764d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2764d4: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2764d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2764d8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2764d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2764dc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2764dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2764e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2764e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2764e4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2764e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2764e8: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2764e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2764ec: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2764ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2764f0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2764f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2764f4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2764f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2764f8: 0xc60d0008  lwc1        $f13, 0x8($s0)
    ctx->pc = 0x2764f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2764fc: 0xc60e000c  lwc1        $f14, 0xC($s0)
    ctx->pc = 0x2764fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x276500: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x276500u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x276504: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x276504u;
    SET_GPR_U32(ctx, 31, 0x27650Cu);
    ctx->pc = 0x276508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276504u;
    // 0x276508: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x276504u, 0x27650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27650Cu;
label_27650c:
    // 0x27650c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x27650cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276510: 0x8ed70160  lw          $s7, 0x160($s6)
    ctx->pc = 0x276510u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 352)));
    // 0x276514: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x276514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276518: 0xaef50000  sw          $s5, 0x0($s7)
    ctx->pc = 0x276518u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 21));
    // 0x27651c: 0xaef0000c  sw          $s0, 0xC($s7)
    ctx->pc = 0x27651cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 16));
    // 0x276520: 0xaef10008  sw          $s1, 0x8($s7)
    ctx->pc = 0x276520u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 17));
    // 0x276524: 0xaef20010  sw          $s2, 0x10($s7)
    ctx->pc = 0x276524u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 18));
    // 0x276528: 0xaef30014  sw          $s3, 0x14($s7)
    ctx->pc = 0x276528u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 20), GPR_U32(ctx, 19));
    // 0x27652c: 0xaef40018  sw          $s4, 0x18($s7)
    ctx->pc = 0x27652cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 24), GPR_U32(ctx, 20));
    // 0x276530: 0xaef00004  sw          $s0, 0x4($s7)
    ctx->pc = 0x276530u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 16));
    // 0x276534: 0xe6f40050  swc1        $f20, 0x50($s7)
    ctx->pc = 0x276534u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 80), bits); }
    // 0x276538: 0xe6f40058  swc1        $f20, 0x58($s7)
    ctx->pc = 0x276538u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 88), bits); }
    // 0x27653c: 0xe6f4005c  swc1        $f20, 0x5C($s7)
    ctx->pc = 0x27653cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 92), bits); }
    // 0x276540: 0xc09d89c  jal         func_276270
    ctx->pc = 0x276540u;
    SET_GPR_U32(ctx, 31, 0x276548u);
    ctx->pc = 0x276544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276540u;
    // 0x276544: 0xe6f40060  swc1        $f20, 0x60($s7) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x276270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276270u, 0x276540u, 0x276548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276548u;
label_276548:
    // 0x276548: 0x8ec40020  lw          $a0, 0x20($s6)
    ctx->pc = 0x276548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x27654c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27654cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276550: 0xc09829e  jal         func_260A78
    ctx->pc = 0x276550u;
    SET_GPR_U32(ctx, 31, 0x276558u);
    ctx->pc = 0x276554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276550u;
    // 0x276554: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x276550u, 0x276558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276558u;
label_276558:
    // 0x276558: 0xc6c101fc  lwc1        $f1, 0x1FC($s6)
    ctx->pc = 0x276558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27655c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27655cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276560: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x276560u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x276564: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x276564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x276568: 0xc6c00034  lwc1        $f0, 0x34($s6)
    ctx->pc = 0x276568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27656c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x27656cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x276570: 0xc6c10204  lwc1        $f1, 0x204($s6)
    ctx->pc = 0x276570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276574: 0xc099ae4  jal         func_266B90
    ctx->pc = 0x276574u;
    SET_GPR_U32(ctx, 31, 0x27657Cu);
    ctx->pc = 0x276578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276574u;
    // 0x276578: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x266B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266B90u, 0x276574u, 0x27657Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27657Cu;
label_27657c:
    // 0x27657c: 0xaee20064  sw          $v0, 0x64($s7)
    ctx->pc = 0x27657cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 100), GPR_U32(ctx, 2));
    // 0x276580: 0x24020137  addiu       $v0, $zero, 0x137
    ctx->pc = 0x276580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 311));
    // 0x276584: 0xe6f40068  swc1        $f20, 0x68($s7)
    ctx->pc = 0x276584u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 104), bits); }
    // 0x276588: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x276588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x27658c: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27658Cu;
    {
        const bool branch_taken_0x27658c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x276590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27658Cu;
        // 0x276590: 0x24020138  addiu       $v0, $zero, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27658c) {
            ctx->pc = 0x2765B0u;
            goto label_2765b0;
        }
    }
    ctx->pc = 0x276594u;
    // 0x276594: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x276594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x276598: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x276598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x27659c: 0x244275c0  addiu       $v0, $v0, 0x75C0
    ctx->pc = 0x27659cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30144));
    // 0x2765a0: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x2765a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x2765a4: 0xaec20190  sw          $v0, 0x190($s6)
    ctx->pc = 0x2765a4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 400), GPR_U32(ctx, 2));
    // 0x2765a8: 0xaec30010  sw          $v1, 0x10($s6)
    ctx->pc = 0x2765a8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 3));
    // 0x2765ac: 0x24020138  addiu       $v0, $zero, 0x138
    ctx->pc = 0x2765acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
label_2765b0:
    // 0x2765b0: 0x1482001a  bne         $a0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2765B0u;
    {
        const bool branch_taken_0x2765b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2765B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2765B0u;
        // 0x2765b4: 0x24020139  addiu       $v0, $zero, 0x139 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 313));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2765b0) {
            ctx->pc = 0x27661Cu;
            goto label_27661c;
        }
    }
    ctx->pc = 0x2765B8u;
    // 0x2765b8: 0x8ec50010  lw          $a1, 0x10($s6)
    ctx->pc = 0x2765b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x2765bc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2765bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2765c0: 0x8f849f74  lw          $a0, -0x608C($gp)
    ctx->pc = 0x2765c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2765c4: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x2765c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x2765c8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2765c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2765cc: 0x24637860  addiu       $v1, $v1, 0x7860
    ctx->pc = 0x2765ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30816));
    // 0x2765d0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2765d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2765d4: 0xaec30190  sw          $v1, 0x190($s6)
    ctx->pc = 0x2765d4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 400), GPR_U32(ctx, 3));
    // 0x2765d8: 0x28840003  slti        $a0, $a0, 0x3
    ctx->pc = 0x2765d8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2765dc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2765DCu;
    {
        const bool branch_taken_0x2765dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2765E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2765DCu;
        // 0x2765e0: 0xaec50010  sw          $a1, 0x10($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2765dc) {
            ctx->pc = 0x2765F0u;
            goto label_2765f0;
        }
    }
    ctx->pc = 0x2765E4u;
    // 0x2765e4: 0x240200d4  addiu       $v0, $zero, 0xD4
    ctx->pc = 0x2765e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x2765e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2765E8u;
    {
        const bool branch_taken_0x2765e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2765ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2765E8u;
        // 0x2765ec: 0xaec2000c  sw          $v0, 0xC($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2765e8) {
            ctx->pc = 0x2765F4u;
            goto label_2765f4;
        }
    }
    ctx->pc = 0x2765F0u;
label_2765f0:
    // 0x2765f0: 0xaec0000c  sw          $zero, 0xC($s6)
    ctx->pc = 0x2765f0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 0));
label_2765f4:
    // 0x2765f4: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x2765f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x2765f8: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x2765f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2765fc: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2765fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x276600: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x276600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x276604: 0x26c50030  addiu       $a1, $s6, 0x30
    ctx->pc = 0x276604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x276608: 0xc08163c  jal         func_2058F0
    ctx->pc = 0x276608u;
    SET_GPR_U32(ctx, 31, 0x276610u);
    ctx->pc = 0x27660Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276608u;
    // 0x27660c: 0xa4400124  sh          $zero, 0x124($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 292), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2058F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2058F0u, 0x276608u, 0x276610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276610u;
label_276610:
    // 0x276610: 0xaee2006c  sw          $v0, 0x6C($s7)
    ctx->pc = 0x276610u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 108), GPR_U32(ctx, 2));
    // 0x276614: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x276614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x276618: 0x24020139  addiu       $v0, $zero, 0x139
    ctx->pc = 0x276618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 313));
label_27661c:
    // 0x27661c: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27661Cu;
    {
        const bool branch_taken_0x27661c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x276620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27661Cu;
        // 0x276620: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27661c) {
            ctx->pc = 0x276648u;
            goto label_276648;
        }
    }
    ctx->pc = 0x276624u;
    // 0x276624: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x276624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x276628: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x276628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x27662c: 0x8ec50020  lw          $a1, 0x20($s6)
    ctx->pc = 0x27662cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x276630: 0x240300d4  addiu       $v1, $zero, 0xD4
    ctx->pc = 0x276630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x276634: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x276634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x276638: 0xaec3000c  sw          $v1, 0xC($s6)
    ctx->pc = 0x276638u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 3));
    // 0x27663c: 0xaec20010  sw          $v0, 0x10($s6)
    ctx->pc = 0x27663cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 2));
    // 0x276640: 0xa4a00124  sh          $zero, 0x124($a1)
    ctx->pc = 0x276640u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 292), (uint16_t)GPR_U32(ctx, 0));
    // 0x276644: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x276644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_276648:
    // 0x276648: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x276648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27664c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x27664cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x276650: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x276650u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x276654: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x276654u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x276658: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x276658u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27665c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x27665cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x276660: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x276660u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x276664: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x276664u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276668: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x276668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27666c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x27666cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x276670: 0x3e00008  jr          $ra
    ctx->pc = 0x276670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276670u;
        // 0x276674: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276678u;
}

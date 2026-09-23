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

// Function: particleNewSpriteSparks
// Address: 0x297598 - 0x2978c0
void particleNewSpriteSparks_0x297598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleNewSpriteSparks_0x297598");
#endif

    switch (ctx->pc) {
        case 0x2975dcu: goto label_2975dc;
        case 0x29760cu: goto label_29760c;
        case 0x297648u: goto label_297648;
        case 0x297650u: goto label_297650;
        case 0x2976bcu: goto label_2976bc;
        case 0x297728u: goto label_297728;
        case 0x297890u: goto label_297890;
        default: break;
    }

    ctx->pc = 0x297598u;

    // 0x297598: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x297598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x29759c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29759cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2975a0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2975a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2975a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2975a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2975a8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2975a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2975ac: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2975acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2975b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2975b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2975b4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2975b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2975b8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2975b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2975bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2975bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2975c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2975c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2975c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2975c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2975c8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2975c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2975cc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2975ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2975d0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2975d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2975d4: 0xc0a5b24  jal         func_296C90
    ctx->pc = 0x2975D4u;
    SET_GPR_U32(ctx, 31, 0x2975DCu);
    ctx->pc = 0x2975D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2975D4u;
    // 0x2975d8: 0xffb60060  sd          $s6, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C90u, 0x2975D4u, 0x2975DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2975DCu;
label_2975dc:
    // 0x2975dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2975dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2975e0: 0xc7808cb0  lwc1        $f0, -0x7350($gp)
    ctx->pc = 0x2975e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2975e4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2975e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2975e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2975e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2975ec: 0xae500014  sw          $s0, 0x14($s2)
    ctx->pc = 0x2975ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
    // 0x2975f0: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x2975f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2975f4: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x2975f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x2975f8: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x2975f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    // 0x2975fc: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x2975fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x297600: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x297600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x297604: 0xc0a5a28  jal         func_2968A0
    ctx->pc = 0x297604u;
    SET_GPR_U32(ctx, 31, 0x29760Cu);
    ctx->pc = 0x297608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297604u;
    // 0x297608: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2968A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2968A0u, 0x297604u, 0x29760Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29760Cu;
label_29760c:
    // 0x29760c: 0xae5103a0  sw          $s1, 0x3A0($s2)
    ctx->pc = 0x29760cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 928), GPR_U32(ctx, 17));
    // 0x297610: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x297610u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x297614: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x297614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297618: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x297618u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
    // 0x29761c: 0xe64103a4  swc1        $f1, 0x3A4($s2)
    ctx->pc = 0x29761cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 932), bits); }
    // 0x297620: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x297620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297624: 0xe64003a8  swc1        $f0, 0x3A8($s2)
    ctx->pc = 0x297624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 936), bits); }
    // 0x297628: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x297628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29762c: 0x1840005f  blez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x29762Cu;
    {
        const bool branch_taken_0x29762c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x297630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29762Cu;
        // 0x297630: 0xe64103ac  swc1        $f1, 0x3AC($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 940), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29762c) {
            ctx->pc = 0x2977ACu;
            goto label_2977ac;
        }
    }
    ctx->pc = 0x297634u;
    // 0x297634: 0x265603b0  addiu       $s6, $s2, 0x3B0
    ctx->pc = 0x297634u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 944));
    // 0x297638: 0x265103b4  addiu       $s1, $s2, 0x3B4
    ctx->pc = 0x297638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 948));
    // 0x29763c: 0x265003b8  addiu       $s0, $s2, 0x3B8
    ctx->pc = 0x29763cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 952));
    // 0x297640: 0x26570048  addiu       $s7, $s2, 0x48
    ctx->pc = 0x297640u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x297644: 0x0  nop
    ctx->pc = 0x297644u;
    // NOP
label_297648:
    // 0x297648: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x297648u;
    SET_GPR_U32(ctx, 31, 0x297650u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x297648u, 0x297650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297650u;
label_297650:
    // 0x297650: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x297650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297654: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x297654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x297658: 0x2621818  mult        $v1, $s3, $v0
    ctx->pc = 0x297658u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29765c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29765Cu;
    {
        const bool branch_taken_0x29765c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x297660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29765Cu;
        // 0x297660: 0x762821  addu        $a1, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29765c) {
            ctx->pc = 0x297670u;
            goto label_297670;
        }
    }
    ctx->pc = 0x297664u;
    // 0x297664: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x297664u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297668: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x297668u;
    {
        const bool branch_taken_0x297668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297668u;
        // 0x29766c: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x297668) {
            ctx->pc = 0x297688u;
            goto label_297688;
        }
    }
    ctx->pc = 0x297670u;
label_297670:
    // 0x297670: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x297670u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x297674: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x297674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x297678: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x297678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29767c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29767cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297680: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x297680u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x297684: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x297684u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_297688:
    // 0x297688: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x297688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x29768c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29768cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297690: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x297690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x297694: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x297694u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x297698: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x297698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x29769c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29769cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2976a0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2976a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2976a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2976a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2976a8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2976a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2976ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2976acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2976b0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2976b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2976b4: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2976B4u;
    SET_GPR_U32(ctx, 31, 0x2976BCu);
    ctx->pc = 0x2976B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2976B4u;
    // 0x2976b8: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2976B4u, 0x2976BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2976BCu;
label_2976bc:
    // 0x2976bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2976bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2976c0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2976c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2976c4: 0x2621818  mult        $v1, $s3, $v0
    ctx->pc = 0x2976c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2976c8: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2976C8u;
    {
        const bool branch_taken_0x2976c8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2976CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2976C8u;
        // 0x2976cc: 0x712821  addu        $a1, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2976c8) {
            ctx->pc = 0x2976DCu;
            goto label_2976dc;
        }
    }
    ctx->pc = 0x2976D0u;
    // 0x2976d0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2976d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2976d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2976D4u;
    {
        const bool branch_taken_0x2976d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2976D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2976D4u;
        // 0x2976d8: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2976d4) {
            ctx->pc = 0x2976F4u;
            goto label_2976f4;
        }
    }
    ctx->pc = 0x2976DCu;
label_2976dc:
    // 0x2976dc: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2976dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2976e0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2976e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2976e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2976e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2976e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2976e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2976ec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2976ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2976f0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2976f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2976f4:
    // 0x2976f4: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2976f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2976f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2976f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2976fc: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x2976fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x297700: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x297700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x297704: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x297704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x297708: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x297708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29770c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x29770cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x297710: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x297710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297714: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x297714u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x297718: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x297718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29771c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x29771cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x297720: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x297720u;
    SET_GPR_U32(ctx, 31, 0x297728u);
    ctx->pc = 0x297724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297720u;
    // 0x297724: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x297720u, 0x297728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297728u;
label_297728:
    // 0x297728: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x297728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29772c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x29772cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x297730: 0x2621818  mult        $v1, $s3, $v0
    ctx->pc = 0x297730u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x297734: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x297734u;
    {
        const bool branch_taken_0x297734 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x297738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297734u;
        // 0x297738: 0x702821  addu        $a1, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297734) {
            ctx->pc = 0x297748u;
            goto label_297748;
        }
    }
    ctx->pc = 0x29773Cu;
    // 0x29773c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x29773cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297740: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x297740u;
    {
        const bool branch_taken_0x297740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297740u;
        // 0x297744: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x297740) {
            ctx->pc = 0x297760u;
            goto label_297760;
        }
    }
    ctx->pc = 0x297748u;
label_297748:
    // 0x297748: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x297748u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x29774c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x29774cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x297750: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x297750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x297754: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x297754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297758: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x297758u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29775c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29775cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_297760:
    // 0x297760: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x297760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x297764: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x297764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297768: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x297768u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29776c: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x29776cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x297770: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x297770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x297774: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x297774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x297778: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x297778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29777c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x29777cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x297780: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x297780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297784: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x297784u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x297788: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x297788u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29778c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x29778cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x297790: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x297790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x297794: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x297794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x297798: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x297798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29779c: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x29779Cu;
    {
        const bool branch_taken_0x29779c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29779c) {
            ctx->pc = 0x297648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_297648;
        }
    }
    ctx->pc = 0x2977A4u;
    // 0x2977a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2977A4u;
    {
        const bool branch_taken_0x2977a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2977a4) {
            ctx->pc = 0x2977B0u;
            goto label_2977b0;
        }
    }
    ctx->pc = 0x2977ACu;
label_2977ac:
    // 0x2977ac: 0x26570048  addiu       $s7, $s2, 0x48
    ctx->pc = 0x2977acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
label_2977b0:
    // 0x2977b0: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x2977b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2977b4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2977b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2977b8: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x2977b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2977bc: 0xc6910008  lwc1        $f17, 0x8($s4)
    ctx->pc = 0x2977bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2977c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2977c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2977c4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2977c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2977c8: 0x46070b80  add.s       $f14, $f1, $f7
    ctx->pc = 0x2977c8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x2977cc: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x2977ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2977d0: 0x46078900  add.s       $f4, $f17, $f7
    ctx->pc = 0x2977d0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[17], ctx->f[7]);
    // 0x2977d4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2977d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2977d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2977d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2977dc: 0x46038c40  add.s       $f17, $f17, $f3
    ctx->pc = 0x2977dcu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[3]);
    // 0x2977e0: 0x46030340  add.s       $f13, $f0, $f3
    ctx->pc = 0x2977e0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2977e4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2977e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2977e8: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x2977e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2977ec: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x2977ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x2977f0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2977f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2977f4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2977f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2977f8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2977f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2977fc: 0xc7868cb4  lwc1        $f6, -0x734C($gp)
    ctx->pc = 0x2977fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x297800: 0x46027382  mul.s       $f14, $f14, $f2
    ctx->pc = 0x297800u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x297804: 0xc6af0004  lwc1        $f15, 0x4($s5)
    ctx->pc = 0x297804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x297808: 0x46026b42  mul.s       $f13, $f13, $f2
    ctx->pc = 0x297808u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
    // 0x29780c: 0xc6b00008  lwc1        $f16, 0x8($s5)
    ctx->pc = 0x29780cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x297810: 0x46028c42  mul.s       $f17, $f17, $f2
    ctx->pc = 0x297810u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[2]);
    // 0x297814: 0xc6ac0000  lwc1        $f12, 0x0($s5)
    ctx->pc = 0x297814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x297818: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x297818u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29781c: 0xc7878cb8  lwc1        $f7, -0x7348($gp)
    ctx->pc = 0x29781cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x297820: 0x46087381  sub.s       $f14, $f14, $f8
    ctx->pc = 0x297820u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[8]);
    // 0x297824: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x297824u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x297828: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x297828u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x29782c: 0x46058c41  sub.s       $f17, $f17, $f5
    ctx->pc = 0x29782cu;
    ctx->f[17] = FPU_SUB_S(ctx->f[17], ctx->f[5]);
    // 0x297830: 0x46056b41  sub.s       $f13, $f13, $f5
    ctx->pc = 0x297830u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[5]);
    // 0x297834: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x297834u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x297838: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x297838u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x29783c: 0x46067382  mul.s       $f14, $f14, $f6
    ctx->pc = 0x29783cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
    // 0x297840: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x297840u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x297844: 0x46068c42  mul.s       $f17, $f17, $f6
    ctx->pc = 0x297844u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[6]);
    // 0x297848: 0x46066b42  mul.s       $f13, $f13, $f6
    ctx->pc = 0x297848u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[6]);
    // 0x29784c: 0x460e7b80  add.s       $f14, $f15, $f14
    ctx->pc = 0x29784cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[15], ctx->f[14]);
    // 0x297850: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x297850u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x297854: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x297854u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x297858: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x297858u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x29785c: 0x460d6340  add.s       $f13, $f12, $f13
    ctx->pc = 0x29785cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x297860: 0x46118440  add.s       $f17, $f16, $f17
    ctx->pc = 0x297860u;
    ctx->f[17] = FPU_ADD_S(ctx->f[16], ctx->f[17]);
    // 0x297864: 0x46077380  add.s       $f14, $f14, $f7
    ctx->pc = 0x297864u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[7]);
    // 0x297868: 0x46017bc0  add.s       $f15, $f15, $f1
    ctx->pc = 0x297868u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[1]);
    // 0x29786c: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x29786cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x297870: 0x46048400  add.s       $f16, $f16, $f4
    ctx->pc = 0x297870u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[4]);
    // 0x297874: 0x46038c40  add.s       $f17, $f17, $f3
    ctx->pc = 0x297874u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[3]);
    // 0x297878: 0x46036301  sub.s       $f12, $f12, $f3
    ctx->pc = 0x297878u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[3]);
    // 0x29787c: 0x46036b40  add.s       $f13, $f13, $f3
    ctx->pc = 0x29787cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[3]);
    // 0x297880: 0x46037381  sub.s       $f14, $f14, $f3
    ctx->pc = 0x297880u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[3]);
    // 0x297884: 0x46037bc0  add.s       $f15, $f15, $f3
    ctx->pc = 0x297884u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[3]);
    // 0x297888: 0xc095046  jal         func_254118
    ctx->pc = 0x297888u;
    SET_GPR_U32(ctx, 31, 0x297890u);
    ctx->pc = 0x29788Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297888u;
    // 0x29788c: 0x46038401  sub.s       $f16, $f16, $f3 (Delay Slot)
    ctx->f[16] = FPU_SUB_S(ctx->f[16], ctx->f[3]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x254118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254118u, 0x297888u, 0x297890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297890u;
label_297890:
    // 0x297890: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x297890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297894: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x297894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x297898: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x297898u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29789c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x29789cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2978a0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2978a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2978a4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2978a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2978a8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2978a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2978ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2978acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2978b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2978b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2978b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2978b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2978b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2978B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2978BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2978B8u;
        // 0x2978bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2978B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2978C0u;
}

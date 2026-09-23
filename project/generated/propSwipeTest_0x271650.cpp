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

// Function: propSwipeTest
// Address: 0x271650 - 0x271998
void propSwipeTest_0x271650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propSwipeTest_0x271650");
#endif

    switch (ctx->pc) {
        case 0x271740u: goto label_271740;
        case 0x271754u: goto label_271754;
        case 0x2717a8u: goto label_2717a8;
        case 0x271864u: goto label_271864;
        case 0x271878u: goto label_271878;
        case 0x271894u: goto label_271894;
        case 0x271910u: goto label_271910;
        default: break;
    }

    ctx->pc = 0x271650u;

    // 0x271650: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x271650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x271654: 0xffbe0180  sd          $fp, 0x180($sp)
    ctx->pc = 0x271654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 30));
    // 0x271658: 0xffb60160  sd          $s6, 0x160($sp)
    ctx->pc = 0x271658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
    // 0x27165c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x27165cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271660: 0xffb50150  sd          $s5, 0x150($sp)
    ctx->pc = 0x271660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 21));
    // 0x271664: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x271664u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271668: 0xffbf0190  sd          $ra, 0x190($sp)
    ctx->pc = 0x271668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 31));
    // 0x27166c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x27166cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271670: 0xffb70170  sd          $s7, 0x170($sp)
    ctx->pc = 0x271670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 23));
    // 0x271674: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x271674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x271678: 0xffb30130  sd          $s3, 0x130($sp)
    ctx->pc = 0x271678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x27167c: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x27167cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x271680: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x271680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x271684: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x271684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x271688: 0x8ec20164  lw          $v0, 0x164($s6)
    ctx->pc = 0x271688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 356)));
    // 0x27168c: 0xafa700e4  sw          $a3, 0xE4($sp)
    ctx->pc = 0x27168cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 7));
    // 0x271690: 0xafa600e0  sw          $a2, 0xE0($sp)
    ctx->pc = 0x271690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 6));
    // 0x271694: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x271694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271698: 0xafa800e8  sw          $t0, 0xE8($sp)
    ctx->pc = 0x271698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 8));
    // 0x27169c: 0xafa900ec  sw          $t1, 0xEC($sp)
    ctx->pc = 0x27169cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 9));
    // 0x2716a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2716A0u;
    {
        const bool branch_taken_0x2716a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2716A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2716A0u;
        // 0x2716a4: 0x8ed0000c  lw          $s0, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2716a0) {
            ctx->pc = 0x2716C0u;
            goto label_2716c0;
        }
    }
    ctx->pc = 0x2716A8u;
    // 0x2716a8: 0xc4400098  lwc1        $f0, 0x98($v0)
    ctx->pc = 0x2716a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2716ac: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2716acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2716b0: 0xc441009c  lwc1        $f1, 0x9C($v0)
    ctx->pc = 0x2716b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2716b4: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x2716b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2716b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2716B8u;
    {
        const bool branch_taken_0x2716b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2716BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2716B8u;
        // 0x2716bc: 0xc44000a0  lwc1        $f0, 0xA0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2716b8) {
            ctx->pc = 0x2716D8u;
            goto label_2716d8;
        }
    }
    ctx->pc = 0x2716C0u;
label_2716c0:
    // 0x2716c0: 0x8ec20160  lw          $v0, 0x160($s6)
    ctx->pc = 0x2716c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 352)));
    // 0x2716c4: 0xc4400af8  lwc1        $f0, 0xAF8($v0)
    ctx->pc = 0x2716c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2716c8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2716c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2716cc: 0xc4410afc  lwc1        $f1, 0xAFC($v0)
    ctx->pc = 0x2716ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2716d0: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x2716d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2716d4: 0xc4400b00  lwc1        $f0, 0xB00($v0)
    ctx->pc = 0x2716d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2716d8:
    // 0x2716d8: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2716d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2716dc: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x2716dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2716e0: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x2716e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2716e4: 0xc6a20004  lwc1        $f2, 0x4($s5)
    ctx->pc = 0x2716e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2716e8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2716e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2716ec: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x2716ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2716f0: 0xc7a400c4  lwc1        $f4, 0xC4($sp)
    ctx->pc = 0x2716f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2716f4: 0xc7a300c8  lwc1        $f3, 0xC8($sp)
    ctx->pc = 0x2716f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2716f8: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2716f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2716fc: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x2716fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x271700: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x271700u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x271704: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x271704u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x271708: 0x12070018  beq         $s0, $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x271708u;
    {
        const bool branch_taken_0x271708 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 7));
        ctx->pc = 0x27170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271708u;
        // 0x27170c: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x271708) {
            ctx->pc = 0x27176Cu;
            goto label_27176c;
        }
    }
    ctx->pc = 0x271710u;
    // 0x271710: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x271710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x271714: 0x27b200c0  addiu       $s2, $sp, 0xC0
    ctx->pc = 0x271714u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x271718: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x271718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x27171c: 0x27b100d0  addiu       $s1, $sp, 0xD0
    ctx->pc = 0x27171cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x271720: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x271720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x271724: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x271724u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x271728: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x271728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x27172c: 0x27b3001c  addiu       $s3, $sp, 0x1C
    ctx->pc = 0x27172cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x271730: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x271730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x271734: 0x27b70030  addiu       $s7, $sp, 0x30
    ctx->pc = 0x271734u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x271738: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x271738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x27173c: 0x0  nop
    ctx->pc = 0x27173cu;
    // NOP
label_271740:
    // 0x271740: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x271740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271744: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x271744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271748: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x271748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27174c: 0xc09633c  jal         func_258CF0
    ctx->pc = 0x27174Cu;
    SET_GPR_U32(ctx, 31, 0x271754u);
    ctx->pc = 0x271750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27174Cu;
    // 0x271750: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258CF0u, 0x27174Cu, 0x271754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271754u;
label_271754:
    // 0x271754: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x271754u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271758: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x271758u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27175c: 0x17c7fff8  bne         $fp, $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x27175Cu;
    {
        const bool branch_taken_0x27175c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 7));
        ctx->pc = 0x271760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27175Cu;
        // 0x271760: 0x3c0802d  daddu       $s0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27175c) {
            ctx->pc = 0x271740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271740;
        }
    }
    ctx->pc = 0x271764u;
    // 0x271764: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x271764u;
    {
        const bool branch_taken_0x271764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271764u;
        // 0x271768: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271764) {
            ctx->pc = 0x271794u;
            goto label_271794;
        }
    }
    ctx->pc = 0x27176Cu;
label_27176c:
    // 0x27176c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x27176cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x271770: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x271770u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x271774: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x271774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x271778: 0x27b3001c  addiu       $s3, $sp, 0x1C
    ctx->pc = 0x271778u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x27177c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x27177cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x271780: 0x27b70030  addiu       $s7, $sp, 0x30
    ctx->pc = 0x271780u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x271784: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x271784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x271788: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x271788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x27178c: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x27178cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x271790: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x271790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_271794:
    // 0x271794: 0x8fa500e4  lw          $a1, 0xE4($sp)
    ctx->pc = 0x271794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x271798: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x271798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27179c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x27179cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2717a0: 0x2488000c  addiu       $t0, $a0, 0xC
    ctx->pc = 0x2717a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2717a4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2717a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2717a8:
    // 0x2717a8: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x2717a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2717ac: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2717acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2717b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2717b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2717b4: 0x0  nop
    ctx->pc = 0x2717b4u;
    // NOP
    // 0x2717b8: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2717B8u;
    {
        const bool branch_taken_0x2717b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2717b8) {
            ctx->pc = 0x2717BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2717B8u;
            // 0x2717bc: 0xc4610000  lwc1        $f1, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2717D8u;
            goto label_2717d8;
        }
    }
    ctx->pc = 0x2717C0u;
    // 0x2717c0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2717c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2717c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2717c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2717c8: 0x0  nop
    ctx->pc = 0x2717c8u;
    // NOP
    // 0x2717cc: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2717CCu;
    {
        const bool branch_taken_0x2717cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2717cc) {
            ctx->pc = 0x2717D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2717CCu;
            // 0x2717d0: 0xe4c10000  swc1        $f1, 0x0($a2) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2717F0u;
            goto label_2717f0;
        }
    }
    ctx->pc = 0x2717D4u;
    // 0x2717d4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2717d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2717d8:
    // 0x2717d8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2717d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2717dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2717dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2717e0: 0x0  nop
    ctx->pc = 0x2717e0u;
    // NOP
    // 0x2717e4: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x2717E4u;
    {
        const bool branch_taken_0x2717e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2717e4) {
            ctx->pc = 0x2717E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2717E4u;
            // 0x2717e8: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2717F0u;
            goto label_2717f0;
        }
    }
    ctx->pc = 0x2717ECu;
    // 0x2717ec: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x2717ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_2717f0:
    // 0x2717f0: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x2717f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2717f4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2717f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2717f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2717f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2717fc: 0x0  nop
    ctx->pc = 0x2717fcu;
    // NOP
    // 0x271800: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x271800u;
    {
        const bool branch_taken_0x271800 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x271800) {
            ctx->pc = 0x271804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271800u;
            // 0x271804: 0xc4610000  lwc1        $f1, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x271820u;
            goto label_271820;
        }
    }
    ctx->pc = 0x271808u;
    // 0x271808: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x271808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27180c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27180cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271810: 0x0  nop
    ctx->pc = 0x271810u;
    // NOP
    // 0x271814: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x271814u;
    {
        const bool branch_taken_0x271814 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x271814) {
            ctx->pc = 0x271818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271814u;
            // 0x271818: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x271838u;
            goto label_271838;
        }
    }
    ctx->pc = 0x27181Cu;
    // 0x27181c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x27181cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_271820:
    // 0x271820: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x271820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271824: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x271824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271828: 0x0  nop
    ctx->pc = 0x271828u;
    // NOP
    // 0x27182c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x27182Cu;
    {
        const bool branch_taken_0x27182c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27182c) {
            ctx->pc = 0x271830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27182Cu;
            // 0x271830: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x271838u;
            goto label_271838;
        }
    }
    ctx->pc = 0x271834u;
    // 0x271834: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x271834u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_271838:
    // 0x271838: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x271838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x27183c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x27183cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x271840: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x271840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x271844: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x271844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x271848: 0x88102a  slt         $v0, $a0, $t0
    ctx->pc = 0x271848u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x27184c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x27184Cu;
    {
        const bool branch_taken_0x27184c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27184Cu;
        // 0x271850: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27184c) {
            ctx->pc = 0x2717A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2717a8;
        }
    }
    ctx->pc = 0x271854u;
    // 0x271854: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x271854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x271858: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x271858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27185c: 0xc095c72  jal         func_2571C8
    ctx->pc = 0x27185Cu;
    SET_GPR_U32(ctx, 31, 0x271864u);
    ctx->pc = 0x271860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27185Cu;
    // 0x271860: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2571C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2571C8u, 0x27185Cu, 0x271864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271864u;
label_271864:
    // 0x271864: 0x5840000e  blezl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x271864u;
    {
        const bool branch_taken_0x271864 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x271864) {
            ctx->pc = 0x271868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271864u;
            // 0x271868: 0x8fa200e4  lw          $v0, 0xE4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2718A0u;
            goto label_2718a0;
        }
    }
    ctx->pc = 0x27186Cu;
    // 0x27186c: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x27186cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271870: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x271870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271874: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x271874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_271878:
    // 0x271878: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x271878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27187c: 0x8fa700e0  lw          $a3, 0xE0($sp)
    ctx->pc = 0x27187cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x271880: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x271880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271884: 0x8fa800e4  lw          $t0, 0xE4($sp)
    ctx->pc = 0x271884u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x271888: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x271888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x27188c: 0xc096670  jal         func_2599C0
    ctx->pc = 0x27188Cu;
    SET_GPR_U32(ctx, 31, 0x271894u);
    ctx->pc = 0x271890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27188Cu;
    // 0x271890: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2599C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2599C0u, 0x27188Cu, 0x271894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271894u;
label_271894:
    // 0x271894: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x271894u;
    {
        const bool branch_taken_0x271894 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x271894) {
            ctx->pc = 0x271898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271894u;
            // 0x271898: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271878;
        }
    }
    ctx->pc = 0x27189Cu;
    // 0x27189c: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x27189cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_2718a0:
    // 0x2718a0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2718a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2718a4: 0xc6a50000  lwc1        $f5, 0x0($s5)
    ctx->pc = 0x2718a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2718a8: 0x3463ffdf  ori         $v1, $v1, 0xFFDF
    ctx->pc = 0x2718a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65503);
    // 0x2718ac: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x2718acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2718b0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2718b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2718b4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2718b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2718b8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2718b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2718bc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2718bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2718c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2718c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2718c4: 0xc6a20004  lwc1        $f2, 0x4($s5)
    ctx->pc = 0x2718c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2718c8: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x2718c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x2718cc: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x2718ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2718d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2718d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2718d4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2718d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2718d8: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x2718d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x2718dc: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x2718dcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2718e0: 0x8fa600f8  lw          $a2, 0xF8($sp)
    ctx->pc = 0x2718e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2718e4: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x2718e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2718e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2718e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2718ec: 0x8fa800f0  lw          $t0, 0xF0($sp)
    ctx->pc = 0x2718ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2718f0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2718f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2718f4: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x2718f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2718f8: 0x8fa900f4  lw          $t1, 0xF4($sp)
    ctx->pc = 0x2718f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x2718fc: 0xe7a400b8  swc1        $f4, 0xB8($sp)
    ctx->pc = 0x2718fcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x271900: 0xaec20010  sw          $v0, 0x10($s6)
    ctx->pc = 0x271900u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 2));
    // 0x271904: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x271904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x271908: 0xc09640e  jal         func_259038
    ctx->pc = 0x271908u;
    SET_GPR_U32(ctx, 31, 0x271910u);
    ctx->pc = 0x27190Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271908u;
    // 0x27190c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x271908u, 0x271910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271910u;
label_271910:
    // 0x271910: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x271910u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271914: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x271914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x271918: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x271918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x27191c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x27191Cu;
    {
        const bool branch_taken_0x27191c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x271920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27191Cu;
        // 0x271920: 0xaec20010  sw          $v0, 0x10($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27191c) {
            ctx->pc = 0x271964u;
            goto label_271964;
        }
    }
    ctx->pc = 0x271924u;
    // 0x271924: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x271924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x271928: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x271928u;
    {
        const bool branch_taken_0x271928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271928u;
        // 0x27192c: 0xc7a00090  lwc1        $f0, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x271928) {
            ctx->pc = 0x271944u;
            goto label_271944;
        }
    }
    ctx->pc = 0x271930u;
    // 0x271930: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x271930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x271934: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x271934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271938: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x271938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x27193c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x27193cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x271940: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x271940u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_271944:
    // 0x271944: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x271944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x271948: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x271948u;
    {
        const bool branch_taken_0x271948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271948u;
        // 0x27194c: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x271948) {
            ctx->pc = 0x271964u;
            goto label_271964;
        }
    }
    ctx->pc = 0x271950u;
    // 0x271950: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x271950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x271954: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x271954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271958: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x271958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x27195c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x27195cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x271960: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x271960u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_271964:
    // 0x271964: 0xdfbf0190  ld          $ra, 0x190($sp)
    ctx->pc = 0x271964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x271968: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x271968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27196c: 0xdfbe0180  ld          $fp, 0x180($sp)
    ctx->pc = 0x27196cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x271970: 0xdfb70170  ld          $s7, 0x170($sp)
    ctx->pc = 0x271970u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x271974: 0xdfb60160  ld          $s6, 0x160($sp)
    ctx->pc = 0x271974u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x271978: 0xdfb50150  ld          $s5, 0x150($sp)
    ctx->pc = 0x271978u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x27197c: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x27197cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x271980: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x271980u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x271984: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x271984u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x271988: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x271988u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x27198c: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x27198cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x271990: 0x3e00008  jr          $ra
    ctx->pc = 0x271990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271990u;
        // 0x271994: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271998u;
}

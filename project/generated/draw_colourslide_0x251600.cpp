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

// Function: draw_colourslide
// Address: 0x251600 - 0x251764
void draw_colourslide_0x251600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("draw_colourslide_0x251600");
#endif

    switch (ctx->pc) {
        case 0x25163cu: goto label_25163c;
        case 0x2516b0u: goto label_2516b0;
        case 0x25171cu: goto label_25171c;
        case 0x251740u: goto label_251740;
        default: break;
    }

    ctx->pc = 0x251600u;

    // 0x251600: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x251600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x251604: 0xc78ca1fc  lwc1        $f12, -0x5E04($gp)
    ctx->pc = 0x251604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x251608: 0xe7b80070  swc1        $f24, 0x70($sp)
    ctx->pc = 0x251608u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x25160c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25160cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x251610: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x251610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x251614: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x251614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x251618: 0xc78da200  lwc1        $f13, -0x5E00($gp)
    ctx->pc = 0x251618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25161c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25161cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251620: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x251620u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x251624: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x251624u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x251628: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x251628u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x25162c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x25162cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x251630: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x251630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x251634: 0xc08b984  jal         func_22E610
    ctx->pc = 0x251634u;
    SET_GPR_U32(ctx, 31, 0x25163Cu);
    ctx->pc = 0x251638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251634u;
    // 0x251638: 0x4600c386  mov.s       $f14, $f24 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E610u, 0x251634u, 0x25163Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25163Cu;
label_25163c:
    // 0x25163c: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x25163cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x251640: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x251640u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x251644: 0x96090000  lhu         $t1, 0x0($s0)
    ctx->pc = 0x251644u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x251648: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x251648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25164c: 0x96080002  lhu         $t0, 0x2($s0)
    ctx->pc = 0x25164cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x251650: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x251650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251654: 0x960a0006  lhu         $t2, 0x6($s0)
    ctx->pc = 0x251654u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x251658: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x251658u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x25165c: 0x96070000  lhu         $a3, 0x0($s0)
    ctx->pc = 0x25165cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x251660: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x251660u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251664: 0x10a4021  addu        $t0, $t0, $t2
    ctx->pc = 0x251664u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x251668: 0x2529fffe  addiu       $t1, $t1, -0x2
    ctx->pc = 0x251668u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967294));
    // 0x25166c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x25166cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x251670: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x251670u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x251674: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x251674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x251678: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x251678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25167c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x25167cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x251680: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x251680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x251684: 0xafa7001c  sw          $a3, 0x1C($sp)
    ctx->pc = 0x251684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 7));
    // 0x251688: 0xafab0024  sw          $t3, 0x24($sp)
    ctx->pc = 0x251688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 11));
    // 0x25168c: 0xafa90028  sw          $t1, 0x28($sp)
    ctx->pc = 0x25168cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 9));
    // 0x251690: 0xafa8002c  sw          $t0, 0x2C($sp)
    ctx->pc = 0x251690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 8));
    // 0x251694: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x251694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x251698: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x251698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x25169c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x25169cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2516a0: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x2516a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x2516a4: 0xafab0018  sw          $t3, 0x18($sp)
    ctx->pc = 0x2516a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 11));
    // 0x2516a8: 0xc0ae284  jal         func_2B8A10
    ctx->pc = 0x2516A8u;
    SET_GPR_U32(ctx, 31, 0x2516B0u);
    ctx->pc = 0x2516ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2516A8u;
    // 0x2516ac: 0xafa80020  sw          $t0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8A10u, 0x2516A8u, 0x2516B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2516B0u;
label_2516b0:
    // 0x2516b0: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x2516b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2516b4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2516b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2516b8: 0xc780a204  lwc1        $f0, -0x5DFC($gp)
    ctx->pc = 0x2516b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2516bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2516bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2516c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2516c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2516c4: 0x96050002  lhu         $a1, 0x2($s0)
    ctx->pc = 0x2516c4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2516c8: 0x4600c001  sub.s       $f0, $f24, $f0
    ctx->pc = 0x2516c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
    // 0x2516cc: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2516ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2516d0: 0x4485a000  mtc1        $a1, $f20
    ctx->pc = 0x2516d0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2516d4: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2516d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2516d8: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x2516d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2516dc: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x2516dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x2516e0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2516e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2516e4: 0x4483b800  mtc1        $v1, $f23
    ctx->pc = 0x2516e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2516e8: 0x4680bde0  cvt.s.w     $f23, $f23
    ctx->pc = 0x2516e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[23], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
    // 0x2516ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2516ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2516f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2516f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2516f4: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x2516f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2516f8: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x2516f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x2516fc: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x2516fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x251700: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x251700u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x251704: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x251704u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x251708: 0x4618a501  sub.s       $f20, $f20, $f24
    ctx->pc = 0x251708u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[24]);
    // 0x25170c: 0x4615a540  add.s       $f21, $f20, $f21
    ctx->pc = 0x25170cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x251710: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x251710u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x251714: 0xc0ae172  jal         func_2B85C8
    ctx->pc = 0x251714u;
    SET_GPR_U32(ctx, 31, 0x25171Cu);
    ctx->pc = 0x251718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251714u;
    // 0x251718: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B85C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B85C8u, 0x251714u, 0x25171Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25171Cu;
label_25171c:
    // 0x25171c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x25171cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x251720: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x251720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x251724: 0x4618b381  sub.s       $f14, $f22, $f24
    ctx->pc = 0x251724u;
    ctx->f[14] = FPU_SUB_S(ctx->f[22], ctx->f[24]);
    // 0x251728: 0x4618bb00  add.s       $f12, $f23, $f24
    ctx->pc = 0x251728u;
    ctx->f[12] = FPU_ADD_S(ctx->f[23], ctx->f[24]);
    // 0x25172c: 0x3c047f7f  lui         $a0, 0x7F7F
    ctx->pc = 0x25172cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32639 << 16));
    // 0x251730: 0x460dabc1  sub.s       $f15, $f21, $f13
    ctx->pc = 0x251730u;
    ctx->f[15] = FPU_SUB_S(ctx->f[21], ctx->f[13]);
    // 0x251734: 0x34847f80  ori         $a0, $a0, 0x7F80
    ctx->pc = 0x251734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32640);
    // 0x251738: 0xc0ae172  jal         func_2B85C8
    ctx->pc = 0x251738u;
    SET_GPR_U32(ctx, 31, 0x251740u);
    ctx->pc = 0x25173Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251738u;
    // 0x25173c: 0x460da340  add.s       $f13, $f20, $f13 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[20], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B85C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B85C8u, 0x251738u, 0x251740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251740u;
label_251740:
    // 0x251740: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x251740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x251744: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x251744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x251748: 0xc7b80070  lwc1        $f24, 0x70($sp)
    ctx->pc = 0x251748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x25174c: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x25174cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x251750: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x251750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x251754: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x251754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x251758: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x251758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25175c: 0x3e00008  jr          $ra
    ctx->pc = 0x25175Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25175Cu;
        // 0x251760: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25175Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251764u;
}

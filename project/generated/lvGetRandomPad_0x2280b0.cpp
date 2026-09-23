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

// Function: lvGetRandomPad
// Address: 0x2280b0 - 0x22836c
void lvGetRandomPad_0x2280b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvGetRandomPad_0x2280b0");
#endif

    switch (ctx->pc) {
        case 0x2280ecu: goto label_2280ec;
        case 0x22810cu: goto label_22810c;
        case 0x2281b0u: goto label_2281b0;
        case 0x2281dcu: goto label_2281dc;
        case 0x2281f0u: goto label_2281f0;
        case 0x228240u: goto label_228240;
        case 0x228264u: goto label_228264;
        case 0x228298u: goto label_228298;
        case 0x2282c0u: goto label_2282c0;
        case 0x2282f4u: goto label_2282f4;
        default: break;
    }

    ctx->pc = 0x2280b0u;

    // 0x2280b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2280b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2280b4: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2280b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2280b8: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2280b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2280bc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2280bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2280c0: 0x8f849f70  lw          $a0, -0x6090($gp)
    ctx->pc = 0x2280c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2280c4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2280c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2280c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2280c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2280cc: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2280ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2280d0: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2280d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2280d4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2280d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2280d8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2280d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2280dc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2280dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2280e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2280e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2280e4: 0xc089ee4  jal         func_227B90
    ctx->pc = 0x2280E4u;
    SET_GPR_U32(ctx, 31, 0x2280ECu);
    ctx->pc = 0x2280E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2280E4u;
    // 0x2280e8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B90u, 0x2280E4u, 0x2280ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2280ECu;
label_2280ec:
    // 0x2280ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2280ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2280f0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2280F0u;
    {
        const bool branch_taken_0x2280f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2280f0) {
            ctx->pc = 0x228104u;
            goto label_228104;
        }
    }
    ctx->pc = 0x2280F8u;
    // 0x2280f8: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x2280f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2280fc: 0x14a00017  bnez        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2280FCu;
    {
        const bool branch_taken_0x2280fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x228100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2280FCu;
        // 0x228100: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2280fc) {
            ctx->pc = 0x22815Cu;
            goto label_22815c;
        }
    }
    ctx->pc = 0x228104u;
label_228104:
    // 0x228104: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x228104u;
    SET_GPR_U32(ctx, 31, 0x22810Cu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x228104u, 0x22810Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22810Cu;
label_22810c:
    // 0x22810c: 0xc782a348  lwc1        $f2, -0x5CB8($gp)
    ctx->pc = 0x22810cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228110: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x228110u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x228114: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x228114u;
    {
        const bool branch_taken_0x228114 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x228118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228114u;
        // 0x228118: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228114) {
            ctx->pc = 0x228128u;
            goto label_228128;
        }
    }
    ctx->pc = 0x22811Cu;
    // 0x22811c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22811cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228120: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x228120u;
    {
        const bool branch_taken_0x228120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228120u;
        // 0x228124: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x228120) {
            ctx->pc = 0x22813Cu;
            goto label_22813c;
        }
    }
    ctx->pc = 0x228128u;
label_228128:
    // 0x228128: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x228128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22812c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22812cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x228130: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x228130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228134: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x228134u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x228138: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x228138u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_22813c:
    // 0x22813c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x22813cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x228140: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x228140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228144: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x228144u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x228148: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x228148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x22814c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22814cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x228150: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x228150u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x228154: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x228154u;
    {
        const bool branch_taken_0x228154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228154u;
        // 0x228158: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228154) {
            ctx->pc = 0x228340u;
            goto label_228340;
        }
    }
    ctx->pc = 0x22815Cu;
label_22815c:
    // 0x22815c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x22815cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x228160: 0x2466c4a8  addiu       $a2, $v1, -0x3B58
    ctx->pc = 0x228160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952104));
    // 0x228164: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x228164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x228168: 0x8cc30050  lw          $v1, 0x50($a2)
    ctx->pc = 0x228168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x22816c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22816cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228170: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x228170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x228174: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x228174u;
    {
        const bool branch_taken_0x228174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x228178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228174u;
        // 0x228178: 0x3c0201fc  lui         $v0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228174) {
            ctx->pc = 0x228190u;
            goto label_228190;
        }
    }
    ctx->pc = 0x22817Cu;
    // 0x22817c: 0x8ee20018  lw          $v0, 0x18($s7)
    ctx->pc = 0x22817cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
    // 0x228180: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x228180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x228184: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x228184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x228188: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x228188u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x22818c: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x22818cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
label_228190:
    // 0x228190: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x228190u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228194: 0x245ecc78  addiu       $fp, $v0, -0x3388
    ctx->pc = 0x228194u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954104));
    // 0x228198: 0x18a00025  blez        $a1, . + 4 + (0x25 << 2)
    ctx->pc = 0x228198u;
    {
        const bool branch_taken_0x228198 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x22819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228198u;
        // 0x22819c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228198) {
            ctx->pc = 0x228230u;
            goto label_228230;
        }
    }
    ctx->pc = 0x2281A0u;
    // 0x2281a0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2281a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2281a4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2281a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2281a8: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x2281a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2281ac: 0x0  nop
    ctx->pc = 0x2281acu;
    // NOP
label_2281b0:
    // 0x2281b0: 0x8ec20050  lw          $v0, 0x50($s6)
    ctx->pc = 0x2281b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 80)));
    // 0x2281b4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2281b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2281b8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2281B8u;
    {
        const bool branch_taken_0x2281b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2281b8) {
            ctx->pc = 0x2281BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2281B8u;
            // 0x2281bc: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2281E4u;
            goto label_2281e4;
        }
    }
    ctx->pc = 0x2281C0u;
    // 0x2281c0: 0x8ec20044  lw          $v0, 0x44($s6)
    ctx->pc = 0x2281c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 68)));
    // 0x2281c4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2281c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2281c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2281C8u;
    {
        const bool branch_taken_0x2281c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2281CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2281C8u;
        // 0x2281cc: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2281c8) {
            ctx->pc = 0x2281E4u;
            goto label_2281e4;
        }
    }
    ctx->pc = 0x2281D0u;
    // 0x2281d0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2281d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2281d4: 0xc08a398  jal         func_228E60
    ctx->pc = 0x2281D4u;
    SET_GPR_U32(ctx, 31, 0x2281DCu);
    ctx->pc = 0x2281D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2281D4u;
    // 0x2281d8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228E60u, 0x2281D4u, 0x2281DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2281DCu;
label_2281dc:
    // 0x2281dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2281DCu;
    {
        const bool branch_taken_0x2281dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2281dc) {
            ctx->pc = 0x2281F0u;
            goto label_2281f0;
        }
    }
    ctx->pc = 0x2281E4u;
label_2281e4:
    // 0x2281e4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2281e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2281e8: 0xc08a362  jal         func_228D88
    ctx->pc = 0x2281E8u;
    SET_GPR_U32(ctx, 31, 0x2281F0u);
    ctx->pc = 0x2281ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2281E8u;
    // 0x2281ec: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228D88u, 0x2281E8u, 0x2281F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2281F0u;
label_2281f0:
    // 0x2281f0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2281F0u;
    {
        const bool branch_taken_0x2281f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2281f0) {
            ctx->pc = 0x2281F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2281F0u;
            // 0x2281f4: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228220u;
            goto label_228220;
        }
    }
    ctx->pc = 0x2281F8u;
    // 0x2281f8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2281f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2281fc: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2281fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x228200: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x228200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x228204: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x228204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x228208: 0x54730005  bnel        $v1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x228208u;
    {
        const bool branch_taken_0x228208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x228208) {
            ctx->pc = 0x22820Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228208u;
            // 0x22820c: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228220u;
            goto label_228220;
        }
    }
    ctx->pc = 0x228210u;
    // 0x228210: 0xae900000  sw          $s0, 0x0($s4)
    ctx->pc = 0x228210u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
    // 0x228214: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x228214u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x228218: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x228218u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x22821c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x22821cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_228220:
    // 0x228220: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x228220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x228224: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x228224u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x228228: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x228228u;
    {
        const bool branch_taken_0x228228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228228u;
        // 0x22822c: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228228) {
            ctx->pc = 0x2281B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2281b0;
        }
    }
    ctx->pc = 0x228230u;
label_228230:
    // 0x228230: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x228230u;
    {
        const bool branch_taken_0x228230 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x228230) {
            ctx->pc = 0x22825Cu;
            goto label_22825c;
        }
    }
    ctx->pc = 0x228238u;
    // 0x228238: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x228238u;
    SET_GPR_U32(ctx, 31, 0x228240u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x228238u, 0x228240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228240u;
label_228240:
    // 0x228240: 0x8f83a348  lw          $v1, -0x5CB8($gp)
    ctx->pc = 0x228240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x228244: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x228244u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x228248: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x228248u;
    {
        const bool branch_taken_0x228248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x228248) {
            ctx->pc = 0x22824Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228248u;
            // 0x22824c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x228250u;
            goto label_228250;
        }
    }
    ctx->pc = 0x228250u;
label_228250:
    // 0x228250: 0x1010  mfhi        $v0
    ctx->pc = 0x228250u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x228254: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x228254u;
    {
        const bool branch_taken_0x228254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228254u;
        // 0x228258: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228254) {
            ctx->pc = 0x228340u;
            goto label_228340;
        }
    }
    ctx->pc = 0x22825Cu;
label_22825c:
    // 0x22825c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x22825Cu;
    SET_GPR_U32(ctx, 31, 0x228264u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x22825Cu, 0x228264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228264u;
label_228264:
    // 0x228264: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x228264u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x228268: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x228268u;
    {
        const bool branch_taken_0x228268 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x228268) {
            ctx->pc = 0x22826Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228268u;
            // 0x22826c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x228270u;
            goto label_228270;
        }
    }
    ctx->pc = 0x228270u;
label_228270:
    // 0x228270: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x228270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x228274: 0x24081210  addiu       $t0, $zero, 0x1210
    ctx->pc = 0x228274u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x228278: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x228278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x22827c: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x22827cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x228280: 0x8e290020  lw          $t1, 0x20($s1)
    ctx->pc = 0x228280u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x228284: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x228284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x228288: 0x2010  mfhi        $a0
    ctx->pc = 0x228288u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x22828c: 0x3810  mfhi        $a3
    ctx->pc = 0x22828cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x228290: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x228290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x228294: 0x0  nop
    ctx->pc = 0x228294u;
    // NOP
label_228298:
    // 0x228298: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x228298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22829c: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x22829cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x2282a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2282a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2282a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2282a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2282a8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2282a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2282ac: 0x18c00020  blez        $a2, . + 4 + (0x20 << 2)
    ctx->pc = 0x2282ACu;
    {
        const bool branch_taken_0x2282ac = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2282B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2282ACu;
        // 0x2282b0: 0x8c43000c  lw          $v1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2282ac) {
            ctx->pc = 0x228330u;
            goto label_228330;
        }
    }
    ctx->pc = 0x2282B4u;
    // 0x2282b4: 0x8f85b238  lw          $a1, -0x4DC8($gp)
    ctx->pc = 0x2282b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2282b8: 0x2085818  mult        $t3, $s0, $t0
    ctx->pc = 0x2282b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x2282bc: 0x0  nop
    ctx->pc = 0x2282bcu;
    // NOP
label_2282c0:
    // 0x2282c0: 0x1651021  addu        $v0, $t3, $a1
    ctx->pc = 0x2282c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x2282c4: 0x52e20017  beql        $s7, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2282C4u;
    {
        const bool branch_taken_0x2282c4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x2282c4) {
            ctx->pc = 0x2282C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2282C4u;
            // 0x2282c8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228324u;
            goto label_228324;
        }
    }
    ctx->pc = 0x2282CCu;
    // 0x2282cc: 0x8c4202a8  lw          $v0, 0x2A8($v0)
    ctx->pc = 0x2282ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 680)));
    // 0x2282d0: 0x54430014  bnel        $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2282D0u;
    {
        const bool branch_taken_0x2282d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2282d0) {
            ctx->pc = 0x2282D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2282D0u;
            // 0x2282d4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228324u;
            goto label_228324;
        }
    }
    ctx->pc = 0x2282D8u;
    // 0x2282d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2282d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2282dc: 0x921026  xor         $v0, $a0, $s2
    ctx->pc = 0x2282dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 18));
    // 0x2282e0: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x2282e0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x2282e4: 0x14870012  bne         $a0, $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x2282E4u;
    {
        const bool branch_taken_0x2282e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        ctx->pc = 0x2282E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2282E4u;
        // 0x2282e8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2282e4) {
            ctx->pc = 0x228330u;
            goto label_228330;
        }
    }
    ctx->pc = 0x2282ECu;
    // 0x2282ec: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2282ECu;
    SET_GPR_U32(ctx, 31, 0x2282F4u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2282ECu, 0x2282F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2282F4u;
label_2282f4:
    // 0x2282f4: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x2282f4u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2282f8: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2282F8u;
    {
        const bool branch_taken_0x2282f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2282f8) {
            ctx->pc = 0x2282FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2282F8u;
            // 0x2282fc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x228300u;
            goto label_228300;
        }
    }
    ctx->pc = 0x228300u;
label_228300:
    // 0x228300: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x228300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x228304: 0x2010  mfhi        $a0
    ctx->pc = 0x228304u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x228308: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x228308u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22830c: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x22830cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x228310: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x228310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x228314: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x228314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x228318: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x228318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22831c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22831Cu;
    {
        const bool branch_taken_0x22831c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22831Cu;
        // 0x228320: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22831c) {
            ctx->pc = 0x22833Cu;
            goto label_22833c;
        }
    }
    ctx->pc = 0x228324u;
label_228324:
    // 0x228324: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x228324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x228328: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x228328u;
    {
        const bool branch_taken_0x228328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228328u;
        // 0x22832c: 0x2085818  mult        $t3, $s0, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x228328) {
            ctx->pc = 0x2282C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2282c0;
        }
    }
    ctx->pc = 0x228330u;
label_228330:
    // 0x228330: 0x506affd9  beql        $v1, $t2, . + 4 + (-0x27 << 2)
    ctx->pc = 0x228330u;
    {
        const bool branch_taken_0x228330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 10));
        if (branch_taken_0x228330) {
            ctx->pc = 0x228334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228330u;
            // 0x228334: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228298;
        }
    }
    ctx->pc = 0x228338u;
    // 0x228338: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x228338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_22833c:
    // 0x22833c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x22833cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_228340:
    // 0x228340: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x228340u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x228344: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x228344u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x228348: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x228348u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22834c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x22834cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x228350: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x228350u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228354: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x228354u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x228358: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x228358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22835c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22835cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x228360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228364: 0x3e00008  jr          $ra
    ctx->pc = 0x228364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228364u;
        // 0x228368: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22836Cu;
}

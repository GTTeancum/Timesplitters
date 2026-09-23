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

// Function: drawStoryCompleted
// Address: 0x2110d0 - 0x2114d4
void drawStoryCompleted_0x2110d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("drawStoryCompleted_0x2110d0");
#endif

    switch (ctx->pc) {
        case 0x211110u: goto label_211110;
        case 0x211120u: goto label_211120;
        case 0x211128u: goto label_211128;
        case 0x211170u: goto label_211170;
        case 0x21119cu: goto label_21119c;
        case 0x2111d4u: goto label_2111d4;
        case 0x21127cu: goto label_21127c;
        case 0x2112a8u: goto label_2112a8;
        case 0x2112e0u: goto label_2112e0;
        case 0x2112e8u: goto label_2112e8;
        case 0x2112f4u: goto label_2112f4;
        case 0x211320u: goto label_211320;
        case 0x211388u: goto label_211388;
        case 0x2113b4u: goto label_2113b4;
        case 0x2113dcu: goto label_2113dc;
        case 0x2113fcu: goto label_2113fc;
        case 0x211428u: goto label_211428;
        case 0x21145cu: goto label_21145c;
        case 0x211464u: goto label_211464;
        case 0x211470u: goto label_211470;
        case 0x2114a0u: goto label_2114a0;
        default: break;
    }

    ctx->pc = 0x2110d0u;

    // 0x2110d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2110d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2110d4: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2110d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2110d8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2110d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2110dc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2110dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2110e0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2110e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2110e4: 0x3c150033  lui         $s5, 0x33
    ctx->pc = 0x2110e4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
    // 0x2110e8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2110e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2110ec: 0x3c14002f  lui         $s4, 0x2F
    ctx->pc = 0x2110ecu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)47 << 16));
    // 0x2110f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2110f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2110f4: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x2110f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2110f8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2110f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2110fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2110fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x211100: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x211100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x211104: 0x26b099f0  addiu       $s0, $s5, -0x6610
    ctx->pc = 0x211104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941168));
    // 0x211108: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x211108u;
    SET_GPR_U32(ctx, 31, 0x211110u);
    ctx->pc = 0x21110Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211108u;
    // 0x21110c: 0xffb70070  sd          $s7, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x211108u, 0x211110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211110u;
label_211110:
    // 0x211110: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x211110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x211114: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x211114u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x211118: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x211118u;
    SET_GPR_U32(ctx, 31, 0x211120u);
    ctx->pc = 0x21111Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211118u;
    // 0x21111c: 0x3980b  movn        $s3, $zero, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x211118u, 0x211120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211120u;
label_211120:
    // 0x211120: 0xc08089c  jal         func_202270
    ctx->pc = 0x211120u;
    SET_GPR_U32(ctx, 31, 0x211128u);
    ctx->pc = 0x211124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211120u;
    // 0x211124: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x211120u, 0x211128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211128u;
label_211128:
    // 0x211128: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x211128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x21112c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x21112cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211130: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x211130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x211134: 0x26852c18  addiu       $a1, $s4, 0x2C18
    ctx->pc = 0x211134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 11288));
    // 0x211138: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x211138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21113c: 0x8e06005c  lw          $a2, 0x5C($s0)
    ctx->pc = 0x21113cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x211140: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x211140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x211144: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x211144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x211148: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x211148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21114c: 0x24420026  addiu       $v0, $v0, 0x26
    ctx->pc = 0x21114cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 38));
    // 0x211150: 0x86100b  movn        $v0, $a0, $a2
    ctx->pc = 0x211150u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x211154: 0x8f969da8  lw          $s6, -0x6258($gp)
    ctx->pc = 0x211154u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
    // 0x211158: 0x8cb10708  lw          $s1, 0x708($a1)
    ctx->pc = 0x211158u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1800)));
    // 0x21115c: 0x24430009  addiu       $v1, $v0, 0x9
    ctx->pc = 0x21115cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x211160: 0x2452000e  addiu       $s2, $v0, 0xE
    ctx->pc = 0x211160u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
    // 0x211164: 0x66900b  movn        $s2, $v1, $a2
    ctx->pc = 0x211164u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    // 0x211168: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x211168u;
    SET_GPR_U32(ctx, 31, 0x211170u);
    ctx->pc = 0x21116Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211168u;
    // 0x21116c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x211168u, 0x211170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211170u;
label_211170:
    // 0x211170: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x211170u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x211174: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x211174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x211178: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x211178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21117c: 0x3c074078  lui         $a3, 0x4078
    ctx->pc = 0x21117cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16504 << 16));
    // 0x211180: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x211180u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x211184: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x211184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211188: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x211188u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21118c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21118cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211190: 0x34e77880  ori         $a3, $a3, 0x7880
    ctx->pc = 0x211190u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30848);
    // 0x211194: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x211194u;
    SET_GPR_U32(ctx, 31, 0x21119Cu);
    ctx->pc = 0x211198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211194u;
    // 0x211198: 0x24085080  addiu       $t0, $zero, 0x5080 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x211194u, 0x21119Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21119Cu;
label_21119c:
    // 0x21119c: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x21119cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x2111a0: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x2111a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x2111a4: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x2111a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2111a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2111a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2111ac: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x2111acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2111b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2111B0u;
    {
        const bool branch_taken_0x2111b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2111B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111B0u;
        // 0x2111b4: 0x463007  srav        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2111b0) {
            ctx->pc = 0x2111C0u;
            goto label_2111c0;
        }
    }
    ctx->pc = 0x2111B8u;
    // 0x2111b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2111B8u;
    {
        const bool branch_taken_0x2111b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2111BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111B8u;
        // 0x2111bc: 0x26420002  addiu       $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2111b8) {
            ctx->pc = 0x2111C4u;
            goto label_2111c4;
        }
    }
    ctx->pc = 0x2111C0u;
label_2111c0:
    // 0x2111c0: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x2111c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_2111c4:
    // 0x2111c4: 0x469021  addu        $s2, $v0, $a2
    ctx->pc = 0x2111c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2111c8: 0x8f90a01c  lw          $s0, -0x5FE4($gp)
    ctx->pc = 0x2111c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x2111cc: 0xc08089c  jal         func_202270
    ctx->pc = 0x2111CCu;
    SET_GPR_U32(ctx, 31, 0x2111D4u);
    ctx->pc = 0x2111D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2111CCu;
    // 0x2111d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x2111CCu, 0x2111D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2111D4u;
label_2111d4:
    // 0x2111d4: 0x3c170033  lui         $s7, 0x33
    ctx->pc = 0x2111d4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)51 << 16));
    // 0x2111d8: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58
    ctx->pc = 0x2111d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x2111dc: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x2111dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2111e0: 0x8c640050  lw          $a0, 0x50($v1)
    ctx->pc = 0x2111e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x2111e4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2111e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2111e8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2111e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2111ec: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x2111ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x2111f0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2111f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2111f4: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2111F4u;
    {
        const bool branch_taken_0x2111f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2111F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111F4u;
        // 0x2111f8: 0x93829ab5  lbu         $v0, -0x654B($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2111f4) {
            ctx->pc = 0x21125Cu;
            goto label_21125c;
        }
    }
    ctx->pc = 0x2111FCu;
    // 0x2111fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2111fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x211200: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x211200u;
    {
        const bool branch_taken_0x211200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211200u;
        // 0x211204: 0x8f829a9c  lw          $v0, -0x6564($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211200) {
            ctx->pc = 0x211218u;
            goto label_211218;
        }
    }
    ctx->pc = 0x211208u;
    // 0x211208: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x211208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x21120c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x21120cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x211210: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x211210u;
    {
        const bool branch_taken_0x211210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211210u;
        // 0x211214: 0x31843  sra         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211210) {
            ctx->pc = 0x211220u;
            goto label_211220;
        }
    }
    ctx->pc = 0x211218u;
label_211218:
    // 0x211218: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x211218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x21121c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x21121cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_211220:
    // 0x211220: 0x839021  addu        $s2, $a0, $v1
    ctx->pc = 0x211220u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x211224: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x211224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x211228: 0x26852c18  addiu       $a1, $s4, 0x2C18
    ctx->pc = 0x211228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 11288));
    // 0x21122c: 0x8f84b45c  lw          $a0, -0x4BA4($gp)
    ctx->pc = 0x21122cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947932)));
    // 0x211230: 0x3c105050  lui         $s0, 0x5050
    ctx->pc = 0x211230u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)20560 << 16));
    // 0x211234: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x211234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x211238: 0x3c037f7f  lui         $v1, 0x7F7F
    ctx->pc = 0x211238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32639 << 16));
    // 0x21123c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x21123cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x211240: 0x30840020  andi        $a0, $a0, 0x20
    ctx->pc = 0x211240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x211244: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x211244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211248: 0x36105080  ori         $s0, $s0, 0x5080
    ctx->pc = 0x211248u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)20608);
    // 0x21124c: 0x34637f80  ori         $v1, $v1, 0x7F80
    ctx->pc = 0x21124cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32640);
    // 0x211250: 0x64800b  movn        $s0, $v1, $a0
    ctx->pc = 0x211250u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x211254: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x211254u;
    {
        const bool branch_taken_0x211254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211254u;
        // 0x211258: 0x8cb10718  lw          $s1, 0x718($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211254) {
            ctx->pc = 0x211274u;
            goto label_211274;
        }
    }
    ctx->pc = 0x21125Cu;
label_21125c:
    // 0x21125c: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x21125cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x211260: 0x26842c18  addiu       $a0, $s4, 0x2C18
    ctx->pc = 0x211260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 11288));
    // 0x211264: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x211264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x211268: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x211268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21126c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21126cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211270: 0x8c710710  lw          $s1, 0x710($v1)
    ctx->pc = 0x211270u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1808)));
label_211274:
    // 0x211274: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x211274u;
    SET_GPR_U32(ctx, 31, 0x21127Cu);
    ctx->pc = 0x211278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211274u;
    // 0x211278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x211274u, 0x21127Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21127Cu;
label_21127c:
    // 0x21127c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x21127cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x211280: 0x26a599f0  addiu       $a1, $s5, -0x6610
    ctx->pc = 0x211280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941168));
    // 0x211284: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x211284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x211288: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x211288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21128c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x21128cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x211290: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x211290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211294: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x211294u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x211298: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x211298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21129c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21129cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2112a0: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x2112A0u;
    SET_GPR_U32(ctx, 31, 0x2112A8u);
    ctx->pc = 0x2112A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2112A0u;
    // 0x2112a4: 0x24080050  addiu       $t0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x2112A0u, 0x2112A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2112A8u;
label_2112a8:
    // 0x2112a8: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x2112a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x2112ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2112acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2112b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2112B0u;
    {
        const bool branch_taken_0x2112b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2112B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2112B0u;
        // 0x2112b4: 0x8f829a9c  lw          $v0, -0x6564($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2112b0) {
            ctx->pc = 0x2112C8u;
            goto label_2112c8;
        }
    }
    ctx->pc = 0x2112B8u;
    // 0x2112b8: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x2112b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2112bc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2112bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2112c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2112C0u;
    {
        const bool branch_taken_0x2112c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2112C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2112C0u;
        // 0x2112c4: 0x31843  sra         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2112c0) {
            ctx->pc = 0x2112D0u;
            goto label_2112d0;
        }
    }
    ctx->pc = 0x2112C8u;
label_2112c8:
    // 0x2112c8: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x2112c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2112cc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2112ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2112d0:
    // 0x2112d0: 0x839021  addu        $s2, $a0, $v1
    ctx->pc = 0x2112d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2112d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2112d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2112d8: 0xc08089c  jal         func_202270
    ctx->pc = 0x2112D8u;
    SET_GPR_U32(ctx, 31, 0x2112E0u);
    ctx->pc = 0x2112DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2112D8u;
    // 0x2112dc: 0x26b099f0  addiu       $s0, $s5, -0x6610 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x2112D8u, 0x2112E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2112E0u;
label_2112e0:
    // 0x2112e0: 0xc0872ac  jal         func_21CAB0
    ctx->pc = 0x2112E0u;
    SET_GPR_U32(ctx, 31, 0x2112E8u);
    ctx->pc = 0x2112E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2112E0u;
    // 0x2112e4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CAB0u, 0x2112E0u, 0x2112E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2112E8u;
label_2112e8:
    // 0x2112e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2112e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2112ec: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x2112ECu;
    SET_GPR_U32(ctx, 31, 0x2112F4u);
    ctx->pc = 0x2112F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2112ECu;
    // 0x2112f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x2112ECu, 0x2112F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2112F4u;
label_2112f4:
    // 0x2112f4: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2112f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2112f8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2112f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2112fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2112fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x211300: 0x3c074078  lui         $a3, 0x4078
    ctx->pc = 0x211300u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16504 << 16));
    // 0x211304: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x211304u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x211308: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x211308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21130c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x21130cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x211310: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x211310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211314: 0x34e77880  ori         $a3, $a3, 0x7880
    ctx->pc = 0x211314u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30848);
    // 0x211318: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x211318u;
    SET_GPR_U32(ctx, 31, 0x211320u);
    ctx->pc = 0x21131Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211318u;
    // 0x21131c: 0x24085080  addiu       $t0, $zero, 0x5080 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x211318u, 0x211320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211320u;
label_211320:
    // 0x211320: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x211320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x211324: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x211324u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x211328: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x211328u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x21132c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21132cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x211330: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x211330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x211334: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x211334u;
    {
        const bool branch_taken_0x211334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x211338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211334u;
        // 0x211338: 0x463007  srav        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211334) {
            ctx->pc = 0x211344u;
            goto label_211344;
        }
    }
    ctx->pc = 0x21133Cu;
    // 0x21133c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21133Cu;
    {
        const bool branch_taken_0x21133c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21133Cu;
        // 0x211340: 0x26420002  addiu       $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21133c) {
            ctx->pc = 0x211348u;
            goto label_211348;
        }
    }
    ctx->pc = 0x211344u;
label_211344:
    // 0x211344: 0x2642000a  addiu       $v0, $s2, 0xA
    ctx->pc = 0x211344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
label_211348:
    // 0x211348: 0x469021  addu        $s2, $v0, $a2
    ctx->pc = 0x211348u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x21134c: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x21134cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x211350: 0x26f0c4a8  addiu       $s0, $s7, -0x3B58
    ctx->pc = 0x211350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x211354: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x211354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x211358: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x211358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x21135c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x21135cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x211360: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x211360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x211364: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x211364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x211368: 0x5460004e  bnel        $v1, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x211368u;
    {
        const bool branch_taken_0x211368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x211368) {
            ctx->pc = 0x21136Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211368u;
            // 0x21136c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2114A4u;
            goto label_2114a4;
        }
    }
    ctx->pc = 0x211370u;
    // 0x211370: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x211370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x211374: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x211374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x211378: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x211378u;
    {
        const bool branch_taken_0x211378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x211378) {
            ctx->pc = 0x2113ACu;
            goto label_2113ac;
        }
    }
    ctx->pc = 0x211380u;
    // 0x211380: 0xc087fec  jal         func_21FFB0
    ctx->pc = 0x211380u;
    SET_GPR_U32(ctx, 31, 0x211388u);
    ctx->pc = 0x21FFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB0u, 0x211380u, 0x211388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211388u;
label_211388:
    // 0x211388: 0x8f849f70  lw          $a0, -0x6090($gp)
    ctx->pc = 0x211388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x21138c: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x21138cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x211390: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x211390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x211394: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x211394u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x211398: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x211398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21139c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21139cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2113a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2113a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2113a4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2113A4u;
    {
        const bool branch_taken_0x2113a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2113A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113A4u;
        // 0x2113a8: 0x8c500148  lw          $s0, 0x148($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2113a4) {
            ctx->pc = 0x2113D4u;
            goto label_2113d4;
        }
    }
    ctx->pc = 0x2113ACu;
label_2113ac:
    // 0x2113ac: 0xc087fec  jal         func_21FFB0
    ctx->pc = 0x2113ACu;
    SET_GPR_U32(ctx, 31, 0x2113B4u);
    ctx->pc = 0x21FFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB0u, 0x2113ACu, 0x2113B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2113B4u;
label_2113b4:
    // 0x2113b4: 0x8f849f70  lw          $a0, -0x6090($gp)
    ctx->pc = 0x2113b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2113b8: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x2113b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2113bc: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x2113bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2113c0: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x2113c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2113c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2113c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2113c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2113c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2113cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2113ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2113d0: 0x8c500154  lw          $s0, 0x154($v0)
    ctx->pc = 0x2113d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
label_2113d4:
    // 0x2113d4: 0xc08089c  jal         func_202270
    ctx->pc = 0x2113D4u;
    SET_GPR_U32(ctx, 31, 0x2113DCu);
    ctx->pc = 0x2113D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2113D4u;
    // 0x2113d8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x2113D4u, 0x2113DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2113DCu;
label_2113dc:
    // 0x2113dc: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x2113dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2113e0: 0x26842c18  addiu       $a0, $s4, 0x2C18
    ctx->pc = 0x2113e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 11288));
    // 0x2113e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2113e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2113e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2113e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2113ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2113ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2113f0: 0x8c510714  lw          $s1, 0x714($v0)
    ctx->pc = 0x2113f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1812)));
    // 0x2113f4: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x2113F4u;
    SET_GPR_U32(ctx, 31, 0x2113FCu);
    ctx->pc = 0x2113F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2113F4u;
    // 0x2113f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x2113F4u, 0x2113FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2113FCu;
label_2113fc:
    // 0x2113fc: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2113fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x211400: 0x26a599f0  addiu       $a1, $s5, -0x6610
    ctx->pc = 0x211400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941168));
    // 0x211404: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x211404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x211408: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x211408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21140c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x21140cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x211410: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x211410u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x211414: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x211414u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x211418: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x211418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21141c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21141cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211420: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x211420u;
    SET_GPR_U32(ctx, 31, 0x211428u);
    ctx->pc = 0x211424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211420u;
    // 0x211424: 0x24080050  addiu       $t0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x211420u, 0x211428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211428u;
label_211428:
    // 0x211428: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x211428u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x21142c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21142cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x211430: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x211430u;
    {
        const bool branch_taken_0x211430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211430u;
        // 0x211434: 0x8f829a9c  lw          $v0, -0x6564($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211430) {
            ctx->pc = 0x211448u;
            goto label_211448;
        }
    }
    ctx->pc = 0x211438u;
    // 0x211438: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x211438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x21143c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x21143cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x211440: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x211440u;
    {
        const bool branch_taken_0x211440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211440u;
        // 0x211444: 0x31843  sra         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211440) {
            ctx->pc = 0x211450u;
            goto label_211450;
        }
    }
    ctx->pc = 0x211448u;
label_211448:
    // 0x211448: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x211448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x21144c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x21144cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_211450:
    // 0x211450: 0x839021  addu        $s2, $a0, $v1
    ctx->pc = 0x211450u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x211454: 0xc08089c  jal         func_202270
    ctx->pc = 0x211454u;
    SET_GPR_U32(ctx, 31, 0x21145Cu);
    ctx->pc = 0x211458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211454u;
    // 0x211458: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x211454u, 0x21145Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21145Cu;
label_21145c:
    // 0x21145c: 0xc0872ac  jal         func_21CAB0
    ctx->pc = 0x21145Cu;
    SET_GPR_U32(ctx, 31, 0x211464u);
    ctx->pc = 0x211460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21145Cu;
    // 0x211460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CAB0u, 0x21145Cu, 0x211464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211464u;
label_211464:
    // 0x211464: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x211464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211468: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x211468u;
    SET_GPR_U32(ctx, 31, 0x211470u);
    ctx->pc = 0x21146Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211468u;
    // 0x21146c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x211468u, 0x211470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211470u;
label_211470:
    // 0x211470: 0x26a399f0  addiu       $v1, $s5, -0x6610
    ctx->pc = 0x211470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941168));
    // 0x211474: 0x22fc2  srl         $a1, $v0, 31
    ctx->pc = 0x211474u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x211478: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x211478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21147c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x21147cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x211480: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x211480u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x211484: 0x3c074078  lui         $a3, 0x4078
    ctx->pc = 0x211484u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16504 << 16));
    // 0x211488: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x211488u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21148c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x21148cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211490: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x211490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211494: 0x34e77880  ori         $a3, $a3, 0x7880
    ctx->pc = 0x211494u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30848);
    // 0x211498: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x211498u;
    SET_GPR_U32(ctx, 31, 0x2114A0u);
    ctx->pc = 0x21149Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211498u;
    // 0x21149c: 0x24085080  addiu       $t0, $zero, 0x5080 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x211498u, 0x2114A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2114A0u;
label_2114a0:
    // 0x2114a0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2114a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2114a4:
    // 0x2114a4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2114a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2114a8: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2114a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2114ac: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2114acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2114b0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2114b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2114b4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2114b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2114b8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2114b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2114bc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2114bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2114c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2114c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2114c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2114c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2114c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2114c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2114cc: 0x808089c  j           func_202270
    ctx->pc = 0x2114CCu;
    ctx->pc = 0x2114D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2114CCu;
    // 0x2114d0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    textSelect_0x202270(rdram, ctx, runtime); return;
    ctx->pc = 0x2114D4u;
}

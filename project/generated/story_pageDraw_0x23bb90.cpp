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

// Function: story_pageDraw
// Address: 0x23bb90 - 0x23be04
void story_pageDraw_0x23bb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("story_pageDraw_0x23bb90");
#endif

    switch (ctx->pc) {
        case 0x23bbccu: goto label_23bbcc;
        case 0x23bbd4u: goto label_23bbd4;
        case 0x23bbe4u: goto label_23bbe4;
        case 0x23bbf4u: goto label_23bbf4;
        case 0x23bc48u: goto label_23bc48;
        case 0x23bc84u: goto label_23bc84;
        case 0x23bce0u: goto label_23bce0;
        case 0x23bcf0u: goto label_23bcf0;
        case 0x23bd00u: goto label_23bd00;
        case 0x23bd24u: goto label_23bd24;
        case 0x23bd44u: goto label_23bd44;
        case 0x23bd68u: goto label_23bd68;
        case 0x23bd88u: goto label_23bd88;
        case 0x23bda4u: goto label_23bda4;
        case 0x23bdc4u: goto label_23bdc4;
        default: break;
    }

    ctx->pc = 0x23bb90u;

    // 0x23bb90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x23bb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x23bb94: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x23bb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x23bb98: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23bb98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bb9c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x23bb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x23bba0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x23bba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x23bba4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x23bba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x23bba8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x23bba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x23bbac: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x23bbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x23bbb0: 0x3c104078  lui         $s0, 0x4078
    ctx->pc = 0x23bbb0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16504 << 16));
    // 0x23bbb4: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x23bbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x23bbb8: 0x36107880  ori         $s0, $s0, 0x7880
    ctx->pc = 0x23bbb8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)30848);
    // 0x23bbbc: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x23bbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x23bbc0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x23bbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x23bbc4: 0xc08c1a2  jal         func_230688
    ctx->pc = 0x23BBC4u;
    SET_GPR_U32(ctx, 31, 0x23BBCCu);
    ctx->pc = 0x23BBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BBC4u;
    // 0x23bbc8: 0xffb50060  sd          $s5, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230688u, 0x23BBC4u, 0x23BBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BBCCu;
label_23bbcc:
    // 0x23bbcc: 0xc08089c  jal         func_202270
    ctx->pc = 0x23BBCCu;
    SET_GPR_U32(ctx, 31, 0x23BBD4u);
    ctx->pc = 0x23BBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BBCCu;
    // 0x23bbd0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x23BBCCu, 0x23BBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BBD4u;
label_23bbd4:
    // 0x23bbd4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x23bbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x23bbd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23bbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bbdc: 0xc08b11c  jal         func_22C470
    ctx->pc = 0x23BBDCu;
    SET_GPR_U32(ctx, 31, 0x23BBE4u);
    ctx->pc = 0x23BBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BBDCu;
    // 0x23bbe0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C470u, 0x23BBDCu, 0x23BBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BBE4u;
label_23bbe4:
    // 0x23bbe4: 0x94540000  lhu         $s4, 0x0($v0)
    ctx->pc = 0x23bbe4u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23bbe8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23bbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bbec: 0xc08b11c  jal         func_22C470
    ctx->pc = 0x23BBECu;
    SET_GPR_U32(ctx, 31, 0x23BBF4u);
    ctx->pc = 0x23BBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BBECu;
    // 0x23bbf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C470u, 0x23BBECu, 0x23BBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BBF4u;
label_23bbf4:
    // 0x23bbf4: 0x94510002  lhu         $s1, 0x2($v0)
    ctx->pc = 0x23bbf4u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x23bbf8: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x23bbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x23bbfc: 0x8f84b45c  lw          $a0, -0x4BA4($gp)
    ctx->pc = 0x23bbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947932)));
    // 0x23bc00: 0x245211f8  addiu       $s2, $v0, 0x11F8
    ctx->pc = 0x23bc00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4600));
    // 0x23bc04: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x23bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x23bc08: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x23bc08u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x1FC1200u));
    // 0x23bc0c: 0x30840020  andi        $a0, $a0, 0x20
    ctx->pc = 0x23bc0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x23bc10: 0x34427f80  ori         $v0, $v0, 0x7F80
    ctx->pc = 0x23bc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32640);
    // 0x23bc14: 0x30a30010  andi        $v1, $a1, 0x10
    ctx->pc = 0x23bc14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x23bc18: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x23BC18u;
    {
        const bool branch_taken_0x23bc18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC18u;
        // 0x23bc1c: 0x44800b  movn        $s0, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc18) {
            ctx->pc = 0x23BC4Cu;
            goto label_23bc4c;
        }
    }
    ctx->pc = 0x23BC20u;
    // 0x23bc20: 0x2682ffe0  addiu       $v0, $s4, -0x20
    ctx->pc = 0x23bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967264));
    // 0x23bc24: 0x26230005  addiu       $v1, $s1, 0x5
    ctx->pc = 0x23bc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    // 0x23bc28: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23bc28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23bc2c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x23bc2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x23bc30: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x23bc30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x23bc34: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x23bc34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23bc38: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x23bc38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x23bc3c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x23bc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x23bc40: 0xc08b952  jal         func_22E548
    ctx->pc = 0x23BC40u;
    SET_GPR_U32(ctx, 31, 0x23BC48u);
    ctx->pc = 0x23BC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BC40u;
    // 0x23bc44: 0x34a50080  ori         $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x23BC40u, 0x23BC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BC48u;
label_23bc48:
    // 0x23bc48: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x23bc48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_23bc4c:
    // 0x23bc4c: 0x30a20020  andi        $v0, $a1, 0x20
    ctx->pc = 0x23bc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
    // 0x23bc50: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23BC50u;
    {
        const bool branch_taken_0x23bc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC50u;
        // 0x23bc54: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc50) {
            ctx->pc = 0x23BC84u;
            goto label_23bc84;
        }
    }
    ctx->pc = 0x23BC58u;
    // 0x23bc58: 0x26240005  addiu       $a0, $s1, 0x5
    ctx->pc = 0x23bc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    // 0x23bc5c: 0x8c4399f4  lw          $v1, -0x660C($v0)
    ctx->pc = 0x23bc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941172)));
    // 0x23bc60: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x23bc60u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23bc64: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x23bc64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x23bc68: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x23bc68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x23bc6c: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x23bc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x23bc70: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x23bc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    // 0x23bc74: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x23bc74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23bc78: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x23bc78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x23bc7c: 0xc08b952  jal         func_22E548
    ctx->pc = 0x23BC7Cu;
    SET_GPR_U32(ctx, 31, 0x23BC84u);
    ctx->pc = 0x23BC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BC7Cu;
    // 0x23bc80: 0x34a50080  ori         $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x23BC7Cu, 0x23BC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BC84u;
label_23bc84:
    // 0x23bc84: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x23bc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x23bc88: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x23bc88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x23bc8c: 0x8f859354  lw          $a1, -0x6CAC($gp)
    ctx->pc = 0x23bc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23bc90: 0x2463c338  addiu       $v1, $v1, -0x3CC8
    ctx->pc = 0x23bc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951736));
    // 0x23bc94: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x23bc94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x23bc98: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x23bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x23bc9c: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x23bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x23bca0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x23bca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x23bca4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x23bca4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x23bca8: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x23bca8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23bcac: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x23bcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x23bcb0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x23bcb0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bcb4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x23bcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23bcb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23bcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23bcbc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23bcbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bcc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23bcc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bcc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23bcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23bcc8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x23bcc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bccc: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x23bcccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23bcd0: 0x24085080  addiu       $t0, $zero, 0x5080
    ctx->pc = 0x23bcd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    // 0x23bcd4: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x23bcd4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bcd8: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x23BCD8u;
    SET_GPR_U32(ctx, 31, 0x23BCE0u);
    ctx->pc = 0x23BCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BCD8u;
    // 0x23bcdc: 0x24140024  addiu       $s4, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x23BCD8u, 0x23BCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BCE0u;
label_23bce0:
    // 0x23bce0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x23bce0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bce4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23bce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23bce8: 0xc08089c  jal         func_202270
    ctx->pc = 0x23BCE8u;
    SET_GPR_U32(ctx, 31, 0x23BCF0u);
    ctx->pc = 0x23BCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BCE8u;
    // 0x23bcec: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x23BCE8u, 0x23BCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BCF0u;
label_23bcf0:
    // 0x23bcf0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x23bcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x23bcf4: 0x247599f0  addiu       $s5, $v1, -0x6610
    ctx->pc = 0x23bcf4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941168));
    // 0x23bcf8: 0x8ee20020  lw          $v0, 0x20($s7)
    ctx->pc = 0x23bcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x23bcfc: 0x0  nop
    ctx->pc = 0x23bcfcu;
    // NOP
label_23bd00:
    // 0x23bd00: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x23bd00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x23bd04: 0x2484c33a  addiu       $a0, $a0, -0x3CC6
    ctx->pc = 0x23bd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951738));
    // 0x23bd08: 0x8f83b730  lw          $v1, -0x48D0($gp)
    ctx->pc = 0x23bd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x23bd0c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x23bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x23bd10: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23bd14: 0x14760009  bne         $v1, $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x23BD14u;
    {
        const bool branch_taken_0x23bd14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        ctx->pc = 0x23BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD14u;
        // 0x23bd18: 0x84500000  lh          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd14) {
            ctx->pc = 0x23BD3Cu;
            goto label_23bd3c;
        }
    }
    ctx->pc = 0x23BD1Cu;
    // 0x23bd1c: 0xc087fee  jal         func_21FFB8
    ctx->pc = 0x23BD1Cu;
    SET_GPR_U32(ctx, 31, 0x23BD24u);
    ctx->pc = 0x23BD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BD1Cu;
    // 0x23bd20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB8u, 0x23BD1Cu, 0x23BD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BD24u;
label_23bd24:
    // 0x23bd24: 0x2142018  mult        $a0, $s0, $s4
    ctx->pc = 0x23bd24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23bd28: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x23bd28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x23bd2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23bd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23bd30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23bd34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23BD34u;
    {
        const bool branch_taken_0x23bd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD34u;
        // 0x23bd38: 0x8c440148  lw          $a0, 0x148($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd34) {
            ctx->pc = 0x23BD58u;
            goto label_23bd58;
        }
    }
    ctx->pc = 0x23BD3Cu;
label_23bd3c:
    // 0x23bd3c: 0xc087fec  jal         func_21FFB0
    ctx->pc = 0x23BD3Cu;
    SET_GPR_U32(ctx, 31, 0x23BD44u);
    ctx->pc = 0x21FFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB0u, 0x23BD3Cu, 0x23BD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BD44u;
label_23bd44:
    // 0x23bd44: 0x2142018  mult        $a0, $s0, $s4
    ctx->pc = 0x23bd44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23bd48: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x23bd48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x23bd4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23bd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23bd50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23bd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23bd54: 0x8c440154  lw          $a0, 0x154($v0)
    ctx->pc = 0x23bd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
label_23bd58:
    // 0x23bd58: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23BD58u;
    {
        const bool branch_taken_0x23bd58 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x23BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD58u;
        // 0x23bd5c: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd58) {
            ctx->pc = 0x23BD70u;
            goto label_23bd70;
        }
    }
    ctx->pc = 0x23BD60u;
    // 0x23bd60: 0xc0872ac  jal         func_21CAB0
    ctx->pc = 0x23BD60u;
    SET_GPR_U32(ctx, 31, 0x23BD68u);
    ctx->pc = 0x21CAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CAB0u, 0x23BD60u, 0x23BD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BD68u;
label_23bd68:
    // 0x23bd68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23BD68u;
    {
        const bool branch_taken_0x23bd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD68u;
        // 0x23bd6c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd68) {
            ctx->pc = 0x23BD80u;
            goto label_23bd80;
        }
    }
    ctx->pc = 0x23BD70u;
label_23bd70:
    // 0x23bd70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23bd74: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x23bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x23bd78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23bd7c: 0x8c710404  lw          $s1, 0x404($v1)
    ctx->pc = 0x23bd7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1028)));
label_23bd80:
    // 0x23bd80: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x23BD80u;
    SET_GPR_U32(ctx, 31, 0x23BD88u);
    ctx->pc = 0x23BD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BD80u;
    // 0x23bd84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x23BD80u, 0x23BD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BD88u;
label_23bd88:
    // 0x23bd88: 0x8eb00004  lw          $s0, 0x4($s5)
    ctx->pc = 0x23bd88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x23bd8c: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x23bd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x23bd90: 0x26450002  addiu       $a1, $s2, 0x2
    ctx->pc = 0x23bd90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x23bd94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23bd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bd98: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x23bd98u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x23bd9c: 0xc08b11c  jal         func_22C470
    ctx->pc = 0x23BD9Cu;
    SET_GPR_U32(ctx, 31, 0x23BDA4u);
    ctx->pc = 0x23BDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BD9Cu;
    // 0x23bda0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C470u, 0x23BD9Cu, 0x23BDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BDA4u;
label_23bda4:
    // 0x23bda4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23bda4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x23bda8: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x23bda8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x23bdac: 0x3c07407f  lui         $a3, 0x407F
    ctx->pc = 0x23bdacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16511 << 16));
    // 0x23bdb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23bdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bdb4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23bdb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bdb8: 0x34e77f80  ori         $a3, $a3, 0x7F80
    ctx->pc = 0x23bdb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32640);
    // 0x23bdbc: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x23BDBCu;
    SET_GPR_U32(ctx, 31, 0x23BDC4u);
    ctx->pc = 0x23BDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BDBCu;
    // 0x23bdc0: 0x24085080  addiu       $t0, $zero, 0x5080 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x23BDBCu, 0x23BDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BDC4u;
label_23bdc4:
    // 0x23bdc4: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x23bdc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x23bdc8: 0x5440ffcd  bnel        $v0, $zero, . + 4 + (-0x33 << 2)
    ctx->pc = 0x23BDC8u;
    {
        const bool branch_taken_0x23bdc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bdc8) {
            ctx->pc = 0x23BDCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BDC8u;
            // 0x23bdcc: 0x8ee20020  lw          $v0, 0x20($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23bd00;
        }
    }
    ctx->pc = 0x23BDD0u;
    // 0x23bdd0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x23bdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bdd4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x23bdd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23bdd8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x23bdd8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23bddc: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x23bddcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23bde0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x23bde0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23bde4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x23bde4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23bde8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x23bde8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23bdec: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x23bdecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23bdf0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x23bdf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23bdf4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x23bdf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23bdf8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x23bdf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bdfc: 0x808089c  j           func_202270
    ctx->pc = 0x23BDFCu;
    ctx->pc = 0x23BE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BDFCu;
    // 0x23be00: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    textSelect_0x202270(rdram, ctx, runtime); return;
    ctx->pc = 0x23BE04u;
}

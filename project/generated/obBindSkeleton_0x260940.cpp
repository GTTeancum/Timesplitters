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

// Function: obBindSkeleton
// Address: 0x260940 - 0x260a58
void obBindSkeleton_0x260940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obBindSkeleton_0x260940");
#endif

    switch (ctx->pc) {
        case 0x260978u: goto label_260978;
        case 0x2609a0u: goto label_2609a0;
        case 0x2609c4u: goto label_2609c4;
        case 0x2609d8u: goto label_2609d8;
        case 0x2609ecu: goto label_2609ec;
        case 0x260a34u: goto label_260a34;
        default: break;
    }

    ctx->pc = 0x260940u;

    // 0x260940: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x260940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x260944: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x260944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x260948: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x260948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x26094c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x26094cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260950: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x260950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x260954: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x260954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x260958: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x260958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26095c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26095cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x260960: 0x8e270014  lw          $a3, 0x14($s1)
    ctx->pc = 0x260960u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x260964: 0x14e00023  bnez        $a3, . + 4 + (0x23 << 2)
    ctx->pc = 0x260964u;
    {
        const bool branch_taken_0x260964 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x260968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260964u;
        // 0x260968: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260964) {
            ctx->pc = 0x2609F4u;
            goto label_2609f4;
        }
    }
    ctx->pc = 0x26096Cu;
    // 0x26096c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x26096cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x260970: 0xc08070e  jal         func_201C38
    ctx->pc = 0x260970u;
    SET_GPR_U32(ctx, 31, 0x260978u);
    ctx->pc = 0x260974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260970u;
    // 0x260974: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x260970u, 0x260978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260978u;
label_260978:
    // 0x260978: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x260978u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x26097c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x26097cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x260980: 0x3610fff0  ori         $s0, $s0, 0xFFF0
    ctx->pc = 0x260980u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65520);
    // 0x260984: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x260984u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x260988: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x260988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26098c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x26098cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x260990: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x260990u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x260994: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x260994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x260998: 0xc08070e  jal         func_201C38
    ctx->pc = 0x260998u;
    SET_GPR_U32(ctx, 31, 0x2609A0u);
    ctx->pc = 0x26099Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260998u;
    // 0x26099c: 0x902024  and         $a0, $a0, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x260998u, 0x2609A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2609A0u;
label_2609a0:
    // 0x2609a0: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x2609a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2609a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2609a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2609a8: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x2609a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2609ac: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2609acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2609b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2609b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2609b4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2609b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2609b8: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x2609b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2609bc: 0xc08070e  jal         func_201C38
    ctx->pc = 0x2609BCu;
    SET_GPR_U32(ctx, 31, 0x2609C4u);
    ctx->pc = 0x2609C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2609BCu;
    // 0x2609c0: 0x902024  and         $a0, $a0, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x2609BCu, 0x2609C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2609C4u;
label_2609c4:
    // 0x2609c4: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x2609c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2609c8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2609c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2609cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2609ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2609d0: 0xc08070e  jal         func_201C38
    ctx->pc = 0x2609D0u;
    SET_GPR_U32(ctx, 31, 0x2609D8u);
    ctx->pc = 0x2609D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2609D0u;
    // 0x2609d4: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x2609D0u, 0x2609D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2609D8u;
label_2609d8:
    // 0x2609d8: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x2609d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2609dc: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2609dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2609e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2609e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2609e4: 0xc08070e  jal         func_201C38
    ctx->pc = 0x2609E4u;
    SET_GPR_U32(ctx, 31, 0x2609ECu);
    ctx->pc = 0x2609E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2609E4u;
    // 0x2609e8: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x2609E4u, 0x2609ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2609ECu;
label_2609ec:
    // 0x2609ec: 0x8e270014  lw          $a3, 0x14($s1)
    ctx->pc = 0x2609ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2609f0: 0xace20028  sw          $v0, 0x28($a3)
    ctx->pc = 0x2609f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 2));
label_2609f4:
    // 0x2609f4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2609f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2609f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2609f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2609fc: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2609FCu;
    {
        const bool branch_taken_0x2609fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x260A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2609FCu;
        // 0x260a00: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2609fc) {
            ctx->pc = 0x260A18u;
            goto label_260a18;
        }
    }
    ctx->pc = 0x260A04u;
    // 0x260a04: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x260a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x260a08: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x260a08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x260a0c: 0x2442ab20  addiu       $v0, $v0, -0x54E0
    ctx->pc = 0x260a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945568));
    // 0x260a10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x260A10u;
    {
        const bool branch_taken_0x260a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260A10u;
        // 0x260a14: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260a10) {
            ctx->pc = 0x260A1Cu;
            goto label_260a1c;
        }
    }
    ctx->pc = 0x260A18u;
label_260a18:
    // 0x260a18: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x260a18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260a1c:
    // 0x260a1c: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x260a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x260a20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x260a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260a24: 0xae47005c  sw          $a3, 0x5C($s2)
    ctx->pc = 0x260a24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 7));
    // 0x260a28: 0x2e660001  sltiu       $a2, $s3, 0x1
    ctx->pc = 0x260a28u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x260a2c: 0xc098b30  jal         func_262CC0
    ctx->pc = 0x260A2Cu;
    SET_GPR_U32(ctx, 31, 0x260A34u);
    ctx->pc = 0x260A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260A2Cu;
    // 0x260a30: 0xae430058  sw          $v1, 0x58($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262CC0u, 0x260A2Cu, 0x260A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260A34u;
label_260a34:
    // 0x260a34: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x260a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x260a38: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x260a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x260a3c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x260a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x260a40: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x260a40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x260a44: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x260a44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260a48: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x260a48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260a4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x260a4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260a50: 0x8098afc  j           func_262BF0
    ctx->pc = 0x260A50u;
    ctx->pc = 0x260A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260A50u;
    // 0x260a54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262BF0u;
    getBoneMatrixNum_0x262bf0(rdram, ctx, runtime); return;
    ctx->pc = 0x260A58u;
}

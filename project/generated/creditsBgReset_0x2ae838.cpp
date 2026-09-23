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

// Function: creditsBgReset
// Address: 0x2ae838 - 0x2aeac8
void creditsBgReset_0x2ae838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("creditsBgReset_0x2ae838");
#endif

    switch (ctx->pc) {
        case 0x2ae890u: goto label_2ae890;
        case 0x2ae8a0u: goto label_2ae8a0;
        case 0x2ae8b8u: goto label_2ae8b8;
        case 0x2aea10u: goto label_2aea10;
        case 0x2aea20u: goto label_2aea20;
        case 0x2aea28u: goto label_2aea28;
        case 0x2aea44u: goto label_2aea44;
        case 0x2aea60u: goto label_2aea60;
        default: break;
    }

    ctx->pc = 0x2ae838u;

    // 0x2ae838: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2ae838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2ae83c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2ae83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2ae840: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2ae840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2ae844: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2ae844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2ae848: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2ae848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2ae84c: 0x3c1e0037  lui         $fp, 0x37
    ctx->pc = 0x2ae84cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)55 << 16));
    // 0x2ae850: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2ae850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2ae854: 0x3c170037  lui         $s7, 0x37
    ctx->pc = 0x2ae854u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)55 << 16));
    // 0x2ae858: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2ae858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2ae85c: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x2ae85cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
    // 0x2ae860: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2ae860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2ae864: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x2ae864u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
    // 0x2ae868: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2ae868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2ae86c: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x2ae86cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
    // 0x2ae870: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ae870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ae874: 0x3c130037  lui         $s3, 0x37
    ctx->pc = 0x2ae874u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
    // 0x2ae878: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ae878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ae87c: 0x2452f6c8  addiu       $s2, $v0, -0x938
    ctx->pc = 0x2ae87cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964936));
    // 0x2ae880: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ae880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ae884: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2ae884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ae888: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2ae888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2ae88c: 0x2470f6b8  addiu       $s0, $v1, -0x948
    ctx->pc = 0x2ae88cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964920));
label_2ae890:
    // 0x2ae890: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ae890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae894: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2ae894u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2ae898: 0xc08718c  jal         func_21C630
    ctx->pc = 0x2AE898u;
    SET_GPR_U32(ctx, 31, 0x2AE8A0u);
    ctx->pc = 0x2AE89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE898u;
    // 0x2ae89c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C630u, 0x2AE898u, 0x2AE8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE8A0u;
label_2ae8a0:
    // 0x2ae8a0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2ae8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2ae8a4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2ae8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2ae8a8: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2AE8A8u;
    {
        const bool branch_taken_0x2ae8a8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2AE8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE8A8u;
        // 0x2ae8ac: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae8a8) {
            ctx->pc = 0x2AE890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae890;
        }
    }
    ctx->pc = 0x2AE8B0u;
    // 0x2ae8b0: 0xc0ab9d4  jal         func_2AE750
    ctx->pc = 0x2AE8B0u;
    SET_GPR_U32(ctx, 31, 0x2AE8B8u);
    ctx->pc = 0x2AE8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE8B0u;
    // 0x2ae8b4: 0x24120064  addiu       $s2, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE750u, 0x2AE8B0u, 0x2AE8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE8B8u;
label_2ae8b8:
    // 0x2ae8b8: 0x34038004  ori         $v1, $zero, 0x8004
    ctx->pc = 0x2ae8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x2ae8bc: 0x2669f750  addiu       $t1, $s3, -0x8B0
    ctx->pc = 0x2ae8bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965072));
    // 0x2ae8c0: 0x3c02302e  lui         $v0, 0x302E
    ctx->pc = 0x2ae8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12334 << 16));
    // 0x2ae8c4: 0xae63f750  sw          $v1, -0x8B0($s3)
    ctx->pc = 0x2ae8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294965072), GPR_U32(ctx, 3));
    // 0x2ae8c8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2ae8c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2ae8cc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2ae8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2ae8d0: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x2ae8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x2ae8d4: 0x24040412  addiu       $a0, $zero, 0x412
    ctx->pc = 0x2ae8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x2ae8d8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2ae8d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2ae8dc: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x2ae8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x2ae8e0: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x2ae8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x2ae8e4: 0x3c036c04  lui         $v1, 0x6C04
    ctx->pc = 0x2ae8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27652 << 16));
    // 0x2ae8e8: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x2ae8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x2ae8ec: 0x34a50404  ori         $a1, $a1, 0x404
    ctx->pc = 0x2ae8ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1028);
    // 0x2ae8f0: 0x2689f760  addiu       $t1, $s4, -0x8A0
    ctx->pc = 0x2ae8f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965088));
    // 0x2ae8f4: 0xae80f760  sw          $zero, -0x8A0($s4)
    ctx->pc = 0x2ae8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294965088), GPR_U32(ctx, 0));
    // 0x2ae8f8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2ae8f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2ae8fc: 0x34638004  ori         $v1, $v1, 0x8004
    ctx->pc = 0x2ae8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32772);
    // 0x2ae900: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x2ae900u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x2ae904: 0x3c021400  lui         $v0, 0x1400
    ctx->pc = 0x2ae904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5120 << 16));
    // 0x2ae908: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2ae908u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2ae90c: 0x344207a8  ori         $v0, $v0, 0x7A8
    ctx->pc = 0x2ae90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1960);
    // 0x2ae910: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x2ae910u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x2ae914: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x2ae914u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x2ae918: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x2ae918u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
    // 0x2ae91c: 0x3c046c01  lui         $a0, 0x6C01
    ctx->pc = 0x2ae91cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27649 << 16));
    // 0x2ae920: 0x26a9f770  addiu       $t1, $s5, -0x890
    ctx->pc = 0x2ae920u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965104));
    // 0x2ae924: 0xaea2f770  sw          $v0, -0x890($s5)
    ctx->pc = 0x2ae924u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294965104), GPR_U32(ctx, 2));
    // 0x2ae928: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2ae928u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2ae92c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2ae92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2ae930: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x2ae930u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x2ae934: 0x2442ec98  addiu       $v0, $v0, -0x1368
    ctx->pc = 0x2ae934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962328));
    // 0x2ae938: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2ae938u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2ae93c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2ae93cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2ae940: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x2ae940u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x2ae944: 0x24550014  addiu       $s5, $v0, 0x14
    ctx->pc = 0x2ae944u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2ae948: 0xad270004  sw          $a3, 0x4($t1)
    ctx->pc = 0x2ae948u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 7));
    // 0x2ae94c: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x2ae94cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x2ae950: 0x26c9f780  addiu       $t1, $s6, -0x880
    ctx->pc = 0x2ae950u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965120));
    // 0x2ae954: 0xaec0f780  sw          $zero, -0x880($s6)
    ctx->pc = 0x2ae954u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294965120), GPR_U32(ctx, 0));
    // 0x2ae958: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2ae958u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2ae95c: 0x3c066c04  lui         $a2, 0x6C04
    ctx->pc = 0x2ae95cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27652 << 16));
    // 0x2ae960: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x2ae960u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x2ae964: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x2ae964u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x2ae968: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2ae968u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2ae96c: 0x3c086e04  lui         $t0, 0x6E04
    ctx->pc = 0x2ae96cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28164 << 16));
    // 0x2ae970: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x2ae970u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x2ae974: 0x35088000  ori         $t0, $t0, 0x8000
    ctx->pc = 0x2ae974u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x2ae978: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ae978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae97c: 0x24140030  addiu       $s4, $zero, 0x30
    ctx->pc = 0x2ae97cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2ae980: 0x8c620520  lw          $v0, 0x520($v1)
    ctx->pc = 0x2ae980u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x380520u));
    // 0x2ae984: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2ae984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2ae988: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2ae988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2ae98c: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x2ae98cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x2ae990: 0x26e9f790  addiu       $t1, $s7, -0x870
    ctx->pc = 0x2ae990u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 23), 4294965136));
    // 0x2ae994: 0xaee0f790  sw          $zero, -0x870($s7)
    ctx->pc = 0x2ae994u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294965136), GPR_U32(ctx, 0));
    // 0x2ae998: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2ae998u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2ae99c: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x2ae99cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x2ae9a0: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2ae9a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2ae9a4: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x2ae9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x2ae9a8: 0x8c620538  lw          $v0, 0x538($v1)
    ctx->pc = 0x2ae9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x380538u));
    // 0x2ae9ac: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2ae9acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2ae9b0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2ae9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2ae9b4: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x2ae9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x2ae9b8: 0x27c9f7a0  addiu       $t1, $fp, -0x860
    ctx->pc = 0x2ae9b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), 4294965152));
    // 0x2ae9bc: 0xafc0f7a0  sw          $zero, -0x860($fp)
    ctx->pc = 0x2ae9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294965152), GPR_U32(ctx, 0));
    // 0x2ae9c0: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2ae9c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2ae9c4: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x2ae9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x2ae9c8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2ae9c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2ae9cc: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x2ae9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x2ae9d0: 0x8c620550  lw          $v0, 0x550($v1)
    ctx->pc = 0x2ae9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x380550u));
    // 0x2ae9d4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2ae9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2ae9d8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2ae9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2ae9dc: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x2ae9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x2ae9e0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2ae9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2ae9e4: 0x2449f7b0  addiu       $t1, $v0, -0x850
    ctx->pc = 0x2ae9e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965168));
    // 0x2ae9e8: 0xac40f7b0  sw          $zero, -0x850($v0)
    ctx->pc = 0x2ae9e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36F7B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F7B0u, _value); } while (0);
    // 0x2ae9ec: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2ae9ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2ae9f0: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x2ae9f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36F7B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F7B4u, _value); } while (0);
    // 0x2ae9f4: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2ae9f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2ae9f8: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x2ae9f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x36F7B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F7B8u, _value); } while (0);
    // 0x2ae9fc: 0x8c620568  lw          $v0, 0x568($v1)
    ctx->pc = 0x2ae9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x380568u));
    // 0x2aea00: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x2aea00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x2aea04: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x2aea04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F7BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F7BCu, _value); } while (0);
    // 0x2aea08: 0xf41018  mult        $v0, $a3, $s4
    ctx->pc = 0x2aea08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2aea0c: 0x0  nop
    ctx->pc = 0x2aea0cu;
    // NOP
label_2aea10:
    // 0x2aea10: 0x24f30001  addiu       $s3, $a3, 0x1
    ctx->pc = 0x2aea10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2aea14: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2aea14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aea18: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x2aea18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2aea1c: 0x0  nop
    ctx->pc = 0x2aea1cu;
    // NOP
label_2aea20:
    // 0x2aea20: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2AEA20u;
    SET_GPR_U32(ctx, 31, 0x2AEA28u);
    ctx->pc = 0x2AEA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEA20u;
    // 0x2aea24: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2AEA20u, 0x2AEA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEA28u;
label_2aea28:
    // 0x2aea28: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x2aea28u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2aea2c: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AEA2Cu;
    {
        const bool branch_taken_0x2aea2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aea2c) {
            ctx->pc = 0x2AEA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEA2Cu;
            // 0x2aea30: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEA34u;
            goto label_2aea34;
        }
    }
    ctx->pc = 0x2AEA34u;
label_2aea34:
    // 0x2aea34: 0x1810  mfhi        $v1
    ctx->pc = 0x2aea34u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2aea38: 0x2463009b  addiu       $v1, $v1, 0x9B
    ctx->pc = 0x2aea38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 155));
    // 0x2aea3c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2AEA3Cu;
    SET_GPR_U32(ctx, 31, 0x2AEA44u);
    ctx->pc = 0x2AEA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEA3Cu;
    // 0x2aea40: 0xae03fff8  sw          $v1, -0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967288), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2AEA3Cu, 0x2AEA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEA44u;
label_2aea44:
    // 0x2aea44: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x2aea44u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2aea48: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AEA48u;
    {
        const bool branch_taken_0x2aea48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aea48) {
            ctx->pc = 0x2AEA4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEA48u;
            // 0x2aea4c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEA50u;
            goto label_2aea50;
        }
    }
    ctx->pc = 0x2AEA50u;
label_2aea50:
    // 0x2aea50: 0x1810  mfhi        $v1
    ctx->pc = 0x2aea50u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2aea54: 0x2463009b  addiu       $v1, $v1, 0x9B
    ctx->pc = 0x2aea54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 155));
    // 0x2aea58: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2AEA58u;
    SET_GPR_U32(ctx, 31, 0x2AEA60u);
    ctx->pc = 0x2AEA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEA58u;
    // 0x2aea5c: 0xae03fffc  sw          $v1, -0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2AEA58u, 0x2AEA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEA60u;
label_2aea60:
    // 0x2aea60: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x2aea60u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2aea64: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AEA64u;
    {
        const bool branch_taken_0x2aea64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aea64) {
            ctx->pc = 0x2AEA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEA64u;
            // 0x2aea68: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEA6Cu;
            goto label_2aea6c;
        }
    }
    ctx->pc = 0x2AEA6Cu;
label_2aea6c:
    // 0x2aea6c: 0x1810  mfhi        $v1
    ctx->pc = 0x2aea6cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2aea70: 0x2463009b  addiu       $v1, $v1, 0x9B
    ctx->pc = 0x2aea70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 155));
    // 0x2aea74: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2aea74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2aea78: 0x621ffe9  bgez        $s1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2AEA78u;
    {
        const bool branch_taken_0x2aea78 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2AEA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA78u;
        // 0x2aea7c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aea78) {
            ctx->pc = 0x2AEA20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aea20;
        }
    }
    ctx->pc = 0x2AEA80u;
    // 0x2aea80: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2aea80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aea84: 0x28e20036  slti        $v0, $a3, 0x36
    ctx->pc = 0x2aea84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)54) ? 1 : 0);
    // 0x2aea88: 0x5440ffe1  bnel        $v0, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2AEA88u;
    {
        const bool branch_taken_0x2aea88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aea88) {
            ctx->pc = 0x2AEA8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEA88u;
            // 0x2aea8c: 0xf41018  mult        $v0, $a3, $s4 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aea10;
        }
    }
    ctx->pc = 0x2AEA90u;
    // 0x2aea90: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2aea90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aea94: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2aea94u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2aea98: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2aea98u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2aea9c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2aea9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2aeaa0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2aeaa0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2aeaa4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2aeaa4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aeaa8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2aeaa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aeaac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2aeaacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aeab0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2aeab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aeab4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2aeab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aeab8: 0xaf80b37c  sw          $zero, -0x4C84($gp)
    ctx->pc = 0x2aeab8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947708), GPR_U32(ctx, 0));
    // 0x2aeabc: 0xaf80b380  sw          $zero, -0x4C80($gp)
    ctx->pc = 0x2aeabcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947712), GPR_U32(ctx, 0));
    // 0x2aeac0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEAC0u;
        // 0x2aeac4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEAC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEAC8u;
}

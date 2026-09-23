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

// Function: dlDrawPoint
// Address: 0x2b8768 - 0x2b8898
void dlDrawPoint_0x2b8768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dlDrawPoint_0x2b8768");
#endif

    switch (ctx->pc) {
        case 0x2b8790u: goto label_2b8790;
        default: break;
    }

    ctx->pc = 0x2b8768u;

    // 0x2b8768: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b8768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b876c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b876cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b8770: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b8770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b8774: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b8774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8778: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b8778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b877c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b877cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8780: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2b8780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8784: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b8784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b8788: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2B8788u;
    SET_GPR_U32(ctx, 31, 0x2B8790u);
    ctx->pc = 0x2B878Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8788u;
    // 0x2b878c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2B8788u, 0x2B8790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8790u;
label_2b8790:
    // 0x2b8790: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x2b8790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b8794: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2b8794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b8798: 0x3c036c03  lui         $v1, 0x6C03
    ctx->pc = 0x2b8798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27651 << 16));
    // 0x2b879c: 0x104e02  srl         $t1, $s0, 24
    ctx->pc = 0x2b879cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x2b87a0: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x2b87a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b87a4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2b87a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2b87a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b87a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b87ac: 0x34048001  ori         $a0, $zero, 0x8001
    ctx->pc = 0x2b87acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x2b87b0: 0x8f8893a0  lw          $t0, -0x6C60($gp)
    ctx->pc = 0x2b87b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b87b4: 0x3c032020  lui         $v1, 0x2020
    ctx->pc = 0x2b87b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8224 << 16));
    // 0x2b87b8: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2b87b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2b87bc: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x2b87bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x2b87c0: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x2b87c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x2b87c4: 0x103403  sra         $a2, $s0, 16
    ctx->pc = 0x2b87c4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 16), 16));
    // 0x2b87c8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b87c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b87cc: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x2b87ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2b87d0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2b87d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2b87d4: 0x103a03  sra         $a3, $s0, 8
    ctx->pc = 0x2b87d4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 16), 8));
    // 0x2b87d8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b87d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b87dc: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x2b87dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2b87e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b87e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b87e4: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x2b87e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2b87e8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b87e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b87ec: 0x118900  sll         $s1, $s1, 4
    ctx->pc = 0x2b87ecu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2b87f0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2b87f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2b87f4: 0x26316c00  addiu       $s1, $s1, 0x6C00
    ctx->pc = 0x2b87f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 27648));
    // 0x2b87f8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b87f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b87fc: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x2b87fcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2b8800: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b8800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b8804: 0x26527900  addiu       $s2, $s2, 0x7900
    ctx->pc = 0x2b8804u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 30976));
    // 0x2b8808: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b880c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2b880cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2b8810: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x2b8810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x2b8814: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2b8814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2b8818: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b881c: 0x3c051400  lui         $a1, 0x1400
    ctx->pc = 0x2b881cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5120 << 16));
    // 0x2b8820: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2b8820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2b8824: 0x34a507fc  ori         $a1, $a1, 0x7FC
    ctx->pc = 0x2b8824u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2044);
    // 0x2b8828: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b882c: 0x25060010  addiu       $a2, $t0, 0x10
    ctx->pc = 0x2b882cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x2b8830: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x2b8830u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x2b8834: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2b8834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b8838: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b883c: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x2b883cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x2b8840: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2b8840u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2b8844: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8848: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b8848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b884c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x2b884cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x2b8850: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8854: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b8854u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8858: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x2b8858u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x2b885c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b885cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8860: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b8860u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8864: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2b8864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2b8868: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b886c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b886cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8870: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b8870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b8874: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8878: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x2b8878u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b887c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2b887cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2b8880: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8884: 0xaf8693a0  sw          $a2, -0x6C60($gp)
    ctx->pc = 0x2b8884u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 6));
    // 0x2b8888: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x2b8888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x2b888c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2b888cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2b8890: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8890u;
        // 0x2b8894: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8898u;
}

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

// Function: dlDrawLine
// Address: 0x2b8898 - 0x2b8a10
void dlDrawLine_0x2b8898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dlDrawLine_0x2b8898");
#endif

    switch (ctx->pc) {
        case 0x2b88d0u: goto label_2b88d0;
        default: break;
    }

    ctx->pc = 0x2b8898u;

    // 0x2b8898: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b8898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b889c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b889cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b88a0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2b88a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2b88a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b88a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b88a8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b88a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b88ac: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2b88acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b88b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b88b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b88b4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2b88b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b88b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b88b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b88bc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2b88bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b88c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b88c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b88c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2b88c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2b88c8: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2B88C8u;
    SET_GPR_U32(ctx, 31, 0x2B88D0u);
    ctx->pc = 0x2B88CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B88C8u;
    // 0x2b88cc: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2B88C8u, 0x2B88D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B88D0u;
label_2b88d0:
    // 0x2b88d0: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x2b88d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b88d4: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2b88d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b88d8: 0x3c036c04  lui         $v1, 0x6C04
    ctx->pc = 0x2b88d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27652 << 16));
    // 0x2b88dc: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x2b88dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2b88e0: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x2b88e0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b88e4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2b88e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2b88e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b88e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b88ec: 0x34048001  ori         $a0, $zero, 0x8001
    ctx->pc = 0x2b88ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x2b88f0: 0x8f8993a0  lw          $t1, -0x6C60($gp)
    ctx->pc = 0x2b88f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b88f4: 0x3c033020  lui         $v1, 0x3020
    ctx->pc = 0x2b88f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12320 << 16));
    // 0x2b88f8: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x2b88f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x2b88fc: 0x24050515  addiu       $a1, $zero, 0x515
    ctx->pc = 0x2b88fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1301));
    // 0x2b8900: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x2b8900u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x2b8904: 0x26106c00  addiu       $s0, $s0, 0x6C00
    ctx->pc = 0x2b8904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27648));
    // 0x2b8908: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b890c: 0x118900  sll         $s1, $s1, 4
    ctx->pc = 0x2b890cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2b8910: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2b8910u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2b8914: 0x26317900  addiu       $s1, $s1, 0x7900
    ctx->pc = 0x2b8914u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 30976));
    // 0x2b8918: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b891c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2b891cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2b8920: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b8920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b8924: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2b8924u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2b8928: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b892c: 0x121e02  srl         $v1, $s2, 24
    ctx->pc = 0x2b892cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x2b8930: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2b8930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2b8934: 0x123203  sra         $a2, $s2, 8
    ctx->pc = 0x2b8934u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 18), 8));
    // 0x2b8938: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b893c: 0x122c03  sra         $a1, $s2, 16
    ctx->pc = 0x2b893cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 18), 16));
    // 0x2b8940: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b8940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b8944: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2b8944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2b8948: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b894c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x2b894cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2b8950: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2b8950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2b8954: 0x325200ff  andi        $s2, $s2, 0xFF
    ctx->pc = 0x2b8954u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2b8958: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b895c: 0x139900  sll         $s3, $s3, 4
    ctx->pc = 0x2b895cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2b8960: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x2b8960u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x2b8964: 0x26736c00  addiu       $s3, $s3, 0x6C00
    ctx->pc = 0x2b8964u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 27648));
    // 0x2b8968: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b896c: 0x14a100  sll         $s4, $s4, 4
    ctx->pc = 0x2b896cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x2b8970: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x2b8970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x2b8974: 0x26947900  addiu       $s4, $s4, 0x7900
    ctx->pc = 0x2b8974u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 30976));
    // 0x2b8978: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b897c: 0x3c041400  lui         $a0, 0x1400
    ctx->pc = 0x2b897cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5120 << 16));
    // 0x2b8980: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b8980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b8984: 0x348407fc  ori         $a0, $a0, 0x7FC
    ctx->pc = 0x2b8984u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2044);
    // 0x2b8988: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b898c: 0x25280010  addiu       $t0, $t1, 0x10
    ctx->pc = 0x2b898cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x2b8990: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b8990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b8994: 0x3c0a1100  lui         $t2, 0x1100
    ctx->pc = 0x2b8994u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4352 << 16));
    // 0x2b8998: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b899c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2b899cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b89a0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2b89a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2b89a4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b89a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b89a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2b89a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b89ac: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2b89acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2b89b0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b89b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b89b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b89b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b89b8: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x2b89b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x2b89bc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b89bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b89c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b89c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b89c4: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x2b89c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x2b89c8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b89c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b89cc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b89ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b89d0: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x2b89d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x2b89d4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b89d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b89d8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2b89d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b89dc: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x2b89dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x2b89e0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b89e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b89e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b89e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b89e8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b89e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b89ec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b89ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b89f0: 0xa5230000  sh          $v1, 0x0($t1)
    ctx->pc = 0x2b89f0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b89f4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2b89f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2b89f8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b89f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b89fc: 0xaf8893a0  sw          $t0, -0x6C60($gp)
    ctx->pc = 0x2b89fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 8));
    // 0x2b8a00: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x2b8a00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x2b8a04: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2b8a04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2b8a08: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A08u;
        // 0x2b8a0c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8A10u;
}

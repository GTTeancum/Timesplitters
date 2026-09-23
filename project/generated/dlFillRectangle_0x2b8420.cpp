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

// Function: dlFillRectangle
// Address: 0x2b8420 - 0x2b85c8
void dlFillRectangle_0x2b8420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dlFillRectangle_0x2b8420");
#endif

    switch (ctx->pc) {
        case 0x2b8458u: goto label_2b8458;
        default: break;
    }

    ctx->pc = 0x2b8420u;

    // 0x2b8420: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b8420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b8424: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b8424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b8428: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2b8428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2b842c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b842cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8430: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b8430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b8434: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2b8434u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8438: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b8438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b843c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2b843cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8440: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b8440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b8444: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2b8444u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8448: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b8448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b844c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2b844cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2b8450: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2B8450u;
    SET_GPR_U32(ctx, 31, 0x2B8458u);
    ctx->pc = 0x2B8454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8450u;
    // 0x2b8454: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2B8450u, 0x2B8458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8458u;
label_2b8458:
    // 0x2b8458: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x2b8458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b845c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2b845cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b8460: 0x3c036c04  lui         $v1, 0x6C04
    ctx->pc = 0x2b8460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27652 << 16));
    // 0x2b8464: 0x34068003  ori         $a2, $zero, 0x8003
    ctx->pc = 0x2b8464u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32771);
    // 0x2b8468: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x2b8468u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b846c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2b846cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2b8470: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b8470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b8474: 0x3c041027  lui         $a0, 0x1027
    ctx->pc = 0x2b8474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4135 << 16));
    // 0x2b8478: 0x8f8893a0  lw          $t0, -0x6C60($gp)
    ctx->pc = 0x2b8478u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b847c: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x2b847cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x2b8480: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x2b8480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2b8484: 0x121a03  sra         $v1, $s2, 8
    ctx->pc = 0x2b8484u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 8));
    // 0x2b8488: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x2b8488u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x2b848c: 0x122a03  sra         $a1, $s2, 8
    ctx->pc = 0x2b848cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 18), 8));
    // 0x2b8490: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8494: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b8494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b8498: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2b8498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2b849c: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x2b849cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x2b84a0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b84a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b84a4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2b84a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2b84a8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2b84a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2b84ac: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2b84acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2b84b0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b84b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b84b4: 0x122602  srl         $a0, $s2, 24
    ctx->pc = 0x2b84b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x2b84b8: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x2b84b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x2b84bc: 0x129600  sll         $s2, $s2, 24
    ctx->pc = 0x2b84bcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 24));
    // 0x2b84c0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b84c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b84c4: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x2b84c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x2b84c8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b84c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b84cc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b84ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b84d0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b84d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b84d4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2b84d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2b84d8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2b84d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2b84dc: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x2b84dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2b84e0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b84e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b84e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b84e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b84e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b84e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b84ec: 0x118900  sll         $s1, $s1, 4
    ctx->pc = 0x2b84ecu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2b84f0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b84f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b84f4: 0x26106c00  addiu       $s0, $s0, 0x6C00
    ctx->pc = 0x2b84f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27648));
    // 0x2b84f8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2b84f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2b84fc: 0x26317900  addiu       $s1, $s1, 0x7900
    ctx->pc = 0x2b84fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 30976));
    // 0x2b8500: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8504: 0x118c00  sll         $s1, $s1, 16
    ctx->pc = 0x2b8504u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x2b8508: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b8508u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b850c: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x2b850cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2b8510: 0x2118025  or          $s0, $s0, $s1
    ctx->pc = 0x2b8510u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    // 0x2b8514: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8518: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2b8518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2b851c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2b851cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2b8520: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2b8520u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2b8524: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8528: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2b8528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2b852c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2b852cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b8530: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8534: 0x139900  sll         $s3, $s3, 4
    ctx->pc = 0x2b8534u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2b8538: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2b8538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2b853c: 0x14a100  sll         $s4, $s4, 4
    ctx->pc = 0x2b853cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x2b8540: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8544: 0x26736c10  addiu       $s3, $s3, 0x6C10
    ctx->pc = 0x2b8544u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 27664));
    // 0x2b8548: 0x26947910  addiu       $s4, $s4, 0x7910
    ctx->pc = 0x2b8548u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 30992));
    // 0x2b854c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b854cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b8550: 0x14a400  sll         $s4, $s4, 16
    ctx->pc = 0x2b8550u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
    // 0x2b8554: 0x3273ffff  andi        $s3, $s3, 0xFFFF
    ctx->pc = 0x2b8554u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x2b8558: 0x2749825  or          $s3, $s3, $s4
    ctx->pc = 0x2b8558u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 20));
    // 0x2b855c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b855cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8560: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x2b8560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x2b8564: 0x3c031400  lui         $v1, 0x1400
    ctx->pc = 0x2b8564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5120 << 16));
    // 0x2b8568: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b856c: 0x346307fc  ori         $v1, $v1, 0x7FC
    ctx->pc = 0x2b856cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2044);
    // 0x2b8570: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2b8570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2b8574: 0x25040010  addiu       $a0, $t0, 0x10
    ctx->pc = 0x2b8574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x2b8578: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b857c: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x2b857cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x2b8580: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2b8580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2b8584: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8588: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2b8588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b858c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b858cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b8590: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8594: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2b8594u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b8598: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b8598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b859c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b859cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b85a0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b85a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b85a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b85a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b85a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b85a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b85ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b85acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b85b0: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x2b85b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x2b85b4: 0xa5060000  sh          $a2, 0x0($t0)
    ctx->pc = 0x2b85b4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x2b85b8: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x2b85b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x2b85bc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2b85bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2b85c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B85C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B85C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B85C0u;
        // 0x2b85c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B85C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B85C8u;
}

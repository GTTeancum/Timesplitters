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

// Function: dlClearFB
// Address: 0x2b8178 - 0x2b8318
void dlClearFB_0x2b8178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dlClearFB_0x2b8178");
#endif

    switch (ctx->pc) {
        case 0x2b81b0u: goto label_2b81b0;
        default: break;
    }

    ctx->pc = 0x2b8178u;

    // 0x2b8178: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b8178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b817c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b817cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b8180: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2b8180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2b8184: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b8184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8188: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b8188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b818c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2b818cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8190: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b8190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b8194: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2b8194u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8198: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b8198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b819c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2b819cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b81a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b81a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b81a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2b81a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2b81a8: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2B81A8u;
    SET_GPR_U32(ctx, 31, 0x2B81B0u);
    ctx->pc = 0x2B81ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B81A8u;
    // 0x2b81ac: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2B81A8u, 0x2B81B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B81B0u;
label_2b81b0:
    // 0x2b81b0: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x2b81b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b81b4: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2b81b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b81b8: 0x3c036c04  lui         $v1, 0x6C04
    ctx->pc = 0x2b81b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27652 << 16));
    // 0x2b81bc: 0x34068001  ori         $a2, $zero, 0x8001
    ctx->pc = 0x2b81bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x2b81c0: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x2b81c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b81c4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2b81c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2b81c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b81c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b81cc: 0x3c043027  lui         $a0, 0x3027
    ctx->pc = 0x2b81ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12327 << 16));
    // 0x2b81d0: 0x8f8893a0  lw          $t0, -0x6C60($gp)
    ctx->pc = 0x2b81d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b81d4: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x2b81d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x2b81d8: 0x24070eee  addiu       $a3, $zero, 0xEEE
    ctx->pc = 0x2b81d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3822));
    // 0x2b81dc: 0x131a03  sra         $v1, $s3, 8
    ctx->pc = 0x2b81dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 19), 8));
    // 0x2b81e0: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x2b81e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x2b81e4: 0x132a03  sra         $a1, $s3, 8
    ctx->pc = 0x2b81e4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 19), 8));
    // 0x2b81e8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b81e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b81ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b81ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b81f0: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2b81f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2b81f4: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x2b81f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x2b81f8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b81f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b81fc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2b81fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2b8200: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2b8200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2b8204: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2b8204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2b8208: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b820c: 0x132602  srl         $a0, $s3, 24
    ctx->pc = 0x2b820cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 19), 24));
    // 0x2b8210: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x2b8210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x2b8214: 0x139e00  sll         $s3, $s3, 24
    ctx->pc = 0x2b8214u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 24));
    // 0x2b8218: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b821c: 0x932025  or          $a0, $a0, $s3
    ctx->pc = 0x2b821cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 19));
    // 0x2b8220: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b8220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b8224: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b8224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b8228: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b822c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2b822cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2b8230: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2b8230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2b8234: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x2b8234u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2b8238: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b823c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b823cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8240: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b8240u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b8244: 0x118900  sll         $s1, $s1, 4
    ctx->pc = 0x2b8244u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2b8248: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b824c: 0x26106c00  addiu       $s0, $s0, 0x6C00
    ctx->pc = 0x2b824cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27648));
    // 0x2b8250: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2b8250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2b8254: 0x26317900  addiu       $s1, $s1, 0x7900
    ctx->pc = 0x2b8254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 30976));
    // 0x2b8258: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b825c: 0x118c00  sll         $s1, $s1, 16
    ctx->pc = 0x2b825cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x2b8260: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b8260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b8264: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x2b8264u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2b8268: 0x2118025  or          $s0, $s0, $s1
    ctx->pc = 0x2b8268u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    // 0x2b826c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b826cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8270: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2b8270u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2b8274: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2b8274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b8278: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b827c: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x2b827cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2b8280: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b8280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b8284: 0x14a100  sll         $s4, $s4, 4
    ctx->pc = 0x2b8284u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x2b8288: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b828c: 0x26526c10  addiu       $s2, $s2, 0x6C10
    ctx->pc = 0x2b828cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 27664));
    // 0x2b8290: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2b8290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2b8294: 0x26947910  addiu       $s4, $s4, 0x7910
    ctx->pc = 0x2b8294u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 30992));
    // 0x2b8298: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b829c: 0x14a400  sll         $s4, $s4, 16
    ctx->pc = 0x2b829cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
    // 0x2b82a0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b82a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b82a4: 0x3252ffff  andi        $s2, $s2, 0xFFFF
    ctx->pc = 0x2b82a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x2b82a8: 0x2549025  or          $s2, $s2, $s4
    ctx->pc = 0x2b82a8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 20));
    // 0x2b82ac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b82acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b82b0: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x2b82b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x2b82b4: 0x3c031400  lui         $v1, 0x1400
    ctx->pc = 0x2b82b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5120 << 16));
    // 0x2b82b8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b82b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b82bc: 0x346307fc  ori         $v1, $v1, 0x7FC
    ctx->pc = 0x2b82bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2044);
    // 0x2b82c0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b82c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b82c4: 0x25040010  addiu       $a0, $t0, 0x10
    ctx->pc = 0x2b82c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x2b82c8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b82c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b82cc: 0x3c061100  lui         $a2, 0x1100
    ctx->pc = 0x2b82ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4352 << 16));
    // 0x2b82d0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2b82d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2b82d4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b82d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b82d8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2b82d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b82dc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b82dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b82e0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b82e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b82e4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2b82e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b82e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b82e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b82ec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b82ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b82f0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b82f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b82f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b82f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b82f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b82f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b82fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b82fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8300: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x2b8300u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x2b8304: 0xa5050000  sh          $a1, 0x0($t0)
    ctx->pc = 0x2b8304u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b8308: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2b8308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2b830c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2b830cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2b8310: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8310u;
        // 0x2b8314: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8318u;
}

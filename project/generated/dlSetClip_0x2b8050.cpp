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

// Function: dlSetClip
// Address: 0x2b8050 - 0x2b8178
void dlSetClip_0x2b8050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dlSetClip_0x2b8050");
#endif

    switch (ctx->pc) {
        case 0x2b8080u: goto label_2b8080;
        default: break;
    }

    ctx->pc = 0x2b8050u;

    // 0x2b8050: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b8050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b8054: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b8054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b8058: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b8058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b805c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b805cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b8060: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b8060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b8064: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2b8064u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8068: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b8068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b806c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2b806cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8070: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2b8070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8074: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b8074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b8078: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2B8078u;
    SET_GPR_U32(ctx, 31, 0x2B8080u);
    ctx->pc = 0x2B807Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8078u;
    // 0x2b807c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2B8078u, 0x2B8080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8080u;
label_2b8080:
    // 0x2b8080: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x2b8080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b8084: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2b8084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b8088: 0x3c036c02  lui         $v1, 0x6C02
    ctx->pc = 0x2b8088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27650 << 16));
    // 0x2b808c: 0x34068001  ori         $a2, $zero, 0x8001
    ctx->pc = 0x2b808cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x2b8090: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x2b8090u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b8094: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2b8094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2b8098: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b8098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b809c: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x2b809cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x2b80a0: 0x8f8793a0  lw          $a3, -0x6C60($gp)
    ctx->pc = 0x2b80a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b80a4: 0x2a040280  slti        $a0, $s0, 0x280
    ctx->pc = 0x2b80a4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)640) ? 1 : 0);
    // 0x2b80a8: 0x2403027f  addiu       $v1, $zero, 0x27F
    ctx->pc = 0x2b80a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 639));
    // 0x2b80ac: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x2b80acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2b80b0: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x2b80b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x2b80b4: 0x64800a  movz        $s0, $v1, $a0
    ctx->pc = 0x2b80b4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x2b80b8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b80b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b80bc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2b80bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b80c0: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2b80c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2b80c4: 0xb2182a  slt         $v1, $a1, $s2
    ctx->pc = 0x2b80c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2b80c8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b80c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b80cc: 0x3900a  movz        $s2, $zero, $v1
    ctx->pc = 0x2b80ccu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x2b80d0: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x2b80d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x2b80d4: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x2b80d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x2b80d8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b80d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b80dc: 0x2a2400e0  slti        $a0, $s1, 0xE0
    ctx->pc = 0x2b80dcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)224) ? 1 : 0);
    // 0x2b80e0: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x2b80e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x2b80e4: 0x240300df  addiu       $v1, $zero, 0xDF
    ctx->pc = 0x2b80e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x2b80e8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b80e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b80ec: 0x64880a  movz        $s1, $v1, $a0
    ctx->pc = 0x2b80ecu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x2b80f0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b80f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b80f4: 0x2509025  or          $s2, $s2, $s0
    ctx->pc = 0x2b80f4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 16));
    // 0x2b80f8: 0xb3282a  slt         $a1, $a1, $s3
    ctx->pc = 0x2b80f8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2b80fc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b80fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8100: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x2b8100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x2b8104: 0x5980a  movz        $s3, $zero, $a1
    ctx->pc = 0x2b8104u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x2b8108: 0x118c00  sll         $s1, $s1, 16
    ctx->pc = 0x2b8108u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x2b810c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b810cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8110: 0x2719825  or          $s3, $s3, $s1
    ctx->pc = 0x2b8110u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 17));
    // 0x2b8114: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2b8114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2b8118: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x2b8118u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x2b811c: 0x3c031400  lui         $v1, 0x1400
    ctx->pc = 0x2b811cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5120 << 16));
    // 0x2b8120: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8124: 0x346307fc  ori         $v1, $v1, 0x7FC
    ctx->pc = 0x2b8124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2044);
    // 0x2b8128: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2b8128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2b812c: 0x24e60010  addiu       $a2, $a3, 0x10
    ctx->pc = 0x2b812cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2b8130: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8134: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b8134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b8138: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b8138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b813c: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x2b813cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x2b8140: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8144: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b8144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b8148: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b8148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b814c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b814cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8150: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b8150u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b8154: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b8154u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8158: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b8158u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b815c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b815cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8160: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x2b8160u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b8164: 0xaf8693a0  sw          $a2, -0x6C60($gp)
    ctx->pc = 0x2b8164u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 6));
    // 0x2b8168: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2b8168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2b816c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2b816cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2b8170: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8170u;
        // 0x2b8174: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8178u;
}

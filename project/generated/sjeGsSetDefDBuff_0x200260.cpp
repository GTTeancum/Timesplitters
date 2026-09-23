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

// Function: sjeGsSetDefDBuff
// Address: 0x200260 - 0x200300
void sjeGsSetDefDBuff_0x200260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sjeGsSetDefDBuff_0x200260");
#endif

    switch (ctx->pc) {
        case 0x2002b4u: goto label_2002b4;
        default: break;
    }

    ctx->pc = 0x200260u;

    // 0x200260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x200260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x200264: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x200264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x200268: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x200268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20026c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x20026cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x200270: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200274: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x200274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200278: 0x3c100031  lui         $s0, 0x31
    ctx->pc = 0x200278u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49 << 16));
    // 0x20027c: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x20027cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x200280: 0x26103480  addiu       $s0, $s0, 0x3480
    ctx->pc = 0x200280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13440));
    // 0x200284: 0x75c00  sll         $t3, $a3, 16
    ctx->pc = 0x200284u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x200288: 0x86400  sll         $t4, $t0, 16
    ctx->pc = 0x200288u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x20028c: 0x95400  sll         $t2, $t1, 16
    ctx->pc = 0x20028cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x200290: 0x42c03  sra         $a1, $a0, 16
    ctx->pc = 0x200290u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x200294: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x200294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x200298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20029c: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x20029cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2002a0: 0x33c03  sra         $a3, $v1, 16
    ctx->pc = 0x2002a0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2002a4: 0xb4403  sra         $t0, $t3, 16
    ctx->pc = 0x2002a4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 11), 16));
    // 0x2002a8: 0xc4c03  sra         $t1, $t4, 16
    ctx->pc = 0x2002a8u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 12), 16));
    // 0x2002ac: 0xc0b37f2  jal         func_2CDFC8
    ctx->pc = 0x2002ACu;
    SET_GPR_U32(ctx, 31, 0x2002B4u);
    ctx->pc = 0x2002B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2002ACu;
    // 0x2002b0: 0xa5403  sra         $t2, $t2, 16 (Delay Slot)
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDFC8u, 0x2002ACu, 0x2002B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2002B4u;
label_2002b4:
    // 0x2002b4: 0xde020018  ld          $v0, 0x18($s0)
    ctx->pc = 0x2002b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2002b8: 0x2404f000  addiu       $a0, $zero, -0x1000
    ctx->pc = 0x2002b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x2002bc: 0x240502a4  addiu       $a1, $zero, 0x2A4
    ctx->pc = 0x2002bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 676));
    // 0x2002c0: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x2002c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2002c4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2002c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2002c8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2002c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2002cc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2002ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2002d0: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x2002d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x2002d4: 0xfe1101b0  sd          $s1, 0x1B0($s0)
    ctx->pc = 0x2002d4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 432), GPR_U64(ctx, 17));
    // 0x2002d8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2002d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2002dc: 0xfe1100c0  sd          $s1, 0xC0($s0)
    ctx->pc = 0x2002dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 192), GPR_U64(ctx, 17));
    // 0x2002e0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2002e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2002e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2002e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2002e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2002e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2002ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2002ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2002f0: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x2002f0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
    // 0x2002f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2002f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2002f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2002F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2002FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002F8u;
        // 0x2002fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2002F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200300u;
}

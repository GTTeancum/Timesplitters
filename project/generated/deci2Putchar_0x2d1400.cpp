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

// Function: deci2Putchar
// Address: 0x2d1400 - 0x2d14b0
void deci2Putchar_0x2d1400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("deci2Putchar_0x2d1400");
#endif

    switch (ctx->pc) {
        case 0x2d1440u: goto label_2d1440;
        default: break;
    }

    ctx->pc = 0x2d1400u;

    // 0x2d1400: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d1400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d1404: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2d1404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d1408: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x2d1408u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x2d140c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d140cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d1410: 0x8e222e58  lw          $v0, 0x2E58($s1)
    ctx->pc = 0x2d1410u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x382E58u));
    // 0x2d1414: 0x3c1201ff  lui         $s2, 0x1FF
    ctx->pc = 0x2d1414u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)511 << 16));
    // 0x2d1418: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d1418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d141c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d141cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d1420: 0x2842007e  slti        $v0, $v0, 0x7E
    ctx->pc = 0x2d1420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)126) ? 1 : 0);
    // 0x2d1424: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D1424u;
    {
        const bool branch_taken_0x2d1424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1424u;
        // 0x2d1428: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1424) {
            ctx->pc = 0x2D1440u;
            goto label_2d1440;
        }
    }
    ctx->pc = 0x2D142Cu;
    // 0x2d142c: 0x2642e600  addiu       $v0, $s2, -0x1A00
    ctx->pc = 0x2d142cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960640));
    // 0x2d1430: 0xae202e58  sw          $zero, 0x2E58($s1)
    ctx->pc = 0x2d1430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11864), GPR_U32(ctx, 0));
    // 0x2d1434: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d1434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1438: 0xc0b523a  jal         func_2D48E8
    ctx->pc = 0x2D1438u;
    SET_GPR_U32(ctx, 31, 0x2D1440u);
    ctx->pc = 0x2D143Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1438u;
    // 0x2d143c: 0xa040007f  sb          $zero, 0x7F($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 127), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D48E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D48E8u, 0x2D1438u, 0x2D1440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1440u;
label_2d1440:
    // 0x2d1440: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2d1440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d1444: 0x1602000f  bne         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D1444u;
    {
        const bool branch_taken_0x2d1444 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D1448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1444u;
        // 0x2d1448: 0x8e232e58  lw          $v1, 0x2E58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1444) {
            ctx->pc = 0x2D1484u;
            goto label_2d1484;
        }
    }
    ctx->pc = 0x2D144Cu;
    // 0x2d144c: 0x8e222e58  lw          $v0, 0x2E58($s1)
    ctx->pc = 0x2d144cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11864)));
    // 0x2d1450: 0x3c0401ff  lui         $a0, 0x1FF
    ctx->pc = 0x2d1450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)511 << 16));
    // 0x2d1454: 0x2484e600  addiu       $a0, $a0, -0x1A00
    ctx->pc = 0x2d1454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960640));
    // 0x2d1458: 0xae202e58  sw          $zero, 0x2E58($s1)
    ctx->pc = 0x2d1458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11864), GPR_U32(ctx, 0));
    // 0x2d145c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2d145cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d1460: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d1460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1464: 0xa0700000  sb          $s0, 0x0($v1)
    ctx->pc = 0x2d1464u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x2d1468: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2d1468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d146c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d146cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1470: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2d1470u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1474: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d1474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1478: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2d1478u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d147c: 0x80b523a  j           func_2D48E8
    ctx->pc = 0x2D147Cu;
    ctx->pc = 0x2D1480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D147Cu;
    // 0x2d1480: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D48E8u;
    kputs_0x2d48e8(rdram, ctx, runtime); return;
    ctx->pc = 0x2D1484u;
label_2d1484:
    // 0x2d1484: 0x2642e600  addiu       $v0, $s2, -0x1A00
    ctx->pc = 0x2d1484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960640));
    // 0x2d1488: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d1488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d148c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d148cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d1490: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d1490u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1494: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x2d1494u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x2d1498: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d1498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d149c: 0xae232e58  sw          $v1, 0x2E58($s1)
    ctx->pc = 0x2d149cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11864), GPR_U32(ctx, 3));
    // 0x2d14a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2d14a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d14a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d14a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d14a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D14A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D14ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D14A8u;
        // 0x2d14ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D14A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D14B0u;
}

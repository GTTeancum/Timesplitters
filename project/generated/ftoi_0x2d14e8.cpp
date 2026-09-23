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

// Function: ftoi
// Address: 0x2d14e8 - 0x2d1578
void ftoi_0x2d14e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ftoi_0x2d14e8");
#endif

    ctx->pc = 0x2d14e8u;

    // 0x2d14e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d14e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d14ec: 0x51078  dsll        $v0, $a1, 1
    ctx->pc = 0x2d14ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 1);
    // 0x2d14f0: 0x2357e  dsrl32      $a2, $v0, 21
    ctx->pc = 0x2d14f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 21));
    // 0x2d14f4: 0x64c6fbcd  daddiu      $a2, $a2, -0x433
    ctx->pc = 0x2d14f4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294966221);
    // 0x2d14f8: 0x28c2ffcb  slti        $v0, $a2, -0x35
    ctx->pc = 0x2d14f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967243) ? 1 : 0);
    // 0x2d14fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D14FCu;
    {
        const bool branch_taken_0x2d14fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D14FCu;
        // 0x2d1500: 0x28c2000d  slti        $v0, $a2, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d14fc) {
            ctx->pc = 0x2D150Cu;
            goto label_2d150c;
        }
    }
    ctx->pc = 0x2D1504u;
    // 0x2d1504: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1504u;
        // 0x2d1508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D150Cu;
label_2d150c:
    // 0x2d150c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D150Cu;
    {
        const bool branch_taken_0x2d150c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D150Cu;
        // 0x2d1510: 0x51338  dsll        $v0, $a1, 12 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d150c) {
            ctx->pc = 0x2D151Cu;
            goto label_2d151c;
        }
    }
    ctx->pc = 0x2D1514u;
    // 0x2d1514: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1514u;
        // 0x2d1518: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D151Cu;
label_2d151c:
    // 0x2d151c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2d151cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d1520: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x2d1520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x2d1524: 0x22b3a  dsrl        $a1, $v0, 12
    ctx->pc = 0x2d1524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 12);
    // 0x2d1528: 0x4c1000d  bgez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2D1528u;
    {
        const bool branch_taken_0x2d1528 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2D152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1528u;
        // 0x2d152c: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1528) {
            ctx->pc = 0x2D1560u;
            goto label_2d1560;
        }
    }
    ctx->pc = 0x2D1530u;
    // 0x2d1530: 0x6302f  dsubu       $a2, $zero, $a2
    ctx->pc = 0x2d1530u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 6));
    // 0x2d1534: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d1534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d1538: 0x64c3fffe  daddiu      $v1, $a2, -0x2
    ctx->pc = 0x2d1538u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967294);
    // 0x2d153c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2d153cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2d1540: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2d1540u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2d1544: 0x652816  dsrlv       $a1, $a1, $v1
    ctx->pc = 0x2d1544u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x2d1548: 0x30a40003  andi        $a0, $a1, 0x3
    ctx->pc = 0x2d1548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x2d154c: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D154Cu;
    {
        const bool branch_taken_0x2d154c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d154c) {
            ctx->pc = 0x2D1550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D154Cu;
            // 0x2d1550: 0x528ba  dsrl        $a1, $a1, 2 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D156Cu;
            goto label_2d156c;
        }
    }
    ctx->pc = 0x2D1554u;
    // 0x2d1554: 0x510ba  dsrl        $v0, $a1, 2
    ctx->pc = 0x2d1554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 2);
    // 0x2d1558: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1558u;
    {
        const bool branch_taken_0x2d1558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1558u;
        // 0x2d155c: 0x64450001  daddiu      $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1558) {
            ctx->pc = 0x2D156Cu;
            goto label_2d156c;
        }
    }
    ctx->pc = 0x2D1560u;
label_2d1560:
    // 0x2d1560: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2d1560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2d1564: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2d1564u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2d1568: 0x452814  dsllv       $a1, $a1, $v0
    ctx->pc = 0x2d1568u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (GPR_U32(ctx, 2) & 0x3F));
label_2d156c:
    // 0x2d156c: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x2d156cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2d1570: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1570u;
        // 0x2d1574: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1578u;
}

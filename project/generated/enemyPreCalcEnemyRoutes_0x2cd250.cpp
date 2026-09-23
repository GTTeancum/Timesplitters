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

// Function: enemyPreCalcEnemyRoutes
// Address: 0x2cd250 - 0x2cd700
void enemyPreCalcEnemyRoutes_0x2cd250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyPreCalcEnemyRoutes_0x2cd250");
#endif

    switch (ctx->pc) {
        case 0x2cd284u: goto label_2cd284;
        case 0x2cd29cu: goto label_2cd29c;
        case 0x2cd2b0u: goto label_2cd2b0;
        case 0x2cd2c8u: goto label_2cd2c8;
        case 0x2cd2e8u: goto label_2cd2e8;
        case 0x2cd348u: goto label_2cd348;
        case 0x2cd368u: goto label_2cd368;
        case 0x2cd3d0u: goto label_2cd3d0;
        case 0x2cd400u: goto label_2cd400;
        case 0x2cd428u: goto label_2cd428;
        case 0x2cd458u: goto label_2cd458;
        case 0x2cd494u: goto label_2cd494;
        case 0x2cd4f8u: goto label_2cd4f8;
        case 0x2cd5e0u: goto label_2cd5e0;
        case 0x2cd5f8u: goto label_2cd5f8;
        default: break;
    }

    ctx->pc = 0x2cd250u;

    // 0x2cd250: 0x27bdf6e0  addiu       $sp, $sp, -0x920
    ctx->pc = 0x2cd250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964960));
    // 0x2cd254: 0xffb608e0  sd          $s6, 0x8E0($sp)
    ctx->pc = 0x2cd254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2272), GPR_U64(ctx, 22));
    // 0x2cd258: 0xffb308b0  sd          $s3, 0x8B0($sp)
    ctx->pc = 0x2cd258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2224), GPR_U64(ctx, 19));
    // 0x2cd25c: 0xffb208a0  sd          $s2, 0x8A0($sp)
    ctx->pc = 0x2cd25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2208), GPR_U64(ctx, 18));
    // 0x2cd260: 0xffb00880  sd          $s0, 0x880($sp)
    ctx->pc = 0x2cd260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2176), GPR_U64(ctx, 16));
    // 0x2cd264: 0xffbf0910  sd          $ra, 0x910($sp)
    ctx->pc = 0x2cd264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2320), GPR_U64(ctx, 31));
    // 0x2cd268: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2cd268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd26c: 0xffbe0900  sd          $fp, 0x900($sp)
    ctx->pc = 0x2cd26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2304), GPR_U64(ctx, 30));
    // 0x2cd270: 0xffb708f0  sd          $s7, 0x8F0($sp)
    ctx->pc = 0x2cd270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2288), GPR_U64(ctx, 23));
    // 0x2cd274: 0xffb508d0  sd          $s5, 0x8D0($sp)
    ctx->pc = 0x2cd274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2256), GPR_U64(ctx, 21));
    // 0x2cd278: 0xffb408c0  sd          $s4, 0x8C0($sp)
    ctx->pc = 0x2cd278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2240), GPR_U64(ctx, 20));
    // 0x2cd27c: 0xc089de4  jal         func_227790
    ctx->pc = 0x2CD27Cu;
    SET_GPR_U32(ctx, 31, 0x2CD284u);
    ctx->pc = 0x2CD280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD27Cu;
    // 0x2cd280: 0xffb10890  sd          $s1, 0x890($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 2192), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227790u, 0x2CD27Cu, 0x2CD284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD284u;
label_2cd284:
    // 0x2cd284: 0x27b20840  addiu       $s2, $sp, 0x840
    ctx->pc = 0x2cd284u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
    // 0x2cd288: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2cd288u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd28c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cd28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd290: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cd290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd294: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2CD294u;
    SET_GPR_U32(ctx, 31, 0x2CD29Cu);
    ctx->pc = 0x2CD298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD294u;
    // 0x2cd298: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2CD294u, 0x2CD29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD29Cu;
label_2cd29c:
    // 0x2cd29c: 0x27b60860  addiu       $s6, $sp, 0x860
    ctx->pc = 0x2cd29cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
    // 0x2cd2a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cd2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd2a4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2cd2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd2a8: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2CD2A8u;
    SET_GPR_U32(ctx, 31, 0x2CD2B0u);
    ctx->pc = 0x2CD2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD2A8u;
    // 0x2cd2ac: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2CD2A8u, 0x2CD2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD2B0u;
label_2cd2b0:
    // 0x2cd2b0: 0x8f8eb4e4  lw          $t6, -0x4B1C($gp)
    ctx->pc = 0x2cd2b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948068)));
    // 0x2cd2b4: 0x19c0001d  blez        $t6, . + 4 + (0x1D << 2)
    ctx->pc = 0x2CD2B4u;
    {
        const bool branch_taken_0x2cd2b4 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x2CD2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD2B4u;
        // 0x2cd2b8: 0x1c0382d  daddu       $a3, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd2b4) {
            ctx->pc = 0x2CD32Cu;
            goto label_2cd32c;
        }
    }
    ctx->pc = 0x2CD2BCu;
    // 0x2cd2bc: 0x8f8fa348  lw          $t7, -0x5CB8($gp)
    ctx->pc = 0x2cd2bcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x2cd2c0: 0x3c170038  lui         $s7, 0x38
    ctx->pc = 0x2cd2c0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)56 << 16));
    // 0x2cd2c4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2cd2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_2cd2c8:
    // 0x2cd2c8: 0x26e22208  addiu       $v0, $s7, 0x2208
    ctx->pc = 0x2cd2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 8712));
    // 0x2cd2cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cd2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cd2d0: 0x26080001  addiu       $t0, $s0, 0x1
    ctx->pc = 0x2cd2d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2cd2d4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2cd2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd2d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cd2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd2dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2cd2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd2e0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2cd2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cd2e4: 0x8c710160  lw          $s1, 0x160($v1)
    ctx->pc = 0x2cd2e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
label_2cd2e8:
    // 0x2cd2e8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2cd2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2cd2ec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2cd2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cd2f0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD2F0u;
    {
        const bool branch_taken_0x2cd2f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cd2f0) {
            ctx->pc = 0x2CD2F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD2F0u;
            // 0x2cd2f4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD308u;
            goto label_2cd308;
        }
    }
    ctx->pc = 0x2CD2F8u;
    // 0x2cd2f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2cd2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cd2fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2cd2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2cd300: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2cd300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2cd304: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2cd304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2cd308:
    // 0x2cd308: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2cd308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2cd30c: 0x4c1fff6  bgez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x2CD30Cu;
    {
        const bool branch_taken_0x2cd30c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2CD310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD30Cu;
        // 0x2cd310: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd30c) {
            ctx->pc = 0x2CD2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd2e8;
        }
    }
    ctx->pc = 0x2CD314u;
    // 0x2cd314: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2cd314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd318: 0x207102a  slt         $v0, $s0, $a3
    ctx->pc = 0x2cd318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2cd31c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2CD31Cu;
    {
        const bool branch_taken_0x2cd31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD31Cu;
        // 0x2cd320: 0x1018c0  sll         $v1, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd31c) {
            ctx->pc = 0x2CD2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd2c8;
        }
    }
    ctx->pc = 0x2CD324u;
    // 0x2cd324: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD324u;
    {
        const bool branch_taken_0x2cd324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD324u;
        // 0x2cd328: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd324) {
            ctx->pc = 0x2CD334u;
            goto label_2cd334;
        }
    }
    ctx->pc = 0x2CD32Cu;
label_2cd32c:
    // 0x2cd32c: 0x8f8fa348  lw          $t7, -0x5CB8($gp)
    ctx->pc = 0x2cd32cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x2cd330: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2cd330u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cd334:
    // 0x2cd334: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2cd334u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd338: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2cd338u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd33c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2cd33cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd340: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x2cd340u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2cd344: 0x0  nop
    ctx->pc = 0x2cd344u;
    // NOP
label_2cd348:
    // 0x2cd348: 0x1042821  addu        $a1, $t0, $a0
    ctx->pc = 0x2cd348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2cd34c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2cd34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cd350: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CD350u;
    {
        const bool branch_taken_0x2cd350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD350u;
        // 0x2cd354: 0x931021  addu        $v0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd350) {
            ctx->pc = 0x2CD3A0u;
            goto label_2cd3a0;
        }
    }
    ctx->pc = 0x2CD358u;
    // 0x2cd358: 0x26550001  addiu       $s5, $s2, 0x1
    ctx->pc = 0x2cd358u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2cd35c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cd35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cd360: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cd360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd364: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x2cd364u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2cd368:
    // 0x2cd368: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2cd368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cd36c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2cd36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2cd370: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x2cd370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x2cd374: 0xc2280a  movz        $a1, $a2, $v0
    ctx->pc = 0x2cd374u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x2cd378: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2cd378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2cd37c: 0x28c20005  slti        $v0, $a2, 0x5
    ctx->pc = 0x2cd37cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2cd380: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2CD380u;
    {
        const bool branch_taken_0x2cd380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd380) {
            ctx->pc = 0x2CD368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd368;
        }
    }
    ctx->pc = 0x2CD388u;
    // 0x2cd388: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2cd388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2cd38c: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x2cd38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2cd390: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2cd390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2cd394: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cd394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cd398: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD398u;
    {
        const bool branch_taken_0x2cd398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD398u;
        // 0x2cd39c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd398) {
            ctx->pc = 0x2CD3BCu;
            goto label_2cd3bc;
        }
    }
    ctx->pc = 0x2CD3A0u;
label_2cd3a0:
    // 0x2cd3a0: 0x26550001  addiu       $s5, $s2, 0x1
    ctx->pc = 0x2cd3a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2cd3a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cd3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cd3a8: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x2cd3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2cd3ac: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2cd3acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2cd3b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2cd3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cd3b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2cd3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2cd3b8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2cd3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2cd3bc:
    // 0x2cd3bc: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x2cd3bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd3c0: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x2cd3c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2cd3c4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2CD3C4u;
    {
        const bool branch_taken_0x2cd3c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD3C4u;
        // 0x2cd3c8: 0x122080  sll         $a0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd3c4) {
            ctx->pc = 0x2CD348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd348;
        }
    }
    ctx->pc = 0x2CD3CCu;
    // 0x2cd3cc: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x2cd3ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2cd3d0:
    // 0x2cd3d0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2cd3d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2cd3d4: 0x0  nop
    ctx->pc = 0x2cd3d4u;
    // NOP
    // 0x2cd3d8: 0x0  nop
    ctx->pc = 0x2cd3d8u;
    // NOP
    // 0x2cd3dc: 0x0  nop
    ctx->pc = 0x2cd3dcu;
    // NOP
    // 0x2cd3e0: 0x0  nop
    ctx->pc = 0x2cd3e0u;
    // NOP
    // 0x2cd3e4: 0x641fffa  bgez        $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2CD3E4u;
    {
        const bool branch_taken_0x2cd3e4 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x2cd3e4) {
            ctx->pc = 0x2CD3D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd3d0;
        }
    }
    ctx->pc = 0x2CD3ECu;
    // 0x2cd3ec: 0x19e000b8  blez        $t7, . + 4 + (0xB8 << 2)
    ctx->pc = 0x2CD3ECu;
    {
        const bool branch_taken_0x2cd3ec = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x2CD3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD3ECu;
        // 0x2cd3f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd3ec) {
            ctx->pc = 0x2CD6D0u;
            goto label_2cd6d0;
        }
    }
    ctx->pc = 0x2CD3F4u;
    // 0x2cd3f4: 0x27b40800  addiu       $s4, $sp, 0x800
    ctx->pc = 0x2cd3f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 2048));
    // 0x2cd3f8: 0x3c1e003b  lui         $fp, 0x3B
    ctx->pc = 0x2cd3f8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)59 << 16));
    // 0x2cd3fc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x2cd3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_2cd400:
    // 0x2cd400: 0x8f83a2f4  lw          $v1, -0x5D0C($gp)
    ctx->pc = 0x2cd400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943476)));
    // 0x2cd404: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x2cd404u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2cd408: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2cd408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2cd40c: 0xc440fd88  lwc1        $f0, -0x278($v0)
    ctx->pc = 0x2cd40cu;
    { uint32_t bits = FAST_READ32(0x3AFD88u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd410: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2cd410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2cd414: 0x26550001  addiu       $s5, $s2, 0x1
    ctx->pc = 0x2cd414u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2cd418: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2cd418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd41c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2cd41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cd420: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2cd420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2cd424: 0x0  nop
    ctx->pc = 0x2cd424u;
    // NOP
label_2cd428:
    // 0x2cd428: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2cd428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2cd42c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2cd42cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2cd430: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2cd430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2cd434: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2cd434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cd438: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2cd438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2cd43c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2CD43Cu;
    {
        const bool branch_taken_0x2cd43c = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x2cd43c) {
            ctx->pc = 0x2CD428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd428;
        }
    }
    ctx->pc = 0x2CD444u;
    // 0x2cd444: 0x19c00051  blez        $t6, . + 4 + (0x51 << 2)
    ctx->pc = 0x2CD444u;
    {
        const bool branch_taken_0x2cd444 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x2CD448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD444u;
        // 0x2cd448: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd444) {
            ctx->pc = 0x2CD58Cu;
            goto label_2cd58c;
        }
    }
    ctx->pc = 0x2CD44Cu;
    // 0x2cd44c: 0x3c170038  lui         $s7, 0x38
    ctx->pc = 0x2cd44cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)56 << 16));
    // 0x2cd450: 0x26e22208  addiu       $v0, $s7, 0x2208
    ctx->pc = 0x2cd450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 8712));
    // 0x2cd454: 0x0  nop
    ctx->pc = 0x2cd454u;
    // NOP
label_2cd458:
    // 0x2cd458: 0x1098c0  sll         $s3, $s0, 3
    ctx->pc = 0x2cd458u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2cd45c: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x2cd45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2cd460: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2cd460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2cd464: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2cd464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2cd468: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cd468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cd46c: 0x12420013  beq         $s2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CD46Cu;
    {
        const bool branch_taken_0x2cd46c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CD470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD46Cu;
        // 0x2cd470: 0x8c910160  lw          $s1, 0x160($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd46c) {
            ctx->pc = 0x2CD4BCu;
            goto label_2cd4bc;
        }
    }
    ctx->pc = 0x2CD474u;
    // 0x2cd474: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2cd474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2cd478: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2cd478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cd47c: 0xafb20020  sw          $s2, 0x20($sp)
    ctx->pc = 0x2cd47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 18));
    // 0x2cd480: 0xafa00410  sw          $zero, 0x410($sp)
    ctx->pc = 0x2cd480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1040), GPR_U32(ctx, 0));
    // 0x2cd484: 0xafa007fc  sw          $zero, 0x7FC($sp)
    ctx->pc = 0x2cd484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2044), GPR_U32(ctx, 0));
    // 0x2cd488: 0xaf80a2f8  sw          $zero, -0x5D08($gp)
    ctx->pc = 0x2cd488u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943480), GPR_U32(ctx, 0));
    // 0x2cd48c: 0xc0afda0  jal         func_2BF680
    ctx->pc = 0x2CD48Cu;
    SET_GPR_U32(ctx, 31, 0x2CD494u);
    ctx->pc = 0x2CD490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD48Cu;
    // 0x2cd490: 0xaf80a2fc  sw          $zero, -0x5D04($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943484), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF680u, 0x2CD48Cu, 0x2CD494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD494u;
label_2cd494:
    // 0x2cd494: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2cd494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2cd498: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD498u;
    {
        const bool branch_taken_0x2cd498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CD49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD498u;
        // 0x2cd49c: 0xc781a2f8  lwc1        $f1, -0x5D08($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd498) {
            ctx->pc = 0x2CD4B0u;
            goto label_2cd4b0;
        }
    }
    ctx->pc = 0x2CD4A0u;
    // 0x2cd4a0: 0xc780a2fc  lwc1        $f0, -0x5D04($gp)
    ctx->pc = 0x2cd4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd4a4: 0x8f8eb4e4  lw          $t6, -0x4B1C($gp)
    ctx->pc = 0x2cd4a4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948068)));
    // 0x2cd4a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD4A8u;
    {
        const bool branch_taken_0x2cd4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD4A8u;
        // 0x2cd4ac: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd4a8) {
            ctx->pc = 0x2CD4C0u;
            goto label_2cd4c0;
        }
    }
    ctx->pc = 0x2CD4B0u;
label_2cd4b0:
    // 0x2cd4b0: 0xc7c1fd88  lwc1        $f1, -0x278($fp)
    ctx->pc = 0x2cd4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294966664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd4b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CD4B4u;
    {
        const bool branch_taken_0x2cd4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD4B4u;
        // 0x2cd4b8: 0x8f8eb4e4  lw          $t6, -0x4B1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948068)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd4b4) {
            ctx->pc = 0x2CD4C0u;
            goto label_2cd4c0;
        }
    }
    ctx->pc = 0x2CD4BCu;
label_2cd4bc:
    // 0x2cd4bc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2cd4bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2cd4c0:
    // 0x2cd4c0: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x2cd4c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2cd4c4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cd4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cd4c8: 0x8fa20860  lw          $v0, 0x860($sp)
    ctx->pc = 0x2cd4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2144)));
    // 0x2cd4cc: 0x14e20008  bne         $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD4CCu;
    {
        const bool branch_taken_0x2cd4cc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CD4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD4CCu;
        // 0x2cd4d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd4cc) {
            ctx->pc = 0x2CD4F0u;
            goto label_2cd4f0;
        }
    }
    ctx->pc = 0x2CD4D4u;
    // 0x2cd4d4: 0xc7a00800  lwc1        $f0, 0x800($sp)
    ctx->pc = 0x2cd4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd4d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cd4d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd4dc: 0x0  nop
    ctx->pc = 0x2cd4dcu;
    // NOP
    // 0x2cd4e0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD4E0u;
    {
        const bool branch_taken_0x2cd4e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CD4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD4E0u;
        // 0x2cd4e4: 0x26080001  addiu       $t0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd4e0) {
            ctx->pc = 0x2CD4F4u;
            goto label_2cd4f4;
        }
    }
    ctx->pc = 0x2CD4E8u;
    // 0x2cd4e8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2CD4E8u;
    {
        const bool branch_taken_0x2cd4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD4E8u;
        // 0x2cd4ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd4e8) {
            ctx->pc = 0x2CD530u;
            goto label_2cd530;
        }
    }
    ctx->pc = 0x2CD4F0u;
label_2cd4f0:
    // 0x2cd4f0: 0x26080001  addiu       $t0, $s0, 0x1
    ctx->pc = 0x2cd4f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2cd4f4:
    // 0x2cd4f4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2cd4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2cd4f8:
    // 0x2cd4f8: 0x28c20005  slti        $v0, $a2, 0x5
    ctx->pc = 0x2cd4f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2cd4fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CD4FCu;
    {
        const bool branch_taken_0x2cd4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD4FCu;
        // 0x2cd500: 0x62080  sll         $a0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd4fc) {
            ctx->pc = 0x2CD530u;
            goto label_2cd530;
        }
    }
    ctx->pc = 0x2CD504u;
    // 0x2cd504: 0x2c41021  addu        $v0, $s6, $a0
    ctx->pc = 0x2cd504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x2cd508: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cd508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cd50c: 0x54e3fffa  bnel        $a3, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2CD50Cu;
    {
        const bool branch_taken_0x2cd50c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cd50c) {
            ctx->pc = 0x2CD510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD50Cu;
            // 0x2cd510: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd4f8;
        }
    }
    ctx->pc = 0x2CD514u;
    // 0x2cd514: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x2cd514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2cd518: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cd518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd51c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cd51cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd520: 0x0  nop
    ctx->pc = 0x2cd520u;
    // NOP
    // 0x2cd524: 0x4502fff4  bc1fl       . + 4 + (-0xC << 2)
    ctx->pc = 0x2CD524u;
    {
        const bool branch_taken_0x2cd524 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cd524) {
            ctx->pc = 0x2CD528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD524u;
            // 0x2cd528: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd4f8;
        }
    }
    ctx->pc = 0x2CD52Cu;
    // 0x2cd52c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2cd52cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2cd530:
    // 0x2cd530: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cd530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cd534: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CD534u;
    {
        const bool branch_taken_0x2cd534 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CD538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD534u;
        // 0x2cd538: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd534) {
            ctx->pc = 0x2CD578u;
            goto label_2cd578;
        }
    }
    ctx->pc = 0x2CD53Cu;
    // 0x2cd53c: 0x2833821  addu        $a3, $s4, $v1
    ctx->pc = 0x2cd53cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2cd540: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x2cd540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd544: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cd544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd548: 0x0  nop
    ctx->pc = 0x2cd548u;
    // NOP
    // 0x2cd54c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2CD54Cu;
    {
        const bool branch_taken_0x2cd54c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CD550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD54Cu;
        // 0x2cd550: 0x26e22208  addiu       $v0, $s7, 0x2208 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 8712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd54c) {
            ctx->pc = 0x2CD578u;
            goto label_2cd578;
        }
    }
    ctx->pc = 0x2CD554u;
    // 0x2cd554: 0x3a33021  addu        $a2, $sp, $v1
    ctx->pc = 0x2cd554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2cd558: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x2cd558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2cd55c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2cd55cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd560: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2cd560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2cd564: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x2cd564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2cd568: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2cd568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cd56c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2cd56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2cd570: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x2cd570u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x2cd574: 0xacc20820  sw          $v0, 0x820($a2)
    ctx->pc = 0x2cd574u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2080), GPR_U32(ctx, 2));
label_2cd578:
    // 0x2cd578: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2cd578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd57c: 0x20e102a  slt         $v0, $s0, $t6
    ctx->pc = 0x2cd57cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x2cd580: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x2CD580u;
    {
        const bool branch_taken_0x2cd580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD580u;
        // 0x2cd584: 0x26e22208  addiu       $v0, $s7, 0x2208 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 8712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd580) {
            ctx->pc = 0x2CD458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd458;
        }
    }
    ctx->pc = 0x2CD588u;
    // 0x2cd588: 0x8f8fa348  lw          $t7, -0x5CB8($gp)
    ctx->pc = 0x2cd588u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
label_2cd58c:
    // 0x2cd58c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x2cd58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2cd590: 0x8f84a2f4  lw          $a0, -0x5D0C($gp)
    ctx->pc = 0x2cd590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943476)));
    // 0x2cd594: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x2cd594u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2cd598: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x2cd598u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    // 0x2cd59c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2cd59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2cd5a0: 0xc623fd88  lwc1        $f3, -0x278($s1)
    ctx->pc = 0x2cd5a0u;
    { uint32_t bits = FAST_READ32(0x3AFD88u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cd5a4: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x2cd5a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2cd5a8: 0x245390f8  addiu       $s3, $v0, -0x6F08
    ctx->pc = 0x2cd5a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938872));
    // 0x2cd5ac: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2cd5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2cd5b0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2cd5b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2cd5b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cd5b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd5b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cd5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cd5bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cd5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cd5c0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2cd5c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2cd5c4: 0x246d0008  addiu       $t5, $v1, 0x8
    ctx->pc = 0x2cd5c4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2cd5c8: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2cd5c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd5cc: 0x2c0602d  daddu       $t4, $s6, $zero
    ctx->pc = 0x2cd5ccu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd5d0: 0x24100064  addiu       $s0, $zero, 0x64
    ctx->pc = 0x2cd5d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2cd5d4: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2cd5d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cd5d8: 0x27ab0820  addiu       $t3, $sp, 0x820
    ctx->pc = 0x2cd5d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 2080));
    // 0x2cd5dc: 0xc622fd88  lwc1        $f2, -0x278($s1)
    ctx->pc = 0x2cd5dcu;
    { uint32_t bits = FAST_READ32(0x3AFD88u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cd5e0:
    // 0x2cd5e0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2cd5e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cd5e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cd5e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd5e8: 0x24ca0001  addiu       $t2, $a2, 0x1
    ctx->pc = 0x2cd5e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2cd5ec: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x2cd5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd5f0: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2cd5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd5f4: 0x0  nop
    ctx->pc = 0x2cd5f4u;
    // NOP
label_2cd5f8:
    // 0x2cd5f8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2cd5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd5fc: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x2cd5fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd600: 0x0  nop
    ctx->pc = 0x2cd600u;
    // NOP
    // 0x2cd604: 0x4503001d  bc1tl       . + 4 + (0x1D << 2)
    ctx->pc = 0x2CD604u;
    {
        const bool branch_taken_0x2cd604 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cd604) {
            ctx->pc = 0x2CD608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD604u;
            // 0x2cd608: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD67Cu;
            goto label_2cd67c;
        }
    }
    ctx->pc = 0x2CD60Cu;
    // 0x2cd60c: 0x46060832  c.eq.s      $f1, $f6
    ctx->pc = 0x2cd60cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd610: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x2CD610u;
    {
        const bool branch_taken_0x2cd610 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cd610) {
            ctx->pc = 0x2CD65Cu;
            goto label_2cd65c;
        }
    }
    ctx->pc = 0x2CD618u;
    // 0x2cd618: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2cd618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cd61c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2cd61cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2cd620: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2cd620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2cd624: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2cd624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2cd628: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x2cd628u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cd62c: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x2cd62cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2cd630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd634: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2cd634u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2cd638: 0x0  nop
    ctx->pc = 0x2cd638u;
    // NOP
    // 0x2cd63c: 0x0  nop
    ctx->pc = 0x2cd63cu;
    // NOP
    // 0x2cd640: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x2cd640u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x2cd644: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2cd644u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2cd648: 0x0  nop
    ctx->pc = 0x2cd648u;
    // NOP
    // 0x2cd64c: 0x0  nop
    ctx->pc = 0x2cd64cu;
    // NOP
    // 0x2cd650: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2cd650u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2cd654: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CD654u;
    {
        const bool branch_taken_0x2cd654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd654) {
            ctx->pc = 0x2CD660u;
            goto label_2cd660;
        }
    }
    ctx->pc = 0x2CD65Cu;
label_2cd65c:
    // 0x2cd65c: 0xc780929c  lwc1        $f0, -0x6D64($gp)
    ctx->pc = 0x2cd65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cd660:
    // 0x2cd660: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2cd660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd664: 0x0  nop
    ctx->pc = 0x2cd664u;
    // NOP
    // 0x2cd668: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD668u;
    {
        const bool branch_taken_0x2cd668 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cd668) {
            ctx->pc = 0x2CD66Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD668u;
            // 0x2cd66c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD67Cu;
            goto label_2cd67c;
        }
    }
    ctx->pc = 0x2CD670u;
    // 0x2cd670: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2cd670u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2cd674: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2cd674u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd678: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2cd678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2cd67c:
    // 0x2cd67c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2cd67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2cd680: 0x28e20005  slti        $v0, $a3, 0x5
    ctx->pc = 0x2cd680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2cd684: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2CD684u;
    {
        const bool branch_taken_0x2cd684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD684u;
        // 0x2cd688: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd684) {
            ctx->pc = 0x2CD5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd5f8;
        }
    }
    ctx->pc = 0x2CD68Cu;
    // 0x2cd68c: 0x11120008  beq         $t0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD68Cu;
    {
        const bool branch_taken_0x2cd68c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 18));
        ctx->pc = 0x2CD690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD68Cu;
        // 0x2cd690: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd68c) {
            ctx->pc = 0x2CD6B0u;
            goto label_2cd6b0;
        }
    }
    ctx->pc = 0x2CD694u;
    // 0x2cd694: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2cd694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2cd698: 0x1622021  addu        $a0, $t3, $v0
    ctx->pc = 0x2cd698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2cd69c: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x2cd69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x2cd6a0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2cd6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cd6a4: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x2cd6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2cd6a8: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x2cd6a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2cd6ac: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x2cd6acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_2cd6b0:
    // 0x2cd6b0: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x2cd6b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd6b4: 0x28c20005  slti        $v0, $a2, 0x5
    ctx->pc = 0x2cd6b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2cd6b8: 0x5440ffc9  bnel        $v0, $zero, . + 4 + (-0x37 << 2)
    ctx->pc = 0x2CD6B8u;
    {
        const bool branch_taken_0x2cd6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd6b8) {
            ctx->pc = 0x2CD6BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD6B8u;
            // 0x2cd6bc: 0xc622fd88  lwc1        $f2, -0x278($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294966664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd5e0;
        }
    }
    ctx->pc = 0x2CD6C0u;
    // 0x2cd6c0: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x2cd6c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd6c4: 0x24f102a  slt         $v0, $s2, $t7
    ctx->pc = 0x2cd6c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x2cd6c8: 0x1440ff4d  bnez        $v0, . + 4 + (-0xB3 << 2)
    ctx->pc = 0x2CD6C8u;
    {
        const bool branch_taken_0x2cd6c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD6C8u;
        // 0x2cd6cc: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd6c8) {
            ctx->pc = 0x2CD400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd400;
        }
    }
    ctx->pc = 0x2CD6D0u;
label_2cd6d0:
    // 0x2cd6d0: 0xdfbf0910  ld          $ra, 0x910($sp)
    ctx->pc = 0x2cd6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2320)));
    // 0x2cd6d4: 0xdfbe0900  ld          $fp, 0x900($sp)
    ctx->pc = 0x2cd6d4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 2304)));
    // 0x2cd6d8: 0xdfb708f0  ld          $s7, 0x8F0($sp)
    ctx->pc = 0x2cd6d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 2288)));
    // 0x2cd6dc: 0xdfb608e0  ld          $s6, 0x8E0($sp)
    ctx->pc = 0x2cd6dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 2272)));
    // 0x2cd6e0: 0xdfb508d0  ld          $s5, 0x8D0($sp)
    ctx->pc = 0x2cd6e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 2256)));
    // 0x2cd6e4: 0xdfb408c0  ld          $s4, 0x8C0($sp)
    ctx->pc = 0x2cd6e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 2240)));
    // 0x2cd6e8: 0xdfb308b0  ld          $s3, 0x8B0($sp)
    ctx->pc = 0x2cd6e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 2224)));
    // 0x2cd6ec: 0xdfb208a0  ld          $s2, 0x8A0($sp)
    ctx->pc = 0x2cd6ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 2208)));
    // 0x2cd6f0: 0xdfb10890  ld          $s1, 0x890($sp)
    ctx->pc = 0x2cd6f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 2192)));
    // 0x2cd6f4: 0xdfb00880  ld          $s0, 0x880($sp)
    ctx->pc = 0x2cd6f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2176)));
    // 0x2cd6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD6F8u;
        // 0x2cd6fc: 0x27bd0920  addiu       $sp, $sp, 0x920 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD700u;
}

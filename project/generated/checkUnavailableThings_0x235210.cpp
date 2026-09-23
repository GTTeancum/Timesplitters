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

// Function: checkUnavailableThings
// Address: 0x235210 - 0x2353ac
void checkUnavailableThings_0x235210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkUnavailableThings_0x235210");
#endif

    switch (ctx->pc) {
        case 0x235248u: goto label_235248;
        case 0x235290u: goto label_235290;
        case 0x2352b0u: goto label_2352b0;
        case 0x23531cu: goto label_23531c;
        case 0x235340u: goto label_235340;
        case 0x235350u: goto label_235350;
        case 0x235368u: goto label_235368;
        default: break;
    }

    ctx->pc = 0x235210u;

    // 0x235210: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x235210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x235214: 0xaf80b778  sw          $zero, -0x4888($gp)
    ctx->pc = 0x235214u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948728), GPR_U32(ctx, 0));
    // 0x235218: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x235218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x23521c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x23521cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x235220: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x235220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x235224: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x235224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x235228: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x235228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x23522c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23522cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x235230: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x235230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x235234: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x235238: 0xaf80b774  sw          $zero, -0x488C($gp)
    ctx->pc = 0x235238u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948724), GPR_U32(ctx, 0));
    // 0x23523c: 0xaf80a04c  sw          $zero, -0x5FB4($gp)
    ctx->pc = 0x23523cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942796), GPR_U32(ctx, 0));
    // 0x235240: 0xc08cb64  jal         func_232D90
    ctx->pc = 0x235240u;
    SET_GPR_U32(ctx, 31, 0x235248u);
    ctx->pc = 0x235244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235240u;
    // 0x235244: 0xaf80a048  sw          $zero, -0x5FB8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942792), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232D90u, 0x235240u, 0x235248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235248u;
label_235248:
    // 0x235248: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x235248u;
    {
        const bool branch_taken_0x235248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235248u;
        // 0x23524c: 0x3c110035  lui         $s1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235248) {
            ctx->pc = 0x235304u;
            goto label_235304;
        }
    }
    ctx->pc = 0x235250u;
    // 0x235250: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x235250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x235254: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x235254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x235258: 0x8c823a30  lw          $v0, 0x3A30($a0)
    ctx->pc = 0x235258u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x353A30u));
    // 0x23525c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23525cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x235260: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x235260u;
    {
        const bool branch_taken_0x235260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x235264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235260u;
        // 0x235264: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235260) {
            ctx->pc = 0x235274u;
            goto label_235274;
        }
    }
    ctx->pc = 0x235268u;
    // 0x235268: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x235268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23526c: 0xac823a30  sw          $v0, 0x3A30($a0)
    ctx->pc = 0x23526cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 14896), GPR_U32(ctx, 2));
    // 0x235270: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x235270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_235274:
    // 0x235274: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x235274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235278: 0x24463a90  addiu       $a2, $v0, 0x3A90
    ctx->pc = 0x235278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 14992));
    // 0x23527c: 0x3c110035  lui         $s1, 0x35
    ctx->pc = 0x23527cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)53 << 16));
    // 0x235280: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x235280u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x235284: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x235284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x235288: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x235288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23528c: 0x0  nop
    ctx->pc = 0x23528cu;
    // NOP
label_235290:
    // 0x235290: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x235290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x235294: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x235294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x235298: 0x14680014  bne         $v1, $t0, . + 4 + (0x14 << 2)
    ctx->pc = 0x235298u;
    {
        const bool branch_taken_0x235298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x23529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235298u;
        // 0x23529c: 0x24920001  addiu       $s2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235298) {
            ctx->pc = 0x2352ECu;
            goto label_2352ec;
        }
    }
    ctx->pc = 0x2352A0u;
    // 0x2352a0: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x2352a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2352a4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2352A4u;
    {
        const bool branch_taken_0x2352a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2352A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352A4u;
        // 0x2352a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2352a4) {
            ctx->pc = 0x2352E0u;
            goto label_2352e0;
        }
    }
    ctx->pc = 0x2352ACu;
    // 0x2352ac: 0x24920001  addiu       $s2, $a0, 0x1
    ctx->pc = 0x2352acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2352b0:
    // 0x2352b0: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x2352b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2352b4: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x2352b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2352b8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2352b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2352bc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2352bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2352c0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2352c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2352c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2352c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2352c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2352c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2352cc: 0x2a040004  slti        $a0, $s0, 0x4
    ctx->pc = 0x2352ccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2352d0: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2352D0u;
    {
        const bool branch_taken_0x2352d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2352D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352D0u;
        // 0x2352d4: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2352d0) {
            ctx->pc = 0x2352B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2352b0;
        }
    }
    ctx->pc = 0x2352D8u;
    // 0x2352d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2352D8u;
    {
        const bool branch_taken_0x2352d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2352DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352D8u;
        // 0x2352dc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2352d8) {
            ctx->pc = 0x2352E4u;
            goto label_2352e4;
        }
    }
    ctx->pc = 0x2352E0u;
label_2352e0:
    // 0x2352e0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2352e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2352e4:
    // 0x2352e4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2352e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2352e8: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x2352e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
label_2352ec:
    // 0x2352ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2352ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2352f0: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x2352f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2352f4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2352F4u;
    {
        const bool branch_taken_0x2352f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2352F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352F4u;
        // 0x2352f8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2352f4) {
            ctx->pc = 0x235290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235290;
        }
    }
    ctx->pc = 0x2352FCu;
    // 0x2352fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2352FCu;
    {
        const bool branch_taken_0x2352fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352FCu;
        // 0x235300: 0x8e243a58  lw          $a0, 0x3A58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2352fc) {
            ctx->pc = 0x235308u;
            goto label_235308;
        }
    }
    ctx->pc = 0x235304u;
label_235304:
    // 0x235304: 0x8e243a58  lw          $a0, 0x3A58($s1)
    ctx->pc = 0x235304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14936)));
label_235308:
    // 0x235308: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x235308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23530c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23530Cu;
    {
        const bool branch_taken_0x23530c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23530Cu;
        // 0x235310: 0x3c0201fc  lui         $v0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23530c) {
            ctx->pc = 0x235328u;
            goto label_235328;
        }
    }
    ctx->pc = 0x235314u;
    // 0x235314: 0xc0893c8  jal         func_224F20
    ctx->pc = 0x235314u;
    SET_GPR_U32(ctx, 31, 0x23531Cu);
    ctx->pc = 0x224F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224F20u, 0x235314u, 0x23531Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23531Cu;
label_23531c:
    // 0x23531c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23531Cu;
    {
        const bool branch_taken_0x23531c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23531c) {
            ctx->pc = 0x235320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23531Cu;
            // 0x235320: 0xae203a58  sw          $zero, 0x3A58($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 14936), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235324u;
            goto label_235324;
        }
    }
    ctx->pc = 0x235324u;
label_235324:
    // 0x235324: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x235324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
label_235328:
    // 0x235328: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x235328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23532c: 0x24552b28  addiu       $s5, $v0, 0x2B28
    ctx->pc = 0x23532cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 11048));
    // 0x235330: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x235330u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x235334: 0x2414000a  addiu       $s4, $zero, 0xA
    ctx->pc = 0x235334u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x235338: 0x941018  mult        $v0, $a0, $s4
    ctx->pc = 0x235338u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23533c: 0x0  nop
    ctx->pc = 0x23533cu;
    // NOP
label_235340:
    // 0x235340: 0x24920001  addiu       $s2, $a0, 0x1
    ctx->pc = 0x235340u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x235344: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x235344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x235348: 0x558821  addu        $s1, $v0, $s5
    ctx->pc = 0x235348u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x23534c: 0x0  nop
    ctx->pc = 0x23534cu;
    // NOP
label_235350:
    // 0x235350: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x235350u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x235354: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x235354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x235358: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x235358u;
    {
        const bool branch_taken_0x235358 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235358u;
        // 0x23535c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235358) {
            ctx->pc = 0x235370u;
            goto label_235370;
        }
    }
    ctx->pc = 0x235360u;
    // 0x235360: 0xc089300  jal         func_224C00
    ctx->pc = 0x235360u;
    SET_GPR_U32(ctx, 31, 0x235368u);
    ctx->pc = 0x224C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224C00u, 0x235360u, 0x235368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235368u;
label_235368:
    // 0x235368: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x235368u;
    {
        const bool branch_taken_0x235368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235368) {
            ctx->pc = 0x23536Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235368u;
            // 0x23536c: 0xa2330000  sb          $s3, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235370u;
            goto label_235370;
        }
    }
    ctx->pc = 0x235370u;
label_235370:
    // 0x235370: 0x601fff7  bgez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x235370u;
    {
        const bool branch_taken_0x235370 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x235374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235370u;
        // 0x235374: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235370) {
            ctx->pc = 0x235350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235350;
        }
    }
    ctx->pc = 0x235378u;
    // 0x235378: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x235378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23537c: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x23537cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x235380: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x235380u;
    {
        const bool branch_taken_0x235380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235380) {
            ctx->pc = 0x235384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235380u;
            // 0x235384: 0x941018  mult        $v0, $a0, $s4 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x235340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235340;
        }
    }
    ctx->pc = 0x235388u;
    // 0x235388: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x235388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23538c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x23538cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x235390: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x235390u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x235394: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x235394u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x235398: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x235398u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23539c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23539cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2353a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2353a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2353a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2353A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2353A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2353A4u;
        // 0x2353a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2353A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2353ACu;
}

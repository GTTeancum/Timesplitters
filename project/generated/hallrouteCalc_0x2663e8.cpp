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

// Function: hallrouteCalc
// Address: 0x2663e8 - 0x266570
void hallrouteCalc_0x2663e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hallrouteCalc_0x2663e8");
#endif

    switch (ctx->pc) {
        case 0x266420u: goto label_266420;
        case 0x266454u: goto label_266454;
        case 0x266460u: goto label_266460;
        case 0x266478u: goto label_266478;
        case 0x2664a8u: goto label_2664a8;
        case 0x2664f0u: goto label_2664f0;
        default: break;
    }

    ctx->pc = 0x2663e8u;

    // 0x2663e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2663e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2663ec: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2663ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2663f0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2663f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2663f4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2663f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2663f8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2663f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2663fc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2663fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266400: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x266400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x266404: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x266404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266408: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x266408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26640c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x26640cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x266410: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x266410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x266414: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x266414u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x266418: 0xc0997ac  jal         func_265EB0
    ctx->pc = 0x266418u;
    SET_GPR_U32(ctx, 31, 0x266420u);
    ctx->pc = 0x26641Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266418u;
    // 0x26641c: 0xffb40040  sd          $s4, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265EB0u, 0x266418u, 0x266420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266420u;
label_266420:
    // 0x266420: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x266420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x266424: 0x8f86a2ec  lw          $a2, -0x5D14($gp)
    ctx->pc = 0x266424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x266428: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x266428u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x26642c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26642cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x266430: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x266430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266434: 0xaf90b8d4  sw          $s0, -0x472C($gp)
    ctx->pc = 0x266434u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949076), GPR_U32(ctx, 16));
    // 0x266438: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x266438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26643c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26643cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266440: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x266440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266444: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x266444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x266448: 0x84620008  lh          $v0, 0x8($v1)
    ctx->pc = 0x266448u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x26644c: 0xc09986a  jal         func_2661A8
    ctx->pc = 0x26644Cu;
    SET_GPR_U32(ctx, 31, 0x266454u);
    ctx->pc = 0x266450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26644Cu;
    // 0x266450: 0xaf82b8d8  sw          $v0, -0x4728($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949080), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2661A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2661A8u, 0x26644Cu, 0x266454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266454u;
label_266454:
    // 0x266454: 0x8f85b8c0  lw          $a1, -0x4740($gp)
    ctx->pc = 0x266454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949056)));
    // 0x266458: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x266458u;
    {
        const bool branch_taken_0x266458 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x26645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266458u;
        // 0x26645c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266458) {
            ctx->pc = 0x266468u;
            goto label_266468;
        }
    }
    ctx->pc = 0x266460u;
label_266460:
    // 0x266460: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x266460u;
    {
        const bool branch_taken_0x266460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266460u;
        // 0x266464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266460) {
            ctx->pc = 0x26654Cu;
            goto label_26654c;
        }
    }
    ctx->pc = 0x266468u;
label_266468:
    // 0x266468: 0x4810015  bgez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x266468u;
    {
        const bool branch_taken_0x266468 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x266468) {
            ctx->pc = 0x2664C0u;
            goto label_2664c0;
        }
    }
    ctx->pc = 0x266470u;
    // 0x266470: 0x3c1401fc  lui         $s4, 0x1FC
    ctx->pc = 0x266470u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)508 << 16));
    // 0x266474: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x266474u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_266478:
    // 0x266478: 0x26836490  addiu       $v1, $s4, 0x6490
    ctx->pc = 0x266478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 25744));
    // 0x26647c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x26647cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x266480: 0x9786b8c8  lhu         $a2, -0x4738($gp)
    ctx->pc = 0x266480u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294949064)));
    // 0x266484: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x266484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266488: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x266488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26648c: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x26648cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x266490: 0xaf92b8c8  sw          $s2, -0x4738($gp)
    ctx->pc = 0x266490u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949064), GPR_U32(ctx, 18));
    // 0x266494: 0xaf85b8c0  sw          $a1, -0x4740($gp)
    ctx->pc = 0x266494u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949056), GPR_U32(ctx, 5));
    // 0x266498: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x266498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26649c: 0x86050004  lh          $a1, 0x4($s0)
    ctx->pc = 0x26649cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2664a0: 0xc09986a  jal         func_2661A8
    ctx->pc = 0x2664A0u;
    SET_GPR_U32(ctx, 31, 0x2664A8u);
    ctx->pc = 0x2664A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2664A0u;
    // 0x2664a4: 0xa6060000  sh          $a2, 0x0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2661A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2661A8u, 0x2664A0u, 0x2664A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2664A8u;
label_2664a8:
    // 0x2664a8: 0x8f83b8c0  lw          $v1, -0x4740($gp)
    ctx->pc = 0x2664a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949056)));
    // 0x2664ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2664acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2664b0: 0x460ffeb  bltz        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2664B0u;
    {
        const bool branch_taken_0x2664b0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2664B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2664B0u;
        // 0x2664b4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2664b0) {
            ctx->pc = 0x266460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266460;
        }
    }
    ctx->pc = 0x2664B8u;
    // 0x2664b8: 0x482ffef  bltzl       $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2664B8u;
    {
        const bool branch_taken_0x2664b8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2664b8) {
            ctx->pc = 0x2664BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2664B8u;
            // 0x2664bc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266478;
        }
    }
    ctx->pc = 0x2664C0u;
label_2664c0:
    // 0x2664c0: 0x1a600005  blez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2664C0u;
    {
        const bool branch_taken_0x2664c0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2664C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2664C0u;
        // 0x2664c4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2664c0) {
            ctx->pc = 0x2664D8u;
            goto label_2664d8;
        }
    }
    ctx->pc = 0x2664C8u;
    // 0x2664c8: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2664c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2664cc: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2664ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2664d0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2664d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2664d4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2664d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2664d8:
    // 0x2664d8: 0x6400011  bltz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2664D8u;
    {
        const bool branch_taken_0x2664d8 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x2664d8) {
            ctx->pc = 0x266520u;
            goto label_266520;
        }
    }
    ctx->pc = 0x2664E0u;
    // 0x2664e0: 0x1a60000f  blez        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x2664E0u;
    {
        const bool branch_taken_0x2664e0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2664E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2664E0u;
        // 0x2664e4: 0x3c1401fc  lui         $s4, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2664e0) {
            ctx->pc = 0x266520u;
            goto label_266520;
        }
    }
    ctx->pc = 0x2664E8u;
    // 0x2664e8: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x2664e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2664ec: 0x0  nop
    ctx->pc = 0x2664ecu;
    // NOP
label_2664f0:
    // 0x2664f0: 0x26826490  addiu       $v0, $s4, 0x6490
    ctx->pc = 0x2664f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 25744));
    // 0x2664f4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2664f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2664f8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2664f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2664fc: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x2664fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x266500: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x266500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x266504: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x266504u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x266508: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x266508u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x26650c: 0x84920002  lh          $s2, 0x2($a0)
    ctx->pc = 0x26650cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x266510: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x266510u;
    {
        const bool branch_taken_0x266510 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x266514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266510u;
        // 0x266514: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266510) {
            ctx->pc = 0x266520u;
            goto label_266520;
        }
    }
    ctx->pc = 0x266518u;
    // 0x266518: 0x1e60fff5  bgtz        $s3, . + 4 + (-0xB << 2)
    ctx->pc = 0x266518u;
    {
        const bool branch_taken_0x266518 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x26651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266518u;
        // 0x26651c: 0x122100  sll         $a0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266518) {
            ctx->pc = 0x2664F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2664f0;
        }
    }
    ctx->pc = 0x266520u;
label_266520:
    // 0x266520: 0x52000003  beql        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x266520u;
    {
        const bool branch_taken_0x266520 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x266520) {
            ctx->pc = 0x266524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266520u;
            // 0x266524: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266530u;
            goto label_266530;
        }
    }
    ctx->pc = 0x266528u;
    // 0x266528: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x266528u;
    {
        const bool branch_taken_0x266528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266528u;
        // 0x26652c: 0xc6000008  lwc1        $f0, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x266528) {
            ctx->pc = 0x266544u;
            goto label_266544;
        }
    }
    ctx->pc = 0x266530u;
label_266530:
    // 0x266530: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x266530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x266534: 0x8f84a2f0  lw          $a0, -0x5D10($gp)
    ctx->pc = 0x266534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943472)));
    // 0x266538: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x266538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26653c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26653cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x266540: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x266540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266544:
    // 0x266544: 0xe780a2fc  swc1        $f0, -0x5D04($gp)
    ctx->pc = 0x266544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943484), bits); }
    // 0x266548: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x266548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26654c:
    // 0x26654c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x26654cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x266550: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x266550u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x266554: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x266554u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x266558: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x266558u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26655c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26655cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266560: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x266560u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266564: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x266564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266568: 0x3e00008  jr          $ra
    ctx->pc = 0x266568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266568u;
        // 0x26656c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266570u;
}

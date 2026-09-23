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

// Function: padLoad
// Address: 0x265558 - 0x265790
void padLoad_0x265558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("padLoad_0x265558");
#endif

    switch (ctx->pc) {
        case 0x26559cu: goto label_26559c;
        case 0x2655c4u: goto label_2655c4;
        case 0x265608u: goto label_265608;
        case 0x265690u: goto label_265690;
        case 0x265698u: goto label_265698;
        case 0x2656a8u: goto label_2656a8;
        case 0x2656ccu: goto label_2656cc;
        case 0x2656e0u: goto label_2656e0;
        default: break;
    }

    ctx->pc = 0x265558u;

    // 0x265558: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x265558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x26555c: 0xaf80a348  sw          $zero, -0x5CB8($gp)
    ctx->pc = 0x26555cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943560), GPR_U32(ctx, 0));
    // 0x265560: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x265560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x265564: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x265564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265568: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x265568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x26556c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x26556cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x265570: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x265570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x265574: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x265574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x265578: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x265578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x26557c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x26557cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x265580: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x265580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x265584: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x265584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x265588: 0xaf80a34c  sw          $zero, -0x5CB4($gp)
    ctx->pc = 0x265588u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943564), GPR_U32(ctx, 0));
    // 0x26558c: 0xaf80b8b0  sw          $zero, -0x4750($gp)
    ctx->pc = 0x26558cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949040), GPR_U32(ctx, 0));
    // 0x265590: 0xaf80b8b4  sw          $zero, -0x474C($gp)
    ctx->pc = 0x265590u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949044), GPR_U32(ctx, 0));
    // 0x265594: 0xc087140  jal         func_21C500
    ctx->pc = 0x265594u;
    SET_GPR_U32(ctx, 31, 0x26559Cu);
    ctx->pc = 0x265598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265594u;
    // 0x265598: 0xaf80b8b8  sw          $zero, -0x4748($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949048), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C500u, 0x265594u, 0x26559Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26559Cu;
label_26559c:
    // 0x26559c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26559cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2655a0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2655A0u;
    {
        const bool branch_taken_0x2655a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2655A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2655A0u;
        // 0x2655a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2655a0) {
            ctx->pc = 0x2655B8u;
            goto label_2655b8;
        }
    }
    ctx->pc = 0x2655A8u;
    // 0x2655a8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2655a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2655ac: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x2655acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2655b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2655B0u;
    {
        const bool branch_taken_0x2655b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2655B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2655B0u;
        // 0x2655b4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2655b0) {
            ctx->pc = 0x2655C8u;
            goto label_2655c8;
        }
    }
    ctx->pc = 0x2655B8u;
label_2655b8:
    // 0x2655b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2655b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2655bc: 0xc0868fe  jal         func_21A3F8
    ctx->pc = 0x2655BCu;
    SET_GPR_U32(ctx, 31, 0x2655C4u);
    ctx->pc = 0x2655C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2655BCu;
    // 0x2655c0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A3F8u, 0x2655BCu, 0x2655C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2655C4u;
label_2655c4:
    // 0x2655c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2655c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2655c8:
    // 0x2655c8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2655c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2655cc: 0x18400065  blez        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x2655CCu;
    {
        const bool branch_taken_0x2655cc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2655D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2655CCu;
        // 0x2655d0: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2655cc) {
            ctx->pc = 0x265764u;
            goto label_265764;
        }
    }
    ctx->pc = 0x2655D4u;
    // 0x2655d4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2655d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2655d8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2655d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2655dc: 0x24a8000c  addiu       $t0, $a1, 0xC
    ctx->pc = 0x2655dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x2655e0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2655e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2655e4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2655e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2655e8: 0xaf84a34c  sw          $a0, -0x5CB4($gp)
    ctx->pc = 0x2655e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943564), GPR_U32(ctx, 4));
    // 0x2655ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2655ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2655f0: 0xaf83a348  sw          $v1, -0x5CB8($gp)
    ctx->pc = 0x2655f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943560), GPR_U32(ctx, 3));
    // 0x2655f4: 0x1860001f  blez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2655F4u;
    {
        const bool branch_taken_0x2655f4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2655F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2655F4u;
        // 0x2655f8: 0x1024821  addu        $t1, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2655f4) {
            ctx->pc = 0x265674u;
            goto label_265674;
        }
    }
    ctx->pc = 0x2655FCu;
    // 0x2655fc: 0x8f87a2ec  lw          $a3, -0x5D14($gp)
    ctx->pc = 0x2655fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x265600: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x265600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x265604: 0x0  nop
    ctx->pc = 0x265604u;
    // NOP
label_265608:
    // 0x265608: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x265608u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26560c: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x26560cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x265610: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x265610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265614: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x265614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x265618: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x265618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26561c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x26561cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x265620: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x265620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x265624: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x265624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265628: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x265628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26562c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x26562cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x265630: 0x94640008  lhu         $a0, 0x8($v1)
    ctx->pc = 0x265630u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x265634: 0x30a60001  andi        $a2, $a1, 0x1
    ctx->pc = 0x265634u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x265638: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x265638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26563c: 0xa4440008  sh          $a0, 0x8($v0)
    ctx->pc = 0x26563cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x265640: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x265640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x265644: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x265644u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x265648: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x265648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26564c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x26564Cu;
    {
        const bool branch_taken_0x26564c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x265650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26564Cu;
        // 0x265650: 0xe4400018  swc1        $f0, 0x18($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26564c) {
            ctx->pc = 0x265660u;
            goto label_265660;
        }
    }
    ctx->pc = 0x265654u;
    // 0x265654: 0x8f82b8b0  lw          $v0, -0x4750($gp)
    ctx->pc = 0x265654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949040)));
    // 0x265658: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x265658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26565c: 0xaf82b8b0  sw          $v0, -0x4750($gp)
    ctx->pc = 0x26565cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949040), GPR_U32(ctx, 2));
label_265660:
    // 0x265660: 0x8f82a348  lw          $v0, -0x5CB8($gp)
    ctx->pc = 0x265660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x265664: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x265664u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x265668: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x265668u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26566c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x26566Cu;
    {
        const bool branch_taken_0x26566c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26566Cu;
        // 0x265670: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26566c) {
            ctx->pc = 0x265608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265608;
        }
    }
    ctx->pc = 0x265674u;
label_265674:
    // 0x265674: 0x8f93a34c  lw          $s3, -0x5CB4($gp)
    ctx->pc = 0x265674u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943564)));
    // 0x265678: 0x1a60003a  blez        $s3, . + 4 + (0x3A << 2)
    ctx->pc = 0x265678u;
    {
        const bool branch_taken_0x265678 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x26567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265678u;
        // 0x26567c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265678) {
            ctx->pc = 0x265764u;
            goto label_265764;
        }
    }
    ctx->pc = 0x265680u;
    // 0x265680: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x265680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265684: 0x24170014  addiu       $s7, $zero, 0x14
    ctx->pc = 0x265684u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x265688: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x265688u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26568c: 0x2414001c  addiu       $s4, $zero, 0x1C
    ctx->pc = 0x26568cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_265690:
    // 0x265690: 0xc099380  jal         func_264E00
    ctx->pc = 0x265690u;
    SET_GPR_U32(ctx, 31, 0x265698u);
    ctx->pc = 0x265694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265690u;
    // 0x265694: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E00u, 0x265690u, 0x265698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265698u;
label_265698:
    // 0x265698: 0x1055002b  beq         $v0, $s5, . + 4 + (0x2B << 2)
    ctx->pc = 0x265698u;
    {
        const bool branch_taken_0x265698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x26569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265698u;
        // 0x26569c: 0x8f82a34c  lw          $v0, -0x5CB4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265698) {
            ctx->pc = 0x265748u;
            goto label_265748;
        }
    }
    ctx->pc = 0x2656A0u;
    // 0x2656a0: 0xc099380  jal         func_264E00
    ctx->pc = 0x2656A0u;
    SET_GPR_U32(ctx, 31, 0x2656A8u);
    ctx->pc = 0x2656A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2656A0u;
    // 0x2656a4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E00u, 0x2656A0u, 0x2656A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2656A8u;
label_2656a8:
    // 0x2656a8: 0x10550026  beq         $v0, $s5, . + 4 + (0x26 << 2)
    ctx->pc = 0x2656A8u;
    {
        const bool branch_taken_0x2656a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x2656ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2656A8u;
        // 0x2656ac: 0x2568023  subu        $s0, $s2, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2656a8) {
            ctx->pc = 0x265744u;
            goto label_265744;
        }
    }
    ctx->pc = 0x2656B0u;
    // 0x2656b0: 0x8f82a2f0  lw          $v0, -0x5D10($gp)
    ctx->pc = 0x2656b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943472)));
    // 0x2656b4: 0x2178018  mult        $s0, $s0, $s7
    ctx->pc = 0x2656b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2656b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2656b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2656bc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2656bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2656c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2656c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2656c4: 0xc099380  jal         func_264E00
    ctx->pc = 0x2656C4u;
    SET_GPR_U32(ctx, 31, 0x2656CCu);
    ctx->pc = 0x2656C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2656C4u;
    // 0x2656c8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E00u, 0x2656C4u, 0x2656CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2656CCu;
label_2656cc:
    // 0x2656cc: 0x8f83a2f0  lw          $v1, -0x5D10($gp)
    ctx->pc = 0x2656ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943472)));
    // 0x2656d0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2656d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2656d4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2656d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2656d8: 0xc099380  jal         func_264E00
    ctx->pc = 0x2656D8u;
    SET_GPR_U32(ctx, 31, 0x2656E0u);
    ctx->pc = 0x2656DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2656D8u;
    // 0x2656dc: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E00u, 0x2656D8u, 0x2656E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2656E0u;
label_2656e0:
    // 0x2656e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2656e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2656e4: 0x8f82a2f0  lw          $v0, -0x5D10($gp)
    ctx->pc = 0x2656e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943472)));
    // 0x2656e8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2656e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2656ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2656ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2656f0: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x2656f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x2656f4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2656f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2656f8: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2656F8u;
    {
        const bool branch_taken_0x2656f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2656FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2656F8u;
        // 0x2656fc: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2656f8) {
            ctx->pc = 0x265754u;
            goto label_265754;
        }
    }
    ctx->pc = 0x265700u;
    // 0x265700: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x265700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x265704: 0x943018  mult        $a2, $a0, $s4
    ctx->pc = 0x265704u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x265708: 0x8f82a2ec  lw          $v0, -0x5D14($gp)
    ctx->pc = 0x265708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x26570c: 0x741818  mult        $v1, $v1, $s4
    ctx->pc = 0x26570cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x265710: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x265710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x265714: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x265714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x265718: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x265718u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x26571c: 0x84a20008  lh          $v0, 0x8($a1)
    ctx->pc = 0x26571cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x265720: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x265720u;
    {
        const bool branch_taken_0x265720 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x265724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265720u;
        // 0x265724: 0x8f82b8b8  lw          $v0, -0x4748($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265720) {
            ctx->pc = 0x265738u;
            goto label_265738;
        }
    }
    ctx->pc = 0x265728u;
    // 0x265728: 0x8f82b8b4  lw          $v0, -0x474C($gp)
    ctx->pc = 0x265728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949044)));
    // 0x26572c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26572cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x265730: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x265730u;
    {
        const bool branch_taken_0x265730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265730u;
        // 0x265734: 0xaf82b8b4  sw          $v0, -0x474C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949044), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265730) {
            ctx->pc = 0x265754u;
            goto label_265754;
        }
    }
    ctx->pc = 0x265738u;
label_265738:
    // 0x265738: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x265738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26573c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26573Cu;
    {
        const bool branch_taken_0x26573c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26573Cu;
        // 0x265740: 0xaf82b8b8  sw          $v0, -0x4748($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26573c) {
            ctx->pc = 0x265754u;
            goto label_265754;
        }
    }
    ctx->pc = 0x265744u;
label_265744:
    // 0x265744: 0x8f82a34c  lw          $v0, -0x5CB4($gp)
    ctx->pc = 0x265744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943564)));
label_265748:
    // 0x265748: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x265748u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x26574c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26574cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x265750: 0xaf82a34c  sw          $v0, -0x5CB4($gp)
    ctx->pc = 0x265750u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943564), GPR_U32(ctx, 2));
label_265754:
    // 0x265754: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x265754u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x265758: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x265758u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x26575c: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x26575Cu;
    {
        const bool branch_taken_0x26575c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26575Cu;
        // 0x265760: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26575c) {
            ctx->pc = 0x265690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265690;
        }
    }
    ctx->pc = 0x265764u;
label_265764:
    // 0x265764: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x265764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x265768: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x265768u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26576c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x26576cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x265770: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x265770u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x265774: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x265774u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x265778: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x265778u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26577c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x26577cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265780: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x265780u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265784: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x265784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265788: 0x3e00008  jr          $ra
    ctx->pc = 0x265788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265788u;
        // 0x26578c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265790u;
}

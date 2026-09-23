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

// Function: playerMessage
// Address: 0x280690 - 0x280770
void playerMessage_0x280690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("playerMessage_0x280690");
#endif

    switch (ctx->pc) {
        case 0x2806e0u: goto label_2806e0;
        case 0x280734u: goto label_280734;
        default: break;
    }

    ctx->pc = 0x280690u;

    // 0x280690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x280690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x280694: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x280694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x280698: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x280698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28069c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28069cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2806a0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2806a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2806a4: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2806A4u;
    {
        const bool branch_taken_0x2806a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2806A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2806A4u;
        // 0x2806a8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2806a4) {
            ctx->pc = 0x2806CCu;
            goto label_2806cc;
        }
    }
    ctx->pc = 0x2806ACu;
    // 0x2806ac: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2806acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2806b0: 0x24040160  addiu       $a0, $zero, 0x160
    ctx->pc = 0x2806b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x2806b4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2806b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2806b8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2806b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2806bc: 0x2442f838  addiu       $v0, $v0, -0x7C8
    ctx->pc = 0x2806bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965304));
    // 0x2806c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2806c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2806c4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2806C4u;
    {
        const bool branch_taken_0x2806c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2806C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2806C4u;
        // 0x2806c8: 0xac600110  sw          $zero, 0x110($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2806c4) {
            ctx->pc = 0x280758u;
            goto label_280758;
        }
    }
    ctx->pc = 0x2806CCu;
label_2806cc:
    // 0x2806cc: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2806ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2806d0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2806D0u;
    {
        const bool branch_taken_0x2806d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2806D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2806D0u;
        // 0x2806d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2806d0) {
            ctx->pc = 0x280704u;
            goto label_280704;
        }
    }
    ctx->pc = 0x2806D8u;
    // 0x2806d8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2806d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2806dc: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x2806dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_2806e0:
    // 0x2806e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2806e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2806e4: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x2806e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2806e8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2806e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2806ec: 0x0  nop
    ctx->pc = 0x2806ecu;
    // NOP
    // 0x2806f0: 0x0  nop
    ctx->pc = 0x2806f0u;
    // NOP
    // 0x2806f4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2806F4u;
    {
        const bool branch_taken_0x2806f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2806f4) {
            ctx->pc = 0x2806E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2806e0;
        }
    }
    ctx->pc = 0x2806FCu;
    // 0x2806fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2806FCu;
    {
        const bool branch_taken_0x2806fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2806FCu;
        // 0x280700: 0x24110160  addiu       $s1, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2806fc) {
            ctx->pc = 0x280710u;
            goto label_280710;
        }
    }
    ctx->pc = 0x280704u;
label_280704:
    // 0x280704: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x280704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x280708: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x280708u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x28070c: 0x24110160  addiu       $s1, $zero, 0x160
    ctx->pc = 0x28070cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_280710:
    // 0x280710: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x280710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x280714: 0x912018  mult        $a0, $a0, $s1
    ctx->pc = 0x280714u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x280718: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x280718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x28071c: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x28071cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x280720: 0x2610f838  addiu       $s0, $s0, -0x7C8
    ctx->pc = 0x280720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965304));
    // 0x280724: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x280724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x280728: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x280728u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x28072c: 0xc0b9516  jal         func_2E5458
    ctx->pc = 0x28072Cu;
    SET_GPR_U32(ctx, 31, 0x280734u);
    ctx->pc = 0x280730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28072Cu;
    // 0x280730: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5458u, 0x28072Cu, 0x280734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280734u;
label_280734:
    // 0x280734: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x280734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x280738: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x280738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x28073c: 0x711018  mult        $v0, $v1, $s1
    ctx->pc = 0x28073cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x280740: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x280740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x280744: 0xa06000ff  sb          $zero, 0xFF($v1)
    ctx->pc = 0x280744u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 255), (uint8_t)GPR_U32(ctx, 0));
    // 0x280748: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x280748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28074c: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x28074cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x280750: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x280750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x280754: 0xac440110  sw          $a0, 0x110($v0)
    ctx->pc = 0x280754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 4));
label_280758:
    // 0x280758: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x280758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28075c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28075cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280760: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x280760u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280764: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x280764u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280768: 0x3e00008  jr          $ra
    ctx->pc = 0x280768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280768u;
        // 0x28076c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280770u;
}

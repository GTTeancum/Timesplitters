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

// Function: profileTimeStart
// Address: 0x2b6320 - 0x2b63c8
void profileTimeStart_0x2b6320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("profileTimeStart_0x2b6320");
#endif

    switch (ctx->pc) {
        case 0x2b6348u: goto label_2b6348;
        case 0x2b638cu: goto label_2b638c;
        case 0x2b639cu: goto label_2b639c;
        default: break;
    }

    ctx->pc = 0x2b6320u;

    // 0x2b6320: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b6320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b6324: 0x8f85b450  lw          $a1, -0x4BB0($gp)
    ctx->pc = 0x2b6324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947920)));
    // 0x2b6328: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b6328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b632c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b632cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b6330: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b6330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6334: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b6334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b6338: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6338u;
    {
        const bool branch_taken_0x2b6338 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6338u;
        // 0x2b633c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6338) {
            ctx->pc = 0x2B634Cu;
            goto label_2b634c;
        }
    }
    ctx->pc = 0x2B6340u;
    // 0x2b6340: 0xc0ad8a4  jal         func_2B6290
    ctx->pc = 0x2B6340u;
    SET_GPR_U32(ctx, 31, 0x2B6348u);
    ctx->pc = 0x2B6290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6290u, 0x2B6340u, 0x2B6348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6348u;
label_2b6348:
    // 0x2b6348: 0x8f85b450  lw          $a1, -0x4BB0($gp)
    ctx->pc = 0x2b6348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947920)));
label_2b634c:
    // 0x2b634c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2b634cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2b6350: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2b6350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2b6354: 0x2428018  mult        $s0, $s2, $v0
    ctx->pc = 0x2b6354u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2b6358: 0x247159c0  addiu       $s1, $v1, 0x59C0
    ctx->pc = 0x2b6358u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 22976));
    // 0x2b635c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b635cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b6360: 0xaf85b450  sw          $a1, -0x4BB0($gp)
    ctx->pc = 0x2b6360u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947920), GPR_U32(ctx, 5));
    // 0x2b6364: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x2b6364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2b6368: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2b6368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b636c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B636Cu;
    {
        const bool branch_taken_0x2b636c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B636Cu;
        // 0x2b6370: 0x2301821  addu        $v1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b636c) {
            ctx->pc = 0x2B6390u;
            goto label_2b6390;
        }
    }
    ctx->pc = 0x2B6374u;
    // 0x2b6374: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2b6374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2b6378: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x2b6378u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x2b637c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b637cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6380: 0x24a59a90  addiu       $a1, $a1, -0x6570
    ctx->pc = 0x2b6380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941328));
    // 0x2b6384: 0xc0ad8b0  jal         func_2B62C0
    ctx->pc = 0x2B6384u;
    SET_GPR_U32(ctx, 31, 0x2B638Cu);
    ctx->pc = 0x2B6388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6384u;
    // 0x2b6388: 0x34c6007f  ori         $a2, $a2, 0x7F (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)127);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62C0u, 0x2B6384u, 0x2B638Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B638Cu;
label_2b638c:
    // 0x2b638c: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x2b638cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_2b6390:
    // 0x2b6390: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b6390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6394: 0xc0ad8a8  jal         func_2B62A0
    ctx->pc = 0x2B6394u;
    SET_GPR_U32(ctx, 31, 0x2B639Cu);
    ctx->pc = 0x2B6398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6394u;
    // 0x2b6398: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62A0u, 0x2B6394u, 0x2B639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B639Cu;
label_2b639c:
    // 0x2b639c: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x2b639cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2b63a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b63a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b63a4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2b63a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b63a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b63a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b63ac: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2b63acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b63b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b63b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b63b4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b63b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b63b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b63b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b63bc: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2b63bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b63c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B63C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B63C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B63C0u;
        // 0x2b63c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B63C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B63C8u;
}

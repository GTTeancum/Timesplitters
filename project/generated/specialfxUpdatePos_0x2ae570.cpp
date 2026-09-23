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

// Function: specialfxUpdatePos
// Address: 0x2ae570 - 0x2ae5f0
void specialfxUpdatePos_0x2ae570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxUpdatePos_0x2ae570");
#endif

    switch (ctx->pc) {
        case 0x2ae588u: goto label_2ae588;
        default: break;
    }

    ctx->pc = 0x2ae570u;

    // 0x2ae570: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2AE570u;
    {
        const bool branch_taken_0x2ae570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE570u;
        // 0x2ae574: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae570) {
            ctx->pc = 0x2AE5E8u;
            goto label_2ae5e8;
        }
    }
    ctx->pc = 0x2AE578u;
    // 0x2ae578: 0x2442c268  addiu       $v0, $v0, -0x3D98
    ctx->pc = 0x2ae578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951528));
    // 0x2ae57c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ae57cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae580: 0x2448002c  addiu       $t0, $v0, 0x2C
    ctx->pc = 0x2ae580u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x2ae584: 0x24691420  addiu       $t1, $v1, 0x1420
    ctx->pc = 0x2ae584u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 5152));
label_2ae588:
    // 0x2ae588: 0x54830014  bnel        $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2AE588u;
    {
        const bool branch_taken_0x2ae588 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ae588) {
            ctx->pc = 0x2AE58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE588u;
            // 0x2ae58c: 0x2463005c  addiu       $v1, $v1, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 92));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE5DCu;
            goto label_2ae5dc;
        }
    }
    ctx->pc = 0x2AE590u;
    // 0x2ae590: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2ae590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae594: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2ae594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2ae598: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2ae598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ae59c: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x2ae59cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x2ae5a0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2ae5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae5a4: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2ae5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2ae5a8: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2ae5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ae5ac: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x2ae5acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x2ae5b0: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2ae5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae5b4: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x2ae5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x2ae5b8: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2ae5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ae5bc: 0xe4610020  swc1        $f1, 0x20($v1)
    ctx->pc = 0x2ae5bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x2ae5c0: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x2ae5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae5c4: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2ae5c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x2ae5c8: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x2ae5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ae5cc: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x2ae5ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x2ae5d0: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2ae5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE5D4u;
        // 0x2ae5d8: 0xe5000000  swc1        $f0, 0x0($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE5D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE5DCu;
label_2ae5dc:
    // 0x2ae5dc: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x2ae5dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2ae5e0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2AE5E0u;
    {
        const bool branch_taken_0x2ae5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE5E0u;
        // 0x2ae5e4: 0x2508005c  addiu       $t0, $t0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae5e0) {
            ctx->pc = 0x2AE588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae588;
        }
    }
    ctx->pc = 0x2AE5E8u;
label_2ae5e8:
    // 0x2ae5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE5F0u;
}

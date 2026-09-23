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

// Function: mmStartMainDialog
// Address: 0x252fa0 - 0x253014
void mmStartMainDialog_0x252fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmStartMainDialog_0x252fa0");
#endif

    switch (ctx->pc) {
        case 0x252fc4u: goto label_252fc4;
        case 0x252fdcu: goto label_252fdc;
        default: break;
    }

    ctx->pc = 0x252fa0u;

    // 0x252fa0: 0x8f82a0d8  lw          $v0, -0x5F28($gp)
    ctx->pc = 0x252fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x252fa4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x252fa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x252fa8: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x252fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x252fac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x252facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x252fb0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x252fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x252fb4: 0x24a57220  addiu       $a1, $a1, 0x7220
    ctx->pc = 0x252fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29216));
    // 0x252fb8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x252fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252fbc: 0xc08b3ac  jal         func_22CEB0
    ctx->pc = 0x252FBCu;
    SET_GPR_U32(ctx, 31, 0x252FC4u);
    ctx->pc = 0x252FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252FBCu;
    // 0x252fc0: 0xaf82a0d8  sw          $v0, -0x5F28($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB0u, 0x252FBCu, 0x252FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252FC4u;
label_252fc4:
    // 0x252fc4: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x252fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x252fc8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x252fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x252fcc: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x252fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x252fd0: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x252fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x252fd4: 0xc093f56  jal         func_24FD58
    ctx->pc = 0x252FD4u;
    SET_GPR_U32(ctx, 31, 0x252FDCu);
    ctx->pc = 0x252FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252FD4u;
    // 0x252fd8: 0xaf80b870  sw          $zero, -0x4790($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948976), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FD58u, 0x252FD4u, 0x252FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252FDCu;
label_252fdc:
    // 0x252fdc: 0xc78182b4  lwc1        $f1, -0x7D4C($gp)
    ctx->pc = 0x252fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252fe0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x252fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x252fe4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x252fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x252fe8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x252fe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252fec: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x252fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x252ff0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x252ff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x252ff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x252ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252ff8: 0xe781b88c  swc1        $f1, -0x4774($gp)
    ctx->pc = 0x252ff8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949004), bits); }
    // 0x252ffc: 0xe780b890  swc1        $f0, -0x4770($gp)
    ctx->pc = 0x252ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949008), bits); }
    // 0x253000: 0xaf82a210  sw          $v0, -0x5DF0($gp)
    ctx->pc = 0x253000u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943248), GPR_U32(ctx, 2));
    // 0x253004: 0xe782a21c  swc1        $f2, -0x5DE4($gp)
    ctx->pc = 0x253004u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943260), bits); }
    // 0x253008: 0xaf80a218  sw          $zero, -0x5DE8($gp)
    ctx->pc = 0x253008u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943256), GPR_U32(ctx, 0));
    // 0x25300c: 0x3e00008  jr          $ra
    ctx->pc = 0x25300Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25300Cu;
        // 0x253010: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25300Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253014u;
}

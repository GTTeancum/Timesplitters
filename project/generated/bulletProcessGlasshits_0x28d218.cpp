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

// Function: bulletProcessGlasshits
// Address: 0x28d218 - 0x28d2d4
void bulletProcessGlasshits_0x28d218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bulletProcessGlasshits_0x28d218");
#endif

    switch (ctx->pc) {
        case 0x28d2acu: goto label_28d2ac;
        default: break;
    }

    ctx->pc = 0x28d218u;

    // 0x28d218: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28d218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28d21c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28d21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28d220: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28d220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28d224: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28d224u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d228: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28d228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28d22c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28d22cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d230: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x28d230u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x28d234: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28d234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28d238: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x28d238u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x28d23c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28D23Cu;
    {
        const bool branch_taken_0x28d23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D23Cu;
        // 0x28d240: 0xc6140050  lwc1        $f20, 0x50($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d23c) {
            ctx->pc = 0x28D268u;
            goto label_28d268;
        }
    }
    ctx->pc = 0x28D244u;
    // 0x28d244: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x28d244u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x28d248: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D248u;
    {
        const bool branch_taken_0x28d248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D248u;
        // 0x28d24c: 0x28620014  slti        $v0, $v1, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d248) {
            ctx->pc = 0x28D260u;
            goto label_28d260;
        }
    }
    ctx->pc = 0x28D250u;
    // 0x28d250: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D250u;
    {
        const bool branch_taken_0x28d250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D250u;
        // 0x28d254: 0x2862000a  slti        $v0, $v1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d250) {
            ctx->pc = 0x28D268u;
            goto label_28d268;
        }
    }
    ctx->pc = 0x28D258u;
    // 0x28d258: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D258u;
    {
        const bool branch_taken_0x28d258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D258u;
        // 0x28d25c: 0x8f82a260  lw          $v0, -0x5DA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d258) {
            ctx->pc = 0x28D26Cu;
            goto label_28d26c;
        }
    }
    ctx->pc = 0x28D260u;
label_28d260:
    // 0x28d260: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28d260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28d264: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x28d264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_28d268:
    // 0x28d268: 0x8f82a260  lw          $v0, -0x5DA0($gp)
    ctx->pc = 0x28d268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943328)));
label_28d26c:
    // 0x28d26c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28D26Cu;
    {
        const bool branch_taken_0x28d26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d26c) {
            ctx->pc = 0x28D270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D26Cu;
            // 0x28d270: 0xae000098  sw          $zero, 0x98($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D274u;
            goto label_28d274;
        }
    }
    ctx->pc = 0x28D274u;
label_28d274:
    // 0x28d274: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x28d274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x28d278: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28D278u;
    {
        const bool branch_taken_0x28d278 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28D27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D278u;
        // 0x28d27c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d278) {
            ctx->pc = 0x28D2ACu;
            goto label_28d2ac;
        }
    }
    ctx->pc = 0x28D280u;
    // 0x28d280: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x28d280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x28d284: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28D284u;
    {
        const bool branch_taken_0x28d284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28d284) {
            ctx->pc = 0x28D288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D284u;
            // 0x28d288: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D2B0u;
            goto label_28d2b0;
        }
    }
    ctx->pc = 0x28D28Cu;
    // 0x28d28c: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x28d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x28d290: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28D290u;
    {
        const bool branch_taken_0x28d290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D290u;
        // 0x28d294: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d290) {
            ctx->pc = 0x28D2ACu;
            goto label_28d2ac;
        }
    }
    ctx->pc = 0x28D298u;
    // 0x28d298: 0x8c420160  lw          $v0, 0x160($v0)
    ctx->pc = 0x28d298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x28d29c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28d29cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28d2a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28d2a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28d2a4: 0xc088f98  jal         func_223E60
    ctx->pc = 0x28D2A4u;
    SET_GPR_U32(ctx, 31, 0x28D2ACu);
    ctx->pc = 0x28D2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D2A4u;
    // 0x28d2a8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x28D2A4u, 0x28D2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D2ACu;
label_28d2ac:
    // 0x28d2ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28d2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28d2b0:
    // 0x28d2b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28d2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d2b4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28d2b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d2b8: 0x26060054  addiu       $a2, $s0, 0x54
    ctx->pc = 0x28d2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x28d2bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28d2bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d2c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28d2c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d2c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28d2c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d2c8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x28d2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28d2cc: 0x8096824  j           func_25A090
    ctx->pc = 0x28D2CCu;
    ctx->pc = 0x28D2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D2CCu;
    // 0x28d2d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A090u;
    bgProcessGlasshits_0x25a090(rdram, ctx, runtime); return;
    ctx->pc = 0x28D2D4u;
}

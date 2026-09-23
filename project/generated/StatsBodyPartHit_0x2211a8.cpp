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

// Function: StatsBodyPartHit
// Address: 0x2211a8 - 0x221298
void StatsBodyPartHit_0x2211a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StatsBodyPartHit_0x2211a8");
#endif

    switch (ctx->pc) {
        case 0x221244u: goto label_221244;
        default: break;
    }

    ctx->pc = 0x2211a8u;

    // 0x2211a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2211a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2211ac: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2211acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2211b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2211b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2211b4: 0x2cc20012  sltiu       $v0, $a2, 0x12
    ctx->pc = 0x2211b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x2211b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2211b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2211bc: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2211BCu;
    {
        const bool branch_taken_0x2211bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2211C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2211BCu;
        // 0x2211c0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2211bc) {
            ctx->pc = 0x221288u;
            goto label_221288;
        }
    }
    ctx->pc = 0x2211C4u;
    // 0x2211c4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2211c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2211c8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2211c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2211cc: 0x24420ac0  addiu       $v0, $v0, 0xAC0
    ctx->pc = 0x2211ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2752));
    // 0x2211d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2211d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2211d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2211d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2211d8: 0x800008  jr          $a0
    ctx->pc = 0x2211D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2211E0u: goto label_2211e0;
            case 0x221204u: goto label_221204;
            case 0x221228u: goto label_221228;
            case 0x221264u: goto label_221264;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2211D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2211E0u;
label_2211e0:
    // 0x2211e0: 0x10e0002a  beqz        $a3, . + 4 + (0x2A << 2)
    ctx->pc = 0x2211E0u;
    {
        const bool branch_taken_0x2211e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2211E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2211E0u;
        // 0x2211e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2211e0) {
            ctx->pc = 0x22128Cu;
            goto label_22128c;
        }
    }
    ctx->pc = 0x2211E8u;
    // 0x2211e8: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x2211e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2211ec: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2211ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2211f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2211f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2211f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2211f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2211f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2211f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2211fc: 0x8088f98  j           func_223E60
    ctx->pc = 0x2211FCu;
    ctx->pc = 0x221200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2211FCu;
    // 0x221200: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    StatsAdd_0x223e60(rdram, ctx, runtime); return;
    ctx->pc = 0x221204u;
label_221204:
    // 0x221204: 0x10e00021  beqz        $a3, . + 4 + (0x21 << 2)
    ctx->pc = 0x221204u;
    {
        const bool branch_taken_0x221204 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x221208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221204u;
        // 0x221208: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221204) {
            ctx->pc = 0x22128Cu;
            goto label_22128c;
        }
    }
    ctx->pc = 0x22120Cu;
    // 0x22120c: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x22120cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x221210: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x221210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x221214: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x221214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x221218: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x221218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22121c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22121cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221220: 0x8088f98  j           func_223E60
    ctx->pc = 0x221220u;
    ctx->pc = 0x221224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221220u;
    // 0x221224: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    StatsAdd_0x223e60(rdram, ctx, runtime); return;
    ctx->pc = 0x221228u;
label_221228:
    // 0x221228: 0x50e00007  beql        $a3, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x221228u;
    {
        const bool branch_taken_0x221228 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x221228) {
            ctx->pc = 0x22122Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221228u;
            // 0x22122c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221248u;
            goto label_221248;
        }
    }
    ctx->pc = 0x221230u;
    // 0x221230: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x221230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x221234: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x221234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x221238: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x221238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22123c: 0xc088f98  jal         func_223E60
    ctx->pc = 0x22123Cu;
    SET_GPR_U32(ctx, 31, 0x221244u);
    ctx->pc = 0x221240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22123Cu;
    // 0x221240: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x22123Cu, 0x221244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221244u;
label_221244:
    // 0x221244: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x221244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_221248:
    // 0x221248: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x221248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x22124c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22124cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x221250: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x221250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x221254: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x221254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x221258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22125c: 0x8088f98  j           func_223E60
    ctx->pc = 0x22125Cu;
    ctx->pc = 0x221260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22125Cu;
    // 0x221260: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    StatsAdd_0x223e60(rdram, ctx, runtime); return;
    ctx->pc = 0x221264u;
label_221264:
    // 0x221264: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x221264u;
    {
        const bool branch_taken_0x221264 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x221268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221264u;
        // 0x221268: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221264) {
            ctx->pc = 0x22128Cu;
            goto label_22128c;
        }
    }
    ctx->pc = 0x22126Cu;
    // 0x22126c: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x22126cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x221270: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x221270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x221274: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x221274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x221278: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x221278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22127c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22127cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221280: 0x8088f98  j           func_223E60
    ctx->pc = 0x221280u;
    ctx->pc = 0x221284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221280u;
    // 0x221284: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    StatsAdd_0x223e60(rdram, ctx, runtime); return;
    ctx->pc = 0x221288u;
label_221288:
    // 0x221288: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x221288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22128c:
    // 0x22128c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22128cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221290: 0x3e00008  jr          $ra
    ctx->pc = 0x221290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221290u;
        // 0x221294: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221298u;
}

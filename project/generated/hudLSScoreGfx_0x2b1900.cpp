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

// Function: hudLSScoreGfx
// Address: 0x2b1900 - 0x2b19b8
void hudLSScoreGfx_0x2b1900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hudLSScoreGfx_0x2b1900");
#endif

    switch (ctx->pc) {
        case 0x2b1950u: goto label_2b1950;
        case 0x2b19a4u: goto label_2b19a4;
        default: break;
    }

    ctx->pc = 0x2b1900u;

    // 0x2b1900: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b1900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b1904: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x2b1904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2b1908: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2b1908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2b190c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2b190cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2b1910: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b1910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b1914: 0x244499f0  addiu       $a0, $v0, -0x6610
    ctx->pc = 0x2b1914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941168));
    // 0x2b1918: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b1918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b191c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b191cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1920: 0x8c5099f0  lw          $s0, -0x6610($v0)
    ctx->pc = 0x2b1920u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3299F0u));
    // 0x2b1924: 0x8c670180  lw          $a3, 0x180($v1)
    ctx->pc = 0x2b1924u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
    // 0x2b1928: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2b1928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b192c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x2b192cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x329A48u));
    // 0x2b1930: 0x8ce80160  lw          $t0, 0x160($a3)
    ctx->pc = 0x2b1930u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x2b1934: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2b1934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2b1938: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x2b1938u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x2b193c: 0x2484fba8  addiu       $a0, $a0, -0x458
    ctx->pc = 0x2b193cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966184));
    // 0x2b1940: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2b1940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b1944: 0x8d0500f8  lw          $a1, 0xF8($t0)
    ctx->pc = 0x2b1944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 248)));
    // 0x2b1948: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x2B1948u;
    SET_GPR_U32(ctx, 31, 0x2B1950u);
    ctx->pc = 0x2B194Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1948u;
    // 0x2b194c: 0x2068021  addu        $s0, $s0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x2B1948u, 0x2B1950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1950u;
label_2b1950:
    // 0x2b1950: 0x8f85b234  lw          $a1, -0x4DCC($gp)
    ctx->pc = 0x2b1950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2b1954: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2b1954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1958: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x2b1958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2b195c: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x2b195cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x2b1960: 0x8ca60180  lw          $a2, 0x180($a1)
    ctx->pc = 0x2b1960u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 384)));
    // 0x2b1964: 0x24842c18  addiu       $a0, $a0, 0x2C18
    ctx->pc = 0x2b1964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11288));
    // 0x2b1968: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b1968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b196c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b196cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1970: 0x8cc80160  lw          $t0, 0x160($a2)
    ctx->pc = 0x2b1970u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 352)));
    // 0x2b1974: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b1974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b1978: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x2b1978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x2b197c: 0x3c0b7f7f  lui         $t3, 0x7F7F
    ctx->pc = 0x2b197cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32639 << 16));
    // 0x2b1980: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b1980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1984: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2b1984u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1988: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b1988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b198c: 0x24090016  addiu       $t1, $zero, 0x16
    ctx->pc = 0x2b198cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2b1990: 0x8d0a0014  lw          $t2, 0x14($t0)
    ctx->pc = 0x2b1990u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x2b1994: 0x356b7f80  ori         $t3, $t3, 0x7F80
    ctx->pc = 0x2b1994u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32640);
    // 0x2b1998: 0x8c440cb4  lw          $a0, 0xCB4($v0)
    ctx->pc = 0x2b1998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
    // 0x2b199c: 0xc0ac508  jal         func_2B1420
    ctx->pc = 0x2B199Cu;
    SET_GPR_U32(ctx, 31, 0x2B19A4u);
    ctx->pc = 0x2B19A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B199Cu;
    // 0x2b19a0: 0x2408007d  addiu       $t0, $zero, 0x7D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1420u, 0x2B199Cu, 0x2B19A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B19A4u;
label_2b19a4:
    // 0x2b19a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b19a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b19a8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2b19a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b19ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b19acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b19b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B19B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B19B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B19B0u;
        // 0x2b19b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B19B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B19B8u;
}

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

// Function: ipInvertScreen
// Address: 0x2961f0 - 0x2962d0
void ipInvertScreen_0x2961f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ipInvertScreen_0x2961f0");
#endif

    switch (ctx->pc) {
        case 0x296200u: goto label_296200;
        default: break;
    }

    ctx->pc = 0x2961f0u;

    // 0x2961f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2961f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2961f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2961f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2961f8: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2961F8u;
    SET_GPR_U32(ctx, 31, 0x296200u);
    ctx->pc = 0x2961FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2961F8u;
    // 0x2961fc: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2961F8u, 0x296200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296200u;
label_296200:
    // 0x296200: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x296200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x296204: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x296204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x296208: 0x3c036c02  lui         $v1, 0x6C02
    ctx->pc = 0x296208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27650 << 16));
    // 0x29620c: 0x34068001  ori         $a2, $zero, 0x8001
    ctx->pc = 0x29620cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x296210: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x296210u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x296214: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x296214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x296218: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x296218u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29621c: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x29621cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x296220: 0x8f8493a0  lw          $a0, -0x6C60($gp)
    ctx->pc = 0x296220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x296224: 0x3c03108f  lui         $v1, 0x108F
    ctx->pc = 0x296224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4239 << 16));
    // 0x296228: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x296228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x29622c: 0x24080084  addiu       $t0, $zero, 0x84
    ctx->pc = 0x29622cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x296230: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x296230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x296234: 0x240b0042  addiu       $t3, $zero, 0x42
    ctx->pc = 0x296234u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x296238: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x296238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29623c: 0x3c051400  lui         $a1, 0x1400
    ctx->pc = 0x29623cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5120 << 16));
    // 0x296240: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x296240u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x296244: 0x34a507fc  ori         $a1, $a1, 0x7FC
    ctx->pc = 0x296244u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2044);
    // 0x296248: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x296248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29624c: 0x3c0c1100  lui         $t4, 0x1100
    ctx->pc = 0x29624cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4352 << 16));
    // 0x296250: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x296250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x296254: 0x3c0a0033  lui         $t2, 0x33
    ctx->pc = 0x296254u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
    // 0x296258: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x296258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29625c: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x29625cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x296260: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x296260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x296264: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x296264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x296268: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x296268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29626c: 0x254999f0  addiu       $t1, $t2, -0x6610
    ctx->pc = 0x29626cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4294941168));
    // 0x296270: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x296270u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x296274: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x296274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x296278: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x296278u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x29627c: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x29627cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x296280: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x296280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x296284: 0xaf8693a0  sw          $a2, -0x6C60($gp)
    ctx->pc = 0x296284u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 6));
    // 0x296288: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x296288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29628c: 0x2408ff7f  addiu       $t0, $zero, -0x81
    ctx->pc = 0x29628cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x296290: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x296290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x296294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296298: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x296298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x29629c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29629cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2962a0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2962a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2962a4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2962a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2962a8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2962a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2962ac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2962acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2962b0: 0xac4c0000  sw          $t4, 0x0($v0)
    ctx->pc = 0x2962b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 12));
    // 0x2962b4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2962b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2962b8: 0x8d4499f0  lw          $a0, -0x6610($t2)
    ctx->pc = 0x2962b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3299F0u));
    // 0x2962bc: 0x8d270018  lw          $a3, 0x18($t1)
    ctx->pc = 0x2962bcu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x329A08u));
    // 0x2962c0: 0x8d250014  lw          $a1, 0x14($t1)
    ctx->pc = 0x2962c0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x329A04u));
    // 0x2962c4: 0x8d260004  lw          $a2, 0x4($t1)
    ctx->pc = 0x2962c4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3299F4u));
    // 0x2962c8: 0x80ae108  j           func_2B8420
    ctx->pc = 0x2962C8u;
    ctx->pc = 0x2962CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2962C8u;
    // 0x2962cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    dlFillRectangle_0x2b8420(rdram, ctx, runtime); return;
    ctx->pc = 0x2962D0u;
}

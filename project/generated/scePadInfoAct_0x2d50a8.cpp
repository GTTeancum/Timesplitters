#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void scePadInfoAct_0x2d50a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("scePadInfoAct_0x2d50a8");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::scePadInfoAct(rdram, ctx, runtime); 
}

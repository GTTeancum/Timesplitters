#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sceSifExitRpc_0x2d26b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceSifExitRpc_0x2d26b0");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::sceSifExitRpc(rdram, ctx, runtime); 
}

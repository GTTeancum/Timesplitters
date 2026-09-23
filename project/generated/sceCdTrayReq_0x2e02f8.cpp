#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sceCdTrayReq_0x2e02f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceCdTrayReq_0x2e02f8");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::sceCdTrayReq(rdram, ctx, runtime); 
}

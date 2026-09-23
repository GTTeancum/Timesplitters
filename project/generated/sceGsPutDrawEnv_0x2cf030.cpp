#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sceGsPutDrawEnv_0x2cf030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceGsPutDrawEnv_0x2cf030");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::sceGsPutDrawEnv(rdram, ctx, runtime); 
}

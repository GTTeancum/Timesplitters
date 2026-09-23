#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sceSifInitIopHeap_0x2d3bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceSifInitIopHeap_0x2d3bd8");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::sceSifInitIopHeap(rdram, ctx, runtime); 
}

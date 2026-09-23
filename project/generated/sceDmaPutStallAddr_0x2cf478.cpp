#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sceDmaPutStallAddr_0x2cf478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceDmaPutStallAddr_0x2cf478");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::sceDmaPutStallAddr(rdram, ctx, runtime); 
}

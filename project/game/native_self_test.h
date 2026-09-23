#pragma once
#include "ps2_recompiled_functions.h"
#include "ps2_runtime_macros.h"
#include <cstring>
// Exercise original AOT fread on a newlib memory FILE, not a host file handle.
static int nativeSelfTest(const char *elf) {
    PS2Runtime rt;
    rt.setMissingFunctionPolicy(PS2Runtime::MissingFunctionPolicy::Stop);
    if(!rt.memory().initialize(PS2_RAM_SIZE) || !rt.loadELF(elf)) throw std::runtime_error("self-test ELF load failed");
    uint8_t *ram=rt.memory().getRDRAM();
    constexpr uint32_t file=0x10000u,src=0x10200u,dst=0x10400u,sp=0x18000u,ret=0x12345678u;
    const char payload[]="abcde";
    int tests=0;
    for(const auto pair : {std::pair<uint32_t,uint32_t>{1u,5u},{2u,2u},{0u,5u}}) {
        std::memset(ram+file,0,0x500);
        std::memcpy(ram+src,payload,5);
        uint32_t cursor=src,remaining=5;
        std::memcpy(ram+file,&cursor,4);std::memcpy(ram+file+4,&remaining,4);
        R5900Context ctx;
        ctx.pc=0x2eb158u;
        SET_GPR_U32(&ctx,4,dst);SET_GPR_U32(&ctx,5,pair.first);SET_GPR_U32(&ctx,6,pair.second);
        SET_GPR_U32(&ctx,7,file);SET_GPR_U32(&ctx,29,sp);SET_GPR_U32(&ctx,31,ret);
        for(int budget=0;ctx.pc!=ret && budget<1000;++budget) {
            rt.lookupFunction(ctx.pc)(ram,&ctx,&rt);
            if(rt.isStopRequested())throw std::runtime_error("self-test hit missing AOT function");
        }
        const uint32_t copied=pair.first*pair.second;
        std::memcpy(&cursor,ram+file,4);std::memcpy(&remaining,ram+file+4,4);
        if(ctx.pc!=ret || getRegU32(&ctx,29)!=sp || getRegU32(&ctx,2)!=(copied?pair.second:0u) ||
           cursor!=src+copied || remaining!=5-copied || std::memcmp(ram+dst,payload,copied)!=0 || ram[dst+copied]!=0)
            throw std::runtime_error("original AOT fread memory-stream regression failed");
        std::cout<<"[TS:self-test] fread size="<<pair.first<<" count="<<pair.second<<" PASS\n";++tests;
    }
    // Original sceSdTransToIOP builds a SIF DMA descriptor and optionally waits.
    // Verify the destination IOP bytes, not merely its return value.
    if (!rt.syncCoreSubsystems()) throw std::runtime_error("IOP self-test core binding failed");
    constexpr uint32_t eeSource=0x11000u,iopDestination=0x140000u;
    for (uint32_t i=0;i<64u;++i) ram[eeSource+i]=static_cast<uint8_t>(0x37u+i*3u);
    std::vector<uint8_t> iopBytes(64u);
    if (!rt.zeroIopMemory(iopDestination,64u)) throw std::runtime_error("IOP destination unavailable");
    R5900Context ctx;ctx.pc=0x2dd990u;
    SET_GPR_U32(&ctx,4,eeSource);SET_GPR_U32(&ctx,5,iopDestination);
    SET_GPR_U32(&ctx,6,64u);SET_GPR_U32(&ctx,7,1u);
    SET_GPR_U32(&ctx,29,sp);SET_GPR_U32(&ctx,31,ret);
    rt.eeScheduler().bindMainContextForSyscall(ctx, ram);
    for(int budget=0;ctx.pc!=ret && budget<1000;++budget) {
        rt.lookupFunction(ctx.pc)(ram,&ctx,&rt);
        if(rt.isStopRequested()) throw std::runtime_error("sound transfer hit missing AOT function");
    }
    if(ctx.pc!=ret || getRegU32(&ctx,29)!=sp || getRegU32(&ctx,2)!=0u ||
       !rt.readIopMemory(iopDestination,iopBytes.data(),iopBytes.size()) ||
       std::memcmp(ram+eeSource,iopBytes.data(),iopBytes.size())!=0)
        throw std::runtime_error("original AOT sceSdTransToIOP transfer regression failed");
    ++tests;std::cout<<"[TS:self-test] original sceSdTransToIOP copied 64 bytes to IOP RAM PASS\n";
    std::cout<<"[TS:self-test] "<<tests<<" original-EE ABI checks passed\n";
    return 0;
}

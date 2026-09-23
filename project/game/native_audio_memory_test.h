#pragma once
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include <array>
#include <cstring>
#include <iostream>
#include <vector>

// These are data-path component tests, not proof of mixed or audible audio.
// One case executes original EE sceSdTransToIOP before invoking the registered
// sceSdRemote HLE. The remaining cases exercise its actual IOP/SPU RAM effects.
static int nativeAudioMemoryTest(const char* elf) {
    PS2Runtime rt; rt.setMissingFunctionPolicy(PS2Runtime::MissingFunctionPolicy::Stop);
    if(!rt.memory().initialize(PS2_RAM_SIZE)||!rt.loadELF(elf)||!rt.syncCoreSubsystems())
        throw std::runtime_error("audio memory test initialization failed");
    auto* ram=rt.memory().getRDRAM();
    constexpr uint32_t sp=0x70000u, ret=0x12345678u, ee=0x11000u, iop=0x140000u;
    constexpr uint32_t capacity=PS2AudioBackend::SpuRamBytes;
    unsigned passed=0,failed=0;
    auto check=[&](const char* name,bool ok){
        std::cout<<"[TS:audio-memory] "<<name<<' '<<(ok?"PASS":"FAIL")<<'\n';
        if(ok)++passed;else ++failed;
    };
    auto invoke=[&](R5900Context& x){
        SET_GPR_U32((&x),29,sp);SET_GPR_U32((&x),31,ret);
        for(unsigned n=0;x.pc!=ret && n<1000;++n){
            if(!rt.hasFunction(x.pc))throw std::runtime_error("audio memory test missing AOT function");
            rt.lookupFunction(x.pc)(ram,&x,&rt);
        }
        if(x.pc!=ret||GPR_U32((&x),29)!=sp||rt.isStopRequested())
            throw std::runtime_error("audio memory test original return/stack failure");
        return GPR_U32((&x),2);
    };
    // Deliberately nonzero former O32-stack fallback words: an EE register value
    // of zero is an argument, not permission to substitute unrelated stack data.
    std::memset(ram+sp,0x6b,128);
    auto remote=[&](uint32_t cmd,uint32_t core,uint32_t mode,uint32_t a=0,uint32_t b=0,uint32_t c=0){
        R5900Context x{};x.pc=0x2dda10u;
        const uint32_t args[]={1u,cmd,core,mode,a,b,c};
        for(unsigned n=0;n<7;++n)SET_GPR_U32((&x),4+n,args[n]);
        return invoke(x);
    };
    R5900Context init{};init.pc=0x2dd8c8u;invoke(init);
    std::array<uint8_t,128> pattern{}, read{};
    for(unsigned n=0;n<pattern.size();++n)pattern[n]=static_cast<uint8_t>(0x31u+n*11u);
    std::memcpy(ram+ee,pattern.data(),pattern.size());
    R5900Context transfer{};transfer.pc=0x2dd990u;
    SET_GPR_U32((&transfer),4,ee);SET_GPR_U32((&transfer),5,iop);
    SET_GPR_U32((&transfer),6,pattern.size());SET_GPR_U32((&transfer),7,1);
    check("original EE to IOP",invoke(transfer)==0 && rt.readIopMemory(iop,read.data(),read.size()) && read==pattern);
    auto spuEquals=[&](uint32_t addr,size_t size){
        std::array<uint8_t,128> bytes{};
        return size<=bytes.size()&&rt.audioBackend().readSpuMemory(addr,bytes.data(),size)&&
               std::memcmp(bytes.data(),pattern.data(),size)==0;
    };
    auto result=remote(0x80D0,0,0,iop,0x4000,128);
    check("EE to IOP to sound RAM",result==128 && spuEquals(0x4000,128));
    check("completed only after copy",remote(0x80F0,0,0)==1);
    result=remote(0x80D0,1,1,iop+0x1000,0x4000,128);
    read.fill(0);
    check("other core reads shared sound RAM",result==128&&rt.readIopMemory(iop+0x1000,read.data(),read.size())&&read==pattern);
    result=remote(0x80D0,0,0,iop,0,64);
    check("zero sound address is valid",result==64&&spuEquals(0,64));
    if(!rt.writeIopMemory(0,pattern.data(),pattern.size()))throw std::runtime_error("IOP zero fixture");
    result=remote(0x80D0,0,0,0,0x5000,64);
    check("zero IOP address is valid",result==64&&spuEquals(0x5000,64));
    const auto beforeZero=rt.audioBackend().spuMemoryStats();
    result=remote(0x80D0,0,0,0,0,0);
    const auto afterZero=rt.audioBackend().spuMemoryStats();
    check("zero size ignores poisoned stack",result==0&&afterZero.bytesWritten==beforeZero.bytesWritten);
    result=remote(0x80D0,0,0,iop,0x6000,63);
    check("DMA rounds 63 bytes to one block",result==63&&spuEquals(0x6000,64));
    result=remote(0x80D0,0,0,iop,0x7000,65);
    check("DMA rounds 65 bytes to two blocks",result==65&&spuEquals(0x7000,128));
    result=remote(0x80D0,0,0,iop,0x8001,64);
    check("TSA is halfword addressed",result==64&&spuEquals(0x8000,64));
    result=remote(0x80D0,1,0,iop,capacity-32,64);
    check("sound RAM wrap",result==64&&spuEquals(capacity-32,64));
    std::array<uint8_t,64> low{};
    check("wrapped bytes reach address zero",rt.audioBackend().readSpuMemory(0,low.data(),32)&&std::memcmp(low.data(),pattern.data()+32,32)==0);
    result=remote(0x80D0,0,8,iop,0x9000,3);
    check("programmed IO writes halfwords",result==0&&spuEquals(0x9000,4));
    const auto beforeBad=rt.audioBackend().spuMemoryStats();
    result=remote(0x80D0,0,0,capacity-1,0xA000,1);
    check("reject rounded IOP source overrun",result==0xffffffffu&&rt.audioBackend().spuMemoryStats().bytesWritten==beforeBad.bytesWritten);
    check("failed core not marked complete",remote(0x80F0,0,0)==0);
    check("other core completion preserved",remote(0x80F0,1,0)==1);
    result=remote(0x80D0,0,0,iop,0xA000,0xffffffffu);
    check("reject oversized transfer",result==0xffffffffu&&rt.audioBackend().spuMemoryStats().bytesWritten==beforeBad.bytesWritten);
    result=remote(0x80D0,0,2,iop,0xA000,64);
    check("reject invalid voice direction",result==0xffffffffu&&rt.audioBackend().spuMemoryStats().bytesWritten==beforeBad.bytesWritten);
    result=remote(0x80D0,0,9,iop,0xA000,64);
    check("unsupported IO read is not success",result==0xffffffffu&&rt.audioBackend().spuMemoryStats().bytesWritten==beforeBad.bytesWritten);
    std::array<uint8_t,16> guard{},afterGuard{};guard.fill(0xD5);
    if(!rt.writeIopMemory(capacity-guard.size(),guard.data(),guard.size()))throw std::runtime_error("IOP guard fixture");
    result=remote(0x80D0,0,1,capacity-guard.size(),0x4000,64);
    check("reject IOP destination overrun atomically",result==0xffffffffu&&rt.readIopMemory(capacity-guard.size(),afterGuard.data(),afterGuard.size())&&guard==afterGuard);
    check("failed transfer leaves sound memory intact",spuEquals(0x4000,128));
    result=remote(0x80D0,0,0,iop,0xB000,64);
    check("valid transfer recovers after failure",result==64&&spuEquals(0xB000,64)&&remote(0x80F0,0,0)==1);
    PS2AudioBackend separate;
    low.fill(0xff);
    check("sound RAM belongs to each runtime",separate.readSpuMemory(0x4000,low.data(),64)&&std::all_of(low.begin(),low.end(),[](uint8_t b){return b==0;}));
    check("invalid host buffer rejected",!rt.audioBackend().writeSpuMemory(0,nullptr,1)&&!rt.audioBackend().readSpuMemory(0,nullptr,1));
    check("oversized host read rejected",!rt.audioBackend().readSpuMemory(0,read.data(),capacity+1u));
    std::cout<<"[TS:audio-memory] "<<passed<<" passed, "<<failed<<" failed; memory transfers only, no voice mixing or output claim\n";
    return failed?1:0;
}

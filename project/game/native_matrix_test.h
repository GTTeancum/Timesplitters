#pragma once
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include <array>
#include <cstring>
#include <iostream>
#include <stdexcept>

// The original routine at 0x002d5e98 loads the first matrix's four vectors once,
// then combines them using each vector of the second matrix. This explicit
// element reference is derived from those instructions, not an HLE convention.
static int nativeMatrixTest(const char* elf) {
    PS2Runtime rt;rt.setMissingFunctionPolicy(PS2Runtime::MissingFunctionPolicy::Stop);
    if(!rt.memory().initialize(PS2_RAM_SIZE)||!rt.loadELF(elf))throw std::runtime_error("matrix ELF load");
    auto* ram=rt.memory().getRDRAM();unsigned passed=0;
    for(unsigned seed=0;seed<12;++seed)for(unsigned alias=0;alias<3;++alias) {
        std::array<float,16> a{},b{},want{},got{};
        for(unsigned i=0;i<16;++i){a[i]=int((i*5+seed*3)%11)-5;b[i]=int((i*7+seed*2)%13)-6;}
        for(unsigned col=0;col<4;++col)for(unsigned lane=0;lane<4;++lane)
            for(unsigned k=0;k<4;++k)want[col*4+lane]+=a[k*4+lane]*b[col*4+k];
        const uint32_t dst=alias==0?0x10200:alias==1?0x10000:0x10100;
        std::memcpy(ram+0x10000,a.data(),64);std::memcpy(ram+0x10100,b.data(),64);
        std::memset(ram+dst-16,0xa5,16);std::memset(ram+dst+64,0xa5,16);
        R5900Context c{};c.pc=0x2d5e98;
        SET_GPR_U32((&c),4,dst);SET_GPR_U32((&c),5,0x10000);SET_GPR_U32((&c),6,0x10100);
        SET_GPR_U32((&c),28,0x3b47f0);SET_GPR_U32((&c),29,0x70000);SET_GPR_U32((&c),31,0x12345678);
        for(unsigned n=0;n<1000 && c.pc!=0x12345678;++n) {
            if(!rt.hasFunction(c.pc))throw std::runtime_error("matrix missing original EE entry");
            rt.lookupFunction(c.pc)(ram,&c,&rt);
        }
        if(c.pc!=0x12345678||GPR_U32((&c),29)!=0x70000||GPR_U32((&c),28)!=0x3b47f0)throw std::runtime_error("matrix control-flow/ABI");
        std::memcpy(got.data(),ram+dst,64);
        if(got!=want)throw std::runtime_error("original matrix product disagrees with instruction reference");
        for(unsigned i=0;i<16;++i)if(ram[dst-16+i]!=0xa5||ram[dst+64+i]!=0xa5)throw std::runtime_error("matrix guard overwritten");
        ++passed;
    }
    std::cout<<"[TS:matrix] "<<passed<<" original matrix product/alias checks passed\n";return 0;
}

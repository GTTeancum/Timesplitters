// Isolated comparison: original instructions from SLUS_200.90 versus SDK HLE.
// Matrix elements are addressed exactly as the original 0x2d5e98 assembly does.
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_stubs.h"
#include <array>
#include <cstring>
#include <iostream>
#include <stdexcept>
void sceVu0MulMatrix_0x2d5e98(uint8_t*, R5900Context*, PS2Runtime*);
// This component binary exposes only the tested original SDK function, not a
// substitute all-game function table. Unrepresented entries remain missing.
extern const uint32_t g_ps2RecompiledFunctionTableBase=0x2d5e98;
extern const uint32_t g_ps2RecompiledFunctionTableEnd=0x2d5edc;
extern const uint32_t g_ps2RecompiledFunctionTableSlotCount=17;
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[17]={sceVu0MulMatrix_0x2d5e98};

int main() {
    try {
        PS2Runtime rt;
        if(!rt.memory().initialize(PS2_RAM_SIZE)) throw std::runtime_error("initialize");
        auto* ram=rt.memory().getRDRAM(); unsigned originalPassed=0,hleMismatch=0;
        for(unsigned seed=0;seed<12;++seed) for(unsigned alias=0;alias<3;++alias) {
            std::array<float,16> a{},b{},want{},hle{},original{};
            for(unsigned i=0;i<16;++i) {a[i]=int((i*5+seed*3)%11)-5;b[i]=int((i*7+seed*2)%13)-6;}
            // C[column][lane] = sum(first[k][lane] * second[column][k]).
            // No assumed row-major SDK convention is substituted for the binary.
            for(unsigned col=0;col<4;++col)for(unsigned lane=0;lane<4;++lane)
                for(unsigned k=0;k<4;++k)want[col*4+lane]+=a[k*4+lane]*b[col*4+k];
            for(unsigned mode=0;mode<2;++mode) {
                const uint32_t dst=alias==0?0x10200:alias==1?0x10000:0x10100;
                std::memcpy(ram+0x10000,a.data(),64);std::memcpy(ram+0x10100,b.data(),64);
                std::memset(ram+dst-16,0xa5,16);std::memset(ram+dst+64,0xa5,16);
                R5900Context c{};c.pc=0x2d5e98;
                SET_GPR_U32((&c),4,dst);SET_GPR_U32((&c),5,0x10000);SET_GPR_U32((&c),6,0x10100);
                SET_GPR_U32((&c),29,0x70000);SET_GPR_U32((&c),31,0x12345678);
                if(mode==0)ps2_stubs::sceVu0MulMatrix(ram,&c,&rt);
                else {
                    for(unsigned n=0;n<16 && c.pc!=0x12345678;++n)sceVu0MulMatrix_0x2d5e98(ram,&c,&rt);
                    if(c.pc!=0x12345678||GPR_U32((&c),29)!=0x70000)throw std::runtime_error("original control flow/ABI");
                }
                for(unsigned i=0;i<16;++i)if(ram[dst-16+i]!=0xa5||ram[dst+64+i]!=0xa5)throw std::runtime_error("matrix guard overwritten");
                std::memcpy((mode?original:hle).data(),ram+dst,64);
            }
            if(original!=want)throw std::runtime_error("original matrix product disagrees with decoded-operation reference");
            ++originalPassed;
            if(hle!=want) {
                ++hleMismatch;
                if(hleMismatch==1)std::cout<<"[TS:matrix-reference] first mismatch seed="<<seed<<" alias="<<alias<<" element0 HLE="<<hle[0]<<" original="<<original[0]<<" reference="<<want[0]<<'\n';
            }
        }
        std::cout<<"[TS:matrix-reference] original_passed="<<originalPassed<<" HLE_mismatches="<<hleMismatch<<'\n';
        return 0;
    } catch(const std::exception& e){std::cerr<<"[TS:matrix-reference] "<<e.what()<<'\n';return 1;}
}

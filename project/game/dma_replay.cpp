// Component replay of an actual stopped EE-RAM capture. No host window or live
// game-state edits; this tests the captured DMA/VIF/VU/GIF completion path only.
#include "runtime/ps2_memory.h"
#include "runtime/ps2_vu1.h"
#include "runtime/gs/gs_frontend.h"
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <cstring>
#include <vector>

int main(int argc, char** argv) {
    if (argc != 2) { std::cerr << "Usage: timesplitters_dma_replay captured-ee-ram.bin\n"; return 2; }
    try {
        std::ifstream f(argv[1], std::ios::binary | std::ios::ate);
        if (!f || f.tellg() != PS2_RAM_SIZE) throw std::runtime_error("expected exactly 32 MiB EE RAM");
        std::vector<uint8_t> ram(PS2_RAM_SIZE); f.seekg(0); f.read(reinterpret_cast<char*>(ram.data()), ram.size());
        if (!f) throw std::runtime_error("snapshot read failed");
        unsigned failures = 0;
        for (unsigned list = 0; list < 2; ++list) {
            PS2Memory mem; if (!mem.initialize()) throw std::runtime_error("memory initialization failed");
            std::memcpy(mem.getRDRAM(), ram.data(), ram.size());
            uint32_t start; std::memcpy(&start, ram.data() + 0x3adb00 + list * 4, 4);
            if (start >= PS2_RAM_SIZE - 16 || (start & 15)) throw std::runtime_error("invalid original DMA list pointer");
            GS gs; gs.init(mem.getGSVRAM(), PS2_GS_VRAM_SIZE, &mem.gs());
            GifArbiter arbiter;
            arbiter.setProcessPathPacketFn([&](GifPathId path, const uint8_t* data, uint32_t size) { gs.processGIFPacket(data, size, path); });
            mem.setGifArbiter(&arbiter);
            VU1Interpreter vu;
            mem.setVu1MscalCallback([&](uint32_t pc,uint32_t top,uint32_t itop) {
                vu.execute(mem.getVU1Code(),PS2_VU1_CODE_SIZE,mem.getVU1Data(),PS2_VU1_DATA_SIZE,gs,&mem,pc,top,itop,65536);
            });
            mem.setVu1MscntCallback([&](uint32_t top,uint32_t itop) {
                vu.resume(mem.getVU1Code(),PS2_VU1_CODE_SIZE,mem.getVU1Data(),PS2_VU1_DATA_SIZE,gs,&mem,top,itop,65536);
            });
            mem.writeIORegister(0x10009030, start);
            mem.writeIORegister(0x10009000, 0x185); // Exact observed TS03 HLE submission flags, TTE clear.
            mem.processPendingTransfers();
            const bool signal = (mem.gs().csr.load() & 1u) != 0;
            const uint32_t chcr = mem.m_ioRegisters.at(0x10009000); // Passive inspect: do not clear STR.
            const bool ended = ((chcr >> 28u) & 7u) == 7u && (chcr & 0x100u) == 0;
            std::cout << "[TS:DMA-replay] list=" << list << " start=0x" << std::hex << start
                      << " TADR=0x" << mem.readIORegister(0x10009030) << " CHCR=0x" << chcr
                      << " CSR=0x" << mem.gs().csr.load() << std::dec
                      << " actual_SIGNAL=" << signal << " actual_END=" << ended << '\n';
            if (!signal || !ended) ++failures;
        }
        std::cout << "[TS:DMA-replay] 2 captured original chains, failures=" << failures << '\n';
        return failures ? 1 : 0;
    } catch (const std::exception& e) { std::cerr << "[TS:DMA-replay] " << e.what() << '\n'; return 1; }
}

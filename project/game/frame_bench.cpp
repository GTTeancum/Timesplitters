// Deterministic graphics benchmark: replays the two original display lists of
// a TS_DUMP_RAM snapshot (EE RAM + VU1 code/data/state + GS local memory)
// through DMA/VIF/VU1/GIF/GS, repeatedly, and reports the time per replay.
// No game code runs; this isolates the VU1 + rasterizer cost of one frame.
//
// usage: timesplitters_frame_bench dump.bin [iterations=20] [frame.png]
// TS_GS_THREAD=1 rasterizes on a worker thread; TS_VU1_INTERPRET=1 disables
// the recompiled microprograms.
#include "runtime/ps2_memory.h"
#include "runtime/ps2_vu1.h"
#include "runtime/gs/gs_frontend.h"
#include "runtime/gs/gs_cpu_backend.h"
#include "runtime/gs/gs_threaded_backend.h"
#include "raylib.h"
#include "runtime/ps2_sample_profiler.h"
#include <thread>

#include <chrono>
#include <cstring>
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

namespace
{
    std::vector<uint8_t> readFile(const std::string &path, size_t expected)
    {
        std::ifstream f(path, std::ios::binary | std::ios::ate);
        if (!f)
            throw std::runtime_error("missing " + path);
        const size_t size = static_cast<size_t>(f.tellg());
        if (expected && size != expected)
            throw std::runtime_error("unexpected size: " + path);
        std::vector<uint8_t> bytes(size);
        f.seekg(0);
        f.read(reinterpret_cast<char *>(bytes.data()), static_cast<std::streamsize>(size));
        return bytes;
    }
}

static int benchMain(int argc, char **argv);

int main(int argc, char **argv)
{
    // TS_SAMPLE_PROFILE samples the replay thread.
    int result = 0;
    std::thread worker([&] { result = benchMain(argc, argv); });
    ps2_sample_profiler::start(worker);
    worker.join();
    ps2_sample_profiler::stop();
    return result;
}

static int benchMain(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cerr << "usage: timesplitters_frame_bench dump.bin [iterations] [frame.png]\n";
        return 2;
    }
    try
    {
        const std::string base = argv[1];
        const int iterations = argc > 2 ? std::max(1, std::atoi(argv[2])) : 20;
        const auto ram = readFile(base, PS2_RAM_SIZE);
        const auto vuCode = readFile(base + ".vu1code.bin", PS2_VU1_CODE_SIZE);
        const auto vuData = readFile(base + ".vu1data.bin", PS2_VU1_DATA_SIZE);
        const auto vuState = readFile(base + ".vu1state.bin", sizeof(VU1State));
        const auto vram = readFile(base + ".gsvram.bin", PS2_GS_VRAM_SIZE);

        PS2Memory mem;
        if (!mem.initialize())
            throw std::runtime_error("memory initialization failed");
        // Display registers (which buffer is shown), when the dump has them.
        try
        {
            const auto priv = readFile(base + ".gspriv.bin", 20u * sizeof(uint64_t));
            uint64_t regs[20];
            std::memcpy(regs, priv.data(), sizeof(regs));
            GSRegisters &r = mem.gs();
            r.pmode = regs[0]; r.smode1 = regs[1]; r.smode2 = regs[2]; r.srfsh = regs[3];
            r.synch1 = regs[4]; r.synch2 = regs[5]; r.syncv = regs[6];
            r.dispfb1 = regs[7]; r.display1 = regs[8]; r.dispfb2 = regs[9]; r.display2 = regs[10];
            r.bgcolor = regs[14];
        }
        catch (const std::exception &)
        {
        }
        GS gs;
        gs.init(mem.getGSVRAM(), PS2_GS_VRAM_SIZE, &mem.gs());
        if (const char *thread = std::getenv("TS_GS_THREAD"); thread && *thread == '1')
            gs.setRasterBackend(std::make_unique<GSThreadedBackend>());
        GifArbiter arbiter;
        arbiter.setProcessPathPacketFn([&](GifPathId path, const uint8_t *data, uint32_t size) {
            gs.processGIFPacket(data, size, path);
        });
        mem.setGifArbiter(&arbiter);
        VU1Interpreter vu;
        mem.setVu1MscalCallback([&](uint32_t pc, uint32_t top, uint32_t itop) {
            vu.execute(mem.getVU1Code(), PS2_VU1_CODE_SIZE, mem.getVU1Data(), PS2_VU1_DATA_SIZE, gs, &mem, pc, top, itop, 65536);
        });
        mem.setVu1MscntCallback([&](uint32_t top, uint32_t itop) {
            vu.resume(mem.getVU1Code(), PS2_VU1_CODE_SIZE, mem.getVU1Data(), PS2_VU1_DATA_SIZE, gs, &mem, top, itop, 65536);
        });

        double best[2] = {1e30, 1e30}, total[2] = {0, 0};
        uint64_t vuCycles[2] = {0, 0};
        for (int iteration = 0; iteration <= iterations; ++iteration)
        {
            for (unsigned list = 0; list < 2; ++list)
            {
                std::memcpy(mem.getRDRAM(), ram.data(), ram.size());
                std::memcpy(mem.getVU1Code(), vuCode.data(), vuCode.size());
                std::memcpy(mem.getVU1Data(), vuData.data(), vuData.size());
                std::memcpy(mem.getGSVRAM(), vram.data(), vram.size());
                vu.reset();
                std::memcpy(&vu.state(), vuState.data(), sizeof(VU1State));
                uint32_t start;
                std::memcpy(&start, ram.data() + 0x3adb00 + list * 4, 4);
                if (start >= PS2_RAM_SIZE - 16 || (start & 15))
                    throw std::runtime_error("invalid display list pointer");
                const uint64_t cyclesBefore = vu.state().cycles;
                const auto t0 = std::chrono::steady_clock::now();
                mem.writeIORegister(0x10009030, start);
                mem.writeIORegister(0x10009000, 0x185);
                mem.processPendingTransfers();
                gs.refreshDisplaySnapshot(); // waits for a threaded backend to finish
                const double ms = std::chrono::duration<double, std::milli>(std::chrono::steady_clock::now() - t0).count();
                if (iteration == iterations)
                {
                    uint32_t size = 0;
                    const uint8_t *bytes = gs.lockDisplaySnapshot(size);
                    uint64_t hash = 0xcbf29ce484222325ull;
                    for (uint32_t i = 0; i < size; ++i)
                        hash = (hash ^ bytes[i]) * 0x100000001b3ull;
                    gs.unlockDisplaySnapshot();
                    std::cout << "[TS:frame-bench] list=" << list << " vram_hash=" << std::hex << hash << std::dec << '\n';
                }
                if (iteration > 0)
                {
                    best[list] = std::min(best[list], ms);
                    total[list] += ms;
                    vuCycles[list] = vu.state().cycles - cyclesBefore;
                }
            }
        }
        for (unsigned list = 0; list < 2; ++list)
            std::cout << "[TS:frame-bench] list=" << list << " best_ms=" << best[list]
                      << " mean_ms=" << total[list] / iterations << " vu_cycles=" << vuCycles[list] << '\n';

        if (argc > 3)
        {
            // Present exactly as the game window would.
            const uint64_t sequence = gs.hostPresentationSequence();
            gs.latchHostPresentationFrame();
            gs.refreshDisplaySnapshot(); // drains a threaded backend (async present)
            for (int wait = 0; wait < 2000 && gs.hostPresentationSequence() == sequence; ++wait)
                std::this_thread::sleep_for(std::chrono::milliseconds(1));
            std::vector<uint8_t> rgba;
            uint32_t width = 0, height = 0;
            gs.copyLatchedHostPresentationFrame(rgba, width, height);
            if (rgba.empty())
                throw std::runtime_error("no presentation frame");
            for (size_t i = 3; i < rgba.size(); i += 4)
                rgba[i] = 255;
            Image image{rgba.data(), int(width), int(height), 1, PIXELFORMAT_UNCOMPRESSED_R8G8B8A8};
            std::cout << "[TS:frame-bench] frame size=" << width << "x" << height << " saved=" << ExportImage(image, argv[3]) << '\n';
        }
        return 0;
    }
    catch (const std::exception &e)
    {
        std::cerr << "[TS:frame-bench] " << e.what() << '\n';
        return 1;
    }
}

#include "runtime/ps2_memory.h"
#include "runtime/ps2_vu1.h"
#include "runtime/gs/gs_frontend.h"
#include "vu/ps2_vu_capture.h"
#include "runtime/ps2_sample_profiler.h"
#include <thread>
#include <cstring>
#include <filesystem>
#include <iomanip>
#include <memory>
#include <sstream>
#include <vector>

static int benchmarkMain(int argc, char **argv);

int main(int argc, char **argv)
{
    // TS_SAMPLE_PROFILE profiles the replay on a worker thread.
    int result = 0;
    std::thread worker([&] { result = benchmarkMain(argc, argv); });
    ps2_sample_profiler::start(worker);
    worker.join();
    ps2_sample_profiler::stop();
    return result;
}

static int benchmarkMain(int argc, char **argv)
{
    // A shell used to capture inputs may still export this variable. Never
    // let replay overwrite its own input file or capture replayed executions.
#ifdef _WIN32
    _putenv_s("TS_VU_CAPTURE_FILE", "");
#else
    unsetenv("TS_VU_CAPTURE_FILE");
#endif
    if (argc < 3) { std::cerr << "usage: vu_benchmark inputs.bin output-directory [repeats]\n"; return 2; }
    const int repeats = argc > 3 ? std::atoi(argv[3]) : 8;
    if (repeats < 1 || repeats > 1000) return 2;
    std::ifstream input(argv[1], std::ios::binary);
    if (!input) return 2;
    std::filesystem::create_directories(argv[2]);
    auto memory = std::make_unique<PS2Memory>();
    if (!memory->initialize()) return 2;
    auto gs = std::make_unique<GS>();
    gs->init(memory->getGSVRAM(), PS2_GS_VRAM_SIZE, nullptr);
    std::vector<uint8_t> packets;
    memory->setGifPacketCallback([&](const uint8_t *data, uint32_t size) {
        const auto *sizeBytes = reinterpret_cast<const uint8_t *>(&size);
        packets.insert(packets.end(), sizeBytes, sizeBytes + sizeof(size));
        packets.insert(packets.end(), data, data + size);
    });
    double elapsedMs = 0;
    uint64_t cycles = 0, packetBytes = 0;
    unsigned records = 0;
    while (input.peek() != std::char_traits<char>::eof())
    {
        VuCaptureHeader header{};
        VU1State initial{};
        input.read(reinterpret_cast<char *>(&header), sizeof(header));
        if (!input || header.magic != 0x31554356u || header.stateBytes != sizeof(initial) ||
            !header.codeSize || header.codeSize > PS2_VU1_CODE_SIZE ||
            !header.dataSize || header.dataSize > PS2_VU1_DATA_SIZE ||
            header.maxCycles > 1000000 || records >= 8192) return 3;
        input.read(reinterpret_cast<char *>(&initial), sizeof(initial));
        std::vector<uint8_t> code(header.codeSize), data(header.dataSize);
        input.read(reinterpret_cast<char *>(code.data()), code.size());
        input.read(reinterpret_cast<char *>(data.data()), data.size());
        if (!input) return 3;
        std::memcpy(memory->getVU1Code(), code.data(), code.size());
        auto vu = std::make_unique<VU1Interpreter>();
        std::vector<uint8_t> expected;
        for (int iteration = 0; iteration <= repeats; ++iteration)
        {
            vu->reset();
            vu->state() = initial;
            std::memcpy(memory->getVU1Data(), data.data(), data.size());
            packets.clear();
            const auto start = std::chrono::steady_clock::now();
            vu->execute(memory->getVU1Code(), header.codeSize, memory->getVU1Data(), header.dataSize,
                        *gs, memory.get(), header.startPC, header.top, header.itop, header.maxCycles);
            const auto end = std::chrono::steady_clock::now();
            if (iteration) {
                elapsedMs += std::chrono::duration<double, std::milli>(end - start).count();
                cycles += vu->state().cycles;
            }
            std::vector<uint8_t> result;
            const auto *state = reinterpret_cast<const uint8_t *>(&vu->state());
            result.insert(result.end(), state, state + sizeof(VU1State));
            result.insert(result.end(), memory->getVU1Data(), memory->getVU1Data() + header.dataSize);
            result.insert(result.end(), packets.begin(), packets.end());
            if (!iteration) expected = result;
            else if (result != expected) { std::cerr << "nondeterministic record " << records << '\n'; return 4; }
        }
        std::ostringstream name;
        name << "record-" << std::setw(3) << std::setfill('0') << records << ".bin";
        std::ofstream output(std::filesystem::path(argv[2]) / name.str(), std::ios::binary);
        output.write(reinterpret_cast<const char *>(expected.data()), expected.size());
        if (!output) return 5;
        packetBytes += packets.size();
        ++records;
    }
    std::cout << "records=" << records << " repeats=" << repeats << " cycles=" << cycles
              << " execute_ms=" << elapsedMs << " packet_bytes=" << packetBytes << '\n';
    return records ? 0 : 3;
}

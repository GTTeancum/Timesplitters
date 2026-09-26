// Replays a GS backend command capture (TS_GS_CAPTURE, see
// GSThreadedBackend::captureCommand) through the CPU rasterizer and reports
// time per frame plus hashes of GS local memory and of every presented frame.
// Identical hashes mean identical rendering; use it to check rasterizer
// changes and worker counts.
//
// usage: timesplitters_gs_replay capture.bin [workers=1] [iterations=5] [last-frame.png]
#include "runtime/gs/gs_cpu_backend.h"
#include "runtime/gs/gs_threaded_backend.h"
#include "raylib.h"
#include "runtime/ps2_sample_profiler.h"

#include <chrono>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <iostream>
#include <memory>
#include <mutex>
#include <stdexcept>
#include <string>
#include <thread>
#include <vector>

namespace
{
    enum class Kind : uint8_t
    {
        Submit,
        LoadClut,
        BeginTransfer,
        Upload,
        Flush,
        TextureFlush,
        Clear,
        WriteVram,
        Present,
    };

    struct Record
    {
        Kind kind;
        std::vector<uint8_t> data;
    };

    uint64_t fnv(const uint8_t *bytes, size_t size, uint64_t hash = 0xcbf29ce484222325ull)
    {
        for (size_t i = 0; i < size; ++i)
            hash = (hash ^ bytes[i]) * 0x100000001b3ull;
        return hash;
    }

    template <typename T>
    T as(const std::vector<uint8_t> &data, size_t offset = 0)
    {
        T value;
        if (offset + sizeof(T) > data.size())
            throw std::runtime_error("short record");
        std::memcpy(&value, data.data() + offset, sizeof(T));
        return value;
    }
}

static int replayMain(int argc, char **argv);

int main(int argc, char **argv)
{
    // TS_SAMPLE_PROFILE samples the replay (producer) thread.
    int result = 0;
    std::thread worker([&] { result = replayMain(argc, argv); });
    ps2_sample_profiler::start(worker);
    worker.join();
    ps2_sample_profiler::stop();
    return result;
}

static int replayMain(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cerr << "usage: timesplitters_gs_replay capture.bin [workers] [iterations] [last-frame.png]\n";
        return 2;
    }
    try
    {
        std::ifstream in(argv[1], std::ios::binary);
        if (!in)
            throw std::runtime_error("cannot open capture");
        uint32_t magic = 0, version = 0, vramSize = 0;
        in.read(reinterpret_cast<char *>(&magic), 4);
        in.read(reinterpret_cast<char *>(&version), 4);
        in.read(reinterpret_cast<char *>(&vramSize), 4);
        if (magic != 0x43534754u || version != 1u || vramSize < 4u * 1024u * 1024u)
            throw std::runtime_error("not a GS capture");
        std::vector<uint8_t> initialVram(vramSize);
        in.read(reinterpret_cast<char *>(initialVram.data()), vramSize);
        std::array<uint16_t, 512> clut{};
        std::array<uint32_t, 2> cbp{};
        in.read(reinterpret_cast<char *>(clut.data()), sizeof(clut));
        in.read(reinterpret_cast<char *>(cbp.data()), sizeof(cbp));
        std::vector<Record> records;
        for (;;)
        {
            uint8_t kind = 0;
            uint32_t size = 0;
            if (!in.read(reinterpret_cast<char *>(&kind), 1))
                break;
            in.read(reinterpret_cast<char *>(&size), 4);
            Record r{static_cast<Kind>(kind), std::vector<uint8_t>(size)};
            if (size)
                in.read(reinterpret_cast<char *>(r.data.data()), size);
            if (!in)
                throw std::runtime_error("truncated capture");
            records.push_back(std::move(r));
        }
        unsigned presents = 0, primitives = 0;
        for (const Record &r : records)
        {
            presents += r.kind == Kind::Present;
            primitives += r.kind == Kind::Submit;
        }

        const unsigned workers = argc > 2 ? static_cast<unsigned>(std::max(1, std::atoi(argv[2]))) : 1u;
        const int iterations = argc > 3 ? std::max(1, std::atoi(argv[3])) : 5;
        std::vector<uint8_t> vram(vramSize);
        std::vector<uint64_t> frameHashes;
        std::vector<uint8_t> lastFrame;
        uint32_t lastWidth = 0, lastHeight = 0;
        uint64_t vramHash = 0;
        double best = 1e30;
        for (int iteration = 0; iteration < iterations; ++iteration)
        {
            std::memcpy(vram.data(), initialVram.data(), vramSize);
            std::unique_ptr<GSRasterBackend> backend;
            if (workers > 1)
            {
                auto threaded = std::make_unique<GSThreadedBackend>(workers);
                threaded->Initialize(vram.data(), vramSize);
                threaded->SetClutState(clut, cbp);
                backend = std::move(threaded);
            }
            else
            {
                auto cpu = std::make_unique<GSCpuBackend>();
                cpu->Initialize(vram.data(), vramSize);
                cpu->SetClutState(clut, cbp);
                backend = std::move(cpu);
            }
            backend->TextureFlush();
            std::mutex frameMutex;
            std::vector<uint64_t> hashes;
            auto takeFrame = [&](PresentationFrame &&frame) {
                std::lock_guard<std::mutex> lock(frameMutex);
                hashes.push_back(fnv(frame.pixels.data(), frame.pixels.size(), frame.width * 131u + frame.height));
                lastFrame = std::move(frame.pixels);
                lastWidth = frame.width;
                lastHeight = frame.height;
            };
            const auto start = std::chrono::steady_clock::now();
            for (const Record &r : records)
            {
                switch (r.kind)
                {
                case Kind::Submit: backend->Submit(as<GSPrimitiveBatch>(r.data)); break;
                case Kind::LoadClut:
                    backend->LoadClut(as<GSTex0Reg>(r.data), as<GSTexClutReg>(r.data, sizeof(GSTex0Reg)));
                    break;
                case Kind::BeginTransfer: backend->BeginTransfer(as<GSTransferCommand>(r.data)); break;
                case Kind::Upload: backend->UploadImage(r.data.data(), static_cast<uint32_t>(r.data.size())); break;
                case Kind::Flush: backend->Flush(); break;
                case Kind::TextureFlush: backend->TextureFlush(); break;
                case Kind::Clear:
                    backend->ClearFramebuffer(as<GSContext>(r.data), as<uint32_t>(r.data, sizeof(GSContext)));
                    break;
                case Kind::WriteVram:
                {
                    const auto v = as<std::array<uint32_t, 6>>(r.data);
                    backend->WriteVram(v[0], v[1], v[2], v[3], v[4], v[5]);
                    break;
                }
                case Kind::Present:
                {
                    const auto request = as<GSPresentationRequest>(r.data);
                    if (!backend->PresentAsync(request, takeFrame))
                        takeFrame(backend->Present(request));
                    break;
                }
                }
            }
            std::vector<uint8_t> snapshot;
            backend->SnapshotVram(snapshot); // drains the workers
            const double ms = std::chrono::duration<double, std::milli>(std::chrono::steady_clock::now() - start).count();
            best = std::min(best, ms);
            backend.reset(); // joins the presenter, so every frame is in
            vramHash = fnv(vram.data(), vram.size());
            frameHashes = hashes;
        }
        uint64_t framesHash = 0xcbf29ce484222325ull;
        for (uint64_t h : frameHashes)
            framesHash = fnv(reinterpret_cast<const uint8_t *>(&h), sizeof(h), framesHash);
        std::printf("[TS:gs-replay] records=%zu primitives=%u presents=%u workers=%u best_ms=%.2f per_frame_ms=%.2f "
                    "vram_hash=%016llx frames_hash=%016llx frames=%zu\n",
                    records.size(), primitives, presents, workers, best, best / std::max(1u, presents),
                    static_cast<unsigned long long>(vramHash), static_cast<unsigned long long>(framesHash),
                    frameHashes.size());
        if (argc > 4 && !lastFrame.empty())
        {
            for (size_t i = 3; i < lastFrame.size(); i += 4)
                lastFrame[i] = 255;
            Image image{lastFrame.data(), int(lastWidth), int(lastHeight), 1, PIXELFORMAT_UNCOMPRESSED_R8G8B8A8};
            ExportImage(image, argv[4]);
        }
        return 0;
    }
    catch (const std::exception &e)
    {
        std::cerr << "[TS:gs-replay] " << e.what() << '\n';
        return 1;
    }
}

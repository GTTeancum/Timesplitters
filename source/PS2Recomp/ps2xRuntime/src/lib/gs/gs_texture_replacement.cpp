#include "runtime/gs/gs_texture_replacement.h"
#include "runtime/gs/gs_texture_hash.h"
#include "runtime/ps2_host_settings.h"

#include "raylib.h"

#include <algorithm>
#include <cctype>
#include <condition_variable>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <deque>
#include <filesystem>
#include <mutex>
#include <string>
#include <thread>
#include <unordered_map>
#include <unordered_set>

namespace fs = std::filesystem;

namespace
{
    const fs::path kDumpDir = fs::path("textures") / "dump";
    const fs::path kReplacementDir = fs::path("textures") / "replacements";

    std::string hashName(uint64_t hash)
    {
        char name[32];
        std::snprintf(name, sizeof(name), "%016llx", static_cast<unsigned long long>(hash));
        return name;
    }

    struct State
    {
        bool dumping = false;
        std::unordered_map<uint64_t, fs::path> replacements;

        // Dump queue, written by a worker so PNG encoding never stalls drawing.
        std::mutex mutex;
        std::condition_variable wake;
        struct Job
        {
            uint64_t hash;
            uint32_t width, height;
            bool flat;
            bool rawAlpha;
            std::vector<uint32_t> texels;
        };
        std::deque<Job> jobs;
        std::unordered_set<uint64_t> dumped; // key(): hash and folder

        static uint64_t key(uint64_t hash, bool flat) { return hash * 2u + (flat ? 1u : 0u); }
        std::thread worker;

        State()
        {
            dumping = hostSettings().textureDump;
            std::error_code ec;
            if (hostSettings().textureReplace && fs::is_directory(kReplacementDir, ec))
            {
                for (const auto &entry : fs::recursive_directory_iterator(kReplacementDir, ec))
                {
                    if (!entry.is_regular_file(ec))
                        continue;
                    const fs::path &path = entry.path();
                    std::string ext = path.extension().string();
                    for (char &c : ext)
                        c = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
                    if (ext != ".png")
                        continue;
                    const std::string stem = path.stem().string();
                    if (stem.size() != 16u)
                        continue;
                    char *end = nullptr;
                    const unsigned long long hash = std::strtoull(stem.c_str(), &end, 16);
                    if (end == stem.c_str() + 16)
                        replacements[hash] = path;
                }
                std::fprintf(stderr, "[TS:textures] %zu replacement textures in %s\n", replacements.size(),
                             kReplacementDir.string().c_str());
            }
            if (dumping)
            {
                for (const bool flat : {false, true})
                {
                    const fs::path dir = kDumpDir / (flat ? "2d" : "3d");
                    fs::create_directories(dir, ec);
                    for (const auto &entry : fs::directory_iterator(dir, ec))
                    {
                        const std::string stem = entry.path().stem().string();
                        if (stem.size() == 16u)
                            dumped.insert(key(std::strtoull(stem.c_str(), nullptr, 16), flat));
                    }
                }
                worker = std::thread([this] { run(); });
                worker.detach();
                std::fprintf(stderr, "[TS:textures] dumping new textures to %s\n", kDumpDir.string().c_str());
            }
        }

        void run()
        {
            for (;;)
            {
                Job job;
                {
                    std::unique_lock<std::mutex> lock(mutex);
                    wake.wait(lock, [this] { return !jobs.empty(); });
                    job = std::move(jobs.front());
                    jobs.pop_front();
                }
                // GS alpha 0..128 -> PNG 0..255.
                for (uint32_t &texel : job.texels)
                {
                    if (job.rawAlpha)
                        break;
                    const uint32_t a = std::min<uint32_t>(255u, (texel >> 24) * 2u);
                    texel = (texel & 0x00FFFFFFu) | (a << 24);
                }
                Image image{job.texels.data(), static_cast<int>(job.width), static_cast<int>(job.height), 1,
                            PIXELFORMAT_UNCOMPRESSED_R8G8B8A8};
                const std::string path = (kDumpDir / (job.flat ? "2d" : "3d") / (hashName(job.hash) + ".png")).string();
                ExportImage(image, path.c_str());
            }
        }
    };

    State &state()
    {
        static State s;
        return s;
    }
}

namespace gs_texture_replacement
{
    bool active()
    {
        const State &s = state();
        return s.dumping || !s.replacements.empty();
    }

    bool dumping()
    {
        return state().dumping;
    }

    uint64_t hash(const uint32_t *texels, uint32_t width, uint32_t height)
    {
        return gs_texture_hash::hash(texels, width, height);
    }

    bool rawAlpha(const uint32_t *texels, uint32_t width, uint32_t height)
    {
        const size_t count = size_t(width) * height;
        for (size_t i = 0; i < count; ++i)
            if ((texels[i] >> 24) > 0x80u)
                return true;
        return false;
    }

    void dump(uint64_t hash, const uint32_t *texels, uint32_t width, uint32_t height, bool flat, bool rawAlpha)
    {
        State &s = state();
        if (!s.dumping)
            return;
        std::lock_guard<std::mutex> lock(s.mutex);
        if (!s.dumped.insert(State::key(hash, flat)).second)
            return;
        s.jobs.push_back({hash, width, height, flat, rawAlpha, std::vector<uint32_t>(texels, texels + size_t(width) * height)});
        s.wake.notify_one();
    }

    bool load(uint64_t hash, bool rawAlpha, std::vector<uint32_t> &texels, int &width, int &height)
    {
        const State &s = state();
        const auto found = s.replacements.find(hash);
        if (found == s.replacements.end())
            return false;
        Image image = LoadImage(found->second.string().c_str());
        if (!image.data)
            return false;
        ImageFormat(&image, PIXELFORMAT_UNCOMPRESSED_R8G8B8A8);
        width = image.width;
        height = image.height;
        texels.resize(size_t(width) * height);
        std::memcpy(texels.data(), image.data, texels.size() * sizeof(uint32_t));
        UnloadImage(image);
        // PNG alpha 0..255 -> GS 0..128.
        for (uint32_t &texel : texels)
        {
            if (rawAlpha)
                break;
            const uint32_t a = ((texel >> 24) + 1u) / 2u;
            texel = (texel & 0x00FFFFFFu) | (a << 24);
        }
        return true;
    }
}

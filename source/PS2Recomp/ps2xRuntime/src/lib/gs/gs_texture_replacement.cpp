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

    // Built-in button glyphs: (hash, set) -> the PNG's bytes (the program's
    // own data, registered before the first frame and never changed).
    struct ButtonImage
    {
        const unsigned char *png;
        size_t size;
    };
    std::unordered_map<uint64_t, ButtonImage> &buttonImages()
    {
        static std::unordered_map<uint64_t, ButtonImage> images;
        return images;
    }
    std::unordered_set<uint64_t> &buttonHashes()
    {
        static std::unordered_set<uint64_t> hashes;
        return hashes;
    }
    uint64_t buttonKey(int set, uint64_t hash)
    {
        return hash * 4u + static_cast<uint64_t>(set & 3);
    }
}

namespace gs_texture_replacement
{
    bool active()
    {
        const State &s = state();
        return s.dumping || !s.replacements.empty() || !buttonHashes().empty();
    }

    void addButtonImage(int set, uint64_t hash, const unsigned char *png, size_t size)
    {
        buttonImages()[buttonKey(set, hash)] = {png, size};
        buttonHashes().insert(hash);
    }

    bool isButton(uint64_t hash)
    {
        return buttonHashes().count(hash) != 0;
    }

    std::unordered_map<uint64_t, int> &buttonPresses()
    {
        static std::unordered_map<uint64_t, int> presses;
        return presses;
    }

    struct FontImage
    {
        uint64_t areaHash;
        uint32_t width, height;
        const unsigned char *png;
        size_t size;
    };
    std::vector<FontImage> &fontImages()
    {
        static std::vector<FontImage> images;
        return images;
    }

    void addFontImage(uint64_t areaHash, uint32_t areaWidth, uint32_t areaHeight, const unsigned char *png, size_t size)
    {
        fontImages().push_back({areaHash, areaWidth, areaHeight, png, size});
    }

    bool fontTexture(const uint32_t *texels, uint32_t width, uint32_t height, std::vector<uint32_t> &out, int &outWidth,
                     int &outHeight, uint64_t &areaHash)
    {
#if defined(PLATFORM_XBOX)
        // (The PC's redrawn fonts: no PNG decoder on the Xbox.)
        (void)texels, (void)width, (void)height, (void)out, (void)outWidth, (void)outHeight, (void)areaHash;
        return false;
#else
        std::vector<uint32_t> area;
        for (const FontImage &font : fontImages())
        {
            if (font.width > width || font.height > height)
                continue;
            area.resize(size_t(font.width) * font.height);
            for (uint32_t y = 0; y < font.height; ++y)
                std::memcpy(area.data() + size_t(y) * font.width, texels + size_t(y) * width, font.width * sizeof(uint32_t));
            if (hash(area.data(), font.width, font.height) != font.areaHash)
                continue;
            Image image = LoadImageFromMemory(".png", font.png, static_cast<int>(font.size));
            if (!image.data)
                return false;
            ImageFormat(&image, PIXELFORMAT_UNCOMPRESSED_R8G8B8A8);
            const uint32_t sx = std::max<uint32_t>(1u, uint32_t(image.width) / font.width);
            const uint32_t sy = std::max<uint32_t>(1u, uint32_t(image.height) / font.height);
            outWidth = int(width * sx);
            outHeight = int(height * sy);
            out.resize(size_t(outWidth) * outHeight);
            const uint32_t *drawn = static_cast<const uint32_t *>(image.data);
            for (uint32_t y = 0; y < uint32_t(outHeight); ++y)
                for (uint32_t x = 0; x < uint32_t(outWidth); ++x)
                {
                    uint32_t texel = texels[size_t(y / sy) * width + x / sx];
                    if (x < uint32_t(image.width) && y < uint32_t(image.height))
                    {
                        const uint32_t d = drawn[size_t(y) * image.width + x];
                        if ((d & 0xFFu) == 0xFFu) // PNG alpha 0..255 -> GS 0..128
                            texel = 0x00FFFFFFu | ((((d >> 24) + 1u) / 2u) << 24);
                    }
                    out[size_t(y) * outWidth + x] = texel;
                }
            UnloadImage(image);
            areaHash = font.areaHash;
            return true;
        }
        return false;
#endif
    }

    struct ButtonArea
    {
        uint64_t areaHash;
        uint32_t width, height;
        uint64_t buttonHash;
    };
    std::vector<ButtonArea> &buttonAreas()
    {
        static std::vector<ButtonArea> areas;
        return areas;
    }

    void addButtonArea(uint64_t areaHash, uint32_t areaWidth, uint32_t areaHeight, uint64_t buttonHash)
    {
        buttonAreas().push_back({areaHash, areaWidth, areaHeight, buttonHash});
    }

    uint64_t buttonOf(const uint32_t *texels, uint32_t width, uint32_t height)
    {
        if (width > 64u || height > 64u) // (button textures are 32 x 32)
            return 0;
        std::vector<uint32_t> area;
        for (const ButtonArea &b : buttonAreas())
        {
            if (b.width > width || b.height > height)
                continue;
            area.resize(size_t(b.width) * b.height);
            for (uint32_t y = 0; y < b.height; ++y)
                std::memcpy(area.data() + size_t(y) * b.width, texels + size_t(y) * width, b.width * sizeof(uint32_t));
            if (hash(area.data(), b.width, b.height) == b.areaHash)
                return b.buttonHash;
        }
        return 0;
    }

    void setButtonPress(uint64_t hash, int press)
    {
        buttonPresses()[hash] = press;
    }

    int buttonPress(uint64_t hash)
    {
        const auto found = buttonPresses().find(hash);
        return found != buttonPresses().end() ? found->second : -1;
    }

    bool loadButton(int set, uint64_t hash, std::vector<uint32_t> &texels, int &width, int &height)
    {
#if defined(PLATFORM_XBOX)
        // (The Xbox's glyphs are patched onto its disc: mk/glyphs.mk. It has
        // no PNG decoder.)
        (void)set, (void)hash, (void)texels, (void)width, (void)height;
        return false;
#else
        const auto found = buttonImages().find(buttonKey(set, hash));
        if (found == buttonImages().end())
            return false;
        Image image = LoadImageFromMemory(".png", found->second.png, static_cast<int>(found->second.size));
        if (!image.data)
            return false;
        ImageFormat(&image, PIXELFORMAT_UNCOMPRESSED_R8G8B8A8);
        width = image.width;
        height = image.height;
        texels.resize(size_t(width) * height);
        std::memcpy(texels.data(), image.data, texels.size() * sizeof(uint32_t));
        UnloadImage(image);
        // PNG alpha 0..255 -> GS 0..128, as load() does.
        for (uint32_t &texel : texels)
            texel = (texel & 0x00FFFFFFu) | ((((texel >> 24) + 1u) / 2u) << 24);
        return true;
#endif
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

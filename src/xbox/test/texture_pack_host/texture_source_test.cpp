// Host side of test_xtexture_source.py: xbox_texture_source.h's keys for the
// cases in a file, one result a line, to compare with tools/xtpbuild.py's.
//
//   image <psm> <width> <height> <chunk> <hex bytes>  ImageHasher, fed `chunk` bytes at a time
//   clut <hex 1024 bytes>                             HashClut of a 512-halfword CLUT buffer
//   exact <image> <clut>                              exactKey
//   only <image>                                      imageOnlyKey
#include "../../xbox_texture_source.h"

#include <algorithm>
#include <cinttypes>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

namespace
{
    // GSCpuBackend::HashClut's PLATFORM_XBOX branch (gs_cpu_backend.cpp),
    // which the renderer's CLUT hash is; test_xtexture_source.py checks that
    // the shared source still has these lines.
    uint64_t hashClut(const uint16_t *clut)
    {
        uint32_t a = 2166136261u, b = 0x9E3779B9u;
        for (size_t i = 0; i < 256u; ++i)
        {
            uint32_t word;
            std::memcpy(&word, clut + 2u * i, 4);
            a = (a ^ word) * 16777619u;
            b = (b ^ word) * 0x85EBCA6Bu + (b >> 13);
        }
        return (uint64_t(a) << 32) | b;
    }

    std::vector<uint8_t> fromHex(const std::string &hex)
    {
        std::vector<uint8_t> out(hex.size() / 2u);
        for (size_t i = 0; i < out.size(); ++i)
            out[i] = uint8_t(std::stoul(hex.substr(2u * i, 2u), nullptr, 16));
        return out;
    }

    void print(uint64_t v) { std::printf("%016" PRIx64 "\n", v); }
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return 2;
    std::ifstream in(argv[1]);
    std::string line;
    while (std::getline(in, line))
    {
        std::istringstream fields(line);
        std::string what;
        fields >> what;
        if (what == "image")
        {
            uint32_t psm, width, height;
            size_t chunk;
            std::string hex;
            fields >> psm >> width >> height >> chunk >> hex;
            const std::vector<uint8_t> data = fromHex(hex);
            xbox_texture_source::ImageHasher hasher(psm, width, height);
            for (size_t at = 0; at < data.size(); at += chunk)
                hasher.add(data.data() + at, std::min(chunk, data.size() - at));
            print(hasher.value());
        }
        else if (what == "clut")
        {
            std::string hex;
            fields >> hex;
            const std::vector<uint8_t> data = fromHex(hex);
            uint16_t clut[512];
            if (data.size() != sizeof(clut))
                return 3;
            std::memcpy(clut, data.data(), sizeof(clut));
            print(hashClut(clut));
        }
        else if (what == "exact" || what == "only")
        {
            std::string a, b;
            fields >> a >> b;
            const uint64_t image = std::stoull(a, nullptr, 16);
            print(what == "exact" ? xbox_texture_source::exactKey(image, std::stoull(b, nullptr, 16))
                                  : xbox_texture_source::imageOnlyKey(image));
        }
        else
            return 4;
    }
    return 0;
}

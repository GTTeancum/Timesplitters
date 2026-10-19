// Xbox files made from the player's disc (xbox_files.h): the button-glyph
// patch and the texture pack, ported from src/xbox/tools/xboxglyphs.py and
// src/xbox/tools/xtpbuild.py on release-dual.
//
// The texture pack is meant to come out byte for byte as the Python tool
// writes it. That tool does its arithmetic in numpy float32, so this port
// does the same operations in float32 in the same order numpy evaluates
// them: a sum over one block's 16 values is numpy's pairwise sum (eight
// running sums), a sum over a non-contiguous axis or an einsum runs in index
// order from zero, a 2x2 average of a one-channel image adds the two row
// pairs first, of a three-channel image the four texels in turn. No fused
// multiply-adds (numpy has none here), and powf comes from the C runtime, as
// numpy's does on Windows.
#if !defined(PLATFORM_XBOX)

#include "xbox_files.h"

#include <algorithm>
#include <array>
#include <cmath>
#include <cstring>
#include <fstream>
#include <limits>
#include <map>
#include <mutex>
#include <thread>
#include <unordered_map>

#ifdef _MSC_VER
#pragma fp_contract(off)
#endif

namespace tsxbox
{
namespace
{
    namespace fs = std::filesystem;

    struct GlyphFile
    {
        const char *entry; // MISC.PAK entry name
        const unsigned char *data;
        size_t size;
    };
    // kGlyphFiles: project/game/xbox_glyphs/*.qpm (CMakeLists.txt).
#include "xbox_glyphs.inc"

    uint32_t le32(const uint8_t *p)
    {
        return uint32_t(p[0]) | uint32_t(p[1]) << 8 | uint32_t(p[2]) << 16 | uint32_t(p[3]) << 24;
    }

    // Python's data.split(b"\n", 3)[:3].
    std::vector<std::string> headLines(const uint8_t *data, size_t size)
    {
        std::vector<std::string> parts;
        size_t start = 0;
        for (size_t i = 0; i < size && parts.size() < 3; ++i)
        {
            if (data[i] == '\n')
            {
                parts.emplace_back(reinterpret_cast<const char *>(data + start), i - start);
                start = i + 1;
            }
        }
        if (parts.size() < 3)
            parts.emplace_back(reinterpret_cast<const char *>(data + start), size - start);
        return parts;
    }

    // ------------------------------------------------------------- glyphs

    constexpr uint32_t kSector = 2048;

    bool findMiscPak(std::fstream &f, uint64_t &base, uint32_t &size)
    {
        std::vector<uint8_t> pvd(kSector);
        f.seekg(16 * kSector);
        f.read(reinterpret_cast<char *>(pvd.data()), kSector);
        if (!f || std::memcmp(pvd.data() + 1, "CD001", 5) != 0)
            return false;
        auto entries = [&](uint32_t lba, uint32_t bytes, auto &&visit)
        {
            std::vector<uint8_t> data(bytes);
            f.clear();
            f.seekg(uint64_t(lba) * kSector);
            f.read(reinterpret_cast<char *>(data.data()), bytes);
            data.resize(size_t(f.gcount()));
            size_t pos = 0;
            while (pos < data.size())
            {
                const uint8_t length = data[pos];
                if (length == 0)
                {
                    pos = (pos / kSector + 1) * kSector;
                    continue;
                }
                if (pos + length > data.size() || length < 34)
                    break;
                const uint8_t *record = data.data() + pos;
                std::string name(reinterpret_cast<const char *>(record + 33), std::min<size_t>(record[32], length - 33u));
                name = name.substr(0, name.find(';'));
                std::transform(name.begin(), name.end(), name.begin(), [](unsigned char c) { return char(std::toupper(c)); });
                if (visit(name, le32(record + 2), le32(record + 10), (record[25] & 2) != 0))
                    return true;
                pos += length;
            }
            return false;
        };
        bool found = false;
        entries(le32(pvd.data() + 156 + 2), le32(pvd.data() + 156 + 10),
                [&](const std::string &name, uint32_t lba, uint32_t bytes, bool directory)
                {
                    if (name != "PAK" || !directory)
                        return false;
                    return entries(lba, bytes, [&](const std::string &inner, uint32_t il, uint32_t isz, bool idir)
                                   {
                                       if (inner != "MISC.PAK" || idir)
                                           return false;
                                       base = uint64_t(il) * kSector;
                                       size = isz;
                                       found = true;
                                       return true;
                                   });
                });
        f.clear();
        return found;
    }

    // ------------------------------------------------------- texture pack

    constexpr uint32_t kAlign = 128;
    enum Format : uint8_t { FMT_DXT1 = 0, FMT_DXT5 = 1, FMT_ARGB8888 = 2, FMT_ARGB1555 = 3 };
    constexpr uint8_t FLAG_UNIT_ALPHA = 1, FLAG_BINARY_ALPHA = 2;
    constexpr double FALLBACK_PSNR = 27.0, SMALL_FALLBACK_PSNR = 30.0, ARGB1555_PSNR = 38.0;
    constexpr int SMALL_MAX_TEXELS = 32 * 32;

    // numpy's pairwise sum of a contiguous float32 run (add.reduce).
    float pairwiseSum(const float *a, size_t n)
    {
        if (n < 8)
        {
            float res = 0.0f;
            for (size_t i = 0; i < n; ++i)
                res += a[i];
            return res;
        }
        if (n <= 128)
        {
            float r[8];
            for (int j = 0; j < 8; ++j)
                r[j] = a[j];
            size_t i = 8;
            for (; i < n - (n % 8); i += 8)
                for (int j = 0; j < 8; ++j)
                    r[j] += a[i + j];
            float res = ((r[0] + r[1]) + (r[2] + r[3])) + ((r[4] + r[5]) + (r[6] + r[7]));
            for (; i < n; ++i)
                res += a[i];
            return res;
        }
        size_t n2 = n / 2;
        n2 -= n2 % 8;
        return pairwiseSum(a, n2) + pairwiseSum(a + n2, n - n2);
    }

    float sum16(const float *a) { return 0.0f + pairwiseSum(a, 16); }

    // The C runtime's powf, never an inlined or vectorised substitute.
    float (*volatile g_powf)(float, float) = ::powf;

    float g_toLinear[256];
    float g_E5[32], g_E6[64];
    float g_scale[3];
    const float kChannelWeights[3] = {0.30f, 0.55f, 0.15f};
    float g_cwSum;
    const float kW4[4] = {1.0f, 0.0f, float(2.0 / 3.0), float(1.0 / 3.0)};
    const float kW3[4] = {1.0f, 0.0f, 0.5f, 0.0f};
    float g_A8[8], g_A6[8];
    // Optimal single-colour end points: [three][5 or 6 bits][value] -> (e0, e1) indices.
    std::array<std::array<int, 2>, 256> g_single[2][2];

    void singleColourTable(const float *table, int count, double weight0, std::array<std::array<int, 2>, 256> &out)
    {
        const float w0 = float(weight0), w1 = float(1.0 - weight0);
        for (int v = 0; v < 256; ++v)
        {
            float best = std::numeric_limits<float>::infinity();
            int bi = 0, bj = 0;
            for (int i = 0; i < count; ++i)
            {
                for (int j = 0; j < count; ++j)
                {
                    const float mixed = w0 * table[i] + w1 * table[j];
                    float cost = std::fabs(mixed - float(v));
                    cost += 0.03f * std::fabs(table[i] - table[j]);
                    if (cost < best)
                    {
                        best = cost;
                        bi = i;
                        bj = j;
                    }
                }
            }
            out[v] = {bi, bj};
        }
    }

    void initTables()
    {
        static std::once_flag once;
        std::call_once(once, []
        {
            for (int i = 0; i < 256; ++i)
            {
                const double c = i / 255.0;
                g_toLinear[i] = float(c <= 0.04045 ? c / 12.92 : std::pow((c + 0.055) / 1.055, 2.4));
            }
            for (int q = 0; q < 32; ++q)
                g_E5[q] = float((q << 3) | (q >> 2));
            for (int q = 0; q < 64; ++q)
                g_E6[q] = float((q << 2) | (q >> 4));
            for (int c = 0; c < 3; ++c)
                g_scale[c] = std::sqrt(kChannelWeights[c]);
            g_cwSum = (0.0f + kChannelWeights[0] + kChannelWeights[1]) + kChannelWeights[2];
            const float a8[8] = {7, 0, 6, 5, 4, 3, 2, 1}, a6[8] = {5, 0, 4, 3, 2, 1, 0, 0};
            for (int k = 0; k < 8; ++k)
            {
                g_A8[k] = a8[k] / 7.0f;
                g_A6[k] = a6[k] / 5.0f;
            }
            singleColourTable(g_E5, 32, 2.0 / 3.0, g_single[0][0]);
            singleColourTable(g_E6, 64, 2.0 / 3.0, g_single[0][1]);
            singleColourTable(g_E5, 32, 0.5, g_single[1][0]);
            singleColourTable(g_E6, 64, 0.5, g_single[1][1]);
        });
    }

    float clampf(float v, float lo, float hi) { return std::min(std::max(v, lo), hi); }

    uint8_t toSrgb8(float linear)
    {
        const float c = clampf(linear, 0.0f, 1.0f);
        const float s = c <= 0.0031308f ? c * 12.92f : 1.055f * g_powf(c, float(1 / 2.4)) - 0.055f;
        return uint8_t(clampf(std::nearbyint(s * 255.0f), 0.0f, 255.0f));
    }

    // An image of float32 channels, row major.
    struct FImage
    {
        int w = 0, h = 0, c = 0;
        std::vector<float> v;
        float *at(int y, int x) { return v.data() + (size_t(y) * w + x) * c; }
        const float *at(int y, int x) const { return v.data() + (size_t(y) * w + x) * c; }
    };

    FImage makeImage(int w, int h, int c)
    {
        FImage im;
        im.w = w;
        im.h = h;
        im.c = c;
        im.v.assign(size_t(w) * h * c, 0.0f);
        return im;
    }

    // _half: a 2x2 (or 2x1 / 1x2) box average, as numpy's mean(axis=(1, 3)) adds.
    FImage half(const FImage &x)
    {
        const int fy = x.h > 1 ? 2 : 1, fx = x.w > 1 ? 2 : 1;
        FImage out = makeImage(x.w / fx, x.h / fy, x.c);
        const float count = float(fy * fx);
        for (int y = 0; y < out.h; ++y)
        {
            for (int xx = 0; xx < out.w; ++xx)
            {
                float *o = out.at(y, xx);
                for (int ch = 0; ch < x.c; ++ch)
                {
                    float s;
                    if (fy == 2 && fx == 2)
                    {
                        const float a = x.at(2 * y, 2 * xx)[ch], b = x.at(2 * y, 2 * xx + 1)[ch];
                        const float c = x.at(2 * y + 1, 2 * xx)[ch], d = x.at(2 * y + 1, 2 * xx + 1)[ch];
                        s = x.c == 1 ? (a + b) + (c + d) : ((a + b) + c) + d;
                    }
                    else if (fy == 2)
                        s = x.at(2 * y, xx)[ch] + x.at(2 * y + 1, xx)[ch];
                    else if (fx == 2)
                        s = x.at(y, 2 * xx)[ch] + x.at(y, 2 * xx + 1)[ch];
                    else
                        s = x.at(y, xx)[ch];
                    o[ch] = s / count;
                }
            }
        }
        return out;
    }

    // np.pad(mode="edge") by one row / column at the bottom / right.
    FImage padEdge(const FImage &x, int py, int px)
    {
        if (!py && !px)
            return x;
        FImage out = makeImage(x.w + px, x.h + py, x.c);
        for (int y = 0; y < out.h; ++y)
            for (int xx = 0; xx < out.w; ++xx)
                std::memcpy(out.at(y, xx), x.at(std::min(y, x.h - 1), std::min(xx, x.w - 1)), sizeof(float) * x.c);
        return out;
    }

    // xtpbuild.bleed: colour under transparent texels from the visible ones.
    FImage bleed(const FImage &rgbIn, const std::vector<uint8_t> &knownIn)
    {
        const size_t n = size_t(rgbIn.w) * rgbIn.h;
        size_t knownCount = 0;
        for (uint8_t k : knownIn)
            knownCount += k;
        if (knownCount == n || knownCount == 0)
            return rgbIn;
        FImage rgb = rgbIn;
        std::vector<uint8_t> known = knownIn;
        const int h = rgb.h, w = rgb.w;
        static const int offsets[8][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};
        for (int round = 0; round < 4; ++round)
        {
            FImage total = makeImage(w, h, 3);
            std::vector<float> count(n, 0.0f);
            for (const auto &o : offsets)
            {
                for (int y = 0; y < h; ++y)
                {
                    const int sy = ((y - o[0]) % h + h) % h;
                    for (int x = 0; x < w; ++x)
                    {
                        const int sx = ((x - o[1]) % w + w) % w;
                        const float shifted = known[size_t(sy) * w + sx] ? 1.0f : 0.0f;
                        const float *src = rgb.at(sy, sx);
                        float *t = total.at(y, x);
                        for (int c = 0; c < 3; ++c)
                            t[c] += src[c] * shifted;
                        count[size_t(y) * w + x] += shifted;
                    }
                }
            }
            bool all = true;
            std::vector<uint8_t> grow(n, 0);
            for (size_t i = 0; i < n; ++i)
                grow[i] = !known[i] && count[i] > 0.0f;
            for (size_t i = 0; i < n; ++i)
            {
                if (grow[i])
                {
                    for (int c = 0; c < 3; ++c)
                        rgb.v[i * 3 + c] = total.v[i * 3 + c] / count[i];
                    known[i] = 1;
                }
                all = all && known[i];
            }
            if (all)
                return rgb;
        }
        // Push-pull.
        std::vector<FImage> sums, weights;
        {
            FImage s = rgb, wgt = makeImage(w, h, 1);
            for (size_t i = 0; i < n; ++i)
            {
                const float k = known[i] ? 1.0f : 0.0f;
                for (int c = 0; c < 3; ++c)
                    s.v[i * 3 + c] = rgb.v[i * 3 + c] * k;
                wgt.v[i] = k;
            }
            sums.push_back(std::move(s));
            weights.push_back(std::move(wgt));
        }
        while (sums.back().h > 1 || sums.back().w > 1)
        {
            const int hh = weights.back().h, ww = weights.back().w;
            const int py = hh > 1 ? hh % 2 : 0, px = ww > 1 ? ww % 2 : 0;
            FImage s = half(padEdge(sums.back(), py, px));
            FImage wg = half(padEdge(weights.back(), py, px));
            sums.push_back(std::move(s));
            weights.push_back(std::move(wg));
        }
        const float tiny = 1e-12f;
        FImage colour = sums.back();
        for (size_t i = 0; i < colour.v.size() / 3; ++i)
            for (int c = 0; c < 3; ++c)
                colour.v[i * 3 + c] = sums.back().v[i * 3 + c] / std::max(weights.back().v[i], tiny);
        for (size_t level = sums.size() - 1; level-- > 0;)
        {
            const FImage &s = sums[level], &wg = weights[level];
            FImage next = makeImage(wg.w, wg.h, 3);
            for (int y = 0; y < wg.h; ++y)
            {
                const int uy = int(int64_t(y) * colour.h / wg.h);
                for (int x = 0; x < wg.w; ++x)
                {
                    const int ux = int(int64_t(x) * colour.w / wg.w);
                    const float wv = wg.at(y, x)[0];
                    for (int c = 0; c < 3; ++c)
                        next.at(y, x)[c] = wv > 0.0f ? s.at(y, x)[c] / std::max(wv, tiny) : colour.at(uy, ux)[c];
                }
            }
            colour = std::move(next);
        }
        for (size_t i = 0; i < n; ++i)
            if (!known[i])
                for (int c = 0; c < 3; ++c)
                    rgb.v[i * 3 + c] = colour.v[i * 3 + c];
        return rgb;
    }

    // RGBA8 level with unit-scale alpha.
    struct Level
    {
        int w = 0, h = 0;
        std::vector<uint8_t> px;
    };

    std::vector<std::pair<int, int>> levelSizes(int w, int h, bool dxt)
    {
        std::vector<std::pair<int, int>> sizes{{w, h}};
        while (!(w == 1 && h == 1))
        {
            w = std::max(1, w / 2);
            h = std::max(1, h / 2);
            if (dxt && (w < 4 || h < 4))
                break;
            sizes.push_back({w, h});
        }
        return sizes;
    }

    std::vector<uint8_t> coverageThreshold(const FImage &area, double target)
    {
        const int h = area.h, w = area.w;
        const size_t size = size_t(h) * w;
        std::vector<uint8_t> mask(size, 0);
        if (target <= 0.0)
            return mask;
        const size_t k = std::min<size_t>(size, std::max<int64_t>(1, int64_t(std::nearbyint(target * double(size)))));
        std::vector<float> around(size, 0.0f);
        for (int dy = -1; dy <= 1; ++dy)
            for (int dx = -1; dx <= 1; ++dx)
                for (int y = 0; y < h; ++y)
                    for (int x = 0; x < w; ++x)
                        around[size_t(y) * w + x] += area.v[size_t(((y - dy) % h + h) % h) * w + ((x - dx) % w + w) % w];
        // _bayer
        int bs = 1;
        std::vector<double> rank{0.0};
        while (bs < std::max(h, w))
        {
            std::vector<double> next(size_t(bs) * 2 * bs * 2);
            for (int y = 0; y < bs; ++y)
                for (int x = 0; x < bs; ++x)
                {
                    const double r = rank[size_t(y) * bs + x];
                    next[size_t(y) * 2 * bs + x] = 4 * r;
                    next[size_t(y) * 2 * bs + x + bs] = 4 * r + 2;
                    next[size_t(y + bs) * 2 * bs + x] = 4 * r + 3;
                    next[size_t(y + bs) * 2 * bs + x + bs] = 4 * r + 1;
                }
            rank.swap(next);
            bs *= 2;
        }
        std::vector<double> bayer(size);
        for (int y = 0; y < h; ++y)
            for (int x = 0; x < w; ++x)
                bayer[size_t(y) * w + x] = rank[size_t(y % bs) * bs + x % bs] / double(bs * bs);
        std::vector<uint32_t> order(size);
        for (size_t i = 0; i < size; ++i)
            order[i] = uint32_t(i);
        std::stable_sort(order.begin(), order.end(), [&](uint32_t a, uint32_t b)
        {
            const float na = -area.v[a], nb = -area.v[b];
            if (na != nb)
                return na < nb;
            const float ra = -around[a], rb = -around[b];
            if (ra != rb)
                return ra < rb;
            return bayer[a] < bayer[b];
        });
        for (size_t i = 0; i < k; ++i)
            mask[order[i]] = 1;
        return mask;
    }

    FImage linearOf(const Level &level)
    {
        FImage lin = makeImage(level.w, level.h, 3);
        for (size_t i = 0; i < size_t(level.w) * level.h; ++i)
            for (int c = 0; c < 3; ++c)
                lin.v[i * 3 + c] = g_toLinear[level.px[i * 4 + c]];
        return lin;
    }

    std::vector<Level> buildChain(const std::vector<Level> &authored, bool binary)
    {
        const int w = authored[0].w, h = authored[0].h;
        const auto sizes = levelSizes(w, h, false);
        std::vector<Level> out{authored[0]};
        const size_t n0 = size_t(w) * h;
        int opaque = 0;
        size_t visible0 = 0;
        for (size_t i = 0; i < n0; ++i)
        {
            opaque = std::max<int>(opaque, authored[0].px[i * 4 + 3]);
            visible0 += authored[0].px[i * 4 + 3] > 0;
        }
        const double target = double(visible0) / double(n0);
        FImage lin = linearOf(authored[0]);
        FImage alpha = makeImage(w, h, 1), area = makeImage(w, h, 1);
        auto setAlpha = [&](const Level &level)
        {
            alpha = makeImage(level.w, level.h, 1);
            area = makeImage(level.w, level.h, 1);
            for (size_t i = 0; i < size_t(level.w) * level.h; ++i)
            {
                alpha.v[i] = float(level.px[i * 4 + 3]) / 255.0f;
                area.v[i] = level.px[i * 4 + 3] > 0 ? 1.0f : 0.0f;
            }
        };
        setAlpha(authored[0]);
        const float opaqueUnit = float(opaque / 255.0);
        for (size_t i = 1; i < sizes.size(); ++i)
        {
            if (i < authored.size() && authored[i].w == sizes[i].first && authored[i].h == sizes[i].second)
            {
                out.push_back(authored[i]);
                lin = linearOf(authored[i]);
                setAlpha(authored[i]);
                continue;
            }
            const FImage &weightSource = binary ? area : alpha;
            std::vector<uint8_t> visible(weightSource.v.size());
            for (size_t j = 0; j < visible.size(); ++j)
                visible[j] = weightSource.v[j] > 0.0f;
            lin = bleed(lin, visible);
            FImage wgt = weightSource;
            for (float &v : wgt.v)
                v = v + float(1.0 / 1024.0);
            FImage weighted = lin;
            for (size_t j = 0; j < wgt.v.size(); ++j)
                for (int c = 0; c < 3; ++c)
                    weighted.v[j * 3 + c] = lin.v[j * 3 + c] * wgt.v[j];
            const FImage num = half(weighted), den = half(wgt);
            lin = num;
            for (size_t j = 0; j < den.v.size(); ++j)
                for (int c = 0; c < 3; ++c)
                    lin.v[j * 3 + c] = num.v[j * 3 + c] / den.v[j];
            Level level;
            level.w = lin.w;
            level.h = lin.h;
            level.px.resize(size_t(level.w) * level.h * 4);
            for (size_t j = 0; j < size_t(level.w) * level.h; ++j)
                for (int c = 0; c < 3; ++c)
                    level.px[j * 4 + c] = toSrgb8(lin.v[j * 3 + c]);
            if (binary)
            {
                area = half(area);
                const std::vector<uint8_t> mask = coverageThreshold(area, target);
                alpha = makeImage(area.w, area.h, 1);
                for (size_t j = 0; j < mask.size(); ++j)
                {
                    level.px[j * 4 + 3] = mask[j] ? uint8_t(opaque) : 0;
                    alpha.v[j] = mask[j] ? opaqueUnit : 0.0f;
                }
            }
            else
            {
                alpha = half(alpha);
                for (size_t j = 0; j < alpha.v.size(); ++j)
                    level.px[j * 4 + 3] = uint8_t(clampf(std::nearbyint(alpha.v[j] * 255.0f), 0.0f, 255.0f));
            }
            out.push_back(std::move(level));
        }
        return out;
    }

    // ------------------------------------------------------- DXT encoding

    int nearestLevel(float value, const float *table, int top)
    {
        int q = int(clampf(std::nearbyint(value * float(top / 255.0)), 0.0f, float(top)));
        int best = q;
        float dist = std::fabs(table[q] - value);
        for (int step : {-1, 1})
        {
            const int c = std::min(std::max(q + step, 0), top);
            const float d = std::fabs(table[c] - value);
            if (d < dist)
            {
                best = c;
                dist = d;
            }
        }
        return best;
    }

    void quantise565(const float e[3], int q[3], float x[3])
    {
        const float r = clampf(e[0], 0.0f, 255.0f), g = clampf(e[1], 0.0f, 255.0f), b = clampf(e[2], 0.0f, 255.0f);
        q[0] = nearestLevel(r, g_E5, 31);
        q[1] = nearestLevel(g, g_E6, 63);
        q[2] = nearestLevel(b, g_E5, 31);
        x[0] = g_E5[q[0]];
        x[1] = g_E6[q[1]];
        x[2] = g_E5[q[2]];
    }

    struct Fit
    {
        float err;
        int idx[16];
        int q0[3], q1[3];
        float x0[3], x1[3];
    };

    float evaluate(const float xs[16][3], const float m[16], const float x0[3], const float x1[3], bool three, int idx[16])
    {
        float p[4][3];
        for (int c = 0; c < 3; ++c)
        {
            const float p0 = x0[c] * g_scale[c], p1 = x1[c] * g_scale[c];
            p[0][c] = p0;
            p[1][c] = p1;
            if (three)
                p[2][c] = (p0 + p1) * 0.5f;
            else
            {
                p[2][c] = (2.0f * p0 + p1) / 3.0f;
                p[3][c] = (p0 + 2.0f * p1) / 3.0f;
            }
        }
        const int entries = three ? 3 : 4;
        float e[16];
        for (int i = 0; i < 16; ++i)
        {
            float best = 0.0f;
            int bi = 0;
            for (int k = 0; k < entries; ++k)
            {
                const float d0 = xs[i][0] - p[k][0], d1 = xs[i][1] - p[k][1], d2 = xs[i][2] - p[k][2];
                const float d = ((0.0f + d0 * d0) + d1 * d1) + d2 * d2;
                if (k == 0 || d < best)
                {
                    best = d;
                    bi = k;
                }
            }
            idx[i] = bi;
            e[i] = best * m[i];
        }
        return sum16(e);
    }

    void keepCandidate(Fit &fit, const float xs[16][3], const float m[16], bool three, const float n0[3], const float n1[3])
    {
        Fit cand;
        quantise565(n0, cand.q0, cand.x0);
        quantise565(n1, cand.q1, cand.x1);
        cand.err = evaluate(xs, m, cand.x0, cand.x1, three, cand.idx);
        if (cand.err < fit.err)
            fit = cand;
    }

    Fit fitMode(const float x[16][3], const float xs[16][3], const float m[16], bool three, const float start0[3],
                const float start1[3], const float mean[3])
    {
        Fit fit;
        quantise565(start0, fit.q0, fit.x0);
        quantise565(start1, fit.q1, fit.x1);
        fit.err = evaluate(xs, m, fit.x0, fit.x1, three, fit.idx);
        {
            float s0[3], s1[3];
            for (int c = 0; c < 3; ++c)
            {
                const int v = int(clampf(std::nearbyint(mean[c]), 0.0f, 255.0f));
                const auto &pair = g_single[three ? 1 : 0][c == 1 ? 1 : 0][v];
                const float *table = c == 1 ? g_E6 : g_E5;
                s0[c] = table[pair[0]];
                s1[c] = table[pair[1]];
            }
            keepCandidate(fit, xs, m, three, s0, s1);
        }
        const float *W = three ? kW3 : kW4;
        for (int round = 0; round < 3; ++round)
        {
            float a[16], b[16], am[16], bm[16], t[16];
            for (int i = 0; i < 16; ++i)
            {
                a[i] = W[fit.idx[i]];
                b[i] = 1.0f - a[i];
                am[i] = a[i] * m[i];
                bm[i] = b[i] * m[i];
            }
            for (int i = 0; i < 16; ++i)
                t[i] = am[i] * a[i];
            const float aa = sum16(t);
            for (int i = 0; i < 16; ++i)
                t[i] = am[i] * b[i];
            const float ab = sum16(t);
            for (int i = 0; i < 16; ++i)
                t[i] = bm[i] * b[i];
            const float bb = sum16(t);
            float xa[3] = {0, 0, 0}, xb[3] = {0, 0, 0};
            for (int i = 0; i < 16; ++i)
                for (int c = 0; c < 3; ++c)
                {
                    xa[c] += am[i] * x[i][c];
                    xb[c] += bm[i] * x[i][c];
                }
            const float det = aa * bb - ab * ab;
            const bool ok = det > 1e-4f;
            const float safe = ok ? det : 1.0f;
            float e0[3], e1[3];
            for (int c = 0; c < 3; ++c)
            {
                e0[c] = ok ? (bb * xa[c] - ab * xb[c]) / safe : fit.x0[c];
                e1[c] = ok ? (aa * xb[c] - ab * xa[c]) / safe : fit.x1[c];
            }
            keepCandidate(fit, xs, m, three, e0, e1);
        }
        return fit;
    }

    // One colour block: x RGB 0..255, m 1 for texels that must be coloured
    // (0 only for DXT1's transparent ones), seen: how much of each shows
    // (DXT5) or null. Writes 8 bytes; returns the weighted squared error.
    float encodeColour(const float x[16][3], const float m[16], bool dxt1, const float *seen, uint8_t out[8])
    {
        float xs[16][3];
        for (int i = 0; i < 16; ++i)
            for (int c = 0; c < 3; ++c)
                xs[i][c] = x[i][c] * g_scale[c];
        // _principal_axis
        const float n = std::max(sum16(m), 1e-6f);
        float meanS[3] = {0, 0, 0};
        for (int i = 0; i < 16; ++i)
            for (int c = 0; c < 3; ++c)
                meanS[c] += xs[i][c] * m[i];
        for (int c = 0; c < 3; ++c)
            meanS[c] = meanS[c] / n;
        float d[16][3];
        for (int i = 0; i < 16; ++i)
            for (int c = 0; c < 3; ++c)
                d[i][c] = (xs[i][c] - meanS[c]) * m[i];
        float cov[3][3] = {};
        for (int i = 0; i < 16; ++i)
            for (int c = 0; c < 3; ++c)
                for (int e = 0; e < 3; ++e)
                    cov[c][e] += d[i][c] * d[i][e];
        int widest = 0;
        for (int c = 1; c < 3; ++c)
            if (cov[c][c] > cov[widest][widest])
                widest = c;
        float v[3] = {cov[0][widest], cov[1][widest], cov[2][widest]};
        for (int it = 0; it < 8; ++it)
        {
            float nv[3];
            for (int c = 0; c < 3; ++c)
                nv[c] = ((0.0f + cov[c][0] * v[0]) + cov[c][1] * v[1]) + cov[c][2] * v[2];
            const float norm = std::sqrt(((0.0f + nv[0] * nv[0]) + nv[1] * nv[1]) + nv[2] * nv[2]);
            const float div = std::max(norm, 1e-12f);
            for (int c = 0; c < 3; ++c)
                v[c] = nv[c] / div;
        }
        float tmax = -std::numeric_limits<float>::infinity(), tmin = std::numeric_limits<float>::infinity();
        bool has = false;
        for (int i = 0; i < 16; ++i)
        {
            const float t = ((0.0f + d[i][0] * v[0]) + d[i][1] * v[1]) + d[i][2] * v[2];
            if (m[i] > 0.0f)
            {
                has = true;
                tmax = std::max(tmax, t);
                tmin = std::min(tmin, t);
            }
        }
        if (!has)
            tmax = tmin = 0.0f;
        float mean[3], start0[3], start1[3];
        for (int c = 0; c < 3; ++c)
        {
            mean[c] = meanS[c] / g_scale[c];
            start0[c] = (meanS[c] + tmax * v[c]) / g_scale[c];
            start1[c] = (meanS[c] + tmin * v[c]) / g_scale[c];
        }
        bool transparent = false;
        for (int i = 0; i < 16; ++i)
            transparent = transparent || m[i] == 0.0f;

        Fit best;
        best.err = std::numeric_limits<float>::infinity();
        bool bestThree = false;
        std::memset(best.idx, 0, sizeof(best.idx));
        std::memset(best.q0, 0, sizeof(best.q0));
        std::memset(best.q1, 0, sizeof(best.q1));
        for (int mode = 0; mode < (dxt1 ? 2 : 1); ++mode)
        {
            const bool three = mode == 1;
            if (!three && transparent)
                continue;
            Fit fit = fitMode(x, xs, m, three, start0, start1, mean);
            if (fit.err < best.err)
            {
                best = fit;
                bestThree = three;
            }
        }
        float err = best.err;
        if (seen)
        {
            float x0[3] = {g_E5[best.q0[0]], g_E6[best.q0[1]], g_E5[best.q0[2]]};
            float x1[3] = {g_E5[best.q1[0]], g_E6[best.q1[1]], g_E5[best.q1[2]]};
            const float *W = bestThree ? kW3 : kW4;
            float e[16];
            for (int i = 0; i < 16; ++i)
            {
                const float w0 = W[best.idx[i]], w1 = 1.0f - w0;
                float s = 0.0f;
                for (int c = 0; c < 3; ++c)
                {
                    const float decoded = w0 * x0[c] + w1 * x1[c];
                    const float diff = (x[i][c] - decoded) * g_scale[c];
                    s += diff * diff;
                }
                e[i] = s * seen[i];
            }
            err = sum16(e);
        }
        int c0 = (best.q0[0] << 11) | (best.q0[1] << 5) | best.q0[2];
        int c1 = (best.q1[0] << 11) | (best.q1[1] << 5) | best.q1[2];
        int idx[16];
        std::memcpy(idx, best.idx, sizeof(idx));
        const bool swap4 = !bestThree && c0 < c1, swap3 = bestThree && c0 > c1;
        static const int remap4[4] = {1, 0, 3, 2}, remap3[4] = {1, 0, 2, 3};
        for (int i = 0; i < 16; ++i)
        {
            if (swap4)
                idx[i] = remap4[idx[i]];
            if (swap3)
                idx[i] = remap3[idx[i]];
        }
        if (swap4 || swap3)
            std::swap(c0, c1);
        for (int i = 0; i < 16; ++i)
        {
            if (!bestThree && c0 == c1)
                idx[i] = 0;
            if (bestThree && m[i] == 0.0f)
                idx[i] = 3;
        }
        uint32_t bits = 0;
        for (int i = 0; i < 16; ++i)
            bits |= uint32_t(idx[i]) << (2 * i);
        out[0] = uint8_t(c0);
        out[1] = uint8_t(c0 >> 8);
        out[2] = uint8_t(c1);
        out[3] = uint8_t(c1 >> 8);
        out[4] = uint8_t(bits);
        out[5] = uint8_t(bits >> 8);
        out[6] = uint8_t(bits >> 16);
        out[7] = uint8_t(bits >> 24);
        return err;
    }

    float alphaEvaluate(const float alpha[16], float a0, float a1, int idx[16])
    {
        float pal[8];
        if (a0 > a1)
            for (int k = 0; k < 8; ++k)
                pal[k] = g_A8[k] * a0 + (1.0f - g_A8[k]) * a1;
        else
        {
            for (int k = 0; k < 8; ++k)
                pal[k] = g_A6[k] * a0 + (1.0f - g_A6[k]) * a1;
            pal[6] = 0.0f;
            pal[7] = 255.0f;
        }
        float e[16];
        for (int i = 0; i < 16; ++i)
        {
            float best = 0.0f;
            int bi = 0;
            for (int k = 0; k < 8; ++k)
            {
                const float diff = alpha[i] - pal[k];
                const float dd = diff * diff;
                if (k == 0 || dd < best)
                {
                    best = dd;
                    bi = k;
                }
            }
            idx[i] = bi;
            e[i] = best;
        }
        return sum16(e);
    }

    float encodeAlpha(const float alpha[16], uint8_t out[8])
    {
        bool has = false;
        float lo6 = 255.0f, hi6 = 0.0f, amax = alpha[0], amin = alpha[0];
        for (int i = 0; i < 16; ++i)
        {
            amax = std::max(amax, alpha[i]);
            amin = std::min(amin, alpha[i]);
            if (alpha[i] > 0.0f && alpha[i] < 255.0f)
            {
                has = true;
                lo6 = std::min(lo6, alpha[i]);
                hi6 = std::max(hi6, alpha[i]);
            }
        }
        if (!has)
            lo6 = hi6 = 0.0f;
        float bestErr = 0.0f, bestA0 = 0.0f, bestA1 = 0.0f;
        int bestIdx[16] = {};
        for (int mode = 0; mode < 2; ++mode)
        {
            const bool six = mode == 1;
            float c0 = six ? lo6 : amax, c1 = six ? hi6 : amin;
            int idx[16];
            float err = alphaEvaluate(alpha, c0, c1, idx);
            const float *table = six ? g_A6 : g_A8;
            for (int round = 0; round < 3; ++round)
            {
                float wa[16], wb[16], t[16];
                for (int i = 0; i < 16; ++i)
                {
                    const float wgt = table[idx[i]];
                    const float used = (six && idx[i] >= 6) ? 0.0f : 1.0f;
                    wa[i] = wgt * used;
                    wb[i] = (1.0f - wgt) * used;
                }
                for (int i = 0; i < 16; ++i)
                    t[i] = wa[i] * table[idx[i]];
                const float aa = sum16(t);
                for (int i = 0; i < 16; ++i)
                    t[i] = wa[i] * (1.0f - table[idx[i]]);
                const float ab = sum16(t);
                for (int i = 0; i < 16; ++i)
                    t[i] = wb[i] * (1.0f - table[idx[i]]);
                const float bb = sum16(t);
                for (int i = 0; i < 16; ++i)
                    t[i] = wa[i] * alpha[i];
                const float xa = sum16(t);
                for (int i = 0; i < 16; ++i)
                    t[i] = wb[i] * alpha[i];
                const float xb = sum16(t);
                const float det = aa * bb - ab * ab;
                const bool ok = det > 1e-4f;
                const float safe = ok ? det : 1.0f;
                float n0 = ok ? clampf(std::nearbyint((bb * xa - ab * xb) / safe), 0.0f, 255.0f) : c0;
                float n1 = ok ? clampf(std::nearbyint((aa * xb - ab * xa) / safe), 0.0f, 255.0f) : c1;
                if (six)
                {
                    const float lo = std::min(n0, n1), hi = std::max(n0, n1);
                    n0 = lo;
                    n1 = hi;
                }
                else
                {
                    const float hi = std::max(n0, n1), lo = std::min(n0, n1);
                    n0 = hi;
                    n1 = lo;
                    if (n0 == n1)
                    {
                        if (n0 < 255.0f)
                            n0 = n0 + 1.0f;
                        else
                            n1 = n1 - 1.0f;
                    }
                }
                int nidx[16];
                const float e = alphaEvaluate(alpha, n0, n1, nidx);
                if (e < err)
                {
                    err = e;
                    std::memcpy(idx, nidx, sizeof(idx));
                    c0 = n0;
                    c1 = n1;
                }
            }
            if (mode == 0 || err < bestErr)
            {
                bestErr = err;
                std::memcpy(bestIdx, idx, sizeof(bestIdx));
                bestA0 = c0;
                bestA1 = c1;
            }
        }
        out[0] = uint8_t(bestA0);
        out[1] = uint8_t(bestA1);
        uint64_t bits = 0;
        for (int i = 0; i < 16; ++i)
            bits |= uint64_t(bestIdx[i]) << (3 * i);
        for (int k = 0; k < 6; ++k)
            out[2 + k] = uint8_t(bits >> (8 * k));
        return bestErr;
    }

    // ------------------------------------------------- swizzled formats

    std::vector<uint32_t> swizzleOrder(int w, int h)
    {
        uint32_t maskU = 0, maskV = 0;
        int bit = 0;
        for (int size = 1; size < w || size < h; size <<= 1)
        {
            if (size < w)
                maskU |= 1u << bit++;
            if (size < h)
                maskV |= 1u << bit++;
        }
        auto spread = [](uint32_t value, uint32_t mask)
        {
            uint32_t out = 0;
            int src = 0;
            for (int b = 0; b < 32; ++b)
                if (mask & (1u << b))
                    out |= ((value >> src++) & 1u) << b;
            return out;
        };
        std::vector<uint32_t> order(size_t(w) * h);
        for (int y = 0; y < h; ++y)
            for (int x = 0; x < w; ++x)
                order[size_t(y) * w + x] = spread(uint32_t(y), maskV) | spread(uint32_t(x), maskU);
        return order;
    }

    struct Texture
    {
        uint64_t key = 0;
        std::vector<uint32_t> gs0;
        int gsW = 0, gsH = 0;
        std::vector<std::vector<uint32_t>> gsLevels; // level sizes halve from gsW x gsH
        bool unit = false;
        bool binary = false;
        std::vector<Level> authored, chain;
        size_t levels = 0;
        uint8_t format = 0, flags = FLAG_UNIT_ALPHA;
        std::vector<uint8_t> data;
        size_t blockStart = 0, blockCount0 = 0; // level 0's blocks in its DXT batch
    };

    double psnr(double sqError, double count)
    {
        const double mse = sqError / std::max(count, 1e-6);
        return mse <= 1e-9 ? 99.0 : 10.0 * std::log10(255.0 * 255.0 / mse);
    }

    void chooseUncompressed(Texture &tex, bool exact)
    {
        const Level &level0 = tex.chain[0];
        bool use16 = false;
        if (tex.unit)
        {
            std::vector<float> errors;
            for (size_t i = 0; i < size_t(level0.w) * level0.h; ++i)
            {
                if (level0.px[i * 4 + 3] == 0)
                    continue;
                float s = 0.0f;
                for (int c = 0; c < 3; ++c)
                {
                    const float value = float(level0.px[i * 4 + c]);
                    const float shown = g_E5[nearestLevel(value, g_E5, 31)];
                    const float diff = shown - value;
                    s += diff * diff * kChannelWeights[c];
                }
                errors.push_back(s);
            }
            if (exact)
                use16 = std::all_of(errors.begin(), errors.end(), [](float e) { return e == 0.0f; });
            else
            {
                const float total = 0.0f + pairwiseSum(errors.data(), errors.size());
                use16 = psnr(double(total / g_cwSum), double(errors.size())) >= ARGB1555_PSNR;
            }
        }
        tex.format = use16 ? FMT_ARGB1555 : FMT_ARGB8888;
        tex.levels = tex.chain.size();
        tex.data.clear();
        for (const Level &level : tex.chain)
        {
            const auto order = swizzleOrder(level.w, level.h);
            const size_t count = size_t(level.w) * level.h, bytesPer = use16 ? 2 : 4;
            std::vector<uint8_t> out(count * bytesPer);
            for (size_t i = 0; i < count; ++i)
            {
                const uint8_t *p = level.px.data() + i * 4;
                uint8_t *o = out.data() + size_t(order[i]) * bytesPer;
                if (use16)
                {
                    const uint32_t r = uint32_t(nearestLevel(float(p[0]), g_E5, 31));
                    const uint32_t g = uint32_t(nearestLevel(float(p[1]), g_E5, 31));
                    const uint32_t b = uint32_t(nearestLevel(float(p[2]), g_E5, 31));
                    const uint16_t v = uint16_t((p[3] > 0 ? 0x8000u : 0u) | (r << 10) | (g << 5) | b);
                    o[0] = uint8_t(v);
                    o[1] = uint8_t(v >> 8);
                }
                else
                {
                    o[0] = p[2];
                    o[1] = p[1];
                    o[2] = p[0];
                    o[3] = p[3];
                }
            }
            tex.data.insert(tex.data.end(), out.begin(), out.end());
        }
    }

    template <class F>
    void parallelFor(size_t count, F &&body)
    {
        const unsigned threads = std::max(1u, std::min(16u, std::thread::hardware_concurrency()));
        std::atomic<size_t> next{0};
        auto run = [&]
        {
            for (size_t i; (i = next.fetch_add(1)) < count;)
                body(i);
        };
        std::vector<std::thread> pool;
        for (unsigned t = 1; t < threads; ++t)
            pool.emplace_back(run);
        run();
        for (auto &t : pool)
            t.join();
    }

    uint64_t textureKey(const std::vector<uint32_t> &texels, int w, int h)
    {
        uint64_t state = 0xCBF29CE484222325ull ^ ((uint64_t(uint32_t(w)) << 32) | uint32_t(h));
        const uint64_t prime = 0x100000001B3ull;
        const size_t count = texels.size();
        for (size_t i = 0; i + 1 < count; i += 2)
        {
            state ^= uint64_t(texels[i]) | uint64_t(texels[i + 1]) << 32;
            state *= prime;
        }
        if (count % 2)
        {
            state ^= texels[count - 1];
            state *= prime;
        }
        return state;
    }

    // parse_qpm: the GS texels of each level, or false for an unknown kind.
    bool parseQpm(const uint8_t *data, size_t size, int &w, int &h, std::vector<std::vector<uint32_t>> &levels)
    {
        size_t cut[3];
        size_t found = 0;
        for (size_t i = 0; i < size && found < 3; ++i)
            if (data[i] == '\n')
                cut[found++] = i;
        if (found < 3)
            return false;
        const std::string kind(reinterpret_cast<const char *>(data), cut[0]);
        const std::string dims(reinterpret_cast<const char *>(data) + cut[0] + 1, cut[1] - cut[0] - 1);
        const std::string third(reinterpret_cast<const char *>(data) + cut[1] + 1, cut[2] - cut[1] - 1);
        const uint8_t *body = data + cut[2] + 1;
        const size_t bodySize = size - cut[2] - 1;
        if (std::sscanf(dims.c_str(), "%d %d", &w, &h) != 2 || w <= 0 || h <= 0)
            return false;
        if (kind == "Q8" || kind == "M8")
        {
            std::vector<std::string> fields;
            {
                size_t p = 0;
                while (p < third.size())
                {
                    while (p < third.size() && std::isspace(static_cast<unsigned char>(third[p])))
                        ++p;
                    size_t q = p;
                    while (q < third.size() && !std::isspace(static_cast<unsigned char>(third[q])))
                        ++q;
                    if (q > p)
                        fields.push_back(third.substr(p, q - p));
                    p = q;
                }
            }
            const int count = kind == "M8" && fields.size() > 3 ? std::atoi(fields[3].c_str()) : 1;
            if (bodySize < 1024)
                return false;
            uint32_t palette[256];
            for (int i = 0; i < 256; ++i)
                palette[i] = le32(body + 4 * i);
            size_t pos = 1024;
            int lw = w, lh = h;
            for (int l = 0; l < count; ++l)
            {
                const size_t n = size_t(lw) * lh;
                if (bodySize < pos || bodySize - pos < n)
                    break;
                std::vector<uint32_t> level(n);
                for (size_t i = 0; i < n; ++i)
                    level[i] = palette[body[pos + i]];
                levels.push_back(std::move(level));
                pos += n;
                lw = std::max(1, lw / 2);
                lh = std::max(1, lh / 2);
            }
            return !levels.empty();
        }
        if (kind == "Q6")
        {
            const size_t n = size_t(w) * h;
            if (bodySize / 4 < n)
                return false;
            std::vector<uint32_t> level(n);
            for (size_t i = 0; i < n; ++i)
                level[i] = le32(body + 4 * i);
            levels.push_back(std::move(level));
            return true;
        }
        return false;
    }

    Level storedLevel(const std::vector<uint32_t> &texels, int w, int h)
    {
        Level level;
        level.w = w;
        level.h = h;
        level.px.resize(texels.size() * 4);
        for (size_t i = 0; i < texels.size(); ++i)
        {
            const uint32_t t = texels[i];
            level.px[i * 4 + 0] = uint8_t(t);
            level.px[i * 4 + 1] = uint8_t(t >> 8);
            level.px[i * 4 + 2] = uint8_t(t >> 16);
            level.px[i * 4 + 3] = uint8_t(std::min<uint32_t>((t >> 24) * 2u, 255u));
        }
        return level;
    }
}

bool patchXboxGlyphs(const fs::path &iso, int &replaced, std::string &error)
{
    replaced = 0;
    std::fstream f(iso, std::ios::in | std::ios::out | std::ios::binary);
    if (!f)
    {
        error = "could not open the disc image to write the button glyphs";
        return false;
    }
    uint64_t base = 0;
    uint32_t size = 0;
    if (!findMiscPak(f, base, size))
    {
        error = "the disc image has no /PAK/MISC.PAK";
        return false;
    }
    uint8_t head[12];
    f.seekg(base);
    f.read(reinterpret_cast<char *>(head), 12);
    const uint32_t dirOffset = le32(head + 4), dirSize = le32(head + 8);
    if (!f || std::memcmp(head, "P4CK", 4) != 0 || uint64_t(dirOffset) + dirSize > size)
    {
        error = "/PAK/MISC.PAK on the disc is not a P4CK archive";
        return false;
    }
    std::vector<uint8_t> directory(dirSize);
    f.seekg(base + dirOffset);
    f.read(reinterpret_cast<char *>(directory.data()), dirSize);
    if (!f)
    {
        error = "could not read MISC.PAK's directory";
        return false;
    }
    std::map<std::string, const GlyphFile *> todo;
    for (const GlyphFile &glyph : kGlyphFiles)
        todo[glyph.entry] = &glyph;
    const size_t total = todo.size();
    for (size_t i = 0; i < dirSize / 60; ++i)
    {
        const uint8_t *record = directory.data() + i * 60;
        const std::string name(reinterpret_cast<const char *>(record), strnlen(reinterpret_cast<const char *>(record), 48));
        auto it = todo.find(name);
        if (it == todo.end())
            continue;
        const GlyphFile &glyph = *it->second;
        todo.erase(it);
        const uint32_t offset = le32(record + 48), length = le32(record + 52);
        std::vector<uint8_t> original(length);
        f.seekg(base + offset);
        f.read(reinterpret_cast<char *>(original.data()), length);
        if (!f || length != glyph.size || headLines(original.data(), original.size()) != headLines(glyph.data, glyph.size))
        {
            error = name + " in MISC.PAK is not the texture expected; not patched";
            return false;
        }
        if (std::memcmp(original.data(), glyph.data, glyph.size) != 0)
        {
            f.seekp(base + offset);
            f.write(reinterpret_cast<const char *>(glyph.data), std::streamsize(glyph.size));
            if (!f)
            {
                error = "could not write " + name + " into the disc image";
                return false;
            }
            ++replaced;
        }
    }
    if (!todo.empty())
    {
        error = todo.begin()->first + " is not in MISC.PAK";
        return false;
    }
    f.flush();
    if (!f)
    {
        error = "could not write the disc image";
        return false;
    }
    (void)total;
    return true;
}

bool buildXboxTexturePack(const std::vector<uint8_t> &pak, const fs::path &output, const std::function<void(int)> &progress,
                          const std::atomic<bool> *cancel, PackStats &stats, std::string &error)
{
    initTables();
    auto stopped = [&] { return cancel && cancel->load(); };
    auto report = [&](int percent) { if (progress) progress(percent); };
    if (pak.size() < 12 || std::memcmp(pak.data(), "P4CK", 4) != 0)
    {
        error = "MISC.PAK is not a P4CK archive";
        return false;
    }
    const uint32_t dirOffset = le32(pak.data() + 4), dirSize = le32(pak.data() + 8);
    if (uint64_t(dirOffset) + dirSize > pak.size())
    {
        error = "MISC.PAK's directory is outside the file";
        return false;
    }

    // 1. Decode MISC.PAK's textures; one entry per key, in first-seen order.
    std::vector<Texture> textures;
    std::unordered_map<uint64_t, size_t> byKey;
    for (size_t i = 0; i < dirSize / 60; ++i)
    {
        const uint8_t *record = pak.data() + dirOffset + i * 60;
        const std::string name(reinterpret_cast<const char *>(record), strnlen(reinterpret_cast<const char *>(record), 48));
        const uint64_t offset = le32(record + 48), size = le32(record + 52);
        const uint64_t start = std::min<uint64_t>(offset, pak.size());
        const uint64_t bytes = std::min<uint64_t>(offset + size, pak.size()) - start;
        if (name.size() < 4 || name.compare(name.size() - 4, 4, ".qpm") != 0 || bytes == 0)
            continue;
        if (name.rfind("textures/", 0) != 0 ||
            !(std::count(name.begin(), name.end(), '/') == 1 || name.rfind("textures/misc/", 0) == 0))
            continue;
        int w = 0, h = 0;
        std::vector<std::vector<uint32_t>> levels;
        if (!parseQpm(pak.data() + start, size_t(bytes), w, h, levels))
            continue;
        if ((w & (w - 1)) || (h & (h - 1)))
            continue; // non-power-of-two
        const uint64_t key = textureKey(levels[0], w, h);
        auto it = byKey.find(key);
        if (it != byKey.end())
        {
            Texture &known = textures[it->second];
            if (known.gsW != w || known.gsH != h || known.gs0 != levels[0])
            {
                error = "two textures in MISC.PAK share one key";
                return false;
            }
            if (levels.size() > known.gsLevels.size())
                known.gsLevels = levels;
            continue;
        }
        Texture tex;
        tex.key = key;
        tex.gs0 = levels[0];
        tex.gsW = w;
        tex.gsH = h;
        tex.gsLevels = std::move(levels);
        byKey[key] = textures.size();
        textures.push_back(std::move(tex));
    }
    report(5);

    // 3. Alpha class; textures with alpha above 0x80 stay on the runtime path.
    {
        std::vector<Texture> kept;
        kept.reserve(textures.size());
        for (Texture &tex : textures)
        {
            bool high = false, unit = true;
            for (const auto &level : tex.gsLevels)
                for (uint32_t t : level)
                {
                    const uint32_t a = t >> 24;
                    high = high || a > 0x80;
                    unit = unit && (a == 0 || a == 0x7F || a == 0x80);
                }
            if (high)
                continue;
            tex.unit = unit;
            int lw = tex.gsW, lh = tex.gsH;
            for (const auto &level : tex.gsLevels)
            {
                tex.authored.push_back(storedLevel(level, lw, lh));
                lw = std::max(1, lw / 2);
                lh = std::max(1, lh / 2);
            }
            kept.push_back(std::move(tex));
        }
        textures.swap(kept);
    }

    // 5. Mip chains and format choice.
    std::atomic<size_t> chainsDone{0};
    std::mutex progressLock;
    parallelFor(textures.size(), [&](size_t i)
    {
        if (stopped())
            return;
        Texture &tex = textures[i];
        const Level &a0 = tex.authored[0];
        bool zero = false, nonzero = false;
        for (size_t j = 0; j < size_t(a0.w) * a0.h; ++j)
        {
            zero = zero || a0.px[j * 4 + 3] == 0;
            nonzero = nonzero || a0.px[j * 4 + 3] > 0;
        }
        tex.binary = tex.unit && zero && nonzero;
        if (tex.binary)
            tex.flags |= FLAG_BINARY_ALPHA;
        tex.chain = buildChain(tex.authored, tex.binary);
        if (a0.w >= 8 && a0.h >= 8)
        {
            tex.format = tex.unit ? FMT_DXT1 : FMT_DXT5;
            tex.levels = levelSizes(a0.w, a0.h, true).size();
        }
        else
            chooseUncompressed(tex, true);
        const size_t done = ++chainsDone;
        if (done % 64 == 0)
        {
            std::lock_guard<std::mutex> lock(progressLock);
            report(5 + int(40 * done / textures.size()));
        }
    });
    if (stopped())
    {
        error = "stopped";
        return false;
    }

    // 6. DXT: every level of every texture of a format in one batch.
    struct Batch
    {
        bool dxt5;
        std::vector<size_t> owners;
        std::vector<std::array<uint8_t, 64>> blocks;
        std::vector<std::array<uint8_t, 16>> encoded;
        std::vector<float> cerr, aerr;
    };
    Batch batches[2];
    batches[0].dxt5 = false;
    batches[1].dxt5 = true;
    for (size_t t = 0; t < textures.size(); ++t)
    {
        Texture &tex = textures[t];
        if (tex.format != FMT_DXT1 && tex.format != FMT_DXT5)
            continue;
        if (!tex.data.empty())
            continue; // already uncompressed (small)
        Batch &batch = batches[tex.format == FMT_DXT5 ? 1 : 0];
        for (size_t l = 0; l < tex.levels; ++l)
        {
            const Level &level = tex.chain[l];
            if (l == 0)
            {
                tex.blockStart = batch.blocks.size();
                tex.blockCount0 = size_t(level.w / 4) * (level.h / 4);
            }
            for (int by = 0; by < level.h / 4; ++by)
                for (int bx = 0; bx < level.w / 4; ++bx)
                {
                    std::array<uint8_t, 64> block;
                    for (int ty = 0; ty < 4; ++ty)
                        std::memcpy(block.data() + ty * 16, level.px.data() + (size_t(by * 4 + ty) * level.w + bx * 4) * 4, 16);
                    batch.blocks.push_back(block);
                    batch.owners.push_back(t);
                }
        }
    }
    const size_t totalBlocks = batches[0].blocks.size() + batches[1].blocks.size();
    std::atomic<size_t> blocksDone{0};
    for (Batch &batch : batches)
    {
        const size_t n = batch.blocks.size();
        batch.encoded.resize(n);
        batch.cerr.resize(n);
        batch.aerr.assign(n, 0.0f);
        constexpr size_t kChunk = 4096;
        parallelFor((n + kChunk - 1) / kChunk, [&](size_t chunk)
        {
            if (stopped())
                return;
            const size_t end = std::min(n, (chunk + 1) * kChunk);
            for (size_t b = chunk * kChunk; b < end; ++b)
            {
                const auto &block = batch.blocks[b];
                float x[16][3], a[16], m[16];
                for (int i = 0; i < 16; ++i)
                {
                    for (int c = 0; c < 3; ++c)
                        x[i][c] = float(block[i * 4 + c]);
                    a[i] = float(block[i * 4 + 3]);
                }
                if (batch.dxt5)
                {
                    float seen[16];
                    for (int i = 0; i < 16; ++i)
                    {
                        m[i] = 1.0f;
                        seen[i] = a[i] / 255.0f;
                    }
                    batch.aerr[b] = encodeAlpha(a, batch.encoded[b].data());
                    batch.cerr[b] = encodeColour(x, m, false, seen, batch.encoded[b].data() + 8);
                }
                else
                {
                    for (int i = 0; i < 16; ++i)
                        m[i] = a[i] > 0.0f ? 1.0f : 0.0f;
                    batch.cerr[b] = encodeColour(x, m, true, nullptr, batch.encoded[b].data());
                }
            }
            const size_t done = blocksDone += end - chunk * kChunk;
            std::lock_guard<std::mutex> lock(progressLock);
            report(45 + int(50 * done / std::max<size_t>(1, totalBlocks)));
        });
    }
    if (stopped())
    {
        error = "stopped";
        return false;
    }
    for (Batch &batch : batches)
    {
        const size_t blockBytes = batch.dxt5 ? 16 : 8;
        size_t b = 0;
        while (b < batch.blocks.size())
        {
            Texture &tex = textures[batch.owners[b]];
            const Level &level0 = tex.chain[0];
            double seen = 0.0;
            if (batch.dxt5)
            {
                uint32_t sum = 0;
                for (size_t j = 0; j < size_t(level0.w) * level0.h; ++j)
                    sum += level0.px[j * 4 + 3];
                seen = sum / 255.0;
            }
            else
            {
                for (size_t j = 0; j < size_t(level0.w) * level0.h; ++j)
                    seen += level0.px[j * 4 + 3] > 0 ? 1.0 : 0.0;
            }
            const float cerr = 0.0f + pairwiseSum(batch.cerr.data() + tex.blockStart, tex.blockCount0);
            const float aerr = 0.0f + pairwiseSum(batch.aerr.data() + tex.blockStart, tex.blockCount0);
            const double colourPsnr = psnr(double(cerr / g_cwSum), seen);
            const double alphaPsnr = psnr(double(aerr), double(tex.blockCount0 * 16));
            const double score = std::min(colourPsnr, alphaPsnr);
            const bool small = level0.w * level0.h <= SMALL_MAX_TEXELS;
            size_t end = b;
            while (end < batch.blocks.size() && batch.owners[end] == batch.owners[b])
                ++end;
            if (score < FALLBACK_PSNR || (small && score < SMALL_FALLBACK_PSNR))
                chooseUncompressed(tex, small);
            else
            {
                tex.data.resize((end - b) * blockBytes);
                for (size_t k = b; k < end; ++k)
                    std::memcpy(tex.data.data() + (k - b) * blockBytes, batch.encoded[k].data(), blockBytes);
            }
            b = end;
        }
    }

    // 7. The pack: index sorted by key, data in MISC.PAK order.
    const uint32_t count = uint32_t(textures.size());
    const uint32_t headerSize = 32, entrySize = 24;
    const uint32_t dataOffset = (headerSize + entrySize * count + kAlign - 1) / kAlign * kAlign;
    std::vector<uint8_t> file(dataOffset, 0);
    std::vector<std::pair<uint64_t, std::array<uint8_t, 24>>> index;
    uint64_t pos = dataOffset;
    auto put32 = [](uint8_t *p, uint32_t v) { for (int i = 0; i < 4; ++i) p[i] = uint8_t(v >> (8 * i)); };
    for (const Texture &tex : textures)
    {
        pos = (pos + kAlign - 1) / kAlign * kAlign;
        file.resize(size_t(pos), 0);
        std::array<uint8_t, 24> entry{};
        for (int i = 0; i < 8; ++i)
            entry[i] = uint8_t(tex.key >> (8 * i));
        put32(entry.data() + 8, uint32_t(pos));
        put32(entry.data() + 12, uint32_t(tex.data.size()));
        entry[16] = uint8_t(tex.chain[0].w);
        entry[17] = uint8_t(tex.chain[0].w >> 8);
        entry[18] = uint8_t(tex.chain[0].h);
        entry[19] = uint8_t(tex.chain[0].h >> 8);
        entry[20] = tex.format;
        entry[21] = uint8_t(tex.levels);
        entry[22] = tex.flags;
        entry[23] = 0;
        index.push_back({tex.key, entry});
        file.insert(file.end(), tex.data.begin(), tex.data.end());
        pos = file.size();
        stats.perFormat[tex.format]++;
    }
    std::sort(index.begin(), index.end(), [](const auto &a, const auto &b) { return a.first < b.first; });
    std::memcpy(file.data(), "XTP1", 4);
    put32(file.data() + 4, 1);
    put32(file.data() + 8, 1);
    put32(file.data() + 12, count);
    put32(file.data() + 16, headerSize);
    put32(file.data() + 20, dataOffset);
    for (size_t i = 0; i < index.size(); ++i)
        std::memcpy(file.data() + headerSize + i * entrySize, index[i].second.data(), entrySize);

    std::ofstream out(output, std::ios::binary | std::ios::trunc);
    out.write(reinterpret_cast<const char *>(file.data()), std::streamsize(file.size()));
    out.close();
    if (!out)
    {
        error = "could not write the texture pack (disk full?)";
        return false;
    }
    stats.entries = count;
    stats.bytes = file.size();
    report(100);
    return true;
}
}

#endif

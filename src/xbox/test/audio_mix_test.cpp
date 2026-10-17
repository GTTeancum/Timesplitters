// Host test of B-AUDIO (src/xbox/PUSH-BC-PLAN.md section 5.5):
//  1. the SPU2's voice-major mix (Spu2::mix, TS_SPU2_VOICE_MAJOR) against the
//     frame-major reference (Spu2::mixReference) over random scripts: random
//     ADPCM in sound RAM (loop flags, shifts, filters), random voice
//     registers (volume sweeps, pitches, ADSR), key on/off, VMIX masks, IRQ
//     addresses and mix lengths; the output and the state the registers read
//     back (envelopes, volumes, ENDX, NAX, IRQ) must agree to the bit;
//  2. the streamed music player (TS_MUSIC_STREAMED with its loader thread
//     and TS_MUSIC_SELFCHECK) against a whole-file decode of the same track
//     (the player's decode before the streamed path), interleaves under and
//     over 64 bytes, tracks ending in a partial chunk pair (the channels
//     then wrap at different blocks), rewinds, pauses and volumes.
//
//   make host-tests (src/xbox/mk/b_audio.mk), or by hand:
//   clang++ -std=c++20 -O2 -DPLATFORM_XBOX=1 -I source/PS2Recomp/ps2xRuntime/include \
//       -DTS_MUSIC_SELFCHECK=1 source/PS2Recomp/ps2xRuntime/src/lib/ps2_music.cpp src/xbox/test/audio_mix_test.cpp -o audio_mix_test && ./audio_mix_test [scripts]
// (ps2_music.cpp is built alongside, with -DTS_MUSIC_SELFCHECK=1
// -DTS_MUSIC_SELFCHECK_EVERY=7: src/xbox/mk/b_audio.mk.)
#include "../../../source/PS2Recomp/ps2xRuntime/src/lib/ps2_spu2.cpp"
#include "runtime/ps2_music.h"
#include <windows.h>

#include <cstdio>
#include <cstdlib>
#include <random>
#include <string>
#include <vector>

#if defined(PLATFORM_XBOX)
// The Xbox's thread start (src/xbox/xbox_stacks.cpp), for the music loader.
void *xboxThreadStart(uint32_t stackBytes, void (*entry)(void *), void *arg)
{
    struct Start
    {
        void (*entry)(void *);
        void *arg;
    };
    auto run = [](LPVOID p) -> DWORD {
        const Start s = *static_cast<Start *>(p);
        delete static_cast<Start *>(p);
        s.entry(s.arg);
        return 0;
    };
    return CreateThread(nullptr, stackBytes, run, new Start{entry, arg}, 0, nullptr);
}
#endif

namespace
{
    int failures = 0;
    void fail(const char *what, unsigned script, unsigned step)
    {
        if (++failures <= 20)
            std::printf("FAIL %s: script %u step %u\n", what, script, step);
    }

    uint32_t entryOf(unsigned id, unsigned voice, unsigned core) { return (id << 8) | (voice << 1) | core; }

    // ---------------------------------------------------------------- SPU2
    void randomRam(std::vector<uint8_t> &ram, std::mt19937 &rng)
    {
        for (size_t block = 0; block < ram.size() / 16u; ++block)
        {
            uint8_t *b = ram.data() + block * 16u;
            b[0] = static_cast<uint8_t>((rng() % 5u) << 4 | (rng() % 14u)); // filter 0-4, shift 0-13
            const uint32_t r = rng() % 64u;
            b[1] = r < 2u ? 1u : r < 4u ? 3u : r < 6u ? 4u : r < 7u ? 7u : 0u; // end / loop end / loop start
            for (unsigned i = 2; i < 16; ++i)
                b[i] = static_cast<uint8_t>(rng());
        }
    }

    uint16_t randomVolume(std::mt19937 &rng)
    {
        if (rng() % 3u == 0u)
            return static_cast<uint16_t>(0x8000u | (rng() & 0x707Fu)); // a sweep: mode bits and rate
        return static_cast<uint16_t>(rng() & 0x7FFFu);
    }

    bool sameReadback(Spu2 &a, Spu2 &b)
    {
        for (unsigned core = 0; core < 2; ++core)
        {
            for (unsigned v = 0; v < 24; ++v)
                for (unsigned id : {5u, 6u, 7u})
                    if (a.getParam(entryOf(id, v, core)) != b.getParam(entryOf(id, v, core)))
                        return false;
            for (unsigned id : {0x11u, 0x12u})
                if (a.getParam(entryOf(id, 0, core)) != b.getParam(entryOf(id, 0, core)))
                    return false;
            if (a.getSwitch(entryOf(0x17, 0, core)) != b.getSwitch(entryOf(0x17, 0, core)))
                return false;
            for (unsigned v = 0; v < 24; ++v)
                if (a.getAddr(entryOf(0x22, v, core)) != b.getAddr(entryOf(0x22, v, core)))
                    return false;
        }
        uint16_t ia = 0, ib = 0;
        a.readRegister(0x7C2u, ia);
        b.readRegister(0x7C2u, ib);
        return ia == ib && a.takeIrq() == b.takeIrq();
    }

    void spu2Scripts(unsigned scripts)
    {
        constexpr uint32_t kRam = 2u * 1024u * 1024u;
        std::vector<uint8_t> ram(kRam);
        std::vector<int16_t> outA, outB;
        std::mt19937 rng(0x5EED5u);
        unsigned long long frames = 0, audible = 0;
        for (unsigned script = 0; script < scripts && failures < 20; ++script)
        {
            if (script % 500u == 0u)
                randomRam(ram, rng); // (both mixes read the same RAM; a mix writes none)
            Spu2 a(ram.data()), b(ram.data());
            auto both = [&](auto &&command) {
                command(a);
                command(b);
            };
            // Audible from the start: both cores' master volumes up.
            both([](Spu2 &s) {
                for (unsigned core = 0; core < 2; ++core)
                {
                    s.setParam(entryOf(0x09, 0, core), 0x3FFFu);
                    s.setParam(entryOf(0x0A, 0, core), 0x3FFFu);
                }
            });
            const unsigned steps = 2u + rng() % 8u;
            for (unsigned step = 0; step < steps; ++step)
            {
                const unsigned commands = rng() % 12u;
                for (unsigned c = 0; c < commands; ++c)
                {
                    const unsigned core = rng() & 1u, voice = rng() % 24u;
                    const uint32_t blockBase = (rng() % (kRam / 16u)) * 16u;
                    switch (rng() % 10u)
                    {
                    case 0: { const uint16_t l = randomVolume(rng), r = randomVolume(rng);
                              both([&](Spu2 &s) { s.setParam(entryOf(0, voice, core), l); s.setParam(entryOf(1, voice, core), r); }); break; }
                    case 1: { const uint16_t p = static_cast<uint16_t>(rng() % 0x4400u);
                              both([&](Spu2 &s) { s.setParam(entryOf(2, voice, core), p); }); break; }
                    case 2: { const uint16_t a1 = static_cast<uint16_t>(rng()), a2 = static_cast<uint16_t>(rng());
                              both([&](Spu2 &s) { s.setParam(entryOf(3, voice, core), a1); s.setParam(entryOf(4, voice, core), a2); }); break; }
                    case 3: both([&](Spu2 &s) { s.setAddr(entryOf(0x20, voice, core), blockBase); }); break;
                    case 4: both([&](Spu2 &s) { s.setAddr(entryOf(0x21, voice, core), blockBase); }); break;
                    case 5: { const uint32_t mask = rng() & rng() & 0xFFFFFFu;
                              both([&](Spu2 &s) { s.setSwitch(entryOf(0x15, 0, core), mask); }); break; }
                    case 6: { const uint32_t mask = rng() & 0xFFFFFFu;
                              both([&](Spu2 &s) { s.setSwitch(entryOf(0x16, 0, core), mask); }); break; }
                    case 7: { const uint32_t l = rng() & 0xFFFFFFu, r = rng() & 0xFFFFFFu;
                              both([&](Spu2 &s) { s.setSwitch(entryOf(0x18, 0, core), l); s.setSwitch(entryOf(0x1A, 0, core), r); }); break; }
                    case 8: { const uint16_t l = randomVolume(rng), r = randomVolume(rng);
                              both([&](Spu2 &s) { s.setParam(entryOf(0x09, 0, core), l); s.setParam(entryOf(0x0A, 0, core), r); }); break; }
                    default: { const uint32_t irqa = blockBase / 2u; const uint16_t attr = (rng() & 1u) ? 0x40u : 0u;
                               both([&](Spu2 &s) {
                                   s.writeRegister(core * 0x400u + 0x19Cu, static_cast<uint16_t>(irqa >> 16));
                                   s.writeRegister(core * 0x400u + 0x19Eu, static_cast<uint16_t>(irqa));
                                   s.writeRegister(core * 0x400u + 0x19Au, attr); }); break; }
                    }
                }
                const unsigned n = 1u + rng() % ((rng() % 8u) == 0u ? 3000u : 600u);
                outA.assign(n * 2u, 0x1234);
                outB.assign(n * 2u, 0x4321);
                a.mixReference(outA.data(), n);
                b.mix(outB.data(), n);
                frames += n;
                for (int16_t s : outA)
                    audible += s != 0 ? 1u : 0u;
                if (outA != outB)
                    fail("spu2 output", script, step);
                else if (!sameReadback(a, b))
                    fail("spu2 state", script, step);
            }
        }
        std::printf("[audio_mix_test] spu2: %u scripts, %llu frames (%llu samples not silent), voice-major against "
                    "frame-major\n",
                    scripts, frames, audible);
        if (audible == 0u)
            fail("spu2 scripts made no sound", scripts, 0);
    }

    // ---------------------------------------------------------------- music
    constexpr int32_t kDriverEnvelope = 0x3FFF; // (as ps2_music.cpp)
    uint32_t pitchFor(uint32_t sampleRate)
    {
        return std::min<uint32_t>(static_cast<uint32_t>((static_cast<uint64_t>(sampleRate) << 12) / 48000u), 0x3FFFu);
    }

    // The player's decode as it was before the streamed path: the whole file
    // in memory.
    struct ReferenceMusic
    {
        struct Channel
        {
            uint32_t block = 0;
            int32_t prev1 = 0, prev2 = 0;
            std::array<int16_t, 31> samples{};
            unsigned index = 28;
        };
        std::vector<uint8_t> data;
        uint32_t interleave = 0, pitch = 0, counter = 0;
        Channel ch[2];
        int32_t volumeL = 0x3FFF, volumeR = 0x3FFF;

        void rewind()
        {
            ch[0] = ch[1] = Channel{};
            counter = 0;
        }
        void decode(Channel &c, unsigned channel)
        {
            std::copy(c.samples.end() - 3, c.samples.end(), c.samples.begin());
            const uint32_t bpc = interleave / 16u;
            uint64_t offset = static_cast<uint64_t>(c.block / bpc) * 2u * interleave + channel * interleave + (c.block % bpc) * 16u;
            if (offset + 16u > data.size())
            {
                c.block = 0;
                c.prev1 = c.prev2 = 0;
                offset = channel * interleave;
            }
            const uint8_t *block = data.data() + offset;
            int shift = block[0] & 0x0F;
            if (shift > 12)
                shift = 9;
            const unsigned filter = std::min<unsigned>((block[0] >> 4) & 7u, 4u);
            for (unsigned i = 0; i < 28; ++i)
            {
                const uint8_t byte = block[2 + i / 2];
                const int32_t nibble = (i & 1u) ? (byte >> 4) : (byte & 0x0F);
                int32_t sample = static_cast<int16_t>(static_cast<uint16_t>(nibble << 12)) >> shift;
                sample += (c.prev1 * kFilter0[filter] + c.prev2 * kFilter1[filter] + 32) >> 6;
                sample = std::clamp(sample, -32768, 32767);
                c.prev2 = c.prev1;
                c.prev1 = sample;
                c.samples[3 + i] = static_cast<int16_t>(sample);
            }
            ++c.block;
        }
        void mix(int16_t *out, unsigned frames)
        {
            for (unsigned f = 0; f < frames; ++f)
            {
                const uint32_t phase = (counter >> 4) & 0xFFu;
                for (unsigned c = 0; c < 2; ++c)
                {
                    if (ch[c].index >= 28u)
                    {
                        decode(ch[c], c);
                        ch[c].index -= 28u;
                    }
                    const int32_t sample = ps2_spu::gaussInterpolate(&ch[c].samples[ch[c].index], phase);
                    const int32_t voice = (sample * kDriverEnvelope) >> 15;
                    const int32_t scaled = (voice * ((c == 0 ? volumeL : volumeR) << 1)) >> 15;
                    out[f * 2 + c] = static_cast<int16_t>(std::clamp(out[f * 2 + c] + scaled, -32768, 32767));
                }
                counter += pitch;
                const unsigned advance = counter >> 12;
                counter &= 0xFFFu;
                ch[0].index += advance;
                ch[1].index += advance;
            }
        }
    };

    void musicTracks()
    {
        std::mt19937 rng(0xC0FFEEu);
        const std::string path = "audio_mix_test_track.bin";
        const uint32_t interleaves[] = {0x30u, 0x40u, 0x50u, 0x800u, 0x8000u};
        unsigned tracks = 0;
        for (uint32_t interleave : interleaves)
        {
            for (int variant = 0; variant < 3; ++variant)
            {
                // Whole pairs, then a partial pair: the right chunk cut, or
                // the left one.
                const uint32_t pairs = 2u + rng() % 4u;
                uint64_t size = static_cast<uint64_t>(pairs) * 2u * interleave;
                if (variant == 1)
                    size += interleave + 16u * (1u + rng() % (interleave / 16u - 1u));
                else if (variant == 2)
                    size += 16u * (1u + rng() % (interleave / 16u));
                std::vector<uint8_t> data(static_cast<size_t>(size));
                for (size_t i = 0; i < data.size(); ++i)
                    data[i] = static_cast<uint8_t>(rng());
                for (size_t i = 0; i + 16u <= data.size(); i += 16u)
                    data[i] = static_cast<uint8_t>((rng() % 5u) << 4 | (rng() % 14u));
                if (std::FILE *f = std::fopen(path.c_str(), "wb"))
                {
                    std::fwrite(data.data(), 1u, data.size(), f);
                    std::fclose(f);
                }
                ReferenceMusic ref;
                ref.data = data;
                ref.interleave = std::max<uint32_t>(interleave & ~15u, 16u);
                const uint32_t rate = (rng() & 1u) ? 44100u : 22050u + rng() % 26000u;
                ref.pitch = pitchFor(rate);
                Ps2Music music;
                if (!music.open(path, interleave, rate))
                {
                    fail("music open", interleave, variant);
                    continue;
                }
                music.play();
                ref.rewind();
                // Enough to wrap the track a few times, in uneven pieces.
                const uint64_t total = size * 7u / 16u * 28u * 3u / 2u / 2u + 4096u;
                std::vector<int16_t> a, b;
                uint64_t done = 0;
                unsigned step = 0;
                while (done < total && failures < 20)
                {
                    const unsigned n = 1u + rng() % 2000u;
                    a.assign(n * 2u, 0);
                    for (unsigned i = 0; i < n * 2u; ++i)
                        a[i] = static_cast<int16_t>(rng());
                    b = a;
                    if (rng() % 16u == 0u)
                    {
                        const uint32_t l = rng() % 0x4000u, r = rng() % 0x4000u;
                        music.setVolume(l, r);
                        ref.volumeL = static_cast<int32_t>(l);
                        ref.volumeR = static_cast<int32_t>(r);
                    }
                    if (rng() % 40u == 0u)
                    {
                        music.play(); // from the start
                        ref.rewind();
                    }
                    music.mix(a.data(), n);
                    ref.mix(b.data(), n);
                    if (a != b)
                        fail("music output", interleave, step);
                    done += n;
                    ++step;
                }
                music.close();
                ++tracks;
            }
        }
        std::remove(path.c_str());
        std::printf("[audio_mix_test] music: %u tracks, ranges read ahead %u, by the mix %u, blocks checked %u, "
                    "differing %u\n",
                    tracks, g_musicLoaderReads, g_musicSyncReads, g_musicChecks, g_musicDiffs);
        if (g_musicDiffs != 0u)
            fail("music self-check", 0, 0);
    }
}

int main(int argc, char **argv)
{
    const unsigned scripts = argc > 1 ? static_cast<unsigned>(std::strtoul(argv[1], nullptr, 10)) : 10000u;
    spu2Scripts(scripts);
    musicTracks();
    std::printf("[audio_mix_test] %s (%d failures)\n", failures ? "FAIL" : "PASS", failures);
    return failures ? 1 : 0;
}

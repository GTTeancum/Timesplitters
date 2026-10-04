#include "runtime/ps2_spu2.h"
#include "runtime/ps2_spu_gauss.h"

#include <algorithm>
#include <bit>
#include <cstdlib>
#include <cstring>
#include <cstdio>

#if defined(PLATFORM_XBOX)
unsigned long long g_spu2VoiceSamples = 0;
#endif

namespace
{
    constexpr uint32_t kRamBytes = 2u * 1024u * 1024u;
    constexpr uint32_t kRamMask = kRamBytes - 1u;
    constexpr int32_t kFilter0[5] = {0, 60, 115, 98, 122};
    constexpr int32_t kFilter1[5] = {0, 0, -52, -55, -60};

    int16_t clamp16(int32_t value)
    {
        return static_cast<int16_t>(std::clamp(value, -32768, 32767));
    }

    // libsd entry encoding
    unsigned coreOf(uint32_t entry) { return entry & 1u; }
    unsigned voiceOf(uint32_t entry) { return (entry >> 1) & 0x1Fu; }
    unsigned idOf(uint32_t entry) { return (entry >> 8) & 0xFFu; }

    // Envelope step as on the PS1/PS2 SPU, per 7-bit rate (shift << 2 |
    // step): the level moves by `step` each time the counter, advanced by
    // `increment` per sample, reaches 0x8000. Worked out once here because
    // every playing voice ticks an envelope 48,000 times a second.
    struct EnvelopeRate
    {
        int32_t step;
        uint32_t increment;
    };
    // kExponentialHigh: exponential increase from level 0x6000 up.
    enum EnvelopeKind { kIncrease, kDecrease, kExponentialHigh, kEnvelopeKinds };
    struct EnvelopeRates
    {
        EnvelopeRate rates[kEnvelopeKinds][128];
    };

    constexpr EnvelopeRates makeEnvelopeRates()
    {
        EnvelopeRates table{};
        for (int rate = 0; rate < 128; ++rate)
        {
            const int shift = rate >> 2;
            for (int kind = 0; kind < kEnvelopeKinds; ++kind)
            {
                int32_t step = kind == kDecrease ? -8 + (rate & 3) : 7 - (rate & 3);
                uint32_t increment = 0x8000u;
                if (shift > 11)
                    increment = 0x8000u >> (shift - 11);
                else
                    step *= 1 << (11 - shift);
                // Exponential increase slows down above level 0x6000.
                if (kind == kExponentialHigh)
                {
                    if (rate < 40)
                        step >>= 2;
                    else if (rate >= 44)
                        increment >>= 2;
                    else
                    {
                        step >>= 1;
                        increment >>= 1;
                    }
                }
                table.rates[kind][rate] = {step, increment};
            }
        }
        return table;
    }
    constexpr EnvelopeRates kEnvelopeRates = makeEnvelopeRates();
}

// Exponential decrease scales the step by the level; exponential increase
// is slower above 0x6000.
bool Spu2::Envelope::tick(uint32_t rate, bool decreasing, bool exponential)
{
    const EnvelopeKind kind = decreasing ? kDecrease : (exponential && level >= 0x6000) ? kExponentialHigh : kIncrease;
    const EnvelopeRate &r = kEnvelopeRates.rates[kind][rate & 0x7Fu];
    counter += r.increment;
    if ((counter & 0x8000u) == 0u)
        return false;
    counter = 0;
    int32_t step = r.step;
    if (decreasing && exponential)
        step = (step * level) >> 15;
    level = std::clamp(level + step, 0, 0x7FFF);
    return true;
}

void Spu2::Volume::set(uint16_t value)
{
    reg = value;
    if ((value & 0x8000u) == 0u)
        current = static_cast<int16_t>(value << 1);
    else
        sweep.level = std::abs(current) > 0x7FFF ? 0x7FFF : std::abs(current);
}

void Spu2::Volume::tick()
{
    if ((reg & 0x8000u) == 0u)
        return;
    sweep.tick(reg & 0x7Fu, (reg & 0x2000u) != 0u, (reg & 0x4000u) != 0u);
    current = (reg & 0x1000u) ? -sweep.level : sweep.level;
}

// Decodes the block at NAX after the last three samples of the previous one.
void Spu2::decodeBlock(Voice &v)
{
    std::copy(v.samples.end() - 3, v.samples.end(), v.samples.begin());
    const uint32_t address = v.nax & kRamMask & ~15u;
    const uint8_t *block = m_ram + address;
    const uint8_t header = block[0];
    int shift = header & 0x0F;
    if (shift > 12)
        shift = 9;
    const unsigned filter = std::min<unsigned>((header >> 4) & 7u, 4u);
    v.blockFlags = block[1];
    v.blockAddr = address;
    checkIrq(address, 16u);
    if ((v.blockFlags & 4u) && !v.customLoop)
        v.lsa = address;
    for (unsigned i = 0; i < 28; ++i)
    {
        const uint8_t byte = block[2 + i / 2];
        const int32_t nibble = (i & 1u) ? (byte >> 4) : (byte & 0x0F);
        int32_t sample = static_cast<int16_t>(static_cast<uint16_t>(nibble << 12)) >> shift;
        sample += (v.prev1 * kFilter0[filter] + v.prev2 * kFilter1[filter] + 32) >> 6;
        const int16_t s = clamp16(sample);
        v.prev2 = v.prev1;
        v.prev1 = s;
        v.samples[3 + i] = s;
    }
}

static bool spu2Trace()
{
    static const bool on = std::getenv("TS_SPU2_TRACE") != nullptr;
    return on;
}

void Spu2::keyOn(Core &core, unsigned voice)
{
    Voice &v = core.voices[voice];
    if (spu2Trace())
        std::fprintf(stderr, "[TS:spu2] kon core=%d voice=%u ssa=%06x lsa=%06x pitch=%04x adsr=%04x/%04x vol=%04x/%04x\n",
                     &core == &m_cores[1] ? 1 : 0, voice, v.ssa, v.lsa, v.pitch, v.adsr1, v.adsr2, v.volL.reg, v.volR.reg);
    v.nax = v.ssa;
    v.customLoop = false;
    v.phase = Phase::Attack;
    v.env.level = 0;
    v.env.counter = 0;
    v.counter = 0;
    v.prev1 = v.prev2 = 0;
    // A new note interpolates from silence, not from the voice's last sound.
    v.samples.fill(0);
    decodeBlock(v);
    v.index = 0;
    core.endx &= ~(1u << voice);
    core.playing |= 1u << voice;
}

// Moves past the end of the current ADPCM block: follows its loop flags and
// decodes the next block.
void Spu2::nextBlock(Core &core, unsigned index, Voice &v)
{
    v.index -= 28;
    if (v.blockFlags & 1u)
    {
        core.endx |= 1u << index;
        if (v.blockFlags & 2u)
            v.nax = v.lsa;
        else
        {
            v.phase = Phase::Off;
            v.env.level = 0;
            v.nax = v.lsa;
        }
    }
    else
        v.nax = (v.blockAddr + 16u) & kRamMask;
    decodeBlock(v);
}

int16_t Spu2::tickVoice(Core &core, unsigned index, Voice &v)
{
    if (v.phase == Phase::Off)
        return 0;

    // samples[index + 3] is the current sample; the three before it are its
    // history. Bits 4..11 of the pitch counter pick the Gaussian phase.
    const int32_t sample = ps2_spu::gaussInterpolate(&v.samples[v.index], (v.counter >> 4) & 0xFFu);

    switch (v.phase)
    {
    case Phase::Attack:
        v.env.tick((v.adsr1 >> 8) & 0x7Fu, false, (v.adsr1 & 0x8000u) != 0u);
        if (v.env.level >= 0x7FFF)
            v.phase = Phase::Decay;
        break;
    case Phase::Decay:
        v.env.tick(((v.adsr1 >> 4) & 0x0Fu) << 2, true, true);
        if (v.env.level <= std::min<int32_t>(((v.adsr1 & 0x0Fu) + 1) * 0x800, 0x7FFF))
            v.phase = Phase::Sustain;
        break;
    case Phase::Sustain:
        v.env.tick((v.adsr2 >> 6) & 0x7Fu, (v.adsr2 & 0x4000u) != 0u, (v.adsr2 & 0x8000u) != 0u);
        break;
    case Phase::Release:
        v.env.tick((v.adsr2 & 0x1Fu) << 2, true, (v.adsr2 & 0x20u) != 0u);
        if (v.env.level == 0)
            v.phase = Phase::Off;
        break;
    default:
        break;
    }

    // This tick's output uses this tick's level, even when the voice then
    // reaches its end block and stops.
    const int16_t out = static_cast<int16_t>((sample * v.env.level) >> 15);

    // At most 4 samples per output sample (pitch below 0x4000), so the
    // position crosses at most one block boundary.
    v.counter += std::min<uint32_t>(v.pitch, 0x3FFFu);
    v.index += v.counter >> 12;
    v.counter &= 0xFFFu;
    if (v.index >= 28u)
        nextBlock(core, index, v);
    return out;
}

void Spu2::mix(int16_t *out, unsigned frames)
{
    std::lock_guard<std::mutex> lock(m_mutex);
#if defined(PLATFORM_XBOX)
    unsigned voiceSamples = 0;
#endif
    for (unsigned f = 0; f < frames; ++f)
    {
        int32_t coreOutL = 0, coreOutR = 0;
        for (unsigned c = 0; c < 2; ++c)
        {
            Core &core = m_cores[c];
            int32_t dryL = 0, dryR = 0;
            // Only the playing voices (a handful of the 48 most of the time),
            // lowest first.
            for (uint32_t playing = core.playing; playing != 0u; playing &= playing - 1u)
            {
                const unsigned i = static_cast<unsigned>(std::countr_zero(playing));
                Voice &v = core.voices[i];
#if defined(PLATFORM_XBOX)
                ++voiceSamples;
#endif
                v.volL.tick();
                v.volR.tick();
                const int32_t s = tickVoice(core, i, v);
                if (v.phase == Phase::Off)
                    core.playing &= ~(1u << i);
                if (core.vmixL & (1u << i))
                    dryL += (s * v.volL.current) >> 15;
                if (core.vmixR & (1u << i))
                    dryR += (s * v.volR.current) >> 15;
            }
            core.mvolL.tick();
            core.mvolR.tick();
            // Core 0's output feeds core 1's input.
            const int32_t inL = clamp16(dryL + coreOutL), inR = clamp16(dryR + coreOutR);
            coreOutL = (inL * core.mvolL.current) >> 15;
            coreOutR = (inR * core.mvolR.current) >> 15;
        }
        out[f * 2] = clamp16(coreOutL);
        out[f * 2 + 1] = clamp16(coreOutR);
    }
#if defined(PLATFORM_XBOX)
    g_spu2VoiceSamples += voiceSamples;
#endif
}

void Spu2::setParam(uint32_t entry, uint32_t value)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    Core &core = m_cores[coreOf(entry)];
    const uint16_t v16 = static_cast<uint16_t>(value);
    const unsigned id = idOf(entry);
    if (id < 8u)
    {
        Voice &v = core.voices[std::min(voiceOf(entry), 23u)];
        switch (id)
        {
        case 0: v.volL.set(v16); break;
        case 1: v.volR.set(v16); break;
        case 2: v.pitch = v16; break;
        case 3: v.adsr1 = v16; break;
        case 4: v.adsr2 = v16; break;
        case 5: v.env.level = v16 & 0x7FFF; break;
        default: break;
        }
        return;
    }
    switch (id)
    {
    case 0x08: core.mmix = v16; break;
    case 0x09: core.mvolL.set(v16); break;
    case 0x0A: core.mvolR.set(v16); break;
    case 0x0B: core.evolL = v16; break;
    case 0x0C: core.evolR = v16; break;
    case 0x0D: core.avolL = v16; break;
    case 0x0E: core.avolR = v16; break;
    case 0x0F: core.bvolL = v16; break;
    case 0x10: core.bvolR = v16; break;
    default: break;
    }
}

uint32_t Spu2::getParam(uint32_t entry)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    Core &core = m_cores[coreOf(entry)];
    const unsigned id = idOf(entry);
    if (id < 8u)
    {
        const Voice &v = core.voices[std::min(voiceOf(entry), 23u)];
        switch (id)
        {
        case 0: return v.volL.reg;
        case 1: return v.volR.reg;
        case 2: return v.pitch;
        case 3: return v.adsr1;
        case 4: return v.adsr2;
        case 5: return static_cast<uint32_t>(v.env.level);
        case 6: return static_cast<uint16_t>(v.volL.current);
        case 7: return static_cast<uint16_t>(v.volR.current);
        default: return 0;
        }
    }
    switch (id)
    {
    case 0x08: return core.mmix;
    case 0x09: return core.mvolL.reg;
    case 0x0A: return core.mvolR.reg;
    case 0x0B: return core.evolL;
    case 0x0C: return core.evolR;
    case 0x0D: return core.avolL;
    case 0x0E: return core.avolR;
    case 0x0F: return core.bvolL;
    case 0x10: return core.bvolR;
    case 0x11: return static_cast<uint16_t>(core.mvolL.current);
    case 0x12: return static_cast<uint16_t>(core.mvolR.current);
    default: return 0;
    }
}

void Spu2::setSwitch(uint32_t entry, uint32_t value)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    Core &core = m_cores[coreOf(entry)];
    value &= 0xFFFFFFu;
    switch (idOf(entry))
    {
    case 0x13: core.pmon = value; break;
    case 0x14: core.non = value; break;
    case 0x15:
        for (unsigned i = 0; i < 24; ++i)
            if (value & (1u << i))
                keyOn(core, i);
        break;
    case 0x16:
        for (unsigned i = 0; i < 24; ++i)
            if ((value & (1u << i)) && core.voices[i].phase != Phase::Off)
                core.voices[i].phase = Phase::Release;
        break;
    case 0x17: core.endx = value; break;
    case 0x18: core.vmixL = value; break;
    case 0x19: core.vmixEL = value; break;
    case 0x1A: core.vmixR = value; break;
    case 0x1B: core.vmixER = value; break;
    default: break;
    }
}

uint32_t Spu2::getSwitch(uint32_t entry)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    const Core &core = m_cores[coreOf(entry)];
    switch (idOf(entry))
    {
    case 0x13: return core.pmon;
    case 0x14: return core.non;
    case 0x17: return core.endx;
    case 0x18: return core.vmixL;
    case 0x19: return core.vmixEL;
    case 0x1A: return core.vmixR;
    case 0x1B: return core.vmixER;
    default: return 0;
    }
}

void Spu2::setAddr(uint32_t entry, uint32_t value)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    Core &core = m_cores[coreOf(entry)];
    value &= kRamMask;
    Voice &v = core.voices[std::min(voiceOf(entry), 23u)];
    switch (idOf(entry))
    {
    case 0x1C: core.esa = value; break;
    case 0x1D: core.eea = value; break;
    case 0x1E: core.tsa = value; break;
    case 0x1F: core.irqa = value; break;
    case 0x20: v.ssa = value & ~15u; break;
    case 0x21: v.lsa = value & ~15u; v.customLoop = true; break;
    case 0x22: v.nax = value; break;
    default: break;
    }
}

uint32_t Spu2::getAddr(uint32_t entry)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    const Core &core = m_cores[coreOf(entry)];
    const Voice &v = core.voices[std::min(voiceOf(entry), 23u)];
    switch (idOf(entry))
    {
    case 0x1C: return core.esa;
    case 0x1D: return core.eea;
    case 0x1E: return core.tsa;
    case 0x1F: return core.irqa;
    case 0x20: return v.ssa;
    case 0x21: return v.lsa;
    case 0x22: return v.blockAddr + 2u + (v.index / 2u);
    default: return 0;
    }
}

void Spu2::setCoreAttr(uint32_t entry, uint32_t value)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    Core &core = m_cores[coreOf(entry)];
    const unsigned bit = (entry >> 1) & 0x7u;
    if (value)
        core.attr |= 1u << bit;
    else
        core.attr &= ~(1u << bit);
}

void Spu2::checkIrq(uint32_t byteAddress, uint32_t bytes)
{
    for (unsigned c = 0; c < 2; ++c)
    {
        const Core &core = m_cores[c];
        if ((core.attrReg & 0x40u) == 0u)
            continue;
        const uint32_t irq = (core.irqaWords * 2u) & kRamMask;
        if (irq - byteAddress < bytes)
        {
            m_irqInfo |= static_cast<uint16_t>(4u << c);
            m_irqPending = true;
            if (spu2Trace())
                std::fprintf(stderr, "[TS:spu2] irq core=%u at=%06x\n", c, irq);
        }
    }
}

bool Spu2::takeIrq()
{
    std::lock_guard<std::mutex> lock(m_mutex);
    const bool pending = m_irqPending;
    m_irqPending = false;
    return pending;
}

void Spu2::dmaWrite(unsigned core, const uint8_t *data, uint32_t bytes)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    Core &c = m_cores[core & 1u];
    uint32_t address = (c.tsaWords * 2u) & kRamMask;
    if (spu2Trace())
        std::fprintf(stderr, "[TS:spu2] dma core=%u addr=%06x bytes=%x irqa=%06x/%06x attr=%04x/%04x\n", core, address,
                     bytes, m_cores[0].irqaWords * 2u, m_cores[1].irqaWords * 2u, m_cores[0].attrReg, m_cores[1].attrReg);
    checkIrq(address, bytes);
    for (uint32_t done = 0; done < bytes;)
    {
        const uint32_t chunk = std::min(bytes - done, kRamBytes - address);
        std::memcpy(m_ram + address, data + done, chunk);
        done += chunk;
        address = (address + chunk) & kRamMask;
    }
    c.tsaWords = (address / 2u) & 0xFFFFFu;
}

// SPU2 register map: per core (core 1 at +0x400) voice registers at
// 0x000 + 0x10 * voice, voice addresses at 0x1C0 + 0xC * voice, core
// registers from 0x180; volumes at 0x760 + 0x28 * core. Addresses are in
// halfwords.
void Spu2::writeRegister(uint32_t offset, uint16_t value)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    offset &= 0x7FEu;
    if (offset >= 0x760u && offset < 0x7B0u)
    {
        const unsigned c = offset >= 0x788u ? 1u : 0u;
        Core &core = m_cores[c];
        switch (offset - 0x760u - c * 0x28u)
        {
        case 0x0: core.mvolL.set(value); break;
        case 0x2: core.mvolR.set(value); break;
        case 0x4: core.evolL = value; break;
        case 0x6: core.evolR = value; break;
        case 0x8: core.avolL = value; break;
        case 0xA: core.avolR = value; break;
        case 0xC: core.bvolL = value; break;
        case 0xE: core.bvolR = value; break;
        default: break;
        }
        return;
    }
    if (offset >= 0x800u)
        return;
    const unsigned c = (offset >> 10) & 1u;
    Core &core = m_cores[c];
    const uint32_t r = offset & 0x3FEu;
    auto setLo = [value](uint32_t &mask) { mask = (mask & 0xFF0000u) | value; };
    auto setHi = [value](uint32_t &mask) { mask = (mask & 0x00FFFFu) | ((value & 0xFFu) << 16); };
    auto setAddrHi = [value](uint32_t &words) { words = (words & 0xFFFFu) | ((value & 0xFu) << 16); };
    auto setAddrLo = [value](uint32_t &words) { words = (words & 0xF0000u) | value; };
    if (r < 0x180u)
    {
        Voice &v = core.voices[r >> 4];
        switch (r & 0xEu)
        {
        case 0x0: v.volL.set(value); break;
        case 0x2: v.volR.set(value); break;
        case 0x4: v.pitch = value; break;
        case 0x6: v.adsr1 = value; break;
        case 0x8: v.adsr2 = value; break;
        case 0xA: v.env.level = value & 0x7FFF; break;
        default: break;
        }
        return;
    }
    if (r >= 0x1C0u && r < 0x1C0u + 24u * 0xCu)
    {
        Voice &v = core.voices[(r - 0x1C0u) / 0xCu];
        uint32_t words;
        switch ((r - 0x1C0u) % 0xCu)
        {
        case 0x0: words = v.ssa / 2u; setAddrHi(words); v.ssa = (words * 2u) & kRamMask & ~15u; break;
        case 0x2: words = v.ssa / 2u; setAddrLo(words); v.ssa = (words * 2u) & kRamMask & ~15u; break;
        case 0x4: words = v.lsa / 2u; setAddrHi(words); v.lsa = (words * 2u) & kRamMask & ~15u; v.customLoop = true; break;
        case 0x6: words = v.lsa / 2u; setAddrLo(words); v.lsa = (words * 2u) & kRamMask & ~15u; v.customLoop = true; break;
        case 0x8: words = v.nax / 2u; setAddrHi(words); v.nax = (words * 2u) & kRamMask; break;
        case 0xA: words = v.nax / 2u; setAddrLo(words); v.nax = (words * 2u) & kRamMask; break;
        default: break;
        }
        return;
    }
    switch (r)
    {
    case 0x180: setLo(core.pmon); break;
    case 0x182: setHi(core.pmon); break;
    case 0x184: setLo(core.non); break;
    case 0x186: setHi(core.non); break;
    case 0x188: setLo(core.vmixL); break;
    case 0x18A: setHi(core.vmixL); break;
    case 0x18C: setLo(core.vmixEL); break;
    case 0x18E: setHi(core.vmixEL); break;
    case 0x190: setLo(core.vmixR); break;
    case 0x192: setHi(core.vmixR); break;
    case 0x194: setLo(core.vmixER); break;
    case 0x196: setHi(core.vmixER); break;
    case 0x198: core.mmix = value; break;
    case 0x19A:
        core.attrReg = value;
        if ((value & 0x40u) == 0u)
            m_irqInfo &= static_cast<uint16_t>(~(4u << c));
        break;
    case 0x19C: setAddrHi(core.irqaWords); break;
    case 0x19E: setAddrLo(core.irqaWords); break;
    case 0x1A0:
    case 0x1A2:
    {
        const unsigned base = r == 0x1A0 ? 0u : 16u;
        for (unsigned i = 0; i < 16 && base + i < 24; ++i)
            if (value & (1u << i))
                keyOn(core, base + i);
        break;
    }
    case 0x1A4:
    case 0x1A6:
    {
        const unsigned base = r == 0x1A4 ? 0u : 16u;
        for (unsigned i = 0; i < 16 && base + i < 24; ++i)
            if ((value & (1u << i)) && core.voices[base + i].phase != Phase::Off)
                core.voices[base + i].phase = Phase::Release;
        break;
    }
    case 0x1A8: setAddrHi(core.tsaWords); break;
    case 0x1AA: setAddrLo(core.tsaWords); break;
    case 0x1AC: // PIO data port
    {
        const uint32_t address = (core.tsaWords * 2u) & kRamMask;
        std::memcpy(m_ram + address, &value, 2);
        checkIrq(address, 2u);
        core.tsaWords = (core.tsaWords + 1u) & 0xFFFFFu;
        break;
    }
    case 0x340: core.endx &= 0xFF0000u; break;
    case 0x342: core.endx &= 0x00FFFFu; break;
    default: break;
    }
}

bool Spu2::readRegister(uint32_t offset, uint16_t &value)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    offset &= 0x7FEu;
    if (offset == 0x7C2u) // IRQ info, cleared on read
    {
        value = m_irqInfo;
        m_irqInfo = 0;
        return true;
    }
    if (offset >= 0x760u)
        return false;
    const unsigned c = (offset >> 10) & 1u;
    const Core &core = m_cores[c];
    const uint32_t r = offset & 0x3FEu;
    if (r < 0x180u)
    {
        const Voice &v = core.voices[r >> 4];
        switch (r & 0xEu)
        {
        case 0xA: value = static_cast<uint16_t>(v.env.level); return true;
        case 0xC: value = static_cast<uint16_t>(v.volL.current); return true;
        case 0xE: value = static_cast<uint16_t>(v.volR.current); return true;
        default: return false;
        }
    }
    if (r >= 0x1C0u && r < 0x1C0u + 24u * 0xCu)
    {
        const Voice &v = core.voices[(r - 0x1C0u) / 0xCu];
        const uint32_t nax = (v.blockAddr + 2u + v.index / 2u) / 2u;
        switch ((r - 0x1C0u) % 0xCu)
        {
        case 0x8: value = static_cast<uint16_t>(nax >> 16); return true;
        case 0xA: value = static_cast<uint16_t>(nax); return true;
        default: return false;
        }
    }
    switch (r)
    {
    case 0x1A8: value = static_cast<uint16_t>(core.tsaWords >> 16); return true;
    case 0x1AA: value = static_cast<uint16_t>(core.tsaWords); return true;
    case 0x340: value = static_cast<uint16_t>(core.endx); return true;
    case 0x342: value = static_cast<uint16_t>(core.endx >> 16); return true;
    default: return false;
    }
}

uint32_t Spu2::getCoreAttr(uint32_t entry)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    const Core &core = m_cores[coreOf(entry)];
    return (core.attr >> ((entry >> 1) & 0x7u)) & 1u;
}
